using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using System;
using UnityEngine.UI;
using System.Collections.Generic;

public class ObjDrag : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    #region Fields

    public GameController.TypeToys type;
    public GameController.TypeClothes typeClothes;
    public int id;
    public Vector2 sizeCorrect;
    private Transform dragTransform;
    private Transform parentToReturnTo = null;
    private GraphicRaycaster rc;
    private bool movingSlot = false;
    private Vector2 dragOffset;

    List<RaycastResult> raycastResults = new List<RaycastResult> ();

    #endregion

    #region Unity Methods

    void Awake ()
    {
        rc = GameObject.Find ("Canvas").GetComponent<GraphicRaycaster> ();
        dragTransform = GameObject.Find ("DragTransform").transform; 
    }

    void Start()
    {
        parentToReturnTo = this.transform.parent;
        GetComponent<Image> ().SetNativeSize ();
        float width = GetComponent<RectTransform> ().rect.width;
        float height = GetComponent<RectTransform> ().rect.height;
        GetComponent<RectTransform> ().sizeDelta = new Vector2((width -  width * 30 / 100), (height - height * 30 / 100));

        width = transform.parent.GetComponent<RectTransform> ().rect.width - (transform.parent.GetComponent<RectTransform> ().rect.width * 30 / 100);
        height = transform.parent.GetComponent<RectTransform> ().rect.height - (transform.parent.GetComponent<RectTransform> ().rect.height * 30 / 100);

        if (GetComponent<RectTransform> ().rect.width > width || GetComponent<RectTransform> ().rect.height > height)
        {
            width = transform.parent.GetComponent<RectTransform> ().rect.width;
            height = transform.parent.GetComponent<RectTransform> ().rect.height;
            GetComponent<RectTransform> ().sizeDelta = new Vector2 ((width - width * 20 / 100), (height - height * 20 / 100));
            GetComponent<Image> ().preserveAspect = true;
        }

        transform.localPosition = Vector2.zero;
    }

    void Update()
    {
        if(movingSlot)
            LerpPosition (this.transform, Vector3.zero, 15);
    }

    #endregion

    #region Private Methods

    private void LerpPosition(Transform obj, Vector3 futurePosition, float speed)
    {
        float distance = Vector3.Distance (obj.localPosition, futurePosition);

        if (distance > 1)
            transform.localPosition = Vector3.Lerp (obj.localPosition, futurePosition, Time.deltaTime * speed);
        else
            movingSlot = false;

    }

    Slots RaycastSlot (PointerEventData eventData)
    {
        raycastResults = new List<RaycastResult> ();
        rc.Raycast (eventData, raycastResults);

        if (raycastResults.Count > 0)
            foreach (RaycastResult r in raycastResults)
                if (r.gameObject.GetComponent<Slots> () != null)
                {
                    if (GameController.instance.State == GameController.ScreenState.firstStep)
                    {
                        if (r.gameObject.GetComponent<Slots> ().typeClothes == typeClothes)
                            return r.gameObject.GetComponent<Slots> ();
                    }
                    else
                        return r.gameObject.GetComponent<Slots> ();
                }
        return null;
    }

    #endregion

    #region Events Drag

    public void OnBeginDrag (PointerEventData eventData)
    {
        dragOffset = (Vector2)transform.position - eventData.position;
        this.transform.SetParent (dragTransform);
        GetComponent<CanvasGroup> ().blocksRaycasts = false;
    }

    public void OnDrag (PointerEventData eventData)
    {
        this.transform.position = eventData.position + dragOffset;
    }

    public void OnEndDrag (PointerEventData eventData)
    {
        Slots slot = RaycastSlot (eventData);

        if (slot == null)
        {
            this.transform.SetParent (parentToReturnTo);
            GetComponent<CanvasGroup> ().blocksRaycasts = true;
        }
        else if(slot.type != type)
        {
            if (GameController.instance.State == GameController.ScreenState.firstStep)
                GameController.instance.AnswerWorgnClothes(typeClothes);
            else
                GameController.instance.AnswerWorgnToys ();
            this.transform.SetParent (parentToReturnTo);
            GetComponent<CanvasGroup> ().blocksRaycasts = true;
        }
        else
        {
            GetComponent<Image> ().SetNativeSize ();
            if (GameController.instance.State == GameController.ScreenState.firstStep)
            {
                if (transform.childCount != 0)
                {
                    transform.GetChild (0).GetComponent<Image> ().SetNativeSize ();
                    transform.GetChild (0).transform.localPosition = Vector3.zero;
                }

                GameController.instance.AnswerCorrectClothes ();
                this.transform.SetParent (slot.transform);   
            }
            else
            {
                if(type == GameController.TypeToys.Antique)
                    this.transform.SetParent (GameController.instance.secondStepFields.toysSlotSpwanAntique[id - 1]);
                else
                    this.transform.SetParent (GameController.instance.secondStepFields.toysSlotSpwanMorden[id - 1]);

                GameController.instance.AnswerCorrectToys ();              
                GetComponent<RectTransform> ().sizeDelta = sizeCorrect;
            }
        }

        movingSlot = true;
    }

    #endregion
}
