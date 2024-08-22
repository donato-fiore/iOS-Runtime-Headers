// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKADATABASERECEIVEDINVITATION_H
#define SKADATABASERECEIVEDINVITATION_H

@class NSData, NSDate, MPStatusKitIncomingRatchet, NSString, SKHandle, SKInvitationPayload;

#import <Foundation/Foundation.h>


@interface SKADatabaseReceivedInvitation : NSObject

@property (readonly, nonatomic) NSData *channelToken; // ivar: _channelToken
@property (readonly, nonatomic) NSDate *dateInvitationCreated; // ivar: _dateInvitationCreated
@property (readonly, nonatomic) MPStatusKitIncomingRatchet *incomingRatchet;
@property (readonly, nonatomic) NSData *incomingRatchetState; // ivar: _incomingRatchetState
@property (readonly, nonatomic) NSString *invitationIdentifier; // ivar: _invitationIdentifier
@property (readonly, nonatomic) NSData *invitationPayload; // ivar: _invitationPayload
@property (readonly, nonatomic) NSInteger invitationType; // ivar: _invitationType
@property (readonly, nonatomic) NSString *invitedHandle; // ivar: _invitedHandle
@property (readonly, nonatomic) SKHandle *invitedSKHandle;
@property (readonly, nonatomic) NSData *peerKey; // ivar: _peerKey
@property (readonly, nonatomic) NSString *presenceIdentifier; // ivar: _presenceIdentifier
@property (readonly, nonatomic) NSString *senderHandle; // ivar: _senderHandle
@property (readonly, nonatomic) SKHandle *senderSKHandle;
@property (readonly, nonatomic) NSData *serverKey; // ivar: _serverKey
@property (readonly, nonatomic) SKInvitationPayload *skInvitationPayload;
@property (readonly, nonatomic) NSString *statusTypeIdentifier; // ivar: _statusTypeIdentifier


+(id)logger;
-(id)description;
-(id)initWithCoreDataReceivedInvitation:(id)arg0 ;
-(id)initWithInvitationIdentifier:(id)arg0 senderHandle:(id)arg1 invitedHandle:(id)arg2 statusTypeIdentifier:(id)arg3 dateInvitationCreated:(id)arg4 incomingRatchetState:(id)arg5 presenceIdentifier:(id)arg6 channelToken:(id)arg7 serverKey:(id)arg8 peerKey:(id)arg9 invitationPayload:(id)arg10 ;


@end


#endif