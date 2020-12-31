using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoDisable : MonoBehaviour
{
    // Start is called before the first frame update
    void OnEnable()
    {
        // Invoke("Disable", delay);
        timeout = delay;
    }

    public float delay = 3;
    float timeout = 0;
    private void Update()
    {
        timeout -= Time.deltaTime;
        if(timeout<0)
        {
            Disable();
        }
    }
    public void Disable()
    {
        gameObject.SetActive(false);
    }
}
