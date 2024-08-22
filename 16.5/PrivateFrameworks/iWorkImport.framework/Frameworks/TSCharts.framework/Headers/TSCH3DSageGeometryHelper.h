// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSAGEGEOMETRYHELPER_H
#define TSCH3DSAGEGEOMETRYHELPER_H



#import "TSCHSageGeometryHelper.h"

@interface TSCH3DSageGeometryHelper : TSCHSageGeometryHelper



+(struct CGRect )computeSageChartAreaBoundsForChartInfo:(id)arg0 geometryRect:(struct CGRect )arg1 returningContainingViewportSize:(*id)arg2 ;
-(BOOL)p_hasValidContainingViewport;
-(struct CGRect )computeSageLayoutCBBForSpiceDoc:(BOOL)arg0 ;


@end


#endif