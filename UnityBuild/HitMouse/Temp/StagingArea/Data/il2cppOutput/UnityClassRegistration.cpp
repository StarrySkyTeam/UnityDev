struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 46 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//5. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//6. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//7. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//8. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//9. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//10. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//11. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//12. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//13. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//14. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//19. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//20. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//21. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//22. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//23. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//24. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//25. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//26. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//27. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//28. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//29. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//30. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//31. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//32. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//33. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//34. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//35. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//36. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//37. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//38. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//39. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//40. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//41. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//42. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//43. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//44. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//45. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
