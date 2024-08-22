// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef METALCONTEXT_H
#define METALCONTEXT_H

@class NSMutableArray, NSLock, NSMutableDictionary;
@protocol MTLDepthStencilState, MTLTexture;

#import <Foundation/Foundation.h>

#import "FramebufferDescriptor.h"

@interface MetalContext : NSObject

@property (retain, nonatomic) NSMutableArray *bufferCache; // ivar: _bufferCache
@property (retain, nonatomic) NSLock *bufferCacheLock; // ivar: _bufferCacheLock
@property (retain, nonatomic) NSObject<MTLDepthStencilState> *depthStencilState; // ivar: _depthStencilState
@property (retain, nonatomic) NSObject<MTLTexture> *fontTexture; // ivar: _fontTexture
@property (retain, nonatomic) FramebufferDescriptor *framebufferDescriptor; // ivar: _framebufferDescriptor
@property (nonatomic) CGFloat lastBufferCachePurge; // ivar: _lastBufferCachePurge
@property (retain, nonatomic) NSMutableDictionary *renderPipelineStateCache; // ivar: _renderPipelineStateCache


-(id)_renderPipelineStateForFramebufferDescriptor:(id)arg0 device:(id)arg1 ;
-(id)dequeueReusableBufferOfLength:(NSUInteger)arg0 device:(id)arg1 ;
-(id)init;
-(id)renderPipelineStateForFrameAndDevice:(id)arg0 ;
-(void)emptyRenderPipelineStateCache;
-(void)enqueueReusableBuffer:(id)arg0 ;
-(void)makeDeviceObjectsWithDevice:(id)arg0 ;
-(void)makeFontTextureWithDevice:(id)arg0 ;
-(void)renderDrawData:(struct ImDrawData *)arg0 commandBuffer:(id)arg1 commandEncoder:(id)arg2 ;
-(void)setupRenderState:(struct ImDrawData *)arg0 commandBuffer:(id)arg1 commandEncoder:(id)arg2 renderPipelineState:(id)arg3 vertexBuffer:(id)arg4 vertexBufferOffset:(NSUInteger)arg5 ;


@end


#endif