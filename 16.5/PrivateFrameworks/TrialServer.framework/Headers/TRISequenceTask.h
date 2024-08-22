// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISEQUENCETASK_H
#define TRISEQUENCETASK_H

@class NSString, NSArray, NSDate;
@protocol TRIRetryableTask, TRIMetricsProviding, TRITask, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRISequenceTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding>

 {
    id<TRITask> *_task;
    id<TRITask> *_dependentTask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<TRITask> *lastTask;
@property (nonatomic) int retryCount;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;
@property BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)_isTask:(id)arg0 equalTo:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)task;
-(BOOL)isEqual:(id)arg0 ;
-(id)_asPersistedTask;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTask:(id)arg0 dependency:(id)arg1 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)addTaskToEndOfSequence:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif