using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class NoAdsText : MonoBehaviour
{
    // Start is called before the first frame update
    void OnEnable()
    {
        var text = GetComponent<TextMeshProUGUI>();
        text.text = text.text.Replace("$",""+ GameObject.Find("ADManager").GetComponent<ADManager>().purchaseCount);
    }

    
}
