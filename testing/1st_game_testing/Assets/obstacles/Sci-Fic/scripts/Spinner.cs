using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spinner : MonoBehaviour
{
    // Start is called before the first frame update
    public Vector3 Angle;
    public float speed = 10;
    private int ChangeInSpeed;
    private int SpinAngle;
    void Start()
    {
        transform.Rotate(Random.Range(0,360),0,0);
        if (Random.Range(0, 2) == 1)
        {
            SpinAngle = 1;
        }
        else
        {
            SpinAngle = -1;
        }
        ChangeInSpeed = Random.Range(-50, 150);
    }

    // Update is called once per frame
    void Update()
    {

        gameObject.GetComponent<Rigidbody>().angularVelocity = SpinAngle *(Time.deltaTime*Angle*(ChangeInSpeed+speed));
    }
}
