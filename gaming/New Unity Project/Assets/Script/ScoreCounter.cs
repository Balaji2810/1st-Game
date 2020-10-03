using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreCounter : MonoBehaviour
{
    public FileHandler File;
    public AvailablePrefabs ap;
   
    void Update()
    {
        
    }
    
    
    void OnTriggerExit(Collider other)
    {
        if (ap != null)
        {
            string name = other.gameObject.name.Replace("(Clone)", "");
            
            int currentPoints = (int)File.load("points", "temp");
            File.save("points", ap.AllObjectValues[name].points + currentPoints,"temp"); 
        }
        else
        {
           
        }
    }
}


