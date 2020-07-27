using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MentalCube : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(delay(Random.Range(0.1f,5.9f)));
        
    }

    IEnumerator delay(float time)
    {
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<Animation>().Play();
    }
}
