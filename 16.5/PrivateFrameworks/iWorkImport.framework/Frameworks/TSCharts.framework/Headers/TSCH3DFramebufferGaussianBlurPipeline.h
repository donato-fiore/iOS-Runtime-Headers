// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DFRAMEBUFFERGAUSSIANBLURPIPELINE_H
#define TSCH3DFRAMEBUFFERGAUSSIANBLURPIPELINE_H



#import "TSCH3DFramebufferCopyPipeline.h"

@interface TSCH3DFramebufferGaussianBlurPipeline : TSCH3DFramebufferCopyPipeline

@property (nonatomic) tvec2<float> tapUnit; // ivar: _tapUnit


+(id)effectsArray;
-(id)initWithProcessor:(id)arg0 session:(id)arg1 ;
-(void)updateShaderEffectsStates;


@end


#endif