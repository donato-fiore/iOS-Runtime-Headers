// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKCONVERSATIONMESSAGE_H
#define TTKCONVERSATIONMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TTKConversationMessage : NSObject

@property (readonly, nonatomic) NSString *senderId; // ivar: _senderId
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(id)fromJsonDict:(id)arg0 ;
+(id)messageWithText:(id)arg0 senderId:(id)arg1 ;
-(id)toJsonDict;


@end


#endif