// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONACTIVITYEVENT_H
#define TUCONVERSATIONACTIVITYEVENT_H

@class NSString, NSUUID, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationParticipant.h"
#import "TUConversationActivitySession.h"

@interface TUConversationActivityEvent : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *item; // ivar: _item
@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (retain, nonatomic) TUConversationParticipant *originator; // ivar: _originator
@property (nonatomic) NSInteger queueItemType; // ivar: _queueItemType
@property (retain, nonatomic) TUConversationActivitySession *session; // ivar: _session
@property (retain, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationActivityEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 originator:(id)arg1 type:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif