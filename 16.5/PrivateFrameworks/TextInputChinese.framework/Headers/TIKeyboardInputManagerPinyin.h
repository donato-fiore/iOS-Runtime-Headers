// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDINPUTMANAGERPINYIN_H
#define TIKEYBOARDINPUTMANAGERPINYIN_H



#import "TIKeyboardInputManagerChinesePhonetic.h"

@interface TIKeyboardInputManagerPinyin : TIKeyboardInputManagerChinesePhonetic



-(BOOL)acceptAutocorrectionCommitsInline;
-(BOOL)currentShuangpinTypeUsesSemicolon;
-(BOOL)isShuangpinSemicolon:(id)arg0 ;
-(BOOL)isSpecialInput:(id)arg0 ;
-(BOOL)shouldSearchCompletionForSubstrings;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesGeometryModelData;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(NSUInteger)initialSelectedIndex;
-(id)keyboardBehaviors;
-(id)remapInput:(id)arg0 isFacemarkInput:(*BOOL)arg1 ;
-(id)validCharacterSetForAutocorrection;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;


@end


#endif