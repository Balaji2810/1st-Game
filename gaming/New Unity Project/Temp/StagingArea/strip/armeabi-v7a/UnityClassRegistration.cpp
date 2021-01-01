extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_AndroidJNI();
	RegisterModule_AndroidJNI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Cloth();
	RegisterModule_Cloth();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCore();
	RegisterModule_TextCore();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElementsNative();
	RegisterModule_UIElementsNative();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityWebRequestAudio();
	RegisterModule_UnityWebRequestAudio();

	void RegisterModule_UnityWebRequestTexture();
	RegisterModule_UnityWebRequestTexture();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_VR();
	RegisterModule_VR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
namespace Unity { class ArticulationBody; } 
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } template <> void RegisterUnityClass<Unity::Cloth>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class EdgeCollider2D; 
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
class FakeComponent; 
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } template <> void RegisterUnityClass<Unity::CharacterJoint>(const char*);
namespace Unity { class ConfigurableJoint; } template <> void RegisterUnityClass<Unity::ConfigurableJoint>(const char*);
namespace Unity { class FixedJoint; } template <> void RegisterUnityClass<Unity::FixedJoint>(const char*);
namespace Unity { class HingeJoint; } template <> void RegisterUnityClass<Unity::HingeJoint>(const char*);
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; template <> void RegisterUnityClass<Flare>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; template <> void RegisterUnityClass<PhysicsMaterial2D>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class MovieTexture; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class EmptyObject; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class ClusterInputManager; 
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 105 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//2. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//3. Animation
	RegisterUnityClass<Animation>("Animation");
	//4. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//5. Animator
	RegisterUnityClass<Animator>("Animation");
	//6. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//7. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//8. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//9. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//10. Motion
	RegisterUnityClass<Motion>("Animation");
	//11. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//12. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//13. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//14. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//15. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//16. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//17. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//18. Unity::Cloth
	RegisterUnityClass<Unity::Cloth>("Cloth");
	//19. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//20. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//21. Camera
	RegisterUnityClass<Camera>("Core");
	//22. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//23. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//24. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//25. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//26. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//27. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//28. Flare
	RegisterUnityClass<Flare>("Core");
	//29. GameManager
	RegisterUnityClass<GameManager>("Core");
	//30. GameObject
	RegisterUnityClass<GameObject>("Core");
	//31. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//32. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//33. InputManager
	RegisterUnityClass<InputManager>("Core");
	//34. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//35. Light
	RegisterUnityClass<Light>("Core");
	//36. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//37. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//38. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//39. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//40. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//41. Material
	RegisterUnityClass<Material>("Core");
	//42. Mesh
	RegisterUnityClass<Mesh>("Core");
	//43. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//44. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//45. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//46. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//47. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//48. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//49. Object
	//Skipping Object
	//50. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//51. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//52. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//53. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//54. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//55. Renderer
	RegisterUnityClass<Renderer>("Core");
	//56. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//57. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//58. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//59. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//60. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//61. Shader
	RegisterUnityClass<Shader>("Core");
	//62. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//63. Skybox
	RegisterUnityClass<Skybox>("Core");
	//64. Sprite
	RegisterUnityClass<Sprite>("Core");
	//65. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//66. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//67. TagManager
	RegisterUnityClass<TagManager>("Core");
	//68. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//69. Texture
	RegisterUnityClass<Texture>("Core");
	//70. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//71. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//72. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//73. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//74. Transform
	RegisterUnityClass<Transform>("Core");
	//75. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//76. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//77. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//78. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//79. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//80. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//81. Unity::CharacterJoint
	RegisterUnityClass<Unity::CharacterJoint>("Physics");
	//82. Collider
	RegisterUnityClass<Collider>("Physics");
	//83. Unity::ConfigurableJoint
	RegisterUnityClass<Unity::ConfigurableJoint>("Physics");
	//84. Unity::FixedJoint
	RegisterUnityClass<Unity::FixedJoint>("Physics");
	//85. Unity::HingeJoint
	RegisterUnityClass<Unity::HingeJoint>("Physics");
	//86. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//87. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//88. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//89. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//90. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//91. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//92. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//93. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//94. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//95. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//96. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//97. PhysicsMaterial2D
	RegisterUnityClass<PhysicsMaterial2D>("Physics2D");
	//98. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//99. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//100. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//101. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//102. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//103. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//104. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");

}
