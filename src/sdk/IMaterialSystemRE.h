/*
 * IMaterialSystemRE.h
 *
 *  Created on: Mar 30, 2017
 *      Author: nullifiedcat
 */

#ifndef SDK_IMATERIALSYSTEMRE_H_
#define SDK_IMATERIALSYSTEMRE_H_

#include "../sdk.h"

class IMaterialSystemRE {
public:
	virtual void Disconnect(void);
	virtual void QueryInterface(char const*);
	virtual void Init(void);
	virtual void Shutdown(void);
	virtual void Init(char const*,IMaterialProxyFactory *,void * (*)(char const*,int *),void * (*)(char const*,int *));
	virtual void SetShaderAPI(char const*);
	virtual void SetAdapter(int,int);
	virtual void ModInit(void);
	virtual void ModShutdown(void);
	virtual void SetThreadMode(MaterialThreadMode_t,int);
	virtual void GetThreadMode(void);
	virtual void IsRenderThreadSafe(void);
	virtual void ExecuteQueued(void);
	virtual void GetHardwareConfig(char const*,int *);
	virtual void UpdateConfig(bool);
	virtual void OverrideConfig(MaterialSystem_Config_t const&,bool);
	virtual void GetCurrentConfigForVideoCard(void);
	virtual void GetRecommendedConfigurationInfo(int,KeyValues *);
	virtual void GetDisplayAdapterCount(void);
	virtual void GetCurrentAdapter(void);
	virtual void GetDisplayAdapterInfo(int,MaterialAdapterInfo_t &);
	virtual void GetModeCount(int);
	virtual void GetModeInfo(int,int,MaterialVideoMode_t &);
	virtual void AddModeChangeCallBack(void (*)(void));
	virtual void GetDisplayMode(MaterialVideoMode_t &);
	virtual void SetMode(void *,MaterialSystem_Config_t const&);
	virtual void SupportsMSAAMode(int);
	virtual void GetVideoCardIdentifier(void);
	virtual void SpewDriverInfo(void);
	virtual void GetDXLevelDefaults(uint &,uint &);
	virtual void GetBackBufferDimensions(int &,int &);
	virtual void GetBackBufferFormat(void);
	virtual void SupportsHDRMode(HDRType_t);
	virtual void AddView(void *);
	virtual void RemoveView(void *);
	virtual void SetView(void *);
	virtual void BeginFrame(float);
	virtual void EndFrame(void);
	virtual void Flush(bool);
	virtual void SwapBuffers(void);
	virtual void EvictManagedResources(void);
	virtual void ReleaseResources(void);
	virtual void ReacquireResources(void);
	virtual void AddReleaseFunc(void (*)(void));
	virtual void RemoveReleaseFunc(void (*)(void));
	virtual void AddRestoreFunc(void (*)(int));
	virtual void RemoveRestoreFunc(void (*)(int));
	virtual void ResetTempHWMemory(bool);
	virtual void HandleDeviceLost(void);
	virtual int ShaderCount(void);
	virtual void GetShaders(int,int,IShader **);
	virtual void ShaderFlagCount(void);
	virtual void ShaderFlagName(int);
	virtual void GetShaderFallback(char const*,char *,int);
	virtual void GetMaterialProxyFactory(void);
	virtual void SetMaterialProxyFactory(IMaterialProxyFactory *);
	virtual void EnableEditorMaterials(void);
	virtual void SetInStubMode(bool);
	virtual void DebugPrintUsedMaterials(char const*,bool);
	virtual void DebugPrintUsedTextures(void);
	virtual void ToggleSuppressMaterial(char const*);
	virtual void ToggleDebugMaterial(char const*);
	virtual void UsingFastClipping(void);
	virtual void StencilBufferBits(void);
	virtual void SuspendTextureStreaming(void);
	virtual void ResumeTextureStreaming(void);
	virtual void UncacheAllMaterials(void);
	virtual void UncacheUnusedMaterials(bool);
	virtual void CacheUsedMaterials(void);
	virtual void ReloadTextures(void);
	virtual void ReloadMaterials(char const*);
	virtual void CreateMaterial(char const*,KeyValues *);
	virtual void FindMaterial(char const*,char const*,bool,char const*);
	virtual void IsMaterialLoaded(char const*);
	virtual void FirstMaterial(void);
	virtual void NextMaterial(ushort);
	virtual void InvalidMaterial(void);
	virtual void GetMaterial(ushort);
	virtual void GetNumMaterials(void);
	virtual void SetAsyncTextureLoadCache(void *);
	virtual ITexture* FindTexture(char const*,char const*,bool,int);
	virtual void IsTextureLoaded(char const*);
	virtual void CreateProceduralTexture(char const*,char const*,int,int,ImageFormat,int);
	virtual void BeginRenderTargetAllocation(void);
	virtual void EndRenderTargetAllocation(void);
	virtual void CreateRenderTargetTexture(int,int,RenderTargetSizeMode_t,ImageFormat,MaterialRenderTargetDepth_t);
	virtual void CreateNamedRenderTargetTextureEx(char const*,int,int,RenderTargetSizeMode_t,ImageFormat,MaterialRenderTargetDepth_t,uint,uint);
	virtual void CreateNamedRenderTargetTexture(char const*,int,int,RenderTargetSizeMode_t,ImageFormat,MaterialRenderTargetDepth_t,bool,bool);
	virtual void CreateNamedRenderTargetTextureEx2(char const*,int,int,RenderTargetSizeMode_t,ImageFormat,MaterialRenderTargetDepth_t,uint,uint);
	virtual void BeginLightmapAllocation(void);
	virtual void EndLightmapAllocation(void);
	virtual void AllocateLightmap(int,int,int *,IMaterial *);
	virtual void AllocateWhiteLightmap(IMaterial *);
	virtual void UpdateLightmap(int,int *,int *,float *,float *,float *,float *);
	virtual void GetNumSortIDs(void);
	virtual void GetSortInfo(MaterialSystem_SortInfo_t *);
	virtual void GetLightmapPageSize(int,int *,int *);
	virtual void ResetMaterialLightmapPageInfo(void);
	virtual void ClearBuffers(bool,bool,bool);
	virtual IMatRenderContext* GetRenderContext(void);
	virtual void SupportsShadowDepthTextures(void);
	virtual void BeginUpdateLightmaps(void);
	virtual void EndUpdateLightmaps(void);
	virtual void Lock(void);
	virtual void Unlock(MaterialLock_t__ *);
	virtual ImageFormat GetShadowDepthTextureFormat(void);
	virtual void SupportsFetch4(void);
	virtual void CreateRenderContext(MaterialContextType_t);
	virtual void SetRenderContext(IMatRenderContext *);
	virtual void SupportsCSAAMode(int,int);
	virtual void RemoveModeChangeCallBack(void (*)(void));
	virtual void FindProceduralMaterial(char const*,char const*,KeyValues *);
	virtual void GetNullTextureFormat(void);
	virtual void AddTextureAlias(char const*,char const*);
	virtual void RemoveTextureAlias(char const*);
	virtual void AllocateDynamicLightmap(int *,int *,int);
	virtual void SetExcludedTextures(char const*);
	virtual void UpdateExcludedTextures(void);
	virtual void IsInFrame(void);
	virtual void CompactMemory(void);
	virtual void ReloadFilesInList(IFileList *);
	virtual void AllowThreading(bool,int);
	virtual void FindMaterialEx(char const*,char const*,int,bool,char const*);
	virtual void DoStartupShaderPreloading(void);
	virtual void SetRenderTargetFrameBufferSizeOverrides(int,int);
	virtual void GetRenderTargetFrameBufferDimensions(int &,int &);
	virtual void GetDisplayDeviceName(void);
	virtual void CreateTextureFromBits(int,int,int,ImageFormat,int,uchar *);
	virtual void OverrideRenderTargetAllocation(bool);
	virtual void NewTextureCompositor(int,int,char const*,int,unsigned long long,KeyValues *,uint);
	virtual void AsyncFindTexture(char const*,char const*,IAsyncTextureOperationReceiver *,void *,bool,int);
	virtual void CreateNamedTextureFromBitsEx(char const*,char const*,int,int,int,ImageFormat,int,uchar *,int);
	virtual void AddTextureCompositorTemplate(char const*,KeyValues *,int);
	virtual void VerifyTextureCompositorTemplates(void);
	virtual void GetCurrentMaterial(void);
	virtual void GetLightmapPage(void);
	virtual void GetLightmapWidth(int);
	virtual void GetLightmapHeight(int);
	virtual void GetLocalCubemap(void);
	virtual void ForceDepthFuncEquals(bool);
	virtual void GetHeightClipMode(void);
	virtual void AddMaterialToMaterialList(void *);
	virtual void RemoveMaterial(void *);
	virtual void RemoveMaterialSubRect(void *);
	virtual void InFlashlightMode(void);
	virtual void CanUseEditorMaterials(void);
	virtual void GetForcedTextureLoadPathID(void);
	virtual void GetRenderCallQueue(void);
	virtual void UnbindMaterial(IMaterial *);
	virtual void GetRenderThreadId(void);
	virtual void DetermineProxyReplacements(IMaterial *,KeyValues *);
	virtual void GetConfig(void);
	virtual void NoteAnisotropicLevel(int);
	virtual void ReleaseShaderObjects(void);
	virtual void RestoreShaderObjects(void * (*)(char const*,int *),int);
	virtual void InEditorMode(void);
	virtual void IsInStubMode(void);
	virtual void ImageFormatInfo(ImageFormat);
	virtual void GetMemRequired(int,int,int,ImageFormat,bool);
	virtual void ConvertImageFormat(uchar *,ImageFormat,uchar *,ImageFormat,int,int,int,int);
	virtual void OnDrawMesh(IMesh *,int,int);
	virtual void OnDrawMesh(IMesh *,CPrimList *,int);
	virtual void OnSetFlexMesh(IMesh *,IMesh *,int);
	virtual void OnSetColorMesh(IMesh *,IMesh *,int);
	virtual void OnSetPrimitiveType(IMesh *,MaterialPrimitiveType_t);
	virtual void SyncMatrices(void);
	virtual void SyncMatrix(MaterialMatrixMode_t);
	virtual void OnFlushBufferedPrimitives(void);
	virtual void OnThreadEvent(uint);
	virtual void BindStandardTexture(Sampler_t,StandardTextureId_t);
	virtual void BindStandardVertexTexture(VertexTextureSampler_t,StandardTextureId_t);
	virtual void GetLightmapDimensions(int *,int *);
	virtual void GetStandardTextureDimensions(int *,int *,StandardTextureId_t);
	virtual void GetBoundMorphFormat(void);
	virtual void GetRenderTargetEx(int);
	virtual void DrawClearBufferQuad(uchar,uchar,uchar,uchar,bool,bool,bool);
	virtual void MaxHWMorphBatchCount(void);
	virtual void GetCurrentColorCorrection(ShaderColorCorrectionInfo_t *);
};


#endif /* SDK_IMATERIALSYSTEMRE_H_ */
