// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDINPUTMANAGER_MUL_H
#define TIKEYBOARDINPUTMANAGER_MUL_H

@class TIAutocorrectionList;


#import "TIKeyboardInputManager.h"

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    BOOL _isSuspended;
}


@property (nonatomic) BOOL compositionDisabled; // ivar: _compositionDisabled
@property (retain, nonatomic) TIAutocorrectionList *pregeneratedAutocorrectionList; // ivar: _pregeneratedAutocorrectionList
@property (readonly, nonatomic) BOOL shouldDynamicallySwitchComposedTextBetweenInternalAndExternal;


-(*void)languageModelContainer;
-(BOOL)isUsingMultilingual;
-(BOOL)shouldUpdateDictionary;
-(BOOL)updateLanguageModelForKeyboardState;
-(float)weightForInputMode:(id)arg0 ;
-(id)externalStringToInternal:(id)arg0 ;
-(id)handleKeyboardInput:(id)arg0 ;
-(id)internalStringToExternal:(id)arg0 ;
-(id)keyboardConfiguration;
-(id)lexiconLocaleOfString:(id)arg0 inputMode:(id)arg1 ;
-(id)resourceInputModes;
-(struct ? )lexiconInfoForInputMode:(id)arg0 ;
-(struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> )lexiconInformationVector;
-(unsigned int)externalIndexToInternal:(unsigned int)arg0 ;
-(unsigned int)internalIndexToExternal:(unsigned int)arg0 ;
-(unsigned int)lexiconIDForInputMode:(id)arg0 ;
-(void)clearInput;
-(void)didUpdateInputModeProbabilities:(id)arg0 ;
-(void)didUpdateInputModes:(id)arg0 ;
-(void)enumerateInputModesWithBlock:(id)arg0 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 candidateHandler:(id)arg2 ;
-(void)loadDictionaries;
-(void)resume;
-(void)suspend;
-(void)updateLanguagePriors;


@end


#endif