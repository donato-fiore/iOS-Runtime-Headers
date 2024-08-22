// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKAPRESENCEMANAGER_H
#define SKAPRESENCEMANAGER_H

@class NSMapTable, NSString, NSDate;
@protocol SKAPresenceManaging, SKAAccountProviding, OS_dispatch_queue, SKAChannelManaging, SKADatabaseManaging, SKAPresenceManagingDelegate, SKAMessagingProviding, SKAStatusSubscriptionManaging;

#import <Foundation/Foundation.h>


@interface SKAPresenceManager : NSObject <SKAPresenceManaging>



@property (retain, nonatomic) NSObject<SKAAccountProviding> *accountProvider; // ivar: _accountProvider
@property (retain, nonatomic) NSMapTable *activeParticipantsByChannel; // ivar: _activeParticipantsByChannel
@property (retain, nonatomic) NSMapTable *activePresenceAssertionsByClient; // ivar: _activePresenceAssertionsByClient
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *channelFetchQueue; // ivar: _channelFetchQueue
@property (retain, nonatomic) NSObject<SKAChannelManaging> *channelManager; // ivar: _channelManager
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAPresenceManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue; // ivar: _internalWorkQueue
@property (retain, nonatomic) NSDate *lastAssertionSendTime; // ivar: _lastAssertionSendTime
@property (retain, nonatomic) NSObject<SKAMessagingProviding> *messagingProvider; // ivar: _messagingProvider
@property (nonatomic) BOOL presenceEnabledByServer; // ivar: _presenceEnabledByServer
@property (retain, nonatomic) NSObject<SKAStatusSubscriptionManaging> *subscriptionManager; // ivar: _subscriptionManager
@property (readonly) Class superclass;


+(id)_channelCreationTimeoutError;
+(id)_keyGenerationError;
+(id)_noExistingAssertionError;
+(id)_noExistingChannelError;
+(id)_payloadGenerationError;
+(id)_payloadOversizeError;
+(id)_presenceDisabledError;
+(id)logger;
-(BOOL)_activePresenceAssertionExistsForPresenceIdentifier:(id)arg0 ;
-(BOOL)_activePresenceAssertionsExist;
-(BOOL)_addPresenceAssertionForClient:(id)arg0 presenceIdentifier:(id)arg1 isPersonal:(BOOL)arg2 payload:(id)arg3 ;
-(BOOL)_addPresentDeviceForChannel:(id)arg0 presentDevice:(id)arg1 ;
-(BOOL)_clientPayload:(id)arg0 isValidWithError:(*id)arg1 ;
-(BOOL)_removePresenceAssertionForClient:(id)arg0 presenceIdentifier:(id)arg1 ;
-(BOOL)_removePresentDeviceForChannel:(id)arg0 presentDevice:(id)arg1 ;
-(BOOL)_shouldCryptoRoll;
-(BOOL)_shouldReassert;
-(BOOL)_shouldReauthForError:(id)arg0 ;
-(NSInteger)_cryptoRollResetTimeSeconds;
-(NSInteger)_maxPayloadSizeBytes;
-(NSInteger)_reassertResetTimeSeconds;
-(NSUInteger)_currentCheckpointForChannel:(id)arg0 ;
-(id)_activePresenceAssertionsForClient:(id)arg0 ;
-(id)_activePresentDevicesForChannel:(id)arg0 ;
-(id)_currentPayloadForPresenceIdentifier:(id)arg0 ;
-(id)_deviceIdentifierForToken:(id)arg0 ;
-(id)_mostRecentAssertionTimeForTokenURI:(id)arg0 onChannel:(id)arg1 ;
-(id)_presentDeviceFromPayload:(id)arg0 onChannel:(id)arg1 ;
-(id)_sortAndDedupePresenceIdentifiers:(id)arg0 ;
-(id)initWithDatabaseManager:(id)arg0 channelManager:(id)arg1 subscriptionManager:(id)arg2 accountProvider:(id)arg3 messagingProvider:(id)arg4 delegate:(id)arg5 ;
-(void)_clearPresentDevicesForChannel:(id)arg0 ;
-(void)_createPresenceChannelForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 databaseContext:(id)arg2 completion:(id)arg3 ;
-(void)_findOrCreatePresenceChannelForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 databaseContext:(id)arg2 completion:(id)arg3 ;
-(void)_findPresenceChannelForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 databaseContext:(id)arg2 completion:(id)arg3 ;
-(void)_handleBulkUpdateParticipantPayloads:(id)arg0 forChannel:(id)arg1 ;
-(void)_handleIncomingPayloadUpdate:(id)arg0 onChannel:(id)arg1 ;
-(void)_markCryptoRoll;
-(void)_markReassert;
-(void)_presencePayloadForChannel:(id)arg0 clientPayload:(id)arg1 timestamp:(id)arg2 completion:(id)arg3 ;
-(void)_presentDevicesChangedForChannel:(id)arg0 ;
-(void)_recalculateActivityTracking;
-(void)_rollChannelForCryptoFailureIfAllowed:(id)arg0 ;
-(void)_sendPollingMessageForChannel:(id)arg0 completion:(id)arg1 ;
-(void)_sendPresenceAssertionMessageForChannel:(id)arg0 withPayload:(id)arg1 isRefresh:(BOOL)arg2 completion:(id)arg3 ;
-(void)_sendPresenceDeactivationMessageForChannel:(id)arg0 completion:(id)arg1 ;
-(void)_setCheckpointForChannel:(id)arg0 checkpoint:(NSUInteger)arg1 ;
-(void)channelReceivedIncomingPayloadUpdate:(id)arg0 channel:(id)arg1 ;
-(void)createPresenceChannelForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 databaseContext:(id)arg2 completion:(id)arg3 ;
-(void)findOrCreatePresenceChannelForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 databaseContext:(id)arg2 completion:(id)arg3 ;
-(void)findPresenceChannelForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 databaseContext:(id)arg2 completion:(id)arg3 ;
-(void)presentDevicesForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 completion:(id)arg2 ;
-(void)releaseAllPresenceAssertionsAssociatedWithClient:(id)arg0 completion:(id)arg1 ;
-(void)releasePresenceAssertionForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 client:(id)arg2 completion:(id)arg3 ;
-(void)retainPresenceAssertionForPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 withPresencePayload:(id)arg2 client:(id)arg3 completion:(id)arg4 ;


@end


#endif