using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using System.Collections.Generic;
using PlistCS;

public class PostBuildProcess : MonoBehaviour {

    [PostProcessBuildAttribute(1)]
    public static void OnPostprocessBuild(BuildTarget target, string pathToBuiltProject) {
        if (target == BuildTarget.iOS) {
            Debug.Log(pathToBuiltProject);

            // set plist path
            string plistPath = pathToBuiltProject + "/info.plist";

            // read plist
            Dictionary<string, object> dict;
            dict = (Dictionary<string, object>)Plist.readPlist(plistPath);

            // update plist
            dict["CFBundleURLTypes"] = new List<object> {
                new Dictionary<string,object> {
                /*{ "CFBundleURLName", PlayerSettings.iPhoneBundleIdentifier },*/
                { "CFBundleURLSchemes", new List<object> { PlayerSettings.iPhoneBundleIdentifier }}
                }
            };
            // write plist
            Plist.writeXml(dict, plistPath);
        }
    }
}
