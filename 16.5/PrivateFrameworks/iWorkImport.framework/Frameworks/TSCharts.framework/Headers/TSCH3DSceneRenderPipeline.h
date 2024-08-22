// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSCENERENDERPIPELINE_H
#define TSCH3DSCENERENDERPIPELINE_H

@class NSNumber;


#import "TSCH3DRenderPipeline.h"
#import "TSCH3DScene.h"
#import "TSCH3DFramebuffer.h"
#import "TSCH3DSceneRenderSetup.h"
#import "TSCH3DCamera.h"
#import "TSCH3DSceneRenderPipeline.h"

@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline {
    TSCH3DScene *_scene;
    TSCH3DFramebuffer *_framebuffer;
    TSCH3DSceneRenderSetup *_setup;
    TSCH3DCamera *_camera;
    NSNumber *_scale;
    NSNumber *_samples;
    NSNumber *_superSamples;
    NSNumber *_preserveFramebufferContent;
}


@property (readonly, nonatomic) TSCH3DCamera *camera;
@property (retain, nonatomic) TSCH3DFramebuffer *framebuffer;
@property (retain, nonatomic) TSCH3DSceneRenderPipeline *original; // ivar: _original
@property (nonatomic) BOOL preserveFramebufferContent;
@property (readonly, nonatomic) float renderScale;
@property (nonatomic) float samples;
@property (nonatomic) float scale;
@property (retain, nonatomic) TSCH3DScene *scene;
@property (retain, nonatomic) TSCH3DSceneRenderSetup *setup;
@property (nonatomic) float superSamples;


+(id)pipelineWithProcessor:(id)arg0 session:(id)arg1 scene:(id)arg2 ;
-(BOOL)activateFramebuffer:(id)arg0 ;
-(BOOL)render;
-(BOOL)renderWithFramebuffer:(id)arg0 ;
-(BOOL)run;
-(BOOL)shouldSkipLabelsIfHidden;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg0 ;
-(id)baseRecloneWithProcessor:(id)arg0 scene:(id)arg1 ;
-(id)baseRecloneWithRetargetProcessor:(id)arg0 scene:(id)arg1 ;
-(id)cloneWithProcessor:(id)arg0 scene:(id)arg1 ;
-(id)cloneWithRetargetProcessor:(id)arg0 scene:(id)arg1 ;
-(id)concreteSetup;
-(id)initWithProcessor:(id)arg0 session:(id)arg1 scene:(id)arg2 ;
-(id)labelsMeshRendererForLabelsRenderer:(id)arg0 ;
-(id)processor;
-(id)recloneWithPipelineClass:(Class)arg0 processor:(id)arg1 scene:(id)arg2 ;
-(id)recloneWithPipelineClass:(Class)arg0 retargetProcessor:(id)arg1 scene:(id)arg2 ;
-(id)session;
-(struct tvec4<float> )backgroundClearColor;
-(void)clearCamera;
-(void)clearFramebuffer;
-(void)setObjectRenderMode:(int)arg0 ;
-(void)setupCamera:(id)arg0 ;


@end


#endif