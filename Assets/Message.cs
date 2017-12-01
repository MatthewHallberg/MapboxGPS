using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Message : MonoBehaviour {
	[HideInInspector]
	public double latitude;
	[HideInInspector]
	public double longitude;
	[HideInInspector]
	public string text;

	public TextMesh messageText;

	public void SetText(string text){
		messageText.text = text;
	}
	
	// Update is called once per frame
	void Update () {
		transform.LookAt (Camera.main.transform);
	}
}
