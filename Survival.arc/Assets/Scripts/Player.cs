using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {
	public float speed;
	public GameObject laser;
	private Vector3 moveDirection = Vector3.zero;
	private Vector3 targetPoint = Vector3.zero;
	private bool shot = true;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical")).normalized;
		if (moveDirection.magnitude > 0.1f) {
			transform.position += moveDirection * Time.deltaTime * speed;
		}
		if (shot) {
			if (Input.GetMouseButtonDown (0) || Input.GetMouseButton(0)) {
				RaycastHit hit;
				Ray mouseRay = Camera.main.ScreenPointToRay (Input.mousePosition);
				if (Physics.Raycast (mouseRay, out hit)) {
					if (hit.transform.tag == "Field") {
						targetPoint = new Vector3 (hit.point.x, transform.position.y, hit.point.z);
						Instantiate (laser, transform.position, Quaternion.LookRotation (targetPoint - transform.position));
						Instantiate (laser, transform.position, 
							Quaternion.LookRotation (targetPoint - transform.position) * Quaternion.Euler(0, 15, 0));
						Instantiate (laser, transform.position, 
							Quaternion.LookRotation (targetPoint - transform.position) * Quaternion.Euler(0, -15, 0));
						shot = false;
						StartCoroutine (shotWait (0.2f));
					}
				}
			}
		}
	}

	IEnumerator shotWait(float waitTime){
		yield return new WaitForSeconds (waitTime);
		shot = true;
	}
}
