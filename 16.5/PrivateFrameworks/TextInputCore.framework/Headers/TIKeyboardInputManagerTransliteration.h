// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDINPUTMANAGERTRANSLITERATION_H
#define TIKEYBOARDINPUTMANAGERTRANSLITERATION_H

@class NSMutableArray, NSArray, TLTransliterator, NSMapTable;


#import "TIKeyboardInputManagerTransliterationBase.h"

@interface TIKeyboardInputManagerTransliteration : TIKeyboardInputManagerTransliterationBase

@property (retain, nonatomic) NSMutableArray *committedCandidates; // ivar: _committedCandidates
@property (retain, nonatomic) NSArray *currentCandidates; // ivar: _currentCandidates
@property (nonatomic) BOOL hasCandidates; // ivar: _hasCandidates
@property (nonatomic) BOOL prioritizeLatinCandidates; // ivar: _prioritizeLatinCandidates
@property (retain, nonatomic) TLTransliterator *transliterator; // ivar: _transliterator
@property (retain, nonatomic) NSMapTable *transliteratorCandidateByMecabraCandidatePointerValue; // ivar: _transliteratorCandidateByMecabraCandidatePointerValue


-(*void)initImplementation;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesCandidateSelection;
-(Class)keyEventMapClass;
-(id)autocorrectionCandidates;
-(id)candidateContextByVerifyingAgainstDocumentState;
-(id)candidates;
-(id)candidatesForInputString:(id)arg0 ;
-(id)candidatesWithTypedString:(id)arg0 autocorrectedString:(id)arg1 ;
-(id)defaultCandidate;
-(id)dictionaryInputMode;
-(id)groupedCandidatesFromCandidates:(id)arg0 usingSortingMethod:(id)arg1 ;
-(id)handleAcceptedCandidate:(id)arg0 keyboardState:(id)arg1 ;
-(id)initWithConfig:(id)arg0 keyboardState:(id)arg1 ;
-(id)keyEventMap;
-(id)keyboardBehaviors;
-(id)keyboardConfiguration;
-(id)mecabraCandidatePointerValueWithCandidate:(id)arg0 ;
-(id)sortingMethods;
-(id)titleForSortingMethod:(id)arg0 ;
-(id)wordCharacters;
-(void)deleteFromInputWithContext:(id)arg0 ;
-(void)loadFavoniusTypingModel;
-(void)suspend;
-(void)syncToKeyboardState:(id)arg0 from:(id)arg1 afterContextChange:(BOOL)arg2 ;


@end


#endif