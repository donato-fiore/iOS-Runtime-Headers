// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTABSTRACTBARSCENEOBJECT_H
#define TSCH3DCHARTABSTRACTBARSCENEOBJECT_H



#import "TSCH3DChartElementSceneObject.h"

@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject



+(Class)propertiesClass;
+(void)setLowDetailedGeometriesForScene:(id)arg0 ;
-(BOOL)shouldRenderEachValue;
-(float)chartMinZForScene:(id)arg0 ;
-(float)depthForScene:(id)arg0 ;
-(struct tvec2<float> )p_valueLabelPaddingForLabelPosition:(unsigned int)arg0 ;
-(struct tvec3<float> )adjustedScaleForInfoChartScale:(*void)arg0 scene:(id)arg1 ;
-(struct tvec3<float> )sortingPositionForElement:(id)arg0 ;
-(void)renderLabelsSceneObject:(id)arg0 pipeline:(id)arg1 enumerator:(id)arg2 properties:(id)arg3 ;
-(void)renderSeriesLabelsSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(void)renderSeriesLabelsSceneObject:(id)arg0 pipeline:(id)arg1 enumerator:(id)arg2 properties:(id)arg3 ;
-(void)sortElements:(*id)arg0 pipeline:(id)arg1 ;
-(void)updateElementEffectsStates:(id)arg0 depthToWidthRatio:(float)arg1 ;
-(void)updateTilingEffect:(*void)arg0 series:(id)arg1 properties:(id)arg2 textureTiling:(id)arg3 areaSize:(*void)arg4 element:(*void)arg5 ;


@end


#endif