// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLECREATELANGUAGEPROFILEREQUEST_H
#define FTMUTABLECREATELANGUAGEPROFILEREQUEST_H

@class NSString, NSArray;


#import "FTCreateLanguageProfileRequest.h"
#import "FTUserLanguageProfile.h"

@interface FTMutableCreateLanguageProfileRequest : FTCreateLanguageProfileRequest

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *user_data;
@property (copy, nonatomic) FTUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif