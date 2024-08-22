// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHSPEECHFEATUREREQUEST_LEXICONENTRY_H
#define FTMUTABLETEXTTOSPEECHSPEECHFEATUREREQUEST_LEXICONENTRY_H

@class LexiconEntry, NSString;


#import "FTTextToSpeechSpeechFeatureInputPhonemeSequence.h"

@interface FTMutableTextToSpeechSpeechFeatureRequest_LexiconEntry : LexiconEntry

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputPhonemeSequence *value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif