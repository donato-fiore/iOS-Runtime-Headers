// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFSSCHEDULERBASE_H
#define BRCFSSCHEDULERBASE_H

@class NSString, PQLNameInjection;
@protocol BRCLifeCycle, OS_dispatch_workloop, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "BRCAccountSessionFPFS.h"
#import "BRCDeadlineSource.h"

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle>

 {
    BRCAccountSessionFPFS *_session;
    BRCDeadlineSource *_schedulerSource;
    NSObject<OS_dispatch_workloop> *_schedulerWorkloop;
    BOOL _firstSchedulingAfterStartupDone;
}


@property (readonly) BOOL closed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasActiveWork; // ivar: _hasActiveWork
@property (retain) NSObject<OS_dispatch_group> *hasActiveWorkGroup; // ivar: _hasActiveWorkGroup
@property (nonatomic) BOOL hasWork; // ivar: _hasWork
@property (retain) NSObject<OS_dispatch_group> *hasWorkGroup; // ivar: _hasWorkGroup
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly) PQLNameInjection *tableName; // ivar: _tableName


-(BOOL)canRetryJobWithID:(id)arg0 ;
-(BOOL)canScheduleMoreJobs;
-(BOOL)haveActiveJobsMatching:(id)arg0 ;
-(BOOL)setState:(int)arg0 forJobID:(id)arg1 ;
-(BOOL)setState:(int)arg0 forJobsMatching:(id)arg1 ;
-(NSInteger)updateStamps:(struct throttle_stamps *)arg0 throttle:(id)arg1 now:(NSInteger)arg2 ;
-(NSUInteger)postponeJobID:(id)arg0 withThrottle:(id)arg1 ;
-(id)aggregateDescriptionForJobsMatching:(id)arg0 context:(id)arg1 ;
-(id)descriptionForJobsMatching:(id)arg0 context:(id)arg1 ;
// -(id)descriptionForJobsMatching:(id)arg0 ordering:(id)arg1 additionalColumns:(id)arg2 additionalValuesHandler:(id)arg3 context:(unk)arg4  ;
-(id)initWithSession:(id)arg0 name:(id)arg1 tableName:(id)arg2 ;
-(int)jobStateFor:(id)arg0 ;
-(struct brc_job_update )insertOrUpdateJobID:(id)arg0 throttle:(id)arg1 withState:(int)arg2 insertedSQLColumn:(id)arg3 insertedSQLValues:(id)arg4 updatedSQLValues:(id)arg5 error:(*id)arg6 ;
-(unsigned int)recoverAndReportMissingJobs;
-(void)_close;
-(void)cancel;
-(void)checkIfHasWork;
-(void)close;
-(void)computeStamps:(struct throttle_stamps *)arg0 forJobID:(id)arg1 throttle:(id)arg2 shouldBackoff:(BOOL)arg3 ;
-(void)deleteExpiredJobs;
-(void)deleteJobsMatching:(id)arg0 ;
-(void)describeInBuffer:(id)arg0 aggregateOfJobsMatching:(id)arg1 context:(id)arg2 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg0 ;
-(void)rescheduleSuspendedJobsMatching:(id)arg0 inState:(int)arg1 ;
-(void)resetBackoffForJobWithID:(id)arg0 ;
-(void)resume;
-(void)schedule;
-(void)scheduleWithBatchSize:(int)arg0 whereSQLClause:(id)arg1 columns:(id)arg2 actionHandler:(id)arg3 ;
-(void)signal;
-(void)signalWithDeadline:(NSInteger)arg0 ;
-(void)suspend;


@end


#endif