using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElectricShock : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        
       PlayerStatus status = GameObject.Find("player Root").GetComponentInChildren<PlayerStatus>();
        if(!status.AnimationDeath)
        {
            status.ElectricShock();
        }
    }
}
