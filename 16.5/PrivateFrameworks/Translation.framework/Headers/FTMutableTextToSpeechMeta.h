// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHMETA_H
#define FTMUTABLETEXTTOSPEECHMETA_H



#import "FTTextToSpeechMeta.h"
#import "FTTextToSpeechResource.h"
#import "FTQSSVersionInfo.h"
#import "FTTextToSpeechVoice.h"

@interface FTMutableTextToSpeechMeta : FTTextToSpeechMeta

@property (copy, nonatomic) FTTextToSpeechResource *resource;
@property (copy, nonatomic) FTQSSVersionInfo *server_info;
@property (copy, nonatomic) FTTextToSpeechVoice *voice;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif