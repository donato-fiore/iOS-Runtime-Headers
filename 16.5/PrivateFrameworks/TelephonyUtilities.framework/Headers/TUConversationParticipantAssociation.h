// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONPARTICIPANTASSOCIATION_H
#define TUCONVERSATIONPARTICIPANTASSOCIATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationParticipantAssociation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *avcIdentifier; // ivar: _avcIdentifier
@property (nonatomic) NSUInteger identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
+(id)avcIdentifierFromURLComponents:(id)arg0 namePrefix:(id)arg1 ;
+(id)identifierFromURLComponents:(id)arg0 namePrefix:(id)arg1 ;
+(id)participantAssociationFromURLComponents:(id)arg0 namePrefix:(id)arg1 ;
+(id)queryItemName:(id)arg0 prefix:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToParticipantAssociation:(id)arg0 ;
-(NSUInteger)hash;
-(id)avcIdentifierQueryItemWithNamePrefix:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identifierQueryItemWithNamePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParticipantAssociation:(id)arg0 ;
-(id)queryItemsWithNamePrefix:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif