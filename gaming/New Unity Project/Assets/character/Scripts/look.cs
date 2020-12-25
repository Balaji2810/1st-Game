using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class look : MonoBehaviour
{
    // Start is called before the first frame update

    public Transform player;

    void Start()
    {
        
    }

    
    void Update()
    {
        transform.LookAt(player);
    }
}
