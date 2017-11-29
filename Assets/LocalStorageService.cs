using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LocalStorageService : MonoBehaviour {

	private static LocalStorageService _instance;
	public static LocalStorageService Instance
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

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
