using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class walking : MonoBehaviour
{


    void start()
    {
        StartCoroutine(delay(Random.Range(0.001f, 1.999f)));

    }

    IEnumerator delay(float time)
    {
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<Animation>().Play();
    }

}
