using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RegistrationUI : MonoBehaviour
{
    private BackendlessManager backendlessManager;
    public TMP_InputField emailInput;
    public TMP_InputField passwordInput;
    public TMP_InputField firstNameInput;
    public TMP_InputField lastNameInput;
    public TMP_InputField usernameInput;
    public GameObject errorMessage;
    public NavigationController navigationController;

    private void Start()
    {
        backendlessManager = FindObjectOfType<BackendlessManager>();
    }

    public void RegisterButtonClick()
    {
        Debug.Log("Register button clicked");
        backendlessManager.RegisterUser(emailInput.text, passwordInput.text, firstNameInput.text, lastNameInput.text, usernameInput.text, OnRegisterSuccess, OnRegisterFailure);
    }

    private void OnRegisterSuccess()
    {
        Debug.Log("Register success");
        errorMessage.SetActive(false);
        navigationController.ShowLogin();
    }

    private void OnRegisterFailure(string errorMessage)
    {
        Debug.Log("Register failure: " + errorMessage);
        this.errorMessage.GetComponent<TextMeshProUGUI>().text = errorMessage;
        this.errorMessage.SetActive(true);
    }
}

