// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONLINKDESCRIPTOR_H
#define TUCONVERSATIONLINKDESCRIPTOR_H

@class NSDate, NSUUID, NSSet, NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationLinkOriginator.h"

@interface TUConversationLinkDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSDate *deletionDate; // ivar: _deletionDate
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSUUID *groupUUID; // ivar: _groupUUID
@property (copy, nonatomic) NSSet *invitedHandles; // ivar: _invitedHandles
@property (nonatomic) NSInteger linkLifetimeScope; // ivar: _linkLifetimeScope
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) TUConversationLinkOriginator *originator; // ivar: _originator
@property (copy, nonatomic) NSData *privateKey; // ivar: _privateKey
@property (copy, nonatomic) NSString *pseudonym; // ivar: _pseudonym
@property (copy, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (nonatomic) int version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationLinkDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationLinkDescriptor:(id)arg0 ;
-(id)initWithGroupUUID:(id)arg0 originator:(id)arg1 pseudonym:(id)arg2 publicKey:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif