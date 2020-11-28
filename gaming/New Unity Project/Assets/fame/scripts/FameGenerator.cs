using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FameGenerator : MonoBehaviour
{
    public GameObject go;
    public float time, distance = 250;
    
    IEnumerator createFame()
    {
        yield return new WaitForSeconds(time);

        try
        {
            GameObject fame = Instantiate(go);
            transform.parent = fame.transform;
            float d = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>().MovedDistance;
            fame.transform.position = new Vector3(fame.transform.position.x, fame.transform.position.y,d+distance);
        }
        catch
        {

        }
        StartCoroutine(createFame());
    }

    public void startFun()
    {
        StartCoroutine(createFame());
    }
}
