// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTPOLARANGLEGRIDLINEAXISRENDERER_H
#define TSCHCHARTPOLARANGLEGRIDLINEAXISRENDERER_H



#import "TSCHChartAxisRenderer.h"

@interface TSCHChartPolarAngleGridlineAxisRenderer : TSCHChartAxisRenderer



-(void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect )arg2 ;
-(void)p_addTickmarkPaths:(struct CGContext *)arg0 axis:(id)arg1 locations:(id)arg2 stroke:(id)arg3 width:(float)arg4 isMinor:(BOOL)arg5 ;


@end


#endif