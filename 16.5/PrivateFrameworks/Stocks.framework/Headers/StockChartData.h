// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOCKCHARTDATA_H
#define STOCKCHARTDATA_H

@class NSMutableDictionary, NSDictionary, NSArray, NSDate, NSTimeZone;

#import <Foundation/Foundation.h>

#import "Stock.h"

@interface StockChartData : NSObject {
    NSMutableDictionary *_imageSetCache;
    NSMutableDictionary *_yAxisLabelInfoCache;
    NSMutableDictionary *_xAxisLabelInfoCache;
    NSMutableDictionary *_labelPlacementCache;
}


@property (nonatomic) NSInteger chartInterval; // ivar: _chartInterval
@property (retain, nonatomic) NSDictionary *dataSeriesDict; // ivar: _dataSeriesDict
@property (nonatomic) CGFloat expirationTime; // ivar: _expirationTime
@property (nonatomic) BOOL hasVolume; // ivar: _hasVolume
@property (retain, nonatomic) NSArray *interestingIndexes; // ivar: _interestingIndexes
@property (nonatomic) BOOL isUnavailable; // ivar: _isUnavailable
@property (retain, nonatomic) NSDate *marketCloseDate; // ivar: _marketCloseDate
@property (retain, nonatomic) NSDate *marketOpenDate; // ivar: _marketOpenDate
@property (retain, nonatomic) NSTimeZone *marketTimeZone; // ivar: _marketTimeZone
@property (nonatomic) *? maxValue; // ivar: _maxValue
@property (nonatomic) *? minValue; // ivar: _minValue
@property (nonatomic) float previousClosePrice; // ivar: _previousClosePrice
@property (weak, nonatomic) Stock *stock; // ivar: _stock
@property (readonly) unsigned int stockValueCount; // ivar: _stockValueCount
@property (readonly) *? stockValues; // ivar: _stockValues
@property (nonatomic) int yAxisFractionDigits; // ivar: _yAxisFractionDigits


-(NSInteger)labelPlacementForDisplayMode:(id)arg0 ;
-(id)description;
-(id)imageSetForDisplayMode:(id)arg0 ;
-(id)initWithStock:(id)arg0 interval:(NSInteger)arg1 ;
-(id)xAxisLabelInfoArrayForMode:(id)arg0 ;
-(id)yAxisLabelInfoArrayForMode:(id)arg0 ;
-(struct ? *)allocateStockValuesWithCount:(unsigned int)arg0 ;
-(void)clearAllImageSets;
-(void)dealloc;
-(void)setImageSet:(id)arg0 forDisplayMode:(id)arg1 ;
-(void)setLabelPlacement:(NSInteger)arg0 forDisplayMode:(id)arg1 ;
-(void)setXAxisLabelInfoArray:(id)arg0 forDisplayMode:(id)arg1 ;
-(void)setYAxisLabelInfoArray:(id)arg0 forDisplayMode:(id)arg1 ;


@end


#endif