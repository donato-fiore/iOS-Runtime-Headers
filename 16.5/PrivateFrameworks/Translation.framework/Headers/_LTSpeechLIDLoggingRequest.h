// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTSPEECHLIDLOGGINGREQUEST_H
#define _LTSPEECHLIDLOGGINGREQUEST_H

@class NSString, NSLocale;
@protocol _LTLoggingRequest;

#import <Foundation/Foundation.h>

#import "_LTLanguageDetectionResult.h"
#import "_LTLocalePair.h"

@interface _LTSpeechLIDLoggingRequest : NSObject <_LTLoggingRequest>



@property (copy, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _LTLanguageDetectionResult *lidResult; // ivar: _lidResult
@property (copy, nonatomic) _LTLocalePair *localePair; // ivar: _localePair
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (copy, nonatomic) NSLocale *selectedLocale; // ivar: _selectedLocale
@property (readonly) Class superclass;
@property (copy, nonatomic) NSLocale *targetLocale; // ivar: _targetLocale


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif