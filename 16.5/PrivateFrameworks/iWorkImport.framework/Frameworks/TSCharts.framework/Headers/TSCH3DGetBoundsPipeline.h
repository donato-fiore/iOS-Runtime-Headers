// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DGETBOUNDSPIPELINE_H
#define TSCH3DGETBOUNDSPIPELINE_H



#import "TSCH3DSceneRenderPipeline.h"

@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

@property (readonly, nonatomic) *void bounds;


+(id)pipelineWithScene:(id)arg0 ;
+(id)pipelineWithScene:(id)arg0 renderProcessor:(id)arg1 ;
-(BOOL)run;
-(BOOL)shouldSkipLabelsIfHidden;
-(BOOL)useIndividualBounds;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 renderProcessor:(id)arg1 ;
-(void)extend2DProjectedBounds:(*void)arg0 ;
-(void)get3DBounds:(id)arg0 ;
-(void)getBounds:(id)arg0 ;
-(void)getProjectedBounds:(id)arg0 ;
-(void)p_replaceSceneOfPipeline:(id)arg0 replacement:(id)arg1 duringBlock:(id)arg2 ;
-(void)runScene:(id)arg0 objectBlock:(id)arg1 ;
-(void)set2DProjectedRenderingMode:(BOOL)arg0 ;
-(void)setObjectRenderMode:(int)arg0 ;


@end


#endif