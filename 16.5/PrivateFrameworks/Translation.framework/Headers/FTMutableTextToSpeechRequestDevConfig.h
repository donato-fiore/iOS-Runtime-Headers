// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHREQUESTDEVCONFIG_H
#define FTMUTABLETEXTTOSPEECHREQUESTDEVCONFIG_H

@class NSString;


#import "FTTextToSpeechRequestDevConfig.h"

@interface FTMutableTextToSpeechRequestDevConfig : FTTextToSpeechRequestDevConfig

@property (copy, nonatomic) NSString *resource_asset_path;
@property (nonatomic) BOOL return_log;
@property (nonatomic) BOOL return_server_info;
@property (copy, nonatomic) NSString *voice_asset_path;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif