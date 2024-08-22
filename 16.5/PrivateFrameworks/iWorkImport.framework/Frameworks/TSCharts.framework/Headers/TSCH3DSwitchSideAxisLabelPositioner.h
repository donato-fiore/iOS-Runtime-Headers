// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSWITCHSIDEAXISLABELPOSITIONER_H
#define TSCH3DSWITCHSIDEAXISLABELPOSITIONER_H



#import "TSCH3DGenericAxisLabelPositioner.h"

@interface TSCH3DSwitchSideAxisLabelPositioner : TSCH3DGenericAxisLabelPositioner



-(NSInteger)p_otherAxis;
-(struct tvec3<float> )positionForValue:(CGFloat)arg0 count:(NSUInteger)arg1 chartDirection:(*void)arg2 ;
-(unsigned int)alignmentForChartDirection:(*void)arg0 ;


@end


#endif