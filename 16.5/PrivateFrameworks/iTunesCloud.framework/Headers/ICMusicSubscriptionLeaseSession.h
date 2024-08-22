// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICSUBSCRIPTIONLEASESESSION_H
#define ICMUSICSUBSCRIPTIONLEASESESSION_H

@class NSRecursiveLock, NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue, ICMusicSubscriptionLeaseSessionDelegate;

#import <Foundation/Foundation.h>

#import "ICMusicSubscriptionLeaseStatus.h"
#import "ICStoreRequestContext.h"

@interface ICMusicSubscriptionLeaseSession : NSObject {
    NSRecursiveLock *_lock;
    NSInteger _automaticRefreshCount;
    NSObject<OS_dispatch_source> *_automaticRefreshTimerSource;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _isPerformingAutomaticRefresh;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    NSInteger _pendingLeaseAcquisitionRevisionID;
    NSInteger _startedLeaseAcquisitionRevisionID;
    BOOL _hasPendingLeaseDidEndPushNotification;
}


@property (readonly, nonatomic, getter=isAutomaticallyRefreshingLease) BOOL automaticallyRefreshingLease;
@property (readonly, weak, nonatomic) NSObject<ICMusicSubscriptionLeaseSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDelegatedLeaseSession) BOOL delegatedLeaseSession; // ivar: _delegatedLeaseSession
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate; // ivar: _leaseExpirationDate
@property (readonly, copy, nonatomic) ICMusicSubscriptionLeaseStatus *leaseStatus;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext


+(id)_sharedOperationQueue;
-(id)_initWithRequestContext:(id)arg0 isDelegatedLeaseSession:(BOOL)arg1 delegate:(id)arg2 leaseStatus:(id)arg3 ;
-(id)_newOperationForPlaybackRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)description;
-(id)performPlaybackRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handlePlaybackLeaseDidEndPushNotification;
-(void)_handleRemoteServerDidBecomeLikelyReachable;
-(void)_locked_handlePendingPlaybackLeaseDidEndPushNotificationIfReady;
-(void)_locked_performAutomaticRefresh;
-(void)_locked_updateAutomaticRefreshProperties;
-(void)_receivedUserInteractionEvent;
-(void)beginAutomaticallyRefreshingLease;
-(void)dealloc;
-(void)endAutomaticallyRefreshingLease;
-(void)reloadFairPlayKeyStatusWithCompletionHandler:(id)arg0 ;


@end


#endif