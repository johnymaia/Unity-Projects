using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Fade : MonoBehaviour {

    public static Fade Instance;

    public float fadeSpeed = 3;

    private Color targetColor;
    private Image image;
    private string sceneToLoad;
    private bool endScene = false;

    void Awake() {
        Instance = this;
        image = GetComponent<Image>();
    }

    void Start() {
        FadeIn();
    }

    void Update() {
        if (Mathf.Abs(image.color.a - targetColor.a) > 0.01f) {
            image.color = Color.Lerp(image.color, targetColor, Time.deltaTime * fadeSpeed);
        }
        else {
            if (image.enabled) {
                image.color = targetColor;
                image.enabled = false;
            }
        }

        if (endScene && image.color.a > 0.95f) {
            //Application.LoadLevel(sceneToLoad);
            SceneManager.LoadScene(sceneToLoad);
        }
    }

    public void FadeIn() {
        image.enabled = true;
        image.color = Color.black;
        targetColor = Color.clear;
    }

    private void FadeOut() {
        image.enabled = true;
        image.color = Color.clear;
        targetColor = Color.black;
        endScene = true;
    }

    public void FadeOut(string sceneToLoad) {
        if (IsInvoking("FadeOut")) {
            CancelInvoke("FadeOut");
            FadeOut();
            return;
        }

        if (this.sceneToLoad != sceneToLoad) {
            image.enabled = true;
            image.color = Color.clear;
            targetColor = Color.black;
            endScene = true;
            this.sceneToLoad = sceneToLoad;
        }
    }

    public void FadeOut(string sceneToLoad, float t) {
        Invoke("FadeOut", t);
        if (this.sceneToLoad != sceneToLoad) {
            this.sceneToLoad = sceneToLoad;
        }
    }
}
