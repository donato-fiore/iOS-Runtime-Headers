// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHLEGENDMODELCACHE_H
#define TSCHLEGENDMODELCACHE_H

@class NSArray, TSWPParagraphStyle, TSDShadow, TSDStroke;
@protocol TSWPStyleProviding;

#import <Foundation/Foundation.h>

#import "TSCHLegendCellMetrics.h"
#import "TSCHLegendViewCache.h"

@interface TSCHLegendModelCache : NSObject {
    id<TSWPStyleProviding> *_styleProvidingSource;
    TSCHLegendCellMetrics *_metrics;
    CGFloat _lastLegendWidth;
    TSCHLegendViewCache *_lastLegendViewCache;
}


@property (readonly) NSUInteger cellCount; // ivar: _cellCount
@property (readonly) NSArray *cells; // ivar: _cells
@property (readonly) CGFloat effectiveStrokeWidth; // ivar: _effectiveStrokeWidth
@property (readonly) id *fill; // ivar: _fill
@property (readonly) CGFloat horizontalCellSpacing; // ivar: _horizontalCellSpacing
@property (readonly) CGSize largestCellSize; // ivar: _largestCellSize
@property (readonly) BOOL legendIsRTL; // ivar: _legendIsRTL
@property (readonly) BOOL legendOn; // ivar: _legendOn
@property (readonly) CGFloat opacity; // ivar: _opacity
@property (readonly) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly) BOOL reverseSingleColumnLegendOrder; // ivar: _reverseSingleColumnLegendOrder
@property (readonly) TSDShadow *shadow; // ivar: _shadow
@property (readonly) TSDStroke *stroke; // ivar: _stroke
@property (readonly) CGFloat symbolGap; // ivar: _symbolGap
@property (readonly) CGFloat verticalCellSpacing; // ivar: _verticalCellSpacing


-(id)cellForSeriesIndex:(NSUInteger)arg0 cellType:(int)arg1 ;
-(id)initWithChartModel:(id)arg0 textEditingSelectionPair:(id)arg1 styleProvidingSource:(id)arg2 ;
-(id)viewCacheForWidth:(CGFloat)arg0 ;


@end


#endif