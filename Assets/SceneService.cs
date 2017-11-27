using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Mapbox.Examples;

public class SceneService : MonoBehaviour {

	private static SceneService instance;
	public static SceneService Instance
	{
		get { return instance; }
	}

	void Awake () {
		if (instance == null)
			instance = this;
		else if (instance != this){
			Destroy(gameObject);
			return;
		}
		DontDestroyOnLoad(transform.gameObject);
	}

	public void SceneButtonDown(){
		StartCoroutine (LoadSceneRoutine ());
	}

	IEnumerator LoadSceneRoutine(){
		if (SceneManager.GetActiveScene ().name == "LocationProvider") {
			//load AR Scene
			AsyncOperation loadScene = SceneManager.LoadSceneAsync(1);
			yield return loadScene;
			MessageProvider.Instance.LoadARMessages ();
		} else {
			//load Mapbox scene
			AsyncOperation loadScene = SceneManager.LoadSceneAsync(0);
			yield return loadScene;
			MessageProvider.Instance.LoadMapMessages ();
		}
	}
}
