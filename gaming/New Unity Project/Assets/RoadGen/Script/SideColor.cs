using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SideColor : MonoBehaviour
{
    public Material material;
    [ColorUsage(true, true)]
    public List<Color> color;
    public int Option = -1;
    // Start is called before the first frame update
    void Start()
    {
       
        //material.color = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
        material.SetColor("_EmissionColor", color[Random.Range(0,color.Count)]);
    }

    public Color getColor()
    {
        if(Option !=-1)
        {
            return color[Option];
        }
        return color[Random.Range(0, color.Count)];
    }
    
}
