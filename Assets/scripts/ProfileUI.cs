using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using BackendlessAPI;

public class ProfileUI : MonoBehaviour
{
    private BackendlessManager backendlessManager;
    public TMP_Text UserNameText;


    private void Start()
    {
        backendlessManager = FindObjectOfType<BackendlessManager>();
        backendlessManager.EnsureCurrentUser(() =>
        {
            LoadAndDisplayUserData();
        },
        errorMessage =>
        {
            Debug.LogError("Error initializing user: " + errorMessage);
            // Redirect to the login screen or show a message prompting the user to log in
        });
    }


    public void LoadAndDisplayUserData()
    {
        BackendlessUser user = backendlessManager.GetCurrentUser();
        if (user != null)
        {
            object usernameObj = user.GetProperty("username");
            if (usernameObj != null)
            {
                string username = usernameObj.ToString();
                if (!string.IsNullOrEmpty(username))
                {
                    UserNameText.text = username;
                }
                else
                {
                    Debug.LogError("User name is empty or null.");
                }
            }
            else
            {
                Debug.LogError("User name is null.");
            }
        }
        else
        {
            // Try to get the user from PlayerPrefs
            BackendlessUser localUser = backendlessManager.GetLoggedInUserFromLocal();
            if (localUser != null)
            {
                object usernameObj = localUser.GetProperty("username");
                if (usernameObj != null)
                {
                    string username = usernameObj.ToString();
                    if (!string.IsNullOrEmpty(username))
                    {
                        UserNameText.text = username;
                    }
                    else
                    {
                        Debug.LogError("User name is empty or null.");
                    }
                }
                else
                {
                    Debug.LogError("User name is null.");
                }
            }
            else
            {
                Debug.LogError("User is null. Cannot display user information.");
            }
        }
    }

    public void LogoutButtonClick()
    {
        backendlessManager.LogoutUser(OnLogoutSuccess, OnLogoutFailure);
    }

    private void OnLogoutSuccess()
    {
        FindObjectOfType<NavigationController>().ShowLogin();
    }

    private void OnLogoutFailure(string errorMessage)
    {
        Debug.LogError("Error logging out user: " + errorMessage);
    }
}



