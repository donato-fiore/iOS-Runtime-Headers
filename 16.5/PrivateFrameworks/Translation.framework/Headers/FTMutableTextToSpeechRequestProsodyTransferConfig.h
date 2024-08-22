// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHREQUESTPROSODYTRANSFERCONFIG_H
#define FTMUTABLETEXTTOSPEECHREQUESTPROSODYTRANSFERCONFIG_H

@class NSString;


#import "FTTextToSpeechRequestProsodyTransferConfig.h"
#import "FTTextToSpeechUserVoiceProfile.h"
#import "FTTextToSpeechSpeechFeatureInputWave.h"

@interface FTMutableTextToSpeechRequestProsodyTransferConfig : FTTextToSpeechRequestProsodyTransferConfig

@property (copy, nonatomic) FTTextToSpeechUserVoiceProfile *user_voice_profile;
@property (copy, nonatomic) NSString *user_voice_profile_url;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif