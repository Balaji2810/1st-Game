using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerCube : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == 14) // layer 14 puppet
        {
            Destroy(gameObject);
        }
    }
}
