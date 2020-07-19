using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class walking : MonoBehaviour
{
    public float baseHeight = 0.5f;
    public float speed = 1f;
    public bool DoRotateAtEnd = true;
    bool goLeft = true;
    
    // Start is called before the first frame update
    void Start()
    {
        transform.position = new Vector3(Random.Range(-1.9f,1.9f), transform.position.y, transform.position.z);
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position.x <= -2)
        {
            goLeft = true;
            if(DoRotateAtEnd)
            {
                transform.Rotate(new Vector3(0, 180, 0));
            }
            
        }

        if (transform.position.x >= 2)
        {
            goLeft = false;
            if (DoRotateAtEnd)
            {
                transform.Rotate(new Vector3(0, 180, 0));
            }
        }
        if (goLeft)
        {
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(2, baseHeight, 0), speed * Time.deltaTime);
        }
        else
        {
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(-2, baseHeight, 0), speed * Time.deltaTime);
        }

    }

    void OnCollisionEnter(Collision collision)
    {
        
    }
}
