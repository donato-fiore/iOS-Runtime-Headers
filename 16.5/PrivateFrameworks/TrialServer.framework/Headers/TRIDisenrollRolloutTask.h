// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIDISENROLLROLLOUTTASK_H
#define TRIDISENROLLROLLOUTTASK_H

@class NSString, _PASLock, NSArray, NSDate;
@protocol TRITask, TRIMetricsProviding, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIDisenrollRolloutTask : TRIBaseTask <TRITask, TRIMetricsProviding>

 {
    NSString *_rolloutId;
    NSUInteger _triggerEvent;
    _PASLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithRolloutId:(id)arg0 ;
+(id)taskWithRolloutId:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)dimensions;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRolloutId:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)addMetric:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeTelemetry:(id)arg0 ;


@end


#endif