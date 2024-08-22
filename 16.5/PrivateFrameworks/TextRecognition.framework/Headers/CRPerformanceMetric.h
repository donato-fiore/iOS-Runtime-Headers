// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRPERFORMANCEMETRIC_H
#define CRPERFORMANCEMETRIC_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CRPerformanceMetric : NSObject <NSCopying>



@property CGFloat M2; // ivar: _M2
@property CGFloat denominator; // ivar: _denominator
@property (copy) NSString *displayName; // ivar: _displayName
@property CGFloat first; // ivar: _first
@property CGFloat max; // ivar: _max
@property CGFloat min; // ivar: _min
@property NSInteger numSamples; // ivar: _numSamples
@property NSUInteger pcMetricID; // ivar: _pcMetricID
@property (copy) NSString *serializationKey; // ivar: _serializationKey
@property CGFloat sumX; // ivar: _sumX
@property (copy) NSString *unit; // ivar: _unit
@property (readonly) CGFloat variance;
@property CGFloat welfordMean; // ivar: _welfordMean


+(id)metricWithDisplayName:(id)arg0 unit:(id)arg1 denominator:(CGFloat)arg2 serializationKey:(id)arg3 ;
+(id)pcMetricWithDisplayName:(id)arg0 pcMetricID:(NSUInteger)arg1 unit:(id)arg2 denominator:(CGFloat)arg3 serializationKey:(id)arg4 ;
-(CGFloat)mean;
-(CGFloat)stdDev;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 key:(id)arg1 ;
-(id)initWithDisplayName:(id)arg0 unit:(id)arg1 denominator:(CGFloat)arg2 serializationKey:(id)arg3 ;
-(void)addSample:(CGFloat)arg0 ;
-(void)mergeMetric:(id)arg0 ;


@end


#endif