using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColorofObject : MonoBehaviour
{
    // Start is called before the first frame update
    
    void Start()
    {
        Renderer render = GetComponent<Renderer>();

        render.material = new Material(Shader.Find("Standard"));
        render.material.color = Random.ColorHSV(0f, 0.75f, 0.5f, 0.75f, 0.75f, 1f);
        gameObject.GetComponent<Renderer>().material = render.material;
        gameObject.GetComponent<Renderer>().material.SetFloat("_Glossiness", 1f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
