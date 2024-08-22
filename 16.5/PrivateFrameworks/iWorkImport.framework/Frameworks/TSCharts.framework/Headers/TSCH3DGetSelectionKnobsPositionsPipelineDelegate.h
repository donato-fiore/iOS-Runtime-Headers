// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DGETSELECTIONKNOBSPOSITIONSPIPELINEDELEGATE_H
#define TSCH3DGETSELECTIONKNOBSPOSITIONSPIPELINEDELEGATE_H

@class TSCH3DChartRep, NSArray, NSMutableDictionary, NSString, NSMutableArray;
@protocol TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate, TSCH3DChartElementSceneObjectGeometryDelegate;

#import <Foundation/Foundation.h>

#import "TSCH3DScene.h"
#import "TSCH3DGeometry.h"

@interface TSCH3DGetSelectionKnobsPositionsPipelineDelegate : NSObject <TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate, TSCH3DChartElementSceneObjectGeometryDelegate>

 {
    TSCH3DChartRep *_rep;
    NSArray *_selection;
    NSMutableDictionary *_labelsBoundsForMerging;
    TSCH3DScene *_scene;
    int _currentLabelType;
    int _knobsMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSCH3DGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *projectedPoints; // ivar: _projectedPoints
@property (readonly, nonatomic) BOOL shouldMerge;
@property (readonly) Class superclass;


-(BOOL)p_labelSelectedForType:(int)arg0 alignment:(NSUInteger)arg1 elementIndex:(NSInteger)arg2 ;
-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(BOOL)willBeginProcessingSceneObject:(id)arg0 ;
-(BOOL)willProcessElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willProcessElements:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willProcessSeries:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willRenderElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willSubmitElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willSubmitGeometry:(id)arg0 ;
-(BOOL)willSubmitLabelForSceneObject:(id)arg0 labelRenderInfo:(id)arg1 ;
-(BOOL)willSubmitLabelType:(int)arg0 boundsIndex:(NSInteger)arg1 alignment:(NSUInteger)arg2 elementIndex:(NSUInteger)arg3 forSceneObject:(id)arg4 ;
-(BOOL)willSubmitSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(id)arg0 sceneObject:(id)arg1 ;
-(id)initWithRep:(id)arg0 selection:(id)arg1 ;
-(id)p_selectedSeries;
-(struct ElementRenderPass )renderPassForElement:(id)arg0 sceneObject:(id)arg1 ;
-(struct ElementRenderPass )renderPassForSceneObject:(id)arg0 ;
-(void)addLabelBoundsForMerging:(struct CGRect )arg0 ;
-(void)didEndProcessingSceneObject:(id)arg0 ;
-(void)didGenerateShaderEffects:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(*void)arg0 effects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didRunForScene:(id)arg0 pipeline:(id)arg1 ;
-(void)didSubmitSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)didTransformElement:(id)arg0 sceneObject:(id)arg1 ;
-(void)labelsResourcesSessionWillBeginForSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)labelsResourcesSessionWillEndForSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)setOffset:(*void)arg0 labelType:(int)arg1 boundsIndex:(NSInteger)arg2 forSceneObject:(id)arg3 ;
-(void)updateExternalLabelAttribute:(id)arg0 sceneObject:(id)arg1 labelRenderInfo:(id)arg2 ;
-(void)willRunForScene:(id)arg0 pipeline:(id)arg1 ;


@end


#endif