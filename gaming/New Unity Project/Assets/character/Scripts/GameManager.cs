using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;
using Unity.UIElements.Runtime;
using UnityEngine.UIElements;

public class GameManager : MonoBehaviour
{
    public bool Startgame = false;
    public FileHandler File;
    public PanelRenderer m_MainMenuScreen;
    public PanelRenderer m_GameScreen;


    private Label currentPoints;

    private void OnEnable()
    {
        m_MainMenuScreen.postUxmlReload = BindMainMenuScreen;
        m_GameScreen.postUxmlReload = BindGameScreen;
        
    }

    // Start is called before the first frame update
    void Start()
    {
        GoToMainMenu();
    }

    void SetScreenEnableState(PanelRenderer screen, bool state)
    {
        if (state)
        {
            screen.visualTree.style.display = DisplayStyle.Flex;
            screen.enabled = true;
            screen.gameObject.GetComponent<UIElementsEventSystem>().enabled = true;
        }
        else
        {
            screen.visualTree.style.display = DisplayStyle.None;
            screen.enabled = false;
            screen.gameObject.GetComponent<UIElementsEventSystem>().enabled = false;
        }
    }

    private void GoToMainMenu()
    {
        SetScreenEnableState(m_MainMenuScreen, true);
        SetScreenEnableState(m_GameScreen, false);
    }

    // Update is called once per frame
    void Update()
    {
        if(currentPoints != null)
        {
           currentPoints.text = File.load("points", "temp").ToString();
        }
    }


    private IEnumerable<Object> BindMainMenuScreen()
    {
        var root = m_MainMenuScreen.visualTree;

        var startButton = root.Q<Button>("play");
        if (startButton != null)
        {
            startButton.clickable.clicked += () =>
            {
                StartRound();
            };
        }

     

        return null;
    }

    private IEnumerable<Object> BindGameScreen()
    {
        var root = m_GameScreen.visualTree;
        
        currentPoints = root.Q<Label>("points");

        var pause = root.Q<Button>("pause");
        if (pause != null)
        {
            pause.clickable.clicked += () =>
            {
                print("pause clicked");
            };
        }



        return null;
    }


    private void StartRound()
    {
        File.deleteFile("temp");
        Startgame = true;
        StartCoroutine(TransitionScreens(m_MainMenuScreen, m_GameScreen));
    }


    IEnumerator TransitionScreens(PanelRenderer from, PanelRenderer to)
    {
        from.visualTree.style.display = DisplayStyle.None;
        from.gameObject.GetComponent<UIElementsEventSystem>().enabled = false;

        to.enabled = true;

        yield return null;
        yield return null;
        yield return null;

        to.visualTree.style.display = DisplayStyle.Flex;
        to.visualTree.style.visibility = Visibility.Hidden;
        to.gameObject.GetComponent<UIElementsEventSystem>().enabled = true;

        yield return null;
        yield return null;
        yield return null;

        to.visualTree.style.visibility = Visibility.Visible;

        yield return null;
        yield return null;
        yield return null;
        yield return null;
        yield return null;

        from.enabled = false;
    }
}
