using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowBall : MonoBehaviour
{
    public GameObject prefab;
    public Camera cam;
    public Vector2 force;
    public GameObject main;

    GameObject go;


    void Update()
    {
        if (Input.GetMouseButtonDown(0)&&main.activeSelf)
        {
            Ray r = cam.ScreenPointToRay(Input.mousePosition);

            Vector3 dir = r.GetPoint(1) - r.GetPoint(0);

            // position of spanwed object could be 'GetPoint(0).. 1.. 2' half random choice ;)
            //go = Instantiate(prefab);
            go = ObjectPooling.instance.SpawnFormPool("balls");

            go.transform.position = r.GetPoint(2);
            go.transform.rotation = Quaternion.LookRotation(dir);

            Material newMaterial = new Material(Shader.Find("Universal Render Pipeline/Lit"));
            newMaterial.SetColor("_EmissionColor", GameObject.Find("SideColor").GetComponent<SideColor>().getColor());
            newMaterial.EnableKeyword("_EMISSION");
            go.GetComponent<MeshRenderer>().material = newMaterial;

           
            float radius = Random.Range(0.25f,0.61f);
            go.GetComponent<Rigidbody>().mass = go.GetComponent<Rigidbody>().mass * (radius / go.transform.localScale.x);
            go.transform.localScale = Vector3.one* radius;
            go.transform.parent = this.gameObject.transform;


            go.GetComponent<Rigidbody>().velocity = go.transform.forward * Random.Range(force.x,force.y);

            StartCoroutine(disable(go));
        }
    }

    IEnumerator disable(GameObject go)
    {
        yield return new WaitForSeconds(5);
        go.SetActive(false);
        //Destroy(go);
    }
}
