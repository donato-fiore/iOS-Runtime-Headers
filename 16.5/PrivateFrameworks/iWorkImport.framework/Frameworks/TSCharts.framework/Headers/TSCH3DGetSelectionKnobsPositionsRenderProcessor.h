// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DGETSELECTIONKNOBSPOSITIONSRENDERPROCESSOR_H
#define TSCH3DGETSELECTIONKNOBSPOSITIONSRENDERPROCESSOR_H

@class NSMutableArray;


#import "TSCH3DTransformGeometryRenderProcessor.h"
#import "TSCH3DGetSelectionKnobsPositionsPipelineDelegate.h"

@interface TSCH3DGetSelectionKnobsPositionsRenderProcessor : TSCH3DTransformGeometryRenderProcessor

@property (nonatomic) float normalizedKnobRadius; // ivar: _normalizedKnobRadius
@property (retain, nonatomic) NSMutableArray *projectedPoints; // ivar: _projectedPoints
@property (retain, nonatomic) TSCH3DGetSelectionKnobsPositionsPipelineDelegate *sceneObjectDelegate; // ivar: _sceneObjectDelegate


-(struct tmat4x4<float> )modelViewNormalizedProjection;
-(void)submit:(id)arg0 ;


@end


#endif