// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETRANSLATIONSUPPORTEDLANGUAGESRESPONSE_LANGUAGEPAIR_H
#define FTMUTABLETRANSLATIONSUPPORTEDLANGUAGESRESPONSE_LANGUAGEPAIR_H

@class LanguagePair, NSString;



@interface FTMutableTranslationSupportedLanguagesResponse_LanguagePair : LanguagePair

@property (copy, nonatomic) NSString *source_locale;
@property (copy, nonatomic) NSString *target_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif