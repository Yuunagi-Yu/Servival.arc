using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCamera : MonoBehaviour {
	public GameObject Target;
	public Vector3 targetRelative;
	private Vector3 newPosition;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void LateUpdate () {
		//プレイヤーを追尾
		if (Target == null) {
			return;
		} else {
			transform.position = Target.transform.position + targetRelative;
		}
	}
}
