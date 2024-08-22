// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSTATUSPUBLISHINGSERVICE_H
#define SKSTATUSPUBLISHINGSERVICE_H

@class NSString, NSMapTable, NSArray;
@protocol SKStatusPublishingDaemonDelegateProtocol, SKStatusPublishingConnectionDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKStatusPublishingDaemonConnection.h"

@interface SKStatusPublishingService : NSObject <SKStatusPublishingDaemonDelegateProtocol, SKStatusPublishingConnectionDelegateProtocol>



@property (retain, nonatomic) SKStatusPublishingDaemonConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMapTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *invitedHandles;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // ivar: _privateWorkQueue
@property (nonatomic) BOOL registeredForDelegateCallbacks; // ivar: _registeredForDelegateCallbacks
@property (readonly, nonatomic) NSString *statusTypeIdentifier; // ivar: _statusTypeIdentifier
@property (readonly) Class superclass;


+(id)logger;
-(BOOL)_isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 ;
-(BOOL)isHandleInvited:(id)arg0 ;
-(BOOL)isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 ;
-(BOOL)isHandleInvitedFromPrimaryAccountHandle:(id)arg0 ;
-(id)initWithStatusTypeIdentifier:(id)arg0 ;
-(void)_delegatesPerformOnResponseQueueForGroup:(id)arg0 block:(id)arg1 ;
-(void)_fetchHandleInvitability:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)_inviteHandle:(id)arg0 fromSenderHandle:(id)arg1 withInvitationPayload:(id)arg2 completion:(id)arg3 ;
-(void)_inviteHandles:(id)arg0 fromSenderHandle:(id)arg1 withInvitationPayload:(id)arg2 completion:(id)arg3 ;
-(void)_isHandleInvitable:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)_isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)_registerForDelegateCallbacksIfNecessary;
-(void)_simulateCrashIfNecessaryForError:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)fetchHandleInvitability:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)fetchHandleInvitabilityFromPrimaryAccountHandle:(id)arg0 completion:(id)arg1 ;
-(void)inviteHandle:(id)arg0 fromSenderHandle:(id)arg1 withInvitationPayload:(id)arg2 completion:(id)arg3 ;
-(void)inviteHandle:(id)arg0 withInvitationPayload:(id)arg1 completion:(id)arg2 ;
-(void)inviteHandleFromPrimaryAccountHandle:(id)arg0 withInvitationPayload:(id)arg1 completion:(id)arg2 ;
-(void)inviteHandles:(id)arg0 fromSenderHandle:(id)arg1 withInvitationPayload:(id)arg2 completion:(id)arg3 ;
-(void)inviteHandles:(id)arg0 withInvitationPayload:(id)arg1 completion:(id)arg2 ;
-(void)inviteHandlesFromPrimaryAccountHandle:(id)arg0 withInvitationPayload:(id)arg1 completion:(id)arg2 ;
-(void)isHandleInvitable:(id)arg0 completion:(id)arg1 ;
-(void)isHandleInvitable:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)isHandleInvitableFromPrimaryAccountHandle:(id)arg0 completion:(id)arg1 ;
-(void)isHandleInvited:(id)arg0 completion:(id)arg1 ;
-(void)isHandleInvited:(id)arg0 fromSenderHandle:(id)arg1 completion:(id)arg2 ;
-(void)isHandleInvitedFromPrimaryAccountHandle:(id)arg0 completion:(id)arg1 ;
-(void)publishStatusRequest:(id)arg0 completion:(id)arg1 ;
-(void)publishingDaemonConnectionDidDisconnect:(id)arg0 ;
-(void)removeAllInvitedHandlesWithCompletion:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeInvitedHandle:(id)arg0 completion:(id)arg1 ;
-(void)removeInvitedHandles:(id)arg0 completion:(id)arg1 ;


@end


#endif