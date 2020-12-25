using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace BrainFailProductions.PolyFew
{
    [ExecuteInEditMode]
    public class RefreshEnforcer : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            DestroyImmediate(this);
        }

        
        void Update()
        {

        }
    }
}