// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTMODELENUMERATOR_H
#define TSCH3DCHARTMODELENUMERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TSCHChartAxis.h"
#import "TSCH3DChartType.h"
#import "TSCHChartInfo.h"
#import "TSCHChartModel.h"
#import "TSCHChartSeries.h"
#import "TSCHChartSeriesType.h"

@interface TSCH3DChartModelEnumerator : NSObject {
    vector<double, std::allocator<double>> _seriesValues;
    vector<double, std::allocator<double>> _coordinateValues;
    NSArray *_seriesList;
    NSUInteger _numberOfValues;
    TSCHChartAxis *_coordinateAxis;
    TSCHChartAxis *_valueAxis;
    CGFloat _intercept;
    CGFloat _unitSpaceIntercept;
    ValueEnumerator _seriesEnumerator;
    ValueEnumerator _coordinateEnumerator;
}


@property (readonly, nonatomic) TSCH3DChartType *chartType; // ivar: _chartType
@property (readonly, nonatomic) TSCHChartInfo *info;
@property (readonly, nonatomic) TSCHChartModel *model; // ivar: _model
@property (readonly, nonatomic) TSCHChartSeries *series;
@property (readonly, nonatomic) TSCHChartSeriesType *seriesType; // ivar: _seriesType
@property (readonly, nonatomic) tvec2<int> size;


+(id)enumeratorWithModel:(id)arg0 chartType:(id)arg1 seriesType:(id)arg2 ;
-(BOOL)isStackedPercentageThatRoundsDownToZero;
-(BOOL)isValid;
-(BOOL)isValidNonZero;
-(BOOL)showSeriesName;
-(BOOL)showValueLabels;
-(BOOL)skipZeroValues;
-(CGFloat)axisSpaceValue;
-(CGFloat)groupValue;
-(CGFloat)intercept;
-(CGFloat)unitSpaceIntercept;
-(CGFloat)unitSpaceValue;
-(CGFloat)unitSpaceValueForAxisValue:(CGFloat)arg0 ;
-(NSUInteger)countSeries;
-(NSUInteger)elementIndex;
-(NSUInteger)index;
-(NSUInteger)numberOfSeries;
-(id)elementEnumerator;
-(id)initWithModel:(id)arg0 chartType:(id)arg1 seriesType:(id)arg2 ;
-(id)nextElement;
-(id)nextElement:(NSUInteger)arg0 ;
-(id)nextSeries;
-(id)nextSeries:(NSUInteger)arg0 ;
-(id)p_resetCoordinateEnumeration;
-(id)reverseSeriesEnumerator;
-(id)valueString;
-(id)valueStringForLabelResources:(id)arg0 ;
-(struct tvec2<int> )position;
-(unsigned int)valueLabelPositionForAxisValue:(CGFloat)arg0 ;
-(void)resetForReverseSeriesEnumeration:(BOOL)arg0 ;
-(void)updateAxes;
-(void)updateValue;


@end


#endif