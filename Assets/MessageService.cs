using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameSparks.Core;

public class MessageService : MonoBehaviour {

	private static MessageService _instance;
	public static MessageService Instance { get { return _instance; } } 

	public GameObject messagePrefabAR;

	void Awake(){
		_instance = this;
	}

	// Use this for initialization
	void Start () {
		StartCoroutine (DelayTestMessage ());
	}

	IEnumerator DelayTestMessage(){

		yield return new WaitForSeconds (2f);
		LoadAllMessages();
	}

	public void RemoveAllMessages(){
		new GameSparks.Api.Requests.LogEventRequest ()
			.SetEventKey ("REMOVE_MESSAGES")
			.Send ((response) => {
			if (!response.HasErrors) {
				Debug.Log ("Message Saved To GameSparks...");
			} else {
				Debug.Log ("Error Saving Message Data...");
			}
		});
	}

	public void LoadAllMessages(){

		List<GameObject> messageObjectList = new List<GameObject> ();
		
		new GameSparks.Api.Requests.LogEventRequest().SetEventKey("LOAD_MESSAGE").Send((response) => {
			if (!response.HasErrors) {
				Debug.Log("Received Player Data From GameSparks...");
				List<GSData> locations = response.ScriptData.GetGSDataList ("all_Messages");
				for (var e = locations.GetEnumerator (); e.MoveNext ();) {
					
					GameObject MessageBubble = Instantiate (messagePrefabAR);
					Message message = MessageBubble.GetComponent<Message>();

					message.latitude = double.Parse(e.Current.GetString ("messLat"));
					message.longitude = double.Parse(e.Current.GetString ("messLon"));
					message.text = e.Current.GetString ("messText");
					messageObjectList.Add(MessageBubble);
				}
			} else {
				Debug.Log("Error Loading Message Data...");
			}
		});

		ARMessageProvider.Instance.LoadARMessages (messageObjectList);
	}

	public void SaveMessage(double lat, double lon, string text){
		new GameSparks.Api.Requests.LogEventRequest ()

			.SetEventKey ("SAVE_GEO_MESSAGE")
			.SetEventAttribute ("LAT", lat.ToString())
			.SetEventAttribute ("LON", lon.ToString())
			.SetEventAttribute ("TEXT", text)
			.Send ((response) => {
				
			if (!response.HasErrors) {
				Debug.Log ("Message Saved To GameSparks...");
			} else {
				Debug.Log ("Error Saving Message Data...");
			}
		});
	}
}
