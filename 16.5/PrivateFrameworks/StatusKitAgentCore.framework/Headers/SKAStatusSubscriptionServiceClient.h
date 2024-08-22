// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKASTATUSSUBSCRIPTIONSERVICECLIENT_H
#define SKASTATUSSUBSCRIPTIONSERVICECLIENT_H

@class NSString;
@protocol SKStatusSubscriptionDaemonProtocol, SKAClientConnectionRepresentable, SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate, SKADatabaseManaging, SKAStatusSubscriptionServiceClientDelegate, SKAStatusEncryptionManaging, OS_dispatch_queue, SKAStatusSubscriptionManaging;

#import <Foundation/Foundation.h>

#import "SKAStatusSubscriptionServiceClientConnection.h"

@interface SKAStatusSubscriptionServiceClient : NSObject <SKStatusSubscriptionDaemonProtocol, SKAClientConnectionRepresentable, SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate>



@property (nonatomic) BOOL accountCheckCompleted; // ivar: _accountCheckCompleted
@property (nonatomic) BOOL accountIsStatusKitCapable; // ivar: _accountIsStatusKitCapable
@property (retain, nonatomic) SKAStatusSubscriptionServiceClientConnection *clientConnection; // ivar: _clientConnection
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAStatusSubscriptionServiceClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SKAStatusEncryptionManaging> *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) NSString *statusTypeIdenfifier; // ivar: _statusTypeIdenfifier
@property (retain, nonatomic) NSObject<SKAStatusSubscriptionManaging> *subscriptionManager; // ivar: _subscriptionManager
@property (readonly) Class superclass;
@property (nonatomic) BOOL trafficModeEnabled; // ivar: _trafficModeEnabled


+(id)_accountNotCapableError;
+(id)_genericMissingSubscriptionEntitlmentError;
+(id)_inTrafficError;
+(id)_missingEntitlmentErrorForStatusTypeIdentifier:(id)arg0 ;
+(id)_subscriptionIdentifierNotFoundError:(id)arg0 ;
+(id)logger;
-(BOOL)_validateChannelIsKnownForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)channelMatchesClientStatusTypeIdentifier:(id)arg0 ;
-(NSInteger)validatePersonalChannel:(id)arg0 matchesEncryptionValidationToken:(id)arg1 fromSender:(id)arg2 ;
-(NSInteger)validatePersonalChannel:(id)arg0 matchesSubscriptionValidationToken:(id)arg1 fromSender:(id)arg2 ;
-(id)_currentStatusForChannel:(id)arg0 ;
-(id)_handlesAssociatedWithChannel:(id)arg0 ;
-(id)_subscriptionMetadataForChannel:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 delegate:(id)arg2 databaseManager:(id)arg3 subscriptionManager:(id)arg4 encryptionManager:(id)arg5 inTrafficMode:(BOOL)arg6 ;
-(void)accountIsStatusKitCapableWithCompletion:(id)arg0 ;
-(void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)allSubscriptionMetadatasForStatusTypeIdentifier:(id)arg0 includingPersonalSubscription:(BOOL)arg1 completion:(id)arg2 ;
-(void)allSubscriptionMetadatasWithActiveAssertionsForStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)allSubscriptionMetadatasWithActiveSubscriptionsForStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteSubscriptionWithIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)handleReceivedInvitationForChannel:(id)arg0 ;
-(void)handleReceivedStatusUpdate:(id)arg0 onChannel:(id)arg1 ;
-(void)handleRemoteDatabaseChangeForChannels:(id)arg0 ;
-(void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)subscriptionMetadataForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)subscriptionMetadataForPersonalSubscriptionWithStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)subscriptionServiceClientConnectionWasInterrupted:(id)arg0 ;
-(void)subscriptionServiceClientConnectionWasInvalidated:(id)arg0 ;
-(void)subscriptionValidationTokensForHandle:(id)arg0 statusTypeIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(id)arg0 fromSender:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(id)arg3 ;


@end


#endif