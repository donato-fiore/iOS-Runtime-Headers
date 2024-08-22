// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTSTACKEDAREASCENEOBJECT_H
#define TSCH3DCHARTSTACKEDAREASCENEOBJECT_H



#import "TSCH3DChartAreaSceneObject.h"

@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject



+(BOOL)supportsChartSeriesDepthOffset;
+(float)chartSeriesDepth;
+(float)chartSeriesPolygonOffset;
+(float)depthLimitFactorForSeriesCount:(NSInteger)arg0 maxLimitingSeries:(NSInteger)arg1 ;
+(id)chartSeriesType;
-(BOOL)transparencyDepthMask;
-(float)depthForScene:(id)arg0 ;
-(void)sortElements:(*id)arg0 pipeline:(id)arg1 ;


@end


#endif