
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadManager : MonoBehaviour
{
    
    public static LoadManager instance;

	[NonSerializable]
	public string SceneName;
	void Awake()
	{
		if (instance != null)
		{
			Destroy(gameObject);
		}
		else
		{
			instance = this;
			DontDestroyOnLoad(gameObject);
		}
		SceneName = "Game";
	}

	public void LoadScene(string name)
	{
		SceneName = name;
		SceneManager.LoadScene("LoadScene", LoadSceneMode.Single);
	}
}
