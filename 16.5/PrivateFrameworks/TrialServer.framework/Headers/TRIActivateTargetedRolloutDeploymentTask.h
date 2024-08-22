// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIACTIVATETARGETEDROLLOUTDEPLOYMENTTASK_H
#define TRIACTIVATETARGETEDROLLOUTDEPLOYMENTTASK_H

@class NSString, NSArray, TRIRolloutDeployment, NSString<TRIFactorPackSetId>, NSDate;
@protocol TRITask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"
#import "TRIRolloutTaskSupport.h"
#import "TRITaskCapabilityModifier.h"

@interface TRIActivateTargetedRolloutDeploymentTask : TRIBaseTask <TRITask, TRIMetricsProviding>

 {
    id<TRITaskAttributing> *_taskAttribution;
    TRIRolloutTaskSupport *_support;
    TRITaskCapabilityModifier *_capabilityModifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, nonatomic) TRIRolloutDeployment *deployment; // ivar: _deployment
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId; // ivar: _factorPackSetId
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithDeployment:(id)arg0 factorPackSetId:(id)arg1 taskAttribution:(id)arg2 capabilityModifier:(id)arg3 ;
-(BOOL)_notifyUpdatedShadowEvaluationsWithDeployments:(id)arg0 context:(id)arg1 usingTransaction:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeployment:(id)arg0 factorPackSetId:(id)arg1 taskAttribution:(id)arg2 capabilityModifier:(id)arg3 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runDequeueHandlerUsingContext:(id)arg0 ;
-(void)runEnqueueHandlerUsingContext:(id)arg0 ;


@end


#endif