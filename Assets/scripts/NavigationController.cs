using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavigationController : MonoBehaviour
{
    public GameObject loginPanel;
    public GameObject registrationPanel;
    public GameObject profilePanel;

    void Start()
    {
        ShowLogin();
    }

    public void ShowLogin()
    {
        loginPanel.SetActive(true);
        registrationPanel.SetActive(false);
        profilePanel.SetActive(false);
    }

    public void ShowRegistration()
    {
        loginPanel.SetActive(false);
        registrationPanel.SetActive(true);
        profilePanel.SetActive(false);
    }

    public void ShowProfilePanel(System.Action onShown = null)
    {
        loginPanel.SetActive(false);
        registrationPanel.SetActive(false);
        profilePanel.SetActive(true);
        onShown?.Invoke();
    }
}
