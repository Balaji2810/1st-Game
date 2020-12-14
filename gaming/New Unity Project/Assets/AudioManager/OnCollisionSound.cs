using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnCollisionSound : MonoBehaviour
{
    public List<AudioClip> audios;
    bool wait = true;
    private void Awake()
    {
        Invoke("Wait", 1);   
    }
    void Wait()
    { wait = false; }
    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.layer==0||wait)
        {
            return;
        }
        int t = Random.Range(0, audios.Count);
        
        var temp = gameObject.AddComponent<AudioSource>();
        temp.volume = 0.25f;
        temp.spatialBlend = 1;
        temp.clip = audios[t];
        temp.Play();
        Destroy(temp, 2);
    }
}
