// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLESTARTMULTILINGUALSPEECHREQUEST_H
#define FTMUTABLESTARTMULTILINGUALSPEECHREQUEST_H

@class NSArray;


#import "FTStartMultilingualSpeechRequest.h"
#import "FTStartSpeechRequest.h"

@interface FTMutableStartMultilingualSpeechRequest : FTStartMultilingualSpeechRequest

@property (copy, nonatomic) NSArray *language_parameters_by_id;
@property (copy, nonatomic) FTStartSpeechRequest *start_speech_request;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif