// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTSTACKEDBARSCENEOBJECT_H
#define TSCH3DCHARTSTACKEDBARSCENEOBJECT_H



#import "TSCH3DChartStackedColumnSceneObject.h"

@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject



+(BOOL)isHorizontalChart;
+(BOOL)isStacked;
+(id)chartSeriesType;
+(id)partWithEnumerator:(id)arg0 layoutSettings:(struct ? )arg1 ;
-(struct tvec2<float> )labelObjectSpacePosition:(unsigned int)arg0 axisValue:(CGFloat)arg1 intercept:(CGFloat)arg2 ;
-(void)updateLightingEffectsState:(id)arg0 scene:(id)arg1 ;


@end


#endif