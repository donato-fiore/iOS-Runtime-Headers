// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTABSTRACTAREALAYOUTITEM_H
#define TSCHCHARTABSTRACTAREALAYOUTITEM_H

@class NSDictionary;


#import "TSCHChartLayoutItem.h"

@interface TSCHChartAbstractAreaLayoutItem : TSCHChartLayoutItem

@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (readonly, nonatomic) CGRect titleFrame;


-(struct CGRect )calcDrawingRect;


@end


#endif