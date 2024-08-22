// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRISPEAKTEXTREQUEST_H
#define WFSIRISPEAKTEXTREQUEST_H

@class NSString;


#import "WFSiriActionRequest.h"

@interface WFSiriSpeakTextRequest : WFSiriActionRequest

@property (readonly, copy, nonatomic) NSString *utterance; // ivar: _utterance


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUtterance:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif