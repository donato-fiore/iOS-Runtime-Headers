// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEBATCHTRANSLATIONRESPONSE_TRANSLATIONPHRASE_H
#define FTMUTABLEBATCHTRANSLATIONRESPONSE_TRANSLATIONPHRASE_H

@class TranslationPhrase, NSString, NSArray;


#import "FTTranslationPhraseMetaInfo.h"

@interface FTMutableBatchTranslationResponse_TranslationPhrase : TranslationPhrase

@property (nonatomic) float confidence;
@property (nonatomic) BOOL low_confidence;
@property (copy, nonatomic) NSString *meta_info;
@property (copy, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;
@property (copy, nonatomic) NSArray *repeated_spans;
@property (copy, nonatomic) NSString *translation_phrase;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif