using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WoodenDummySpin : MonoBehaviour
{
    public Vector3 Angle;
    public float speed = 10;
    public Vector3 StartingAngle = new Vector3(1, 0, 0);

    Vector3 currentEulerAngles;
    // Start is called before the first frame update
    void Start()
    {
        
        transform.Rotate(Random.Range(0, 360) * StartingAngle);
    }

    // Update is called once per frame
    void Update()
    {
        currentEulerAngles += Angle * Time.deltaTime * speed;
        transform.eulerAngles = currentEulerAngles;
    }
}
