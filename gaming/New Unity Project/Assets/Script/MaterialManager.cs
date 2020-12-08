using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MaterialManager : MonoBehaviour
{
    public List<Material> materials;
    float delay = 1;
    void OnEnable()
    {
        foreach(Material material in materials)
        {
            material.SetFloat("Disolve",1);
        }
        Invoke("Close",8);
    }

    // Update is called once per frame
    void Update()
    {
        foreach (Material material in materials)
        {
            material.SetFloat("Disolve", Mathf.Lerp(material.GetFloat("Disolve"), 0,Time.deltaTime/3));
        }
        
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
