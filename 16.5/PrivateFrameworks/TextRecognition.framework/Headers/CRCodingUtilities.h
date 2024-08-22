// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCODINGUTILITIES_H
#define CRCODINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface CRCodingUtilities : NSObject



+(BOOL)boolFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(BOOL)checkValidRange:(struct _NSRange )arg0 forDataLength:(NSUInteger)arg1 ;
+(CGFloat)cgFloatFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(NSInteger)integerFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(NSUInteger)unsignedIntegerFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(float)floatFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(id)arrayFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 objectProviderBlock:(id)arg2 ;
+(id)ddScannerResultFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(id)encodingDataForBool:(BOOL)arg0 ;
+(id)encodingDataForCGFloat:(CGFloat)arg0 ;
+(id)encodingDataForCodable:(id)arg0 ;
+(id)encodingDataForFloat:(float)arg0 ;
+(id)encodingDataForInteger:(NSInteger)arg0 ;
+(id)encodingDataForPoint:(struct CGPoint )arg0 ;
+(id)encodingDataForRange:(struct _NSRange )arg0 ;
+(id)encodingDataForRect:(struct CGRect )arg0 ;
+(id)encodingDataForSize:(struct CGSize )arg0 ;
+(id)encodingDataForUInteger:(NSUInteger)arg0 ;
+(id)objectDataFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(id)stringFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(struct CGPoint )pointFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(struct CGRect )rectFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(struct CGSize )sizeFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(struct _NSRange )rangeFromEncodingData:(id)arg0 offset:(*NSUInteger)arg1 ;
+(void)appendBool:(BOOL)arg0 toData:(id)arg1 ;
+(void)appendCGFloat:(CGFloat)arg0 toData:(id)arg1 ;
+(void)appendCodable:(id)arg0 toData:(id)arg1 ;
+(void)appendFloat:(float)arg0 toData:(id)arg1 ;
+(void)appendInteger:(NSInteger)arg0 toData:(id)arg1 ;
+(void)appendPoint:(struct CGPoint )arg0 toData:(id)arg1 ;
+(void)appendRange:(struct _NSRange )arg0 toData:(id)arg1 ;
+(void)appendRect:(struct CGRect )arg0 toData:(id)arg1 ;
+(void)appendSize:(struct CGSize )arg0 toData:(id)arg1 ;
+(void)appendUInteger:(NSUInteger)arg0 toData:(id)arg1 ;


@end


#endif