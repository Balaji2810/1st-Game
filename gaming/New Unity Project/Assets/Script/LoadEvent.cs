using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadEvent : MonoBehaviour
{
    public TextMeshProUGUI text;

    // Start is called before the first frame update
    void Start()
    {
        // SceneManager.LoadScene(LoadManager.instance.SceneName, LoadSceneMode.Single);
        Invoke("fun", 2);
    }

    void fun()
    {
        StartCoroutine(Load());
    }
    
    AsyncOperation scene;

    private void LateUpdate()
    {
        
    }


    IEnumerator Load()
    {
        float timer = 0f;
        float minLoadTime = 0.75f;

        AsyncOperation operation = SceneManager.LoadSceneAsync(LoadManager.instance.SceneName, LoadSceneMode.Single);
        operation.allowSceneActivation = false;

        while (!operation.isDone)
        {
            int progress = (int)(Mathf.Clamp01(operation.progress / 0.9f)*100);
            text.SetText("Loading : "+ progress+"%");
            timer += Time.deltaTime;

            if (timer > minLoadTime)
            {
                operation.allowSceneActivation = true;
            }

            yield return null;
        }

        yield return null;


    }
}
