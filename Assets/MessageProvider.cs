using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// This class loads the message prefabs for both the ARScene and the MapScene
/// </summary>
using Mapbox.Unity.Utilities;
using Mapbox.Unity.Map;
using Mapbox.Utils;


namespace Mapbox.Examples {
	
	public class MessageProvider : MonoBehaviour {

		[SerializeField]
		private AbstractMap _map;

		[HideInInspector]
		public List<Message> messagesList = new List<Message>();
		[HideInInspector]
		public Quaternion cameraRotation;
		[HideInInspector]
		public List<MessageBehavior> messagesRefs = new List<MessageBehavior>();

		public GameObject mapPrefab;
		public GameObject messagePrefabAR;

		public Mapbox.Unity.Location.DeviceLocationProvider deviceLocation;
		public Mapbox.Unity.Location.EditorLocationProvider editorLocation;

		private static MessageProvider _instance;
		public static MessageProvider Instance
		{
			get
			{
				return _instance;
			}

			private set
			{
				_instance = value;
			}
		}


		private void Awake() {
			if (Instance != null) {
				DestroyImmediate (gameObject);
				return;
			}
			Instance = this;
			DontDestroyOnLoad (gameObject);
		}

		void Start(){
			CreateFakeMessages();
			//load map messages here since this is the first scene to load
			LoadMapMessages();
		}

		public void LoadMapMessages(){
			StartCoroutine(LoadMapMessagesRoutine());
		}

		IEnumerator LoadMapMessagesRoutine(){
			//wait for end of frame here so _map has time to initialize for we use it
			yield return new WaitForSeconds(2f);
			foreach (Message message in messagesList) {
				Vector3 _targetPosition = Conversions.GeoToWorldPosition(message.latitude,message.longitude,
					_map.CenterMercator,
					_map.WorldRelativeScale).ToVector3xz();

				GameObject POI = Instantiate (mapPrefab);
				POI.transform.position = _targetPosition;
			}
		}

		public void LoadARMessages(){
			StartCoroutine (LoadARMessagesRoutine ());
		}

		public void UpdateARMessageLocations(){

			if (messagesRefs.Count > 0) {

				Debug.Log ("~~~~~~!!!!!!!GOT UPDATE BITCHES!!!");
				//here use camera position as reference point in case arkit tracking moved the camera within the scene (hopefully x and z are in the right order?)
				Vector2d mapRefPoint = new Vector2d (Camera.main.transform.position.x, Camera.main.transform.position.z);

				Vector2d currLatLong = editorLocation.Location;

				Vector3 CameraPosition = Conversions.GeoToWorldPosition (currLatLong,
					                        mapRefPoint).ToVector3xz ();

				foreach (MessageBehavior messageBehavior in messagesRefs) {

					Vector3 _targetPosition = Conversions.GeoToWorldPosition (messageBehavior.latitude, messageBehavior.longitude,
						                         mapRefPoint).ToVector3xz ();
					GameObject MessageBubble = messageBehavior.gameObject;

					//subtract camera position
					_targetPosition -= CameraPosition;

					MessageBubble.transform.position = _targetPosition;
				}
			}
		}

		IEnumerator LoadARMessagesRoutine(){

			yield return new WaitForSeconds(2f);

			Vector2d mapRefPoint = new Vector2d (Camera.main.transform.position.x, Camera.main.transform.position.z);

			#if !UNITY_EDITOR
			Vector2d currLatLong = deviceLocation.Location;
			#else 
			Vector2d currLatLong = editorLocation.Location;
			#endif

			Vector3 CameraPosition = Conversions.GeoToWorldPosition(currLatLong,
				mapRefPoint).ToVector3xz();


			foreach (Message message in messagesList) {
				Vector3 _targetPosition = Conversions.GeoToWorldPosition(message.latitude,message.longitude,
					mapRefPoint).ToVector3xz();
				GameObject MessageBubble = Instantiate (messagePrefabAR);

				//subtract camera position
				_targetPosition -= CameraPosition;

				MessageBubble.transform.position = _targetPosition;
				MessageBubble.GetComponent<MessageBehavior> ().Initialize (message.text,message.latitude,message.longitude);
				//add to list so we can update positions later
				messagesRefs.Add (MessageBubble.GetComponent<MessageBehavior> ());
				Debug.Log ("~~~~~~~~~~~World Position: " + _targetPosition);
				print ("~~~~~~~~~~ ROTATION CAMERA: " + GameObject.Find ("CameraParent").transform.eulerAngles);
			}
		}

		void CreateFakeMessages(){
			//message 1
			Message message1 = new Message{};
			message1.latitude = 40.4635f;
			message1.longitude = -79.9329f;
			message1.text = "Hello";
			messagesList.Add (message1);
			//message 2
			Message message2 = new Message{};
			message2.latitude = 40.4641f;
			message2.longitude = -79.9326f;
			message2.text = "World";
			messagesList.Add (message2);
		}
	}
}
