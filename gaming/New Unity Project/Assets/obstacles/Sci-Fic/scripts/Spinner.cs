using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spinner : MonoBehaviour
{
    // Start is called before the first frame update
    public Vector3 Angle;
    public float speed = 10;
    public Vector3 StartingAngle = new Vector3(1, 0, 0);
    
    private int ChangeInSpeed;
    private int SpinAngle;

    Vector3 force; 
    void OnEnable()
    {
        //transform.Rotate(Random.Range(0,360)* StartingAngle);
        
        if (Random.Range(0, 2) == 1)
        {
            SpinAngle = 1;
        }
        else
        {
            SpinAngle = -1;
        }

        ChangeInSpeed = Random.Range(4, 10);
        
        gameObject.GetComponent<Rigidbody>().centerOfMass = Vector3.zero;
        gameObject.GetComponent<Rigidbody>().angularVelocity = force = (SpinAngle * Angle * (ChangeInSpeed + speed));

        StartCoroutine(spinForce());
    }


   IEnumerator spinForce()
    {
        yield return new WaitForSecondsRealtime(0.5f);
        gameObject.GetComponent<Rigidbody>().angularVelocity = force;
        StartCoroutine(spinForce());
    }
}
