// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DFRAMEBUFFERONEPASSBLURPIPELINE_H
#define TSCH3DFRAMEBUFFERONEPASSBLURPIPELINE_H



#import "TSCH3DFramebufferCopyPipeline.h"

@interface TSCH3DFramebufferOnepassBlurPipeline : TSCH3DFramebufferCopyPipeline

@property (readonly, nonatomic) tvec2<float> pixelSize; // ivar: _pixelSize


+(id)pipelineWithProcessor:(id)arg0 session:(id)arg1 pixelSize:(*void)arg2 ;
-(id)initWithProcessor:(id)arg0 session:(id)arg1 pixelSize:(*void)arg2 ;
-(void)updateShaderEffectsStates;


@end


#endif