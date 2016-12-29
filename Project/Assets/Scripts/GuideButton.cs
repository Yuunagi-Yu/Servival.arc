using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GuideButton : MonoBehaviour {
	public GameObject guide;
	public bool on_off;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnClick(){
		if (on_off) {
			guide.SetActive (true);
		} else {
			guide.SetActive (false);
		}
	}
}
