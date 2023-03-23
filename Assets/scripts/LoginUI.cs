using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LoginUI : MonoBehaviour
{
    private BackendlessManager backendlessManager;
    public TMP_InputField emailInput;
    public TMP_InputField passwordInput;
    public GameObject errorMessage;
    public NavigationController navigationController;

    private void Start()
    {
        backendlessManager = FindObjectOfType<BackendlessManager>();
    }

    public void LoginButtonClick()
    {
        Debug.Log("Login button clicked");
        backendlessManager.LoginUser(emailInput.text, passwordInput.text, OnLoginSuccess, OnLoginFailure);
    }

    private void OnLoginSuccess()
    {
        Debug.Log("Login success");
        errorMessage.SetActive(false);
        navigationController.ShowProfilePanel();
    }

    private void OnLoginFailure(string errorMessage)
    {
        Debug.Log("Login failure: " + errorMessage);
        this.errorMessage.GetComponent<TextMeshProUGUI>().text = errorMessage;
        this.errorMessage.SetActive(true);
    }
}
