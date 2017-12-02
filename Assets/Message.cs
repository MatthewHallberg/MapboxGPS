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
		string newText = text.Replace (" ", "\n");
		messageText.text = newText;
	}

	void Start(){
		messageText.GetComponent<Canvas> ().worldCamera = Camera.main;
	}
	
	// Update is called once per frame
	void Update () {
		transform.LookAt (Camera.main.transform);
	}
}
