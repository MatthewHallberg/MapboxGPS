using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MessageBehavior : MonoBehaviour {
	
	public TextMesh messageText;
	[HideInInspector]
	public double latitude;
	[HideInInspector]
	public double longitude;

	public void Initialize(string text, double lat, double lon){
		messageText.text = text;
		latitude = lat;
		longitude = lon;
	}
	
	// Update is called once per frame
	void Update () {
		transform.LookAt (Camera.main.transform);
	}
}
