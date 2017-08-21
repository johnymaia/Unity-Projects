using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class AudioNarracao : MonoBehaviour
{
    #region Fields

    public static AudioNarracao instance;
    private AudioSource audioSource;
    public Image imgAudio;
    public Sprite spriteAudioDesligado;
    public Sprite spriteAudioLigado;
    private bool isEnable = true;
    private float maxVolume = 0;
    private float targetVolume = 0;

    #endregion

    #region Unity Methods

    void Awake ()
    {
        instance = this;
        audioSource = GetComponent<AudioSource> ();
        maxVolume = audioSource.volume;
    }

    void Start()
    {
        if (isEnable)
            imgAudio.sprite = spriteAudioLigado;
        else
            imgAudio.sprite = spriteAudioDesligado;
    }

    void Update()
    {
        if (isEnable)
            targetVolume = maxVolume;
        else   
            targetVolume = 0;

        if (audioSource.volume != targetVolume)
            audioSource.volume = Mathf.Lerp (audioSource.volume, targetVolume, Time.deltaTime * 4);
    }

    #endregion

    #region Public Methods

    public void PlayClip (AudioClip clip)
    {
        audioSource.Stop ();
        audioSource.PlayOneShot (clip);
    }

    public void PauseClip ()
    {
        audioSource.Stop ();
    }

    public void MuteDesmute()
    {
        if(isEnable)
        {
            isEnable = false;
            imgAudio.sprite = spriteAudioDesligado;
        }
        else
        {
            isEnable = true;
            imgAudio.sprite = spriteAudioLigado;
        }
    }

    #endregion
}
