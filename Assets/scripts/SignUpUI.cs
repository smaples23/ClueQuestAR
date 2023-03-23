using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignUpUI : MonoBehaviour
{
    public NavigationController navigationController;

    public void SignUpButtonClick()
    {
        navigationController.ShowRegistration();
    }
}

