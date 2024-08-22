// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTRANSLATIONSENSESLOGGINGREQUEST_H
#define _LTTRANSLATIONSENSESLOGGINGREQUEST_H

@class NSString, NSArray;
@protocol _LTLoggingRequest;

#import <Foundation/Foundation.h>


@interface _LTTranslationSensesLoggingRequest : NSObject <_LTLoggingRequest>



@property (copy, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (copy, nonatomic) NSArray *senses; // ivar: _senses
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userInteractedSenses; // ivar: _userInteractedSenses


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif