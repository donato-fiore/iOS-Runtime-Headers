// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSAGEGEOMETRYHELPERLIMITINGSERIESUPGRADER_H
#define TSCH3DSAGEGEOMETRYHELPERLIMITINGSERIESUPGRADER_H



#import "TSCH3DAbstractLimitingSeriesUpgrader.h"
#import "TSCH3DChartBoundsLayout.h"
#import "TSCH3DChartResizerHelper.h"

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader

@property (readonly, nonatomic) TSCH3DChartBoundsLayout *boundsLayout; // ivar: _boundsLayout
@property (readonly, nonatomic) TSCH3DChartResizerHelper *resizerHelper; // ivar: _resizerHelper


-(id)boundsLayoutByResizingToLayoutSize:(*void)arg0 ;
-(id)containingViewportByResizingScene:(id)arg0 toResizingFrame:(struct CGRect )arg1 ;
-(id)sceneResetWithLayoutSettings:(struct ? )arg0 ;
-(struct CGRect )oldResizingFrame;


@end


#endif