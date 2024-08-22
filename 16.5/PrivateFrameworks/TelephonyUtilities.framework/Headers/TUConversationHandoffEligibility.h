// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONHANDOFFELIGIBILITY_H
#define TUCONVERSATIONHANDOFFELIGIBILITY_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationParticipantAssociation.h"

@interface TUConversationHandoffEligibility : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) TUConversationParticipantAssociation *association; // ivar: _association
@property (retain, nonatomic) NSUUID *conversationGroupUUID; // ivar: _conversationGroupUUID
@property (nonatomic, getter=isEligible) BOOL eligible; // ivar: _eligible
@property (readonly, nonatomic) NSString *localizedDeviceCategory;
@property (retain, nonatomic) NSString *originatingDeviceType; // ivar: _originatingDeviceType
@property (nonatomic, getter=isSendingVideo) BOOL sendingVideo; // ivar: _sendingVideo
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted; // ivar: _uplinkMuted


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHandoffEligibility:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandoffEligibility:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif