using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mapbox.Unity.Utilities;
using Mapbox.Utils;

public class ARMessageProvider : MonoBehaviour {
	
	private static ARMessageProvider _instance;
	public static ARMessageProvider Instance { get { return _instance; } } 

	[HideInInspector]
	public List<GameObject> currentMessages = new List<GameObject>();
	public Mapbox.Unity.Location.DeviceLocationProvider deviceLocation;

	void Awake(){
		_instance = this;
	}

	public void RemoveCurrentMessages(){
		foreach (GameObject messageObject in currentMessages) {
			Destroy (messageObject);
		}
		currentMessages.Clear ();
	}

	public void LoadARMessages(List<GameObject> messageObjectList){
		StartCoroutine (LoadARMessagesRoutine (messageObjectList));
	}

	IEnumerator LoadARMessagesRoutine(List<GameObject> messageObjectList){

		RemoveCurrentMessages ();

		yield return new WaitForSeconds(2f);

		Vector2d mapRefPoint = new Vector2d (Camera.main.transform.position.x, Camera.main.transform.position.z);

		Vector2d currLatLong = deviceLocation.Location;

		Vector3 CameraPosition = Conversions.GeoToWorldPosition(currLatLong,
			mapRefPoint).ToVector3xz();


		foreach (GameObject messageObject in messageObjectList) {

			Message thisMessage = messageObject.GetComponent<Message> ();

			Vector3 _targetPosition = Conversions.GeoToWorldPosition(thisMessage.latitude,thisMessage.longitude,
				mapRefPoint).ToVector3xz();

			//subtract camera position
			_targetPosition -= CameraPosition;

			messageObject.transform.position = _targetPosition;
			messageObject.GetComponent<Message> ().SetText (thisMessage.text);
			//add to list so we can update positions later
			currentMessages.Add(messageObject);
		}
	}
	public void UpdateARMessageLocations(){

		if (currentMessages.Count > 0) {

			Debug.Log ("~~~~~~!!!!!!!GOT UPDATE BITCHES!!!");
			//here use camera position as reference point in case arkit tracking moved the camera within the scene
			Vector2d mapRefPoint = new Vector2d (Camera.main.transform.position.x, Camera.main.transform.position.z);

			Vector2d currLatLong = deviceLocation.Location;

			Vector3 CameraPosition = Conversions.GeoToWorldPosition (currLatLong,
				mapRefPoint).ToVector3xz ();

			foreach (GameObject messageObject in currentMessages) {

				Message message = messageObject.GetComponent<Message> ();

				Vector3 _targetPosition = Conversions.GeoToWorldPosition (message.latitude, message.longitude,
					mapRefPoint).ToVector3xz ();

				//subtract camera position
				_targetPosition -= CameraPosition;

				messageObject.transform.position = _targetPosition;
			}
		}
	}

//	void CreateFakeMessages(){
//		//message 1
//		Message message1 = new Message{};
//		message1.latitude = 40.4635f;
//		message1.longitude = -79.9329f;
//		message1.text = "Hello";
//		messagesList.Add (message1);
//		//message 2
//		Message message2 = new Message{};
//		message2.latitude = 40.4641f;
//		message2.longitude = -79.9326f;
//		message2.text = "World";
//		messagesList.Add (message2);
//	}
}

