using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReleaseConstrains : MonoBehaviour
{
    private void OnCollisionEnter(Collision collision)
    {
        Rigidbody rb = GetComponent<Rigidbody>();

        rb.constraints = 0;
    }
}
