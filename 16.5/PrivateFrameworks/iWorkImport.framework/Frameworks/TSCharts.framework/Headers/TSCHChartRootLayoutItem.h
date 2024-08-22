// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTROOTLAYOUTITEM_H
#define TSCHCHARTROOTLAYOUTITEM_H

@class NSDictionary;
@protocol TSWPStyleProviding;


#import "TSCHChartLayoutItem.h"
#import "TSCHChartInfo.h"
#import "TSCHChartAbstractAreaLayoutItem.h"
#import "TSCHLegendAreaLayoutItem.h"
#import "TSCHChartModel.h"

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem {
    TSCHChartInfo *_chartInfo;
    id<TSWPStyleProviding> *_styleProvidingSource;
    TSCHChartAbstractAreaLayoutItem *_chartArea;
    TSCHLegendAreaLayoutItem *_legend;
    ? _layoutSettings;
    CGRect _legendInnerFrame;
    CGRect _chartInnerFrame;
    BOOL _inResize;
    CGSize _startingSize;
    TSCHChartModel *_chartModel;
}


@property (readonly, nonatomic) TSCHChartAbstractAreaLayoutItem *chartAreaLayoutItem;
@property (nonatomic) NSUInteger dataSetIndex;
@property (readonly, nonatomic) TSCHLegendAreaLayoutItem *legendAreaLayoutItem;
@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions; // ivar: _seriesIndexedPieWedgeExplosions


-(BOOL)isInResize;
-(id)chartInfo;
-(id)initWithChartInfo:(id)arg0 styleProvidingSource:(id)arg1 ;
-(id)model;
-(id)renderersWithRep:(id)arg0 ;
-(id)root;
-(id)styleProvidingSource;
-(struct ? )layoutSettings;
-(struct CGPoint )bottomLegendOffsetForChartAreaFrame:(struct CGRect )arg0 legendFrame:(struct CGRect )arg1 ;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )calcOverhangRect;
-(struct CGSize )startingSize;
-(void)beginResizeWithStartingSize:(struct CGSize )arg0 ;
-(void)buildSubTree;
-(void)clearAll;
-(void)endResizeOperation;
-(void)invalidateSeriesIndexedPieWedgeExplosions;
-(void)invalidateTransientModel;
-(void)layoutInward;
-(void)layoutOutward;
-(void)p_updatePieWedgeExplosionsFromModel;
-(void)positionLegendAtBottom;
-(void)setChartBodySize:(struct CGSize )arg0 ;
-(void)setChartInnerFrame:(struct CGRect )arg0 legendInnerFrame:(struct CGRect )arg1 ;
-(void)setLayoutSettings:(struct ? )arg0 ;
-(void)setLegendSize:(struct CGSize )arg0 ;
-(void)updateLayoutOffset;
-(void)updateLayoutSize;
-(void)updateSizeDuringResizeTo:(struct CGSize )arg0 ;


@end


#endif