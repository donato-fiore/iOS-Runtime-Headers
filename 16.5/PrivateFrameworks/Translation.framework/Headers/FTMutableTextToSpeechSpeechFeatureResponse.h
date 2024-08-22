// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHSPEECHFEATURERESPONSE_H
#define FTMUTABLETEXTTOSPEECHSPEECHFEATURERESPONSE_H

@class NSString, NSArray;


#import "FTTextToSpeechSpeechFeatureResponse.h"

@interface FTMutableTextToSpeechSpeechFeatureResponse : FTTextToSpeechSpeechFeatureResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSArray *features;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif