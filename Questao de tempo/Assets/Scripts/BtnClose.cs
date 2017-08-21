using UnityEngine;
using System.Collections;

public class BtnClose : MonoBehaviour
{
    #region Fields

    private Animator anim;
    private bool isOpen = false;

    #endregion

    #region Unity Methods

    void Awake ()
    {
        anim = GetComponent<Animator>();
    }

    #endregion

    #region Public Methods

    public void OpenConfirmation ()
    {
        if (isOpen)
            return;
        anim.Play("Open");
        isOpen = true;
    }

    public void HandleClickNao ()
    {
        anim.Play("Close");
        isOpen = false;
    }

    public void HandleClickSim ()
    {
        Application.Quit();
    }

    #endregion
}
