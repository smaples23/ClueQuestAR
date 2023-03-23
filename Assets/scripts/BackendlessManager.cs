using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackendlessAPI;
using BackendlessAPI.Async;
using BackendlessAPI.Data;

public class BackendlessManager : MonoBehaviour
{
    private BackendlessUser currentUser;

    void Start()
    {
        string applicationId = "D9F36AEF-D559-009C-FF56-30FC10B0B900";
        string apiKey = "277A105D-24F4-41A3-A554-D0B3B0BB6A8D";
        Backendless.InitApp(applicationId, apiKey);
        currentUser = Backendless.UserService.CurrentUser;
    }

    void Update()
    {

    }

    public void RegisterUser(string email, string password, string firstName, string lastName, string username, System.Action onSuccess, System.Action<string> onFailure)
    {
        BackendlessUser user = new BackendlessUser();
        user.Email = email;
        user.Password = password;
        user.SetProperty("firstName", firstName);
        user.SetProperty("lastName", lastName);
        user.SetProperty("username", username);

        Backendless.UserService.Register(user, new AsyncCallback<BackendlessUser>(
            response =>
            {
                Debug.Log("User successfully registered: " + response.ObjectId);
                onSuccess?.Invoke();
            },
            fault =>
            {
                Debug.LogError("Error registering user: " + fault.Message);
                onFailure?.Invoke(fault.Message);
            }));
    }

    public void LoginUser(string email, string password, System.Action onSuccess, System.Action<string> onFailure)
    {
        Debug.Log("LoginUser called with email: " + email + " and password: " + password);
        Backendless.UserService.Login(email, password, new AsyncCallback<BackendlessUser>(
            loggedInUser =>
            {
                Debug.Log("User successfully logged in: " + loggedInUser.ObjectId);
                currentUser = loggedInUser;
                SaveLoggedInUserToLocal(loggedInUser); // Save the logged-in user to PlayerPrefs
                onSuccess?.Invoke();
            },
            fault =>
            {
                Debug.LogError("Error logging in user: " + fault.Message);
                onFailure?.Invoke(fault.Message);
            }));
    }
    public void LoadUser(string userId, System.Action<BackendlessUser> onSuccess, System.Action<string> onFailure)
    {
        Backendless.Data.Of<BackendlessUser>().FindById(userId, new AsyncCallback<BackendlessUser>(
            user =>
            {
                Debug.Log("User successfully loaded: " + user.ObjectId);
                onSuccess?.Invoke(user);
            },
            fault =>
            {
                Debug.LogError("Error loading user: " + fault.Message);
                onFailure?.Invoke(fault.Message);
            }));
    }


    public BackendlessUser GetCurrentUser()
    {
        return currentUser;
    }
    public void EnsureCurrentUser(System.Action onSuccess, System.Action<string> onFailure)
    {
        if (currentUser != null)
        {
            onSuccess?.Invoke();
        }
        else
        {
            string userId = PlayerPrefs.GetString("userId");
            if (!string.IsNullOrEmpty(userId))
            {
                LoadUser(userId, user =>
                {
                    currentUser = user;
                    onSuccess?.Invoke();
                }, onFailure);
            }
            else
            {
                onFailure?.Invoke("No current user found");
            }
        }
    }


    public void LogoutUser(System.Action onSuccess, System.Action<string> onFailure)
    {
        Backendless.UserService.Logout(new AsyncCallback<object>(
            response =>
            {
                Debug.Log("User successfully logged out");
                currentUser = null;
                onSuccess?.Invoke();
            },
            fault =>
            {
                Debug.LogError("Error logging out user: " + fault.Message);
                onFailure?.Invoke(fault.Message);
            }));
    }

    public void SaveLoggedInUserToLocal(BackendlessUser user)
    {
        PlayerPrefs.SetString("loggedInUser", JsonUtility.ToJson(user));
        PlayerPrefs.Save();
    }

    public BackendlessUser GetLoggedInUserFromLocal()
    {
        string userJson = PlayerPrefs.GetString("loggedInUser", "");
        if (!string.IsNullOrEmpty(userJson))
        {
            return JsonUtility.FromJson<BackendlessUser>(userJson);
        }
        else
        {
            return null;
        }
    }
}

