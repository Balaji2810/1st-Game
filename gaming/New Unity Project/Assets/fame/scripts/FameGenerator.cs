using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FameGenerator : MonoBehaviour
{
    public GameObject go;
    public float time, distance = 250,currentPos=0;
    
    IEnumerator createFame()
    {
        yield return new WaitForSeconds(time);

        try
        {
            float d = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>().MovedDistance + distance;
            if(d > (currentPos+20))
            {
                currentPos = d;
                //GameObject fame = Instantiate(go);
                GameObject fame = ObjectPooling.instance.SpawnFormPool("fames");
                fame.transform.parent = gameObject.transform;
                fame.transform.position = new Vector3(fame.transform.position.x, fame.transform.position.y, d + distance);
            }
            
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
