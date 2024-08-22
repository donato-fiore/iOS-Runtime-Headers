// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DRAYPICKPIPELINEDELEGATE_H
#define TSCH3DRAYPICKPIPELINEDELEGATE_H

@class NSString;
@protocol TSCH3DChartAllSceneObjectDelegate;

#import <Foundation/Foundation.h>

#import "TSCH3DSceneObject.h"

@interface TSCH3DRayPickPipelineDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate>



@property (nonatomic) tvec2<int> currentElement; // ivar: _currentElement
@property (retain, nonatomic) TSCH3DSceneObject *currentSceneObject; // ivar: _currentSceneObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(BOOL)willBeginProcessingSceneObject:(id)arg0 ;
-(BOOL)willProcessElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willProcessElements:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willProcessSeries:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willRenderElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willSubmitElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willSubmitLabelForSceneObject:(id)arg0 labelRenderInfo:(id)arg1 ;
-(BOOL)willSubmitLabelType:(int)arg0 boundsIndex:(NSInteger)arg1 alignment:(NSUInteger)arg2 elementIndex:(NSUInteger)arg3 forSceneObject:(id)arg4 ;
-(BOOL)willSubmitSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(id)arg0 sceneObject:(id)arg1 ;
-(struct ElementRenderPass )renderPassForElement:(id)arg0 sceneObject:(id)arg1 ;
-(struct ElementRenderPass )renderPassForSceneObject:(id)arg0 ;
-(void)didEndProcessingSceneObject:(id)arg0 ;
-(void)didGenerateShaderEffects:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(*void)arg0 effects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didSubmitSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)didTransformElement:(id)arg0 sceneObject:(id)arg1 ;
-(void)labelsResourcesSessionWillBeginForSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)labelsResourcesSessionWillEndForSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)setOffset:(*void)arg0 labelType:(int)arg1 boundsIndex:(NSInteger)arg2 forSceneObject:(id)arg3 ;
-(void)updateExternalLabelAttribute:(id)arg0 sceneObject:(id)arg1 labelRenderInfo:(id)arg2 ;


@end


#endif