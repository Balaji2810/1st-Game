using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.ProBuilder;

public class environment_generator : MonoBehaviour
{

    public GameObject sideEnv;
    PlayerStatus ps;
    public int bufferLength;
    public float length;

    float currentPos;
    int count = 1;

    // Start is called before the first frame update
    void Start()
    {
        currentPos = 0;
    }

    // Update is called once per frame
    void Update()
    {

        try
        {
            ps = GameObject.Find(PlayerPrefs.GetString("name", "player") + " Root").GetComponentInChildren<PlayerStatus>();
            if (ps.MovedDistance > currentPos - (bufferLength * length))
            {
                Spawn();
            }
        }
        catch
        {
            
        }
        
    }

    void Spawn()
    {
        GameObject go = Instantiate(sideEnv);
        go.transform.parent = transform;
        go.transform.localPosition = new Vector3(go.transform.localPosition.x, go.transform.localPosition.y, currentPos);
        go.name = go.name.Replace("Clone", (count++).ToString());
        currentPos += length;
        //CombineMeshes(go);
    }

    public void CombineMeshes(GameObject obj)
    {
        //Temporarily set position to zero to make matrix math easier
        Vector3 position = obj.transform.position;
        obj.transform.position = Vector3.zero;

        //Get all mesh filters and combine
        MeshFilter[] meshFilters = obj.GetComponentsInChildren<MeshFilter>();
        CombineInstance[] combine = new CombineInstance[meshFilters.Length];
        int i = 1;
        while (i < meshFilters.Length)
        {
            combine[i].mesh = meshFilters[i].sharedMesh;
            combine[i].transform = meshFilters[i].transform.localToWorldMatrix;
            Destroy(meshFilters[i].gameObject);
            i++;
        }

        obj.transform.GetComponent<MeshFilter>().mesh = new Mesh();
        obj.transform.GetComponent<MeshFilter>().mesh.CombineMeshes(combine, true, true);
        obj.transform.gameObject.SetActive(true);

        //Return to original position
        obj.transform.position = position;

        //Add collider to mesh (if needed)
        //obj.AddComponent<MeshCollider>();
    }
}
