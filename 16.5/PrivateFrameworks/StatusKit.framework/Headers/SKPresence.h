// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPRESENCE_H
#define SKPRESENCE_H

@class NSString, NSMapTable, NSArray;
@protocol SKPresenceDaemonDelegateProtocol, SKPresenceConnectionDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKPresenceDaemonConnection.h"

@interface SKPresence : NSObject <SKPresenceDaemonDelegateProtocol, SKPresenceConnectionDelegateProtocol>



@property (retain, nonatomic) SKPresenceDaemonConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) os_unfair_lock_s delegateLock; // ivar: _delegateLock
@property (retain, nonatomic) NSMapTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *invitedHandles;
@property (readonly, nonatomic) BOOL isPersonal; // ivar: _isPersonal
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSString *presenceIdentifier; // ivar: _presenceIdentifier
@property (readonly, nonatomic) NSArray *presentDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // ivar: _privateWorkQueue
@property (nonatomic) BOOL registeredForDelegateCallbacks; // ivar: _registeredForDelegateCallbacks
@property (readonly) Class superclass;


+(id)_logger;
+(id)_oversizeLogger;
-(BOOL)_isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 ;
-(BOOL)isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 ;
-(BOOL)isHandleInvitedFromPrimaryAccountHandle:(id)arg0 ;
-(id)initWithPresenceIdentifier:(id)arg0 ;
-(id)initWithPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 ;
-(void)_delegatesPerformOnResponseQueueForGroup:(id)arg0 block:(id)arg1 ;
-(void)_fetchHandleInvitability:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)_inviteHandle:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)_inviteHandles:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)_isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)_registerForDelegateCallbacksIfNecessary;
-(void)_simulateCrashIfNecessaryForError:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)assertPresenceWithCompletion:(id)arg0 ;
-(void)assertPresenceWithPresencePayload:(id)arg0 completion:(id)arg1 ;
-(void)fetchHandleInvitability:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)fetchHandleInvitabilityFromPrimaryAccountHandle:(id)arg0 completion:(id)arg1 ;
-(void)fetchPresenceCapability:(id)arg0 ;
-(void)inviteHandle:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)inviteHandleFromPrimaryAccountHandle:(id)arg0 completion:(id)arg1 ;
-(void)inviteHandles:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)inviteHandlesFromPrimaryAccountHandle:(id)arg0 completion:(id)arg1 ;
-(void)invitedHandlesChangedForPresenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)isHandleInvitedFromPrimaryAccountHandle:(id)arg0 completion:(id)arg1 ;
-(void)presenceDaemonConnectionDidDisconnect:(id)arg0 ;
-(void)presentHandlesChangedForPresenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)releaseDaemonConnection;
-(void)releasePresenceWithCompletion:(id)arg0 ;
-(void)releaseTransientSubscriptionAssertionWithCompletion:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeInvitedHandle:(id)arg0 completion:(id)arg1 ;
-(void)removeInvitedHandles:(id)arg0 completion:(id)arg1 ;
-(void)retainTransientSubscriptionAssertionWithCompletion:(id)arg0 ;


@end


#endif