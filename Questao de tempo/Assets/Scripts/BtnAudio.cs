using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class BtnAudio : MonoBehaviour
{

    public Sprite spriteAudioDesligado;
    public Sprite spriteAudioLigado;

    private Image image;

    void Awake()
    {
        image = this.GetComponent<Image>();
    }

    void Start()
    {
        if (AudioController.IsAudioEnabled()) {
            image.sprite = spriteAudioLigado;
        }
        else {
            image.sprite = spriteAudioDesligado;
        }
    }

    public void MutaDesmutaAudio()
    {
        if (AudioController.IsAudioEnabled())
        {           
            AudioController.DesabilitaAudio();
            image.sprite = spriteAudioDesligado;
        }
        else
        {
            AudioController.HabilitaAudio();
            image.sprite = spriteAudioLigado;
        }
    }
}
