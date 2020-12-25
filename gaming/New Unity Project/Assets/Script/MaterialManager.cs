using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MaterialManager : MonoBehaviour
{
    public List<Material> materials;
    float delay = 1;
    public GameObject tapToContinue;
    void OnEnable()
    {
        foreach(Material material in materials)
        {
            material.SetFloat("Disolve",1);
        }
        Invoke("Close",8);
        Invoke("TapToContinue", 2.5f);
    }

    
    void Update()
    {
        foreach (Material material in materials)
        {
            material.SetFloat("Disolve", Mathf.Lerp(material.GetFloat("Disolve"), 0,Time.deltaTime/3));
        }
        
    }

    void TapToContinue()
    {
        tapToContinue.SetActive(true);
    }
    void Close()
    {
        foreach (Material material in materials)
        {
            material.SetFloat("Disolve", 0);
        }
        gameObject.SetActive(false);
    }
}
