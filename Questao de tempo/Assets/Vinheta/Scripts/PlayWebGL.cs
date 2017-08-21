using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine.UI;

public class PlayWebGL : MonoBehaviour
{
#if UNITY_WEBGL && !UNITY_EDITOR

    #region Fields

        Renderer screen;
	    WebGLMovieTexture tex;

    #endregion

    #region Unity Methods

        void Awake ()
        {
            screen = this.gameObject.GetComponent<Renderer>();
        }

        void Start ()
        {
		    tex = new WebGLMovieTexture("StreamingAssets/VinhetaMP4.mp4"); 
            screen.material = new Material (Shader.Find("Diffuse"));
            screen.material.mainTexture = tex;
	    }

	    void Update()
	    {
            if (tex.isReady)
            {
                tex.Play();

                tex.Update();

                if (tex.time > 7)
                {
                    tex.Pause();
                    Application.LoadLevel(VinhetaController.instance.sceneToLoad);
                }

                if (Input.GetMouseButtonDown(0))
                {
                    tex.Pause ();
                    Application.LoadLevel (VinhetaController.instance.sceneToLoad);
                }
            }
        }

    #endregion

#endif
}
