// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSCENEOBJECT_H
#define TSCH3DSCENEOBJECT_H


#import <Foundation/Foundation.h>


@interface TSCH3DSceneObject : NSObject



+(CGFloat)textRotationForChartInfo:(id)arg0 ;
+(id)renderCacheKey;
+(id)sceneObject;
+(void)setSelectionPath:(id)arg0 selectionMode:(int)arg1 forScene:(id)arg2 ;
-(BOOL)canEditTextForSelectionPath:(id)arg0 forInfo:(id)arg1 ;
-(BOOL)canRenderSelectionPath:(id)arg0 forInfo:(id)arg1 ;
-(Class)chartBoundsLayoutSceneDelegateClass;
-(float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg0 ;
-(id)convertSelectionPathTo3D:(id)arg0 path:(id)arg1 ;
-(id)renderInfoForSelectionPath:(id)arg0 info:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg0 scene:(id)arg1 pickedPoint:(id)arg2 ;
-(struct EdgeDetectionParameters )edgeDetectionParameters;
-(void)getBounds:(id)arg0 ;
-(void)getSceneObjectElementsBounds:(id)arg0 ;
-(void)getSelectionKnobsPositions:(id)arg0 ;
-(void)postGetBounds:(id)arg0 ;
-(void)postrender:(id)arg0 ;
-(void)prerender:(id)arg0 ;
-(void)primeRenderCaches:(id)arg0 ;
-(void)rayPick:(id)arg0 ;
-(void)render:(id)arg0 ;
-(void)statePreservedGetSceneObjectElementsBounds:(id)arg0 ;
-(void)statePreservedGetSelectionKnobsPositions:(id)arg0 ;
-(void)statePreservedPostrender:(id)arg0 ;
-(void)statePreservedPrerender:(id)arg0 ;
-(void)statePreservedPrimeRenderCaches:(id)arg0 ;
-(void)statePreservedRayPick:(id)arg0 ;
-(void)statePreservedRender:(id)arg0 ;


@end


#endif