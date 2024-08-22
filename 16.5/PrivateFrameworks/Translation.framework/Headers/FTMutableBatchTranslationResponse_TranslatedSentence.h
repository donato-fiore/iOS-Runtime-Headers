// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEBATCHTRANSLATIONRESPONSE_TRANSLATEDSENTENCE_H
#define FTMUTABLEBATCHTRANSLATIONRESPONSE_TRANSLATEDSENTENCE_H

@class TranslatedSentence, NSString, NSArray;


#import "FTSpan.h"

@interface FTMutableBatchTranslationResponse_TranslatedSentence : TranslatedSentence

@property (copy, nonatomic) NSString *engine_input;
@property (copy, nonatomic) NSArray *n_best_choices;
@property (copy, nonatomic) FTSpan *source_span;
@property (copy, nonatomic) FTSpan *target_span;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif