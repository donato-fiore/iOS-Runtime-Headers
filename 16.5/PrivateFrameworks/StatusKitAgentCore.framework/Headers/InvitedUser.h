// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INVITEDUSER_H
#define INVITEDUSER_H

@class NSManagedObject, NSDate, NSData, NSString;


#import "Channel.h"

@interface InvitedUser : NSManagedObject

@property (retain, nonatomic) Channel *channel;
@property (copy, nonatomic) NSDate *dateInvitationPayloadCreated;
@property (retain, nonatomic) NSData *invitationPayload;
@property (copy, nonatomic) NSString *invitedHandle;
@property (copy, nonatomic) NSString *senderHandle;


+(id)fetchRequest;
+(id)predicateForChannel:(id)arg0 ;
+(id)predicateForInvitedHandle:(id)arg0 ;
+(id)predicateForSenderHandle:(id)arg0 ;


@end


#endif