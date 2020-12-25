using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElectricShock : MonoBehaviour
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
        
        if(other.gameObject.layer==14) //"Pupet" layer
        {
            PlayerStatus status = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>();
            if (!status.AnimationDeath)
            {
                status.ElectricShock();
            }
        }
      
    }
}
