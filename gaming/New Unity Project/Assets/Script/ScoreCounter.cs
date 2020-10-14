using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class ScoreCounter : MonoBehaviour
{
    public FileHandler File;
    public AvailablePrefabs ap;
   
    void Update()
    {
        
    }
    
    
    void OnTriggerEnter(Collider other)
    {
        if (ap != null)
        {
            
            string name = other.gameObject.name.Replace("(Clone)", "");
            
            int currentPoints = (int)File.load("points", "temp");
            
            if (ap.AllObjectValues.ContainsKey(name))
            {
                File.save("points", ap.AllObjectValues[name].points + currentPoints, "temp");
            }
            
        }
        else
        {
           
        }
    }
}


