// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKASTATUSSERVER_H
#define SKASTATUSSERVER_H

@class NSString, NSMutableArray, NSXPCListener;
@protocol NSXPCListenerDelegate, SKADatabaseProvidingDelegate, SKAMessagingProvidingDelegate, SKAChannelManagingDelegate, SKAStatusReceivingManagingDelegate, SKADatabaseManagingDelegate, SKAInvitationManagingDelegate, SKAStatusPublishingServiceClientDelegate, SKAStatusSubscriptionServiceClientDelegate, SKAPresenceClientDelegate, SKAPresenceManagingDelegate, SKAChannelManaging, SKADatabaseManaging, SKADatabaseProviding, SKAStatusEncryptionManaging, SKAInvitationManaging, OS_dispatch_queue, SKAMessagingProviding, SKAPresenceManaging, SKAStatusPublishingManaging, SKAStatusReceivingManaging, SKAStatusSubscriptionManaging;

#import <Foundation/Foundation.h>


@interface SKAStatusServer : NSObject <NSXPCListenerDelegate, SKADatabaseProvidingDelegate, SKAMessagingProvidingDelegate, SKAChannelManagingDelegate, SKAStatusReceivingManagingDelegate, SKADatabaseManagingDelegate, SKAInvitationManagingDelegate, SKAStatusPublishingServiceClientDelegate, SKAStatusSubscriptionServiceClientDelegate, SKAPresenceClientDelegate, SKAPresenceManagingDelegate>



@property (retain, nonatomic) NSObject<SKAChannelManaging> *channelManager; // ivar: _channelManager
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (retain, nonatomic) NSObject<SKADatabaseProviding> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SKAStatusEncryptionManaging> *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SKAInvitationManaging> *invitationManager; // ivar: _invitationManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *invitationManagerMessagingQueue; // ivar: _invitationManagerMessagingQueue
@property (retain, nonatomic) NSObject<SKAMessagingProviding> *invitationMessagingProvider; // ivar: _invitationMessagingProvider
@property (retain, nonatomic) NSMutableArray *presenceConnectedClients; // ivar: _presenceConnectedClients
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presenceConnectionQueue; // ivar: _presenceConnectionQueue
@property (retain, nonatomic) NSXPCListener *presenceListener; // ivar: _presenceListener
@property (retain, nonatomic) NSObject<SKAPresenceManaging> *presenceManager; // ivar: _presenceManager
@property (retain, nonatomic) NSObject<SKAStatusPublishingManaging> *publishingManager; // ivar: _publishingManager
@property (retain, nonatomic) NSMutableArray *publishingServiceConnectedClients; // ivar: _publishingServiceConnectedClients
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *publishingServiceConnectionQueue; // ivar: _publishingServiceConnectionQueue
@property (retain, nonatomic) NSXPCListener *publishingServiceListener; // ivar: _publishingServiceListener
@property (retain, nonatomic) NSObject<SKAStatusReceivingManaging> *statusReceivingManager; // ivar: _statusReceivingManager
@property (retain, nonatomic) NSObject<SKAStatusSubscriptionManaging> *subscriptionManager; // ivar: _subscriptionManager
@property (retain, nonatomic) NSMutableArray *subscriptionServiceConnectedClients; // ivar: _subscriptionServiceConnectedClients
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *subscriptionServiceConnectionQueue; // ivar: _subscriptionServiceConnectionQueue
@property (retain, nonatomic) NSXPCListener *subscriptionServiceListener; // ivar: _subscriptionServiceListener
@property (readonly) Class superclass;
@property (nonatomic) BOOL trafficModeEnabled; // ivar: _trafficModeEnabled


+(id)logger;
+(id)sharedInstance;
-(BOOL)_inTextTrafficMode;
-(BOOL)_kettleFeatureEnabled;
-(BOOL)_presenceServiceListener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)_publishingServiceListener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)_shouldDonateToBiomeForStatusTypeIdentifier:(id)arg0 ;
-(BOOL)_subscriptionServiceListener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_senderHandlesForChannel:(id)arg0 ;
-(id)init;
-(void)_notifyPresenceClientsIfNeededOfChannelChangeForChannel:(id)arg0 ;
-(void)_setupMaintenanceActivity;
-(void)channelManager:(id)arg0 didReceiveData:(id)arg1 onChannel:(id)arg2 dateReceived:(id)arg3 dateExpired:(id)arg4 ;
-(void)channelManager:(id)arg0 failedToSubscribeToChannel:(id)arg1 withError:(id)arg2 ;
-(void)databaseDidReceiveRemoteChangesForChannels:(id)arg0 ;
-(void)databaseManager:(id)arg0 didCreateChannel:(id)arg1 ;
-(void)donateReceivedStatusToBiomeOnChannel:(id)arg0 ;
-(void)invitationManager:(id)arg0 didReceiveInvitation:(id)arg1 forChannel:(id)arg2 ;
-(void)invitationManager:(id)arg0 didRevokeInvitationOnChannel:(id)arg1 ;
-(void)logState;
-(void)networkBecameReachable;
-(void)presenceClientWasInvalidated:(id)arg0 ;
-(void)presenceManager:(id)arg0 didCreateChannel:(id)arg1 ;
-(void)presenceManager:(id)arg0 didReceivePresentDevicesUpdateForPresenceIdentifier:(id)arg1 ;
-(void)presenceManager:(id)arg0 didRequestToRollChannel:(id)arg1 ;
-(void)publishingServiceClientWasInvalidated:(id)arg0 ;
-(void)service:(id)arg0 didReceiveIncomingMessage:(id)arg1 fromID:(id)arg2 toID:(id)arg3 messageGuid:(id)arg4 ;
-(void)service:(id)arg0 outgoingMessageWithIdentifier:(id)arg1 fromID:(id)arg2 toID:(id)arg3 didSendWithSuccess:(BOOL)arg4 ;
-(void)shutdown;
-(void)statusReceivingManager:(id)arg0 didReceiveStatusUpdate:(id)arg1 onChannel:(id)arg2 ;
-(void)subscriptionServiceClientWasInvalidated:(id)arg0 ;


@end


#endif