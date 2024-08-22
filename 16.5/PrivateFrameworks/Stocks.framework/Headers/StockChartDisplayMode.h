// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOCKCHARTDISPLAYMODE_H
#define STOCKCHARTDISPLAYMODE_H

@class NSString, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface StockChartDisplayMode : NSObject <NSCopying>

 {
    NSString *_hash;
}


@property (nonatomic) BOOL HUDEnabled; // ivar: _HUDEnabled
@property (retain, nonatomic) UIColor *axisLabelsColor; // ivar: _axisLabelsColor
@property (nonatomic) *CGGradient backgroundGradient; // ivar: _backgroundGradient
@property (retain, nonatomic) UIColor *backgroundLinesColor; // ivar: _backgroundLinesColor
@property (nonatomic) UIEdgeInsets chartRenderingInsets; // ivar: _chartRenderingInsets
@property (nonatomic) CGSize chartSize; // ivar: _chartSize
@property (nonatomic) BOOL graphOverlapsYAxisLabels; // ivar: _graphOverlapsYAxisLabels
@property (readonly, nonatomic) CGFloat gutterHeight;
@property (nonatomic) NSUInteger horizontalGridlineCount; // ivar: _horizontalGridlineCount
@property (nonatomic) CGFloat intervalRowHeight; // ivar: _intervalRowHeight
@property (retain, nonatomic) UIColor *lineColor; // ivar: _lineColor
@property (readonly, nonatomic) CGFloat lineGraphBottomPadding;
@property (nonatomic) UIEdgeInsets lineGraphInsets; // ivar: _lineGraphInsets
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) NSInteger maxInterval; // ivar: _maxInterval
@property (nonatomic) BOOL showsPriceLabelForPreviousClose; // ivar: _showsPriceLabelForPreviousClose
@property (nonatomic) CGFloat showsTitle; // ivar: _showsTitle
@property (nonatomic) BOOL showsVolume; // ivar: _showsVolume
@property (nonatomic) BOOL usesDetailedAxisLabels; // ivar: _usesDetailedAxisLabels
@property (nonatomic) CGFloat volumeHeight; // ivar: _volumeHeight
@property (retain, nonatomic) UIColor *xAxisKeylineColor; // ivar: _xAxisKeylineColor
@property (nonatomic) NSUInteger yAxisLabelCount; // ivar: _yAxisLabelCount


+(id)defaultDisplayMode;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif