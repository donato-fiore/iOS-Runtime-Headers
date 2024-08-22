// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TICONVERTEDCANDIDATE_H
#define TICONVERTEDCANDIDATE_H

@class TIKeyboardCandidate, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TIConvertedCandidate : NSObject

@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (copy, nonatomic) NSString *convertedInput; // ivar: _convertedInput
@property (copy, nonatomic) NSArray *geometryData; // ivar: _geometryData
@property (copy, nonatomic) NSArray *replacedAmbiguousPinyinSyllables; // ivar: _replacedAmbiguousPinyinSyllables
@property (copy, nonatomic) NSArray *replacementUnambiguousPinyinSyllables; // ivar: _replacementUnambiguousPinyinSyllables
@property (readonly, nonatomic) NSString *revertedInput;
@property (copy, nonatomic) NSArray *touchData; // ivar: _touchData


-(id)initWithCandidate:(id)arg0 ;
-(id)initWithCandidate:(id)arg0 replacedAmbiguousPinyinSyllables:(id)arg1 replacementUnambiguousPinyinSyllables:(id)arg2 convertedInput:(id)arg3 ;


@end


#endif