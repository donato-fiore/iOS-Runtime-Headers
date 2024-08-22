// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMETALBLOOMEFFECT_H
#define TSDMETALBLOOMEFFECT_H

@protocol TSDMTLDataBuffer;

#import <Foundation/Foundation.h>

#import "TSDMetalRenderTarget.h"
#import "TSDMetalShader.h"

@interface TSDMetalBloomEffect : NSObject {
    CGSize _effectSize;
    CGSize _blurBufferSize;
    id<TSDMTLDataBuffer> *_dataBuffer;
    id<TSDMTLDataBuffer> *_blurDataBuffer;
    TSDMetalRenderTarget *_downSampleRenderTarget;
    TSDMetalRenderTarget *_horizontalBlurRenderTarget;
    TSDMetalRenderTarget *_verticalBlurRenderTarget;
    TSDMetalShader *_blurShader;
    TSDMetalShader *_bloomShader;
    TSDMetalShader *_fboTransferShader;
    ? _blurVertexUniforms;
    ? _blurFragmentUniforms;
}




-(id)initWithEffectSize:(struct CGSize )arg0 blurScale:(CGFloat)arg1 metalContext:(id)arg2 ;
-(id)p_blurTextureWithTexture:(id)arg0 metalContext:(id)arg1 MVPMatrix:(struct CATransform3D )arg2 ;
-(void)drawBloomEffectWithTexture:(id)arg0 metalContext:(id)arg1 encoder:(id)arg2 MVPMatrix:(struct CATransform3D )arg3 bloomAmount:(CGFloat)arg4 ;
-(void)p_setupBuffersWithMetalContext:(id)arg0 ;
-(void)p_setupShadersWithMetalContext:(id)arg0 ;
-(void)teardown;


@end


#endif