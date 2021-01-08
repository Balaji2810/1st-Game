using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spinner : MonoBehaviour
{
    // Start is called before the first frame update
    public Vector3 Angle;
    public Vector2 Speed = new Vector2(7f, 11f);
    public Vector3 StartingAngle = new Vector3(1, 0, 0);

    private float ChangeInSpeed;
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

        ChangeInSpeed = Random.Range(Speed.x, Speed.y);


        gameObject.GetComponent<Rigidbody>().centerOfMass = Vector3.zero;
        gameObject.GetComponent<Rigidbody>().angularVelocity = force = (SpinAngle * Angle * ChangeInSpeed);
        //sspin();


    }


    private void OnCollisionEnter(Collision collision)
    {
        // gameObject.GetComponent<Rigidbody>().angularVelocity = force;

        spin();

    }

    void spin()
    {
        //Vector3 v = GetComponent<Rigidbody>().angularVelocity;
        //v = v.normalized;
        //v *= ChangeInSpeed;
        //GetComponent<Rigidbody>().angularVelocity = v;

        gameObject.GetComponent<Rigidbody>().angularVelocity = force;
    }



    private void OnCollisionExit(Collision collision)
    {
        spin();
        Invoke("spin", 0.01f);
        Invoke("spin", 0.05f);
    }

}
