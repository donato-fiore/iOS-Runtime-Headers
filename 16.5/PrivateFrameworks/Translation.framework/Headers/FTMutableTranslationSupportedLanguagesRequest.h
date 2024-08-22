// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETRANSLATIONSUPPORTEDLANGUAGESREQUEST_H
#define FTMUTABLETRANSLATIONSUPPORTEDLANGUAGESREQUEST_H

@class NSString;


#import "FTTranslationSupportedLanguagesRequest.h"

@interface FTMutableTranslationSupportedLanguagesRequest : FTTranslationSupportedLanguagesRequest

@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *task;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif