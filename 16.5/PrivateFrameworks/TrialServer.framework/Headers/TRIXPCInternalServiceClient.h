// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIXPCINTERNALSERVICECLIENT_H
#define TRIXPCINTERNALSERVICECLIENT_H

@class _PASXPCClientHelper;
@protocol TRIInternalServiceProtocol;

#import <Foundation/Foundation.h>


@interface TRIXPCInternalServiceClient : NSObject <TRIInternalServiceProtocol>

 {
    _PASXPCClientHelper *_helper;
}




-(BOOL)_performSyncXpcWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)deregisterNamespaceWithNamespaceName:(id)arg0 withTeamId:(id)arg1 error:(*id)arg2 ;
-(BOOL)immediatelySchedulePostUpgradeActivityWithError:(*id)arg0 ;
-(BOOL)registerNamespaceWithNamespaceName:(id)arg0 compatibilityVersion:(unsigned int)arg1 defaultsFileURL:(id)arg2 withTeamId:(id)arg3 appContainerId:(id)arg4 appContainerType:(NSInteger)arg5 cloudKitContainerId:(int)arg6 error:(*id)arg7 ;
-(BOOL)removeUnusedChannels:(*id)arg0 ;
-(BOOL)resumeSQLiteCKDatabaseQueueWithError:(*id)arg0 ;
-(BOOL)setFailureInjectionDelegate:(id)arg0 error:(*id)arg1 ;
-(BOOL)setLastFetchDate:(id)arg0 forContainer:(int)arg1 teamId:(id)arg2 error:(*id)arg3 ;
-(BOOL)setSubscription:(id)arg0 namespaceName:(id)arg1 error:(*id)arg2 ;
-(BOOL)startNamespaceDownloadWithName:(id)arg0 withTeamId:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)submitTask:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)suspendSQLiteCKDatabaseQueueWithError:(*id)arg0 ;
-(id)dynamicNamespaceRecordsWithError:(*id)arg0 ;
-(id)experimentNotificationsWithExperimentId:(id)arg0 cloudKitContainer:(int)arg1 teamId:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)lastFetchDateForContainer:(int)arg0 teamId:(id)arg1 error:(*id)arg2 ;
-(id)rolloutNotificationWithLatestDeploymentForRolloutId:(id)arg0 cloudKitContainer:(int)arg1 teamId:(id)arg2 error:(*id)arg3 ;
-(id)subscriptionForNamespaceName:(id)arg0 error:(*id)arg1 ;
-(id)taskRecordsWithError:(*id)arg0 ;


@end


#endif