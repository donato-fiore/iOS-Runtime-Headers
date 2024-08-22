// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEUPDATEDACOUSTICPROFILE_H
#define FTMUTABLEUPDATEDACOUSTICPROFILE_H

@class NSString;


#import "FTUpdatedAcousticProfile.h"
#import "FTUserAcousticProfile.h"

@interface FTMutableUpdatedAcousticProfile : FTUpdatedAcousticProfile

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) FTUserAcousticProfile *updated_acoustic_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif