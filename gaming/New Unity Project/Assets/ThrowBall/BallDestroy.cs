using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallDestroy : MonoBehaviour
{
    public float DestoryAfter = 0.5f;
    private void OnCollisionEnter(Collision collision)
    {

        Invoke("disable",DestoryAfter);
    }

    void disable()
    {
        gameObject.SetActive(false);
    }
}
