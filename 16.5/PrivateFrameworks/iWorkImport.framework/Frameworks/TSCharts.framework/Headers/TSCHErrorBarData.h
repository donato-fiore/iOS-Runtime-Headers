// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHERRORBARDATA_H
#define TSCHERRORBARDATA_H


#import <Foundation/Foundation.h>

#import "TSCHChartSeries.h"

@interface TSCHErrorBarData : NSObject {
    TSCHChartSeries *_series;
    BOOL _supportsXAxisBars;
    CGFloat _maxValue;
    CGFloat _minValue;
    CGFloat _maxValueScatterX;
    CGFloat _minValueScatterX;
    CGFloat _standardError;
    CGFloat _standardDeviation;
    CGFloat _standardDeviationMean;
    CGFloat _standardErrorScatterX;
    CGFloat _standardDeviationScatterX;
    CGFloat _standardDeviationMeanScatterX;
    BOOL _errorBarsInvalid;
}


@property (readonly, nonatomic) NSInteger maxValueGroupIndex; // ivar: _maxValueGroupIndex
@property (readonly, nonatomic) NSInteger minValueGroupIndex; // ivar: _minValueGroupIndex


+(BOOL)errorBarIsVerticalForAxisID:(id)arg0 series:(id)arg1 ;
+(BOOL)hasErrorBarsForSeries:(id)arg0 ;
+(NSInteger)errorBarTypeForAxisID:(id)arg0 series:(id)arg1 ;
+(NSInteger)p_errorBarSettingForSeries:(id)arg0 useXAxis:(BOOL)arg1 axisID:(id)arg2 ;
-(*CGFloat)p_createArrayOfSeriesOffsetsForAxisID:(id)arg0 count:(NSUInteger)arg1 ;
-(*CGFloat)p_createArrayOfSeriesValuesForAxisID:(id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)hasErrorDataForInputAxis:(id)arg0 outputAxis:(id)arg1 inputAxisContinuous:(BOOL)arg2 outputAxisContinuous:(BOOL)arg3 groupIndex:(NSUInteger)arg4 groupsCount:(NSUInteger)arg5 barVertical:(BOOL)arg6 barType:(NSInteger)arg7 outUnitValue:(struct CGPoint *)arg8 outUnitPositive:(struct CGPoint *)arg9 outUnitNegative:(struct CGPoint *)arg10 ;
-(BOOL)showErrorBarsForAxisID:(id)arg0 ;
-(CGFloat)maxValueForAxisID:(id)arg0 ;
-(CGFloat)minValueForAxisID:(id)arg0 ;
-(CGFloat)p_customErrorForAxisID:(id)arg0 valueIndex:(NSUInteger)arg1 positive:(BOOL)arg2 ;
-(CGFloat)p_errorForValue:(*CGFloat)arg0 onAxisID:(id)arg1 valueIndex:(NSUInteger)arg2 positive:(BOOL)arg3 ;
-(CGFloat)p_fixedErrorForAxisID:(id)arg0 ;
-(CGFloat)p_negativeErrorForValue:(*CGFloat)arg0 onAxisID:(id)arg1 valueIndex:(NSUInteger)arg2 ;
-(CGFloat)p_percentageErrorForAxisID:(id)arg0 ;
-(CGFloat)p_positiveErrorForValue:(*CGFloat)arg0 onAxisID:(id)arg1 valueIndex:(NSUInteger)arg2 ;
-(CGFloat)p_stdDevErrorForAxisID:(id)arg0 ;
-(CGFloat)p_stdDevFactorForAxisID:(id)arg0 ;
-(CGFloat)p_stdDevMeanForAxisID:(id)arg0 ;
-(CGFloat)p_stdErrorErrorForAxisID:(id)arg0 ;
-(NSInteger)p_errorBarSettingForAxisID:(id)arg0 value:(CGFloat)arg1 barType:(NSInteger)arg2 ;
-(NSInteger)p_errorBarTypeForAxisID:(id)arg0 ;
-(NSUInteger)p_stripBadValuesInArray:(*CGFloat)arg0 numberOfModelValues:(NSUInteger)arg1 ;
-(float)opacityForAxisID:(id)arg0 ;
-(id)initWithSeries:(id)arg0 ;
-(id)lineEndForAxisID:(id)arg0 ;
-(id)shadowForAxisID:(id)arg0 ;
-(id)strokeForAxisID:(id)arg0 ;
-(struct CGPoint )p_getValuePointForGroupIndex:(NSUInteger)arg0 inputAxis:(id)arg1 inputAxisContinuous:(BOOL)arg2 outputAxis:(id)arg3 barVertical:(BOOL)arg4 ;
-(void)invalidateData;
-(void)p_clearData;
-(void)p_updateDataForAxisID:(id)arg0 ;
-(void)p_updateMinMaxForAxisID:(id)arg0 forValues:(*CGFloat)arg1 withOffsets:(*CGFloat)arg2 numberOfModelValues:(NSUInteger)arg3 ;
-(void)p_updateMinMaxForStackedPercentageAxis:(id)arg0 forValues:(*CGFloat)arg1 withOffsets:(*CGFloat)arg2 numberOfModelValues:(NSUInteger)arg3 ;
-(void)p_updateStdDeviationForAxisID:(id)arg0 forValues:(*CGFloat)arg1 withOffsets:(*CGFloat)arg2 numberOfModelValues:(NSUInteger)arg3 ;
-(void)p_updateStdErrorForAxisID:(id)arg0 forValues:(*CGFloat)arg1 withOffsets:(*CGFloat)arg2 numberOfModelValues:(NSUInteger)arg3 ;
-(void)updateIfNeeded;


@end


#endif