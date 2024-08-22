// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECEIVEDINVITATION_H
#define RECEIVEDINVITATION_H

@class NSManagedObject, NSData, NSDate, NSString;


#import "Channel.h"

@interface ReceivedInvitation : NSManagedObject

@property (retain, nonatomic) Channel *channel;
@property (retain, nonatomic) NSData *channelToken;
@property (copy, nonatomic) NSDate *dateInvitationCreated;
@property (retain, nonatomic) NSData *incomingRatchetState;
@property (copy, nonatomic) NSString *invitationIdentifier;
@property (retain, nonatomic) NSData *invitationPayload;
@property (copy, nonatomic) NSString *invitedHandle;
@property (retain, nonatomic) NSData *peerKey;
@property (copy, nonatomic) NSString *presenceIdentifier;
@property (copy, nonatomic) NSString *senderHandle;
@property (retain, nonatomic) NSData *serverKey;
@property (copy, nonatomic) NSString *statusTypeIdentifier;


+(id)fetchRequest;
+(id)predicateForSenderHandle:(id)arg0 ;
+(id)predicateForSenderHandleString:(id)arg0 ;
+(id)predicateForStatusTypeIdentifier:(id)arg0 ;
+(id)sortDescriptorForDateInvitationCreatedOrderedAscending:(BOOL)arg0 ;
+(id)sortDescriptorForSenderHandleOrderedAscending:(BOOL)arg0 ;


@end


#endif