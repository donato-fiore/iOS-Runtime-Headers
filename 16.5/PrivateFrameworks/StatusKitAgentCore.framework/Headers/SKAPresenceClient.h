// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKAPRESENCECLIENT_H
#define SKAPRESENCECLIENT_H

@class NSString, SKPresencePayload, NSSet;
@protocol SKPresenceDaemonProtocol, SKAClientConnectionRepresentable, SKAPresenceClientConnectionLifecycleDelegate, SKADatabaseManaging, SKAPresenceClientDelegate, SKAInvitationManaging, SKAPresenceManaging, OS_dispatch_queue, SKAStatusSubscriptionManaging;

#import <Foundation/Foundation.h>

#import "SKAPresenceClientConnection.h"

@interface SKAPresenceClient : NSObject <SKPresenceDaemonProtocol, SKAClientConnectionRepresentable, SKAPresenceClientConnectionLifecycleDelegate>



@property (nonatomic) BOOL accountCheckCompleted; // ivar: _accountCheckCompleted
@property (nonatomic) BOOL accountIsPresenceCapable; // ivar: _accountIsPresenceCapable
@property (nonatomic) BOOL activeAssertion; // ivar: _activeAssertion
@property (nonatomic) BOOL activeSubscription; // ivar: _activeSubscription
@property (retain, nonatomic) NSString *activeSubscriptionIdentifier; // ivar: _activeSubscriptionIdentifier
@property (retain, nonatomic) SKAPresenceClientConnection *clientConnection; // ivar: _clientConnection
@property (retain, nonatomic) SKPresencePayload *currentPayload; // ivar: _currentPayload
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAPresenceClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SKAInvitationManaging> *invitationManager; // ivar: _invitationManager
@property (readonly, nonatomic) BOOL isPersonal; // ivar: _isPersonal
@property (retain, nonatomic) NSSet *lastSeenPresentDevices; // ivar: _lastSeenPresentDevices
@property (readonly, copy, nonatomic) NSString *presenceIdenfifier; // ivar: _presenceIdenfifier
@property (retain, nonatomic) NSObject<SKAPresenceManaging> *presenceManager; // ivar: _presenceManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<SKAStatusSubscriptionManaging> *subscriptionManager; // ivar: _subscriptionManager
@property (readonly) Class superclass;


+(id)_accountNotCapableError;
+(id)_crossAccountError;
+(id)_noChannelCreatedError;
+(id)_noChannelError;
+(id)_noClientIDError;
+(id)_unableToResolveSenderHandleError;
+(id)logger;
+(id)oversizeLogger;
-(BOOL)presenceIdentifierMatchesClient:(id)arg0 ;
-(id)_shortHashOfClientID:(id)arg0 ;
-(id)clientPrefixedPresenceIdentifierForPresenceIdentifier:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 delegate:(id)arg2 subscriptionManager:(id)arg3 presenceManager:(id)arg4 invitationManager:(id)arg5 databaseManager:(id)arg6 ;
-(id)rawPresenceIdentifierForPrefixedPresenceIdentifier:(id)arg0 ;
-(void)accountIsPresenceCapableWithCompletion:(id)arg0 ;
-(void)assertPresenceForIdentifier:(id)arg0 withPresencePayload:(id)arg1 completion:(id)arg2 ;
-(void)fetchHandleInvitability:(id)arg0 fromHandle:(id)arg1 forPresenceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)fetchPresenceCapability:(id)arg0 ;
-(void)handleReceivedInvitationForPresenceIdentifier:(id)arg0 ;
-(void)handleReceivedPresentDevicesUpdateForPresenceIdentifier:(id)arg0 ;
-(void)inviteHandles:(id)arg0 fromSenderHandle:(id)arg1 presenceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)invitedHandlesForPresenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 forPresenceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)presenceClientConnectionWasInterrupted:(id)arg0 ;
-(void)presenceClientConnectionWasInvalidated:(id)arg0 ;
-(void)presentDevicesForPresenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)refreshAssertionsForPresenceIdentifier:(id)arg0 ;
-(void)registerForDelegateCallbacksWithPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 completion:(id)arg2 ;
-(void)releasePresenceForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)releaseTransientSubscriptionAssertionForPresenceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeInvitedHandles:(id)arg0 presenceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)retainTransientSubscriptionAssertionForPresenceIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif