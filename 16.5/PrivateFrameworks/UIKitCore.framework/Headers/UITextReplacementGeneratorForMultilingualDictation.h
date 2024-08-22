// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTREPLACEMENTGENERATORFORMULTILINGUALDICTATION_H
#define UITEXTREPLACEMENTGENERATORFORMULTILINGUALDICTATION_H

@class NSArray;


#import "UITextReplacementGenerator.h"

@interface UITextReplacementGeneratorForMultilingualDictation : UITextReplacementGenerator

@property (readonly, nonatomic) NSArray *multilingualAlternatives; // ivar: _multilingualAlternatives


-(id)initWithMultilingualAlternatives:(id)arg0 stringToReplace:(id)arg1 replacementRange:(id)arg2 ;
-(id)replacements;


@end


#endif