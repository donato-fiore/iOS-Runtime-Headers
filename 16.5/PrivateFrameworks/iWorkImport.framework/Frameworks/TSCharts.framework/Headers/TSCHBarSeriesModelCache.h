// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHBARSERIESMODELCACHE_H
#define TSCHBARSERIESMODELCACHE_H

@class TSWPParagraphStyle, TSDShadow, TSDStroke;

#import <Foundation/Foundation.h>

#import "TSCHChartAxis.h"
#import "TSCHChartSeries.h"
#import "TSCHChartValueAxis.h"

@interface TSCHBarSeriesModelCache : NSObject

@property (readonly) CGFloat barGapRatio; // ivar: _barGapRatio
@property (readonly) CGFloat barGroupGapRatio; // ivar: _barGroupGapRatio
@property (readonly) CGFloat barWidthRatio; // ivar: _barWidthRatio
@property (readonly) id *fill; // ivar: _fill
@property (readonly) TSCHChartAxis *groupAxis; // ivar: _groupAxis
@property (readonly) unsigned int labelPosition; // ivar: _labelPosition
@property (readonly) CGFloat opacity; // ivar: _opacity
@property (readonly) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly) TSCHChartSeries *series; // ivar: _series
@property (readonly) NSUInteger seriesIndex; // ivar: _seriesIndex
@property (readonly) TSDShadow *shadow; // ivar: _shadow
@property (readonly) TSDStroke *stroke; // ivar: _stroke
@property (readonly) CGFloat unitSpaceIntercept; // ivar: _unitSpaceIntercept
@property (readonly) TSCHChartValueAxis *valueAxis; // ivar: _valueAxis
@property (readonly) BOOL valueLabelsOn; // ivar: _valueLabelsOn


-(id)initWithChartModel:(id)arg0 forSeries:(NSUInteger)arg1 ;


@end


#endif