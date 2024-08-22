// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLESIRITRANSLATIONINFO_H
#define FTMUTABLESIRITRANSLATIONINFO_H

@class NSArray, NSString;


#import "FTSiriTranslationInfo.h"
#import "FTRecognitionSausage.h"

@interface FTMutableSiriTranslationInfo : FTSiriTranslationInfo

@property (copy, nonatomic) NSArray *itn_alignments;
@property (copy, nonatomic) NSString *post_itn_recognition;
@property (copy, nonatomic) NSArray *post_itn_tokens;
@property (copy, nonatomic) NSArray *raw_nbest_choices;
@property (copy, nonatomic) FTRecognitionSausage *raw_sausage;
@property (copy, nonatomic) NSArray *translation_phrase;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif