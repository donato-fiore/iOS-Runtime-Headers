// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETRANSLATIONSUPPORTEDLANGUAGESRESPONSE_H
#define FTMUTABLETRANSLATIONSUPPORTEDLANGUAGESRESPONSE_H

@class NSArray, NSString;


#import "FTTranslationSupportedLanguagesResponse.h"

@interface FTMutableTranslationSupportedLanguagesResponse : FTTranslationSupportedLanguagesResponse

@property (copy, nonatomic) NSArray *language_pairs;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif