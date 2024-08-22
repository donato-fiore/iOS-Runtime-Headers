// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONACTIVITYCONTEXT_H
#define TUCONVERSATIONACTIVITYCONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationActivityContext : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *actionDescription; // ivar: _actionDescription
@property (copy, nonatomic) NSString *completedDescription; // ivar: _completedDescription
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isMedia) BOOL media;
@property (copy, nonatomic) NSString *ongoingDescription; // ivar: _ongoingDescription
@property (copy, nonatomic) NSString *typedIdentifier; // ivar: _typedIdentifier


+(BOOL)supportsSecureCoding;
+(id)mediaContextIdentifiers;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActivityContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextIdentifier:(id)arg0 actionDescription:(id)arg1 ongoingDescription:(id)arg2 completedDescription:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif