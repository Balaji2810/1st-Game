
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class randomJump : MonoBehaviour
{

    public float Force=50;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(jump(Random.Range(2f, 4f)));
    }

    void OnEnable()
    {
        StartCoroutine(jump(Random.Range(2f, 4f)));
    }

    

    IEnumerator jump(float time)
    {
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0,1,0)*Force;
        StartCoroutine(jump(Random.Range(2f, 4f)));
    }

    
}
