
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TimeManager : MonoBehaviour
{
    public float slowDownFactor = 0.05f;
    public float slowDownLength = 2f;
    public float TimeConstant = 1f;
    
    public void DoSlowMotion()
    {
        Time.timeScale = slowDownFactor;
        StartCoroutine(delay(Time.fixedDeltaTime));
        Time.fixedDeltaTime = Time.timeScale * TimeConstant;
    }

    IEnumerator delay(float time)
    {
        
        yield return new WaitForSeconds(slowDownLength);
        Time.fixedDeltaTime = time;
        Time.timeScale = 1;
       
    }
}
