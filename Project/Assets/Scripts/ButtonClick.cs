using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonClick : MonoBehaviour {
	public string scene_name;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnClick(){
		StartCoroutine (LoadScene ());
	}

	IEnumerator LoadScene(){
		yield return new WaitForSeconds (1.0f);

		AsyncOperation async = SceneManager.LoadSceneAsync (scene_name);
		async.allowSceneActivation = false;

		while (async.progress < 0.9f) {
			yield return new WaitForEndOfFrame ();
		}

		async.allowSceneActivation = true;
	}
}
