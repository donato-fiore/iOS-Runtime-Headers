// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7VFXCORE8RENDERER_H
#define _TTC7VFXCORE8RENDERER_H

@class SwiftObject;



@interface _TtC7VFXCore8Renderer : SwiftObject {
    ? device;
    ? supportVertexAmplification;
    ? lock;
    ? uploadLock;
    ? renderOutputs;
    ? renderOutputsForThisFrame;
    ? shaderCache;
    ? textureCache;
    ? GPUToolBox;
    ? texturePool;
    ? renderGraph;
    ? useGammaBlending;
    ? bufferPool;
    ? wholeFrameBufferPool;
    ? captureInProgress;
    ? commandQueue;
    ? showDebugMenu;
    ? additiveWritesToAlpha;
    ? hideOpaquePass;
    ? hideTransparentPass;
    ? canUseImgui;
    ? isPostFXEnabled;
    ? unscheduledCommandBuffersLock;
    ? unscheduledCommandBuffers;
    ? currentCommandBuffer;
    ? currentEncoder;
    ? currentEncoderWrapper;
    ? currentRenderPassDescriptor;
    ? renderPassDescriptorPool;
    ? counterRecorder;
    ? renderOutputRenderPassFormat;
    ? encoders;
    ? globalFunctionConstants;
    ? mtkMeshBufferAllocator;
    ? opaqueDepthState;
    ? transparentDepthState;
    ? transparentStencilOverdrawDepthState;
    ? depthAlwaysNoWriteState;
    ? depthAlwaysWriteState;
    ? reversedDepthState;
    ? reversedNoWriteDepthState;
    ? inFlightSemaphore;
    ? defaultSampler;
    ? defaultSamplerRepeatTrilinear;
    ? defaultSamplerClampMipNearest;
    ? defaultSamplerRepeatMipNearest;
    ? defaultSamplerRepeatSMipNearest;
    ? defaultSamplerMirrorRepeatMipNearest;
    ? _defaultIrradianceTexture;
    ? _defaultRadianceTexture;
    ? _defaultBrdfLutTexture;
    ? _defaultGreyTexture;
    ? _defaultBlackTexture;
    ? _defaultWhite1DTexture;
    ? _defaultWhite2DTexture;
    ? _defaultWhite3DTexture;
    ? _defaultWhiteCubeTexture;
    ? _defaultBlackCubeTexture;
    ? _defaultNormalMapTexture;
    ? _defaultDummyTexture;
    ? options;
    ? _current;
    ? _reRenderPasses;
    ? _scnRenderPasses;
    ? _deferredDisabledRenderPasses;
    ? _deferredEnabledRenderPasses;
    ? colorRamps;
    ? curves;
    ? stripIndexBuffers;
    ? deformedBuffers;
}






@end


#endif