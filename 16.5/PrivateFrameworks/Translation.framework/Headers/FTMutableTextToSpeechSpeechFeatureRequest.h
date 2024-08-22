// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHSPEECHFEATUREREQUEST_H
#define FTMUTABLETEXTTOSPEECHSPEECHFEATUREREQUEST_H

@class NSArray, NSString;


#import "FTTextToSpeechSpeechFeatureRequest.h"
#import "FTTextToSpeechSpeechFeatureModelIdentifier.h"
#import "FTTextToSpeechSpeechFeatureInputText.h"
#import "FTTextToSpeechSpeechFeatureInputWave.h"

@interface FTMutableTextToSpeechSpeechFeatureRequest : FTTextToSpeechSpeechFeatureRequest

@property (copy, nonatomic) NSArray *lexicon;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (nonatomic) BOOL support_homograph;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputText *text;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif