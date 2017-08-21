using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayMobile : MonoBehaviour
{
#if UNITY_ANDROID || UNITY_IOS

    #region Unity Methods

    void Start ()
    {
        StartCoroutine(PlayMovie());
    }

    void Update ()
    {
        if (Input.touchCount > 0)
        {
            Application.LoadLevel(VinhetaController.instance.sceneToLoad);
        }
    }

    #endregion

    #region IEnumerator Methods

    public IEnumerator PlayMovie ()
    {
        Handheld.PlayFullScreenMovie("VinhetaMP4.mp4", Color.black, FullScreenMovieControlMode.CancelOnInput, FullScreenMovieScalingMode.AspectFit);
        yield return new WaitForEndOfFrame();
        Application.LoadLevel(VinhetaController.instance.sceneToLoad);
    }

    #endregion

#endif
}
