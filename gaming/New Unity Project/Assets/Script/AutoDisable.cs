using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoDisable : MonoBehaviour
{
    // Start is called before the first frame update
    void OnEnable()
    {
        Invoke("Disable", delay);
    }

    public float delay = 3;

    public void Disable()
    {
        gameObject.SetActive(false);
    }
}
