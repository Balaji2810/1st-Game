using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MentalCube : MonoBehaviour
{
    public bool changeColor = true;
    public bool doAnimation = true;
    public Material material;
    [ColorUsage(true, true)]
    public List<Color> color;

    Material newMaterial;

    // Start is called before the first frame update
    [System.Obsolete]
    void Start()
    {
        if(changeColor)
        {
            newMaterial = new Material(Shader.Find("Standard"));
            material.SetColor("_EmissionColor", color[Random.Range(0, color.Count)]);
            newMaterial.CopyPropertiesFromMaterial(material);
            gameObject.GetComponent<MeshRenderer>().material = newMaterial;
        }
        
        if(doAnimation)
        {
            StartCoroutine(delay(Random.Range(0.1f, 5.9f)));
        }
       

        
        
    }

    IEnumerator delay(float time)
    {
        yield return new WaitForSeconds(time);
        gameObject.GetComponent<Animation>().Play();
    }
}
