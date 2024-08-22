// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTCHECKINGCONTROLLER_H
#define UITEXTCHECKINGCONTROLLER_H

@protocol UITextCheckingClient;

#import <Foundation/Foundation.h>

#import "UITextChecker.h"

@interface UITextCheckingController : NSObject {
    id<UITextCheckingClient> *_client;
    UITextChecker *_textChecker;
    _NSRange _selectedRangeFromPreviousUnchecked;
    _NSRange _previousCheckedSentenceRange;
    _NSRange _previousCheckedSelectedRange;
    NSInteger _prechangeCheckingSequenceNumber;
    __tccClientFlags _tccClientFlags;
}


@property (readonly) NSObject<UITextCheckingClient> *client;


-(BOOL)continuousSpellCheckingEnabled;
-(BOOL)foundApostropheAfterRange:(struct _NSRange )arg0 ;
-(BOOL)rangeIsSuitableForGrammarAutocorrections:(id)arg0 ;
-(id)initWithClient:(id)arg0 ;
-(id)textChecker;
-(id)validAnnotations;
-(struct _NSRange )nsRangeForTextRange:(id)arg0 ;
-(struct _NSRange )selectedRange;
-(struct _NSRange )terminatedSentenceRangeInTextRange:(id)arg0 ;
-(void)_addGrammarAttributesForRange:(struct _NSRange )arg0 details:(id)arg1 inAnnotatedString:(id)arg2 ;
-(void)_handleGrammarCheckingResults:(id)arg0 sequenceNumber:(NSInteger)arg1 forSentenceRange:(id)arg2 ;
-(void)checkGrammarForSentenceInRange:(id)arg0 ;
-(void)checkSpellingForSelectionChangeFromRange:(struct _NSRange )arg0 ;
-(void)checkSpellingForWordInRange:(id)arg0 ;
-(void)considerTextCheckingForRange:(id)arg0 ;
-(void)dealloc;
-(void)didChangeSelectionFromRange:(id)arg0 ;
-(void)didChangeTextInRange:(id)arg0 ;
-(void)feedbackForGrammarMarkersFromWordsInRange:(id)arg0 replacementText:(id)arg1 ;
-(void)insertedTextInRange:(id)arg0 ;
-(void)invalidate;
-(void)preheatTextChecker;
-(void)removeGrammarAnnotationFromWordAtPosition:(id)arg0 ;
-(void)removeGrammarMarkersFromWordsInRange:(id)arg0 ;
-(void)removeSpellingMarkersFromWordInRange:(id)arg0 ;
-(void)willReplaceTextInRange:(id)arg0 withText:(id)arg1 ;


@end


#endif