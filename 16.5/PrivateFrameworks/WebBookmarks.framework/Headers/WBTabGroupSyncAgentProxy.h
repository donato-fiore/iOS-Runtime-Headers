// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBTABGROUPSYNCAGENTPROXY_H
#define WBTABGROUPSYNCAGENTPROXY_H

@class NSXPCConnection, NSHashTable, NSDate, NSString;
@protocol WBTabGroupSyncAgentSyncObserver, WBSDeallocationSentinelObserver, WBTabGroupSyncAgentProxyProtocol, WBTabGroupManagerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBTabGroupSyncAgentProxy : NSObject <WBTabGroupSyncAgentSyncObserver, WBSDeallocationSentinelObserver, WBTabGroupSyncAgentProxyProtocol, WBTabGroupManagerObserver>

 {
    os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_syncObserverQueue;
    NSHashTable *_syncObservers;
    NSDate *_firstReconnectionAttemptDate;
    NSUInteger _numberOfReconnectionAttempts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProxy;
-(BOOL)_shouldAttemptToReconnect;
-(id)_remoteObjectProxy;
-(id)emptyChangeSetCompletionHandler:(SEL)arg0 ;
-(id)emptyCompletionHandler:(SEL)arg0 ;
-(id)init;
-(void)_enumerateSyncObserversUsingBlock:(id)arg0 ;
-(void)_setUpConnection;
-(void)_setUpConnectionIfNeeded;
-(void)_setUpSyncObserverIfNeeded;
-(void)_syncAgentDidLaunch:(id)arg0 ;
-(void)acceptShareForURL:(id)arg0 invitationTokenData:(id)arg1 completionHandler:(id)arg2 ;
-(void)activeParticipantsDidUpdateInTabGroupWithUUID:(id)arg0 ;
-(void)activeParticipantsDidUpdateInTabWithUUID:(id)arg0 ;
-(void)addSyncObserver:(id)arg0 ;
-(void)beginSharingTabGroupWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didAddTabWithUUID:(id)arg0 title:(id)arg1 inSharedTabGroupWithUUID:(id)arg2 byParticipantWithRecordID:(id)arg3 ;
-(void)didChangeBackgroundImageInSharedTabGroupWithUUID:(id)arg0 byParticipantWithRecordID:(id)arg1 ;
-(void)didChangeScopedFavoritesInSharedTabGroupWithUUID:(id)arg0 byParticipantWithRecordID:(id)arg1 ;
-(void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(id)arg0 acceptedShareDate:(id)arg1 ;
-(void)didNavigateInTabWithUUID:(id)arg0 title:(id)arg1 inSharedTabGroupWithUUID:(id)arg2 byParticipantWithRecordID:(id)arg3 ;
-(void)didRemoveTabWithUUID:(id)arg0 title:(id)arg1 inSharedTabGroupWithUUID:(id)arg2 byParticipantWithRecordID:(id)arg3 ;
-(void)movePresenceForParticipantToTabWithUUID:(id)arg0 ;
-(void)participants:(id)arg0 didJoinSharedTabGroupWithUUID:(id)arg1 ;
-(void)participants:(id)arg0 didLeaveSharedTabGroupWithUUID:(id)arg1 ;
-(void)removeSyncObserver:(id)arg0 ;
-(void)scheduleSyncIfNeeded;
-(void)sentinelDidDeallocateWithContext:(id)arg0 ;
-(void)shareDidUpdateForTabGroupWithUUID:(id)arg0 ;
-(void)tabGroupManagerDidUpdateSyncableContent:(id)arg0 ;
-(void)userDidAcceptCloudKitShareWithMetadata:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif