// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VFXCACHEDRENDERCOMMANDENCODER_H
#define VFXCACHEDRENDERCOMMANDENCODER_H

@class NSString;
@protocol MTLRenderCommandEncoder, MTLDevice;

#import <Foundation/Foundation.h>


@interface VFXCachedRenderCommandEncoder : NSObject <MTLRenderCommandEncoder>

 {
    id<MTLRenderCommandEncoder> *_encoder;
    Cache _cache;
    BindingsCache _vertexCache;
    BindingsCache _fragmentCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly) NSUInteger tileHeight;
@property (readonly) NSUInteger tileWidth;


-(id)init:(id)arg0 ;
-(void)applyChangedStates;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseVertex:(NSInteger)arg6 baseInstance:(NSUInteger)arg7 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexType:(NSUInteger)arg1 indexBuffer:(id)arg2 indexBufferOffset:(NSUInteger)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(NSUInteger)arg5 ;
-(void)drawPrimitives:(NSUInteger)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 baseInstance:(NSUInteger)arg4 ;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setBlendColorRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3 ;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setColorStoreActionOptions:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setCullMode:(NSUInteger)arg0 ;
-(void)setDepthBias:(float)arg0 slopeScale:(float)arg1 clamp:(float)arg2 ;
-(void)setDepthClipMode:(NSUInteger)arg0 ;
-(void)setDepthStencilState:(id)arg0 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setDepthStoreActionOptions:(NSUInteger)arg0 ;
-(void)setFragmentBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setFragmentBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setFragmentBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setFragmentSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setFragmentSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setFragmentSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFragmentTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFrontFacingWinding:(NSUInteger)arg0 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setScissorRect:(struct ? )arg0 ;
-(void)setScissorRects:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setStencilFrontReferenceValue:(unsigned int)arg0 backReferenceValue:(unsigned int)arg1 ;
-(void)setStencilReferenceValue:(unsigned int)arg0 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreActionOptions:(NSUInteger)arg0 ;
-(void)setTriangleFillMode:(NSUInteger)arg0 ;
-(void)setVertexAmplificationCount:(NSUInteger)arg0 viewMappings:(struct ? *)arg1 ;
-(void)setVertexBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setVertexBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setVertexBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setVertexSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setVertexSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setVertexSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVertexTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setViewport:(struct ? )arg0 ;
-(void)setViewports:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 stages:(NSUInteger)arg3 ;


@end


#endif