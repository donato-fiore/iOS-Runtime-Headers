// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONREPORT_H
#define TUCONVERSATIONREPORT_H

@class NSUUID, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationReport : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *conversationID; // ivar: _conversationID
@property (readonly, nonatomic) NSDate *timebase; // ivar: _timebase


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationReport:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationID:(id)arg0 timebase:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif