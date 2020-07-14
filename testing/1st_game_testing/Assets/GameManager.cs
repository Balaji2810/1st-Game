using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;

public class GameManager : MonoBehaviour
{

    public PuppetMaster puppet;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void DeadRagdoll()
    {
        puppet.state = PuppetMaster.State.Dead;
    }

    public void AliveRagdoll()
    {
        puppet.state = PuppetMaster.State.Alive;
    }
}
