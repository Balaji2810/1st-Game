using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowBall : MonoBehaviour
{
    public GameObject prefab;
    public Camera cam;
    public Vector2 force;
    
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray r = cam.ScreenPointToRay(Input.mousePosition);

            Vector3 dir = r.GetPoint(1) - r.GetPoint(0);

            // position of spanwed object could be 'GetPoint(0).. 1.. 2' half random choice ;)
            GameObject gameObject = Instantiate(prefab, r.GetPoint(2), Quaternion.LookRotation(dir));

            Material newMaterial = new Material(Shader.Find("Universal Render Pipeline/Lit"));
            newMaterial.SetColor("_EmissionColor", GameObject.Find("SideColor").GetComponent<SideColor>().getColor());
            newMaterial.EnableKeyword("_EMISSION");
            gameObject.GetComponent<MeshRenderer>().material = newMaterial;

           
            float radius = Random.Range(0.25f,0.61f);
            gameObject.GetComponent<Rigidbody>().mass = gameObject.GetComponent<Rigidbody>().mass * (radius / gameObject.transform.localScale.x);
            gameObject.transform.localScale = Vector3.one* radius;
                
            

            gameObject.GetComponent<Rigidbody>().velocity = gameObject.transform.forward * Random.Range(force.x,force.y);

            Destroy(gameObject, 5);
        }
    }

    
}
