using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser : MonoBehaviour {
	public float speed;

	// Use this for initialization
	void Start () {
		Destroy (this.gameObject, 3.0f);
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate (Vector3.forward * Time.deltaTime * speed, Space.Self);
	}
}
