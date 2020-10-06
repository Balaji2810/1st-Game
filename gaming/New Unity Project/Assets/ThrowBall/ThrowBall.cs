using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowBall : MonoBehaviour
{
    public GameObject prefab;
    public Camera cam;
    public float force;
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray r = cam.ScreenPointToRay(Input.mousePosition);

            Vector3 dir = r.GetPoint(1) - r.GetPoint(0);

            // position of spanwed object could be 'GetPoint(0).. 1.. 2' half random choice ;)
            GameObject bullet = Instantiate(prefab, r.GetPoint(2), Quaternion.LookRotation(dir));

            bullet.GetComponent<Rigidbody>().velocity = bullet.transform.forward * force;

            Destroy(bullet, 5);
        }
    }

    
}
