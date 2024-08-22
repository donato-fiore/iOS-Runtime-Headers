// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIANALYTICSUTIL_H
#define TIANALYTICSUTIL_H


#import <Foundation/Foundation.h>


@interface TIAnalyticsUtil : NSObject



+(BOOL)hasNonWhitespaceNonPunctuationText:(id)arg0 ;
+(BOOL)isArray:(id)arg0 ;
+(BOOL)isBoolean:(id)arg0 ;
+(BOOL)isDictionary:(id)arg0 ;
+(BOOL)isFloat:(id)arg0 ;
+(BOOL)isInteger:(id)arg0 ;
+(BOOL)isNumber:(id)arg0 ;
+(BOOL)isString:(id)arg0 ;
+(BOOL)isStylizedString:(id)arg0 equalToString:(id)arg1 ;
+(id)bucketNumber:(id)arg0 bucketThresholds:(id)arg1 bucketValues:(id)arg2 ;
+(id)bucketPercentageWithNumber:(id)arg0 ;
+(id)bucketPercentageWithNumerator:(id)arg0 andDenominator:(id)arg1 ;
+(id)bucketPercentageWithValue:(CGFloat)arg0 ;
+(id)bucketRatioWithNumber:(id)arg0 bucketCount:(int)arg1 ;
+(id)bucketRatioWithNumerator:(id)arg0 andDenominator:(id)arg1 bucketCount:(int)arg2 ;
+(id)bucketRatioWithValue:(CGFloat)arg0 bucketCount:(int)arg1 ;
+(id)constrainInteger:(id)arg0 toMinimum:(id)arg1 andMaximum:(id)arg2 ;
+(id)createStringByReplacingStylizedQuotesToStraightQuotes:(id)arg0 ;
+(id)indexesForValidRatiosInArray:(id)arg0 ;
+(id)roundCount:(id)arg0 toSignificantDigits:(NSInteger)arg1 ;
+(id)roundNumber:(id)arg0 toSignificantDigits:(id)arg1 ;
+(id)toFloat:(id)arg0 ;
+(id)toInteger:(id)arg0 ;
+(int)computeCommonExtentForArrays:(id)arg0 ;


@end


#endif