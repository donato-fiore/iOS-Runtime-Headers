// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DRETARGETRENDERPROCESSOR_H
#define TSCH3DRETARGETRENDERPROCESSOR_H



#import "TSCH3DRenderProcessor.h"

@interface TSCH3DRetargetRenderProcessor : TSCH3DRenderProcessor

@property (retain, nonatomic) TSCH3DRenderProcessor *original; // ivar: _original


+(id)processorWithOriginal:(id)arg0 ;
-(BOOL)canRenderPrefilteredLines;
-(NSInteger)attribute:(id)arg0 resource:(id)arg1 specs:(struct AttributeSpecs *)arg2 ;
-(NSInteger)texture:(id)arg0 resource:(id)arg1 attributes:(*void)arg2 ;
-(id)effects;
-(id)effectsStates;
-(id)init;
-(id)initWithOriginal:(id)arg0 ;
-(struct RenderHints )renderHints;
-(struct RenderState )renderState;
-(void)beginFrame;
-(void)copyProjectionInto:(*void)arg0 ;
-(void)copyTransformInto:(*void)arg0 ;
-(void)endFrame;
-(void)multiply:(*void)arg0 ;
-(void)popMatrix;
-(void)popRenderState;
-(void)popState;
-(void)projection:(*void)arg0 ;
-(void)pushMatrix;
-(void)pushRenderState;
-(void)pushState;
-(void)replace:(*void)arg0 ;
-(void)resetBuffers;
-(void)scale:(*void)arg0 ;
-(void)setRenderHints:(*void)arg0 ;
-(void)setRenderState:(*void)arg0 ;
-(void)submit:(id)arg0 ;
-(void)translate:(*void)arg0 ;
-(void)updateRenderState;


@end


#endif