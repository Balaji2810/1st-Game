using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Continue : MonoBehaviour
{
    public GameObject score;
    public float delay = 6;
    
    void Update()
    {
        if(delay<0)
        {
            score.SetActive(true);
            gameObject.SetActive(false);
        }
        delay -= Time.deltaTime;
    }
}
