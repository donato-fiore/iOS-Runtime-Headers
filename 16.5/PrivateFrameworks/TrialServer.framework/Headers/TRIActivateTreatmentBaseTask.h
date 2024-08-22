// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIACTIVATETREATMENTBASETASK_H
#define TRIACTIVATETREATMENTBASETASK_H

@class NSDate;


#import "TRITreatmentBaseTask.h"

@interface TRIActivateTreatmentBaseTask : TRITreatmentBaseTask {
    NSDate *_startTime;
}


@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) BOOL requiresTreatmentInstallation; // ivar: _requiresTreatmentInstallation


-(BOOL)_experimentRecord:(id)arg0 hasConflictWithExperimentsInDatabase:(id)arg1 conflictEndTime:(*id)arg2 ;
-(BOOL)_writeNamespaceDescriptorsWithPaths:(id)arg0 toTreatmentLayer:(NSUInteger)arg1 forExperiment:(id)arg2 treatmentURLs:(id)arg3 context:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateLoggingWithExperimentRecord:(id)arg0 paths:(id)arg1 trackingId:(id)arg2 newLogTreatmentAddedOut:(*id)arg3 ;
-(NSUInteger)hash;
-(id)_nextTasksForRunStatus:(int)arg0 ;
-(id)initWithExperiment:(id)arg0 treatmentId:(id)arg1 taskAttributing:(id)arg2 requiresTreatmentInstallation:(BOOL)arg3 ;
-(id)runTaskUsingContext:(id)arg0 ;
-(id)runTaskUsingContext:(id)arg0 experiment:(id)arg1 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)startTime;
-(void)runDequeueHandlerUsingContext:(id)arg0 ;
-(void)runEnqueueHandlerUsingContext:(id)arg0 ;
-(void)setStartTime:(id)arg0 ;


@end


#endif