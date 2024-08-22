// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIACTIVATETREATMENTTASK_H
#define TRIACTIVATETREATMENTTASK_H

@class TRIMetric, NSString, NSArray, NSDate;
@protocol TRIRetryableTask, TRITaskQueueStateProviding;


#import "TRIActivateTreatmentBaseTask.h"
#import "TRITaskCapabilityModifier.h"
#import "TRITaskOptions.h"

@interface TRIActivateTreatmentTask : TRIActivateTreatmentBaseTask <TRIRetryableTask>

 {
    TRIMetric *_treatmentMetric;
    TRITaskCapabilityModifier *_capabilityModifier;
    TRITaskOptions *_taskOptions;
    NSString *_bmltBatchNotificationId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int retryCount; // ivar: retryCount
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;
@property (nonatomic) BOOL testingIgnoreDependencies; // ivar: _testingIgnoreDependencies
@property BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithExperiment:(id)arg0 treatmentId:(id)arg1 taskAttributing:(id)arg2 requiresTreatmentInstallation:(BOOL)arg3 capabilityModifier:(id)arg4 startTime:(id)arg5 taskOptions:(id)arg6 ;
+(id)taskWithExperiment:(id)arg0 treatmentId:(id)arg1 taskAttributing:(id)arg2 requiresTreatmentInstallation:(BOOL)arg3 capabilityModifier:(id)arg4 startTime:(id)arg5 taskOptions:(id)arg6 bmltBatchNotificationId:(id)arg7 ;
-(BOOL)_notifyUpdatedShadowEvaluationWithExperimentRecord:(id)arg0 context:(id)arg1 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)_nextTasksForRunStatus:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)metrics;
-(id)runTaskUsingContext:(id)arg0 experiment:(id)arg1 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif