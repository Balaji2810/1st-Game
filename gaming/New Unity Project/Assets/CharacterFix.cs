using RootMotion.Dynamics;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class CharacterFix : MonoBehaviour
{
    public float muscleSpring=100, muscleDampper=0, pinPow=4, pinDistanceFalloff=5;
    float oldMuscleSpring, oldMuscleDampper, oldPinPow, oldPinDistanceFalloff;

    float time;
    // Start is called before the first frame update
    void Start()
    {
        Flexible();
       
    }

    public void Flexible()
    {
        PuppetMaster pm = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PuppetMaster>();
        if (pm != null)
        {
            oldMuscleSpring = pm.muscleSpring;
            oldMuscleDampper = pm.muscleDamper;
            oldPinPow = pm.pinPow;
            oldPinDistanceFalloff = pm.pinDistanceFalloff;

            pm.muscleSpring = muscleSpring;
            pm.muscleDamper = muscleDampper;
            pm.pinPow = pinPow;
            pm.pinDistanceFalloff = pinDistanceFalloff;

            time = Time.fixedDeltaTime;
            Time.fixedDeltaTime = 0.02f;
        }
    }

    public void FixCharacter()
    {
        PuppetMaster pm = GameObject.Find((PlayerPrefs.GetString("name") ) ).GetComponentInChildren<PuppetMaster>();
        if (pm != null)
        {
             pm.muscleSpring = oldMuscleSpring;
             pm.muscleDamper = oldMuscleDampper;
             pm.pinPow = oldPinPow;
             pm.pinDistanceFalloff = oldPinDistanceFalloff;
            
        }
        Time.fixedDeltaTime = time;
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
