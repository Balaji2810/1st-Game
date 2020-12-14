using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioListenerConfig : MonoBehaviour
{
    AudioListener al;
    void Start()
    {
        al = GetComponent<AudioListener>();
        al.velocityUpdateMode = AudioVelocityUpdateMode.Fixed;
    }

    
}
