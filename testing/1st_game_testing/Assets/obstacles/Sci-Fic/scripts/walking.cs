﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class walking : MonoBehaviour
{
    
    public float speed = 1f;
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
            transform.Rotate(new Vector3(0,180,0));
        }

        if (transform.position.x >= 2)
        {
            goLeft = false;
            transform.Rotate(new Vector3(0, 180, 0));
        }
        if (goLeft)
        {
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(2, 0.5f, 0), speed * Time.deltaTime);
        }
        else
        {
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(-2, 0.5f, 0), speed * Time.deltaTime);
        }

    }

    void OnCollisionEnter(Collision collision)
    {
        
    }
}
