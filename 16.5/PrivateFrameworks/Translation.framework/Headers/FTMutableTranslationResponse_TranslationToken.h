// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETRANSLATIONRESPONSE_TRANSLATIONTOKEN_H
#define FTMUTABLETRANSLATIONRESPONSE_TRANSLATIONTOKEN_H

@class TranslationToken, NSString;


#import "FTAlignment.h"

@interface FTMutableTranslationResponse_TranslationToken : TranslationToken

@property (nonatomic) BOOL add_space_after;
@property (nonatomic) float confidence;
@property (copy, nonatomic) FTAlignment *mt_alignment;
@property (copy, nonatomic) NSString *token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif