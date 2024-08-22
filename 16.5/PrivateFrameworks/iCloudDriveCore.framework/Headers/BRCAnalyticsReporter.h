// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCANALYTICSREPORTER_H
#define BRCANALYTICSREPORTER_H

@class NSMutableDictionary, NSNumber, NSData, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BRCAccountSessionFPFS.h"
#import "BRCMetricEndpoint.h"
#import "BRCSyncHealthReport.h"
#import "BRCItemGlobalID.h"

@interface BRCAnalyticsReporter : NSObject {
    BRCAccountSessionFPFS *_session;
    NSInteger _telemetryEventCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_waitOnIdleQueue;
    BRCMetricEndpoint *_metricEndpoint;
    NSMutableDictionary *_eventsByKind;
    BRCSyncHealthReport *_syncHealthReport;
    BRCItemGlobalID *_currentTelemetryItemGlobalID;
    NSNumber *_currentTelemetryToken;
    NSData *_lastSentTelemetryEvents;
    NSSet *_lastTelemetryBatchRowIDs;
    char _syncTelemetryState;
    NSObject<OS_dispatch_source> *_syncConsistencyDeferralTimer;
    NSObject<OS_dispatch_source> *_syncConsistencyCancellationTimer;
    BOOL _forceTelemetryDequeueQueued;
}




+(BOOL)isTelemetryReportingEnabled;
+(void)cancelSyncConsistencyReportWithMountPath:(id)arg0 queue:(id)arg1 ;
-(BOOL)_resumePausedTreeConsistencyCheckOperationWithActivity:(id)arg0 ;
-(BOOL)_shouldDeferForExistingSnapshot;
-(id)_prepareSyncTelemetryEventsToSend;
-(id)createSQLConditionForRowIDs:(id)arg0 ;
-(id)currentTelemetryToken;
-(id)initWithSession:(id)arg0 ;
-(id)syncTelemetryEventsToSend;
-(int)_getPriorityOfEvent:(id)arg0 ;
-(void)_checkSyncConsistencyWithActivity:(id)arg0 ;
-(void)_cleanupTimedOutEventMetrics:(id)arg0 ;
-(void)_fetchTelemetryEventCountOrAdd:(NSInteger)arg0 ;
-(void)_forgetEventMetrics:(id)arg0 ;
-(void)_gatherAppTelemetryEventsWithActivity:(id)arg0 ;
-(void)_handleApplySchedulerTimeoutWithActivity:(id)arg0 telemetryEventType:(int)arg1 ;
-(void)_reportSyncUpBackoffInfo;
-(void)_setupSyncConsistencyCancellationTimerWithActivity:(id)arg0 session:(id)arg1 ;
-(void)_setupSyncConsistencyDeferralTimerWithActivity:(id)arg0 ;
-(void)_waitForApplySchedulerToBeIdleWithCompletion:(id)arg0 ;
-(void)_withEventMetricsOfKind:(id)arg0 accessor:(id)arg1 ;
-(void)createFSEventToSyncUpEventForFileID:(NSUInteger)arg0 genID:(unsigned int)arg1 ;
-(void)createUserDownloadEventForOperationID:(id)arg0 isRecursive:(BOOL)arg1 isForBackup:(BOOL)arg2 ;
-(void)deleteMissingErrorThrottles;
-(void)didApplyItemInsideSharedItemID:(id)arg0 ;
-(void)dropAllSyncTelemetryEvents;
-(void)dumpToContext:(id)arg0 ;
-(void)forceTelemetryDequeue;
-(void)forceTelemetryDequeueWithCompletionHandler:(id)arg0 ;
-(void)forgetEventMetric:(id)arg0 ;
-(void)lookupFSEventToSyncUpEventByFileID:(NSUInteger)arg0 genID:(unsigned int)arg1 accessor:(id)arg2 ;
-(void)lookupFSEventToSyncUpEventByItemID:(id)arg0 accessor:(id)arg1 ;
-(void)lookupUserDownloadEventByFileObjectID:(id)arg0 accessor:(id)arg1 ;
-(void)lookupUserDownloadEventByOperationID:(id)arg0 accessor:(id)arg1 ;
-(void)registerBackgroundXPCActivities;
-(void)submitEventMetric:(id)arg0 ;
-(void)submitSyncTelemetryEvent:(id)arg0 ;
-(void)updateCurrentTelemetryToken:(id)arg0 ;


@end


#endif