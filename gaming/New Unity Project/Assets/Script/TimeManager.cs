
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TimeManager : MonoBehaviour
{
    public bool enable = false;
    public float slowDownFactor = 0.05f;
    public float slowDownLength = 2f;
    public float TimeConstant = 1f;

    public void DoSlowMotion()
    {
        if (enable)
        {
            Time.timeScale = slowDownFactor;
            StartCoroutine(delay(Time.fixedDeltaTime));
            Time.fixedDeltaTime = Time.timeScale * TimeConstant;
            //Time.fixedDeltaTime = Time.timeScale * Time.fixedDeltaTime;
        }

    }

    IEnumerator delay(float time)
    {

        yield return new WaitForSeconds(slowDownLength);
        //Time.fixedDeltaTime = time;
        Time.timeScale = 1;
        //Time.fixedDeltaTime = Time.timeScale * Time.fixedDeltaTime;

    }

    public void pause(bool state)
    {
        if(state)
        {
            Time.timeScale = 0;
        }
        else
        {

            Time.timeScale = 1;
        }
    }
}
