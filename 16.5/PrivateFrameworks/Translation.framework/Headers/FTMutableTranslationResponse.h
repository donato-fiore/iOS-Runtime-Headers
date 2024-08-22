// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETRANSLATIONRESPONSE_H
#define FTMUTABLETRANSLATIONRESPONSE_H

@class NSString, NSArray;


#import "FTTranslationResponse.h"

@interface FTMutableTranslationResponse : FTTranslationResponse

@property (copy, nonatomic) NSString *engine_input;
@property (copy, nonatomic) NSArray *engine_output;
@property (nonatomic) BOOL final_message;
@property (copy, nonatomic) NSArray *n_best_translated_phrases;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSString *sequence_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif