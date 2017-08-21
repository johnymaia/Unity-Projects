using UnityEngine;
using System.Collections;

public class VinhetaController : MonoBehaviour
{
    #region Fields

    public static VinhetaController instance;
    public string sceneToLoad;

    #endregion

    #region Unity Methods

    void Awake()
    {
        instance = this;
    }

    void Start ()
    {
#if UNITY_EDITOR
        Application.LoadLevel(VinhetaController.instance.sceneToLoad);
#endif

#if UNITY_WEBGL && !UNITY_EDITOR
        this.gameObject.AddComponent<PlayWebGL>();
#endif

#if UNITY_ANDROID || UNITY_IOS && !UNITY_EDITOR
        this.gameObject.AddComponent<PlayMobile>();
#endif
    }

#endregion
}
