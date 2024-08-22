// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSPARENCYANALYTICS_H
#define TRANSPARENCYANALYTICS_H


#import <Foundation/Foundation.h>

#import "TransparencySFAnalytics.h"

@interface TransparencyAnalytics : NSObject

@property (retain) TransparencySFAnalytics *sfanalytics; // ivar: _sfanalytics


+(BOOL)doWithAnalyticsForEventName:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
+(BOOL)hasInternalDiagnostics;
+(NSUInteger)doKTResultWithAnalyticsForEventName:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
+(NSUInteger)doKTResultWithAnalyticsForEventName:(id)arg0 validateType:(NSUInteger)arg1 error:(*id)arg2 block:(id)arg3 ;
+(id)analyticsApplications;
+(id)analyticsErrorData:(id)arg0 ;
+(id)errorChain:(id)arg0 depth:(NSUInteger)arg1 ;
+(id)formatEventName:(id)arg0 application:(id)arg1 ;
+(id)logger;
-(BOOL)skipLogResult:(id)arg0 ;
-(id)dailyMetrics;
-(id)datePropertyForKey:(id)arg0 ;
-(id)failureKey:(id)arg0 ;
-(id)fuzzyTimeSinceDateKey:(id)arg0 ;
-(id)fuzzyTimeSinceLastSuccess:(id)arg0 ;
-(id)numberPropertyForKey:(id)arg0 ;
-(void)addMultiSamplerForName:(id)arg0 withTimeInterval:(CGFloat)arg1 block:(id)arg2 ;
-(void)incrementIntegerPropertyForKey:(id)arg0 ;
-(void)logHardFailureForEventNamed:(id)arg0 withAttributes:(id)arg1 ;
-(void)logMetric:(id)arg0 withName:(id)arg1 ;
-(void)logResultForEvent:(id)arg0 hardFailure:(BOOL)arg1 result:(id)arg2 ;
-(void)logResultForEvent:(id)arg0 hardFailure:(BOOL)arg1 result:(id)arg2 withAttributes:(id)arg3 ;
-(void)logSoftFailureForEventNamed:(id)arg0 withAttributes:(id)arg1 ;
-(void)logSuccessForEventNamed:(id)arg0 ;
-(void)noteEventNamed:(id)arg0 ;
-(void)removeMultiSamplerForName:(id)arg0 ;
-(void)setDateProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setFailureNowForPropertyKey:(id)arg0 ;
-(void)setMetricsAccountID:(id)arg0 ;
-(void)setNumberProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setSuccessNowForPropertyKey:(id)arg0 ;
-(void)updateCollectionConfigurationWithData:(id)arg0 ;


@end


#endif