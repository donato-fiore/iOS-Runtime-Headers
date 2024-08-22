// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDINPUTMANAGERWRAPPER_H
#define TIKEYBOARDINPUTMANAGERWRAPPER_H

@class TIKeyboardInputManagerStub, NSString;
@protocol TIClientProxy, TIKeyboardInputManagerLogging;


#import "TIKeyboardInputManagerBase.h"

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub

@property (retain, nonatomic) NSString *cachedContextChangeTrigger; // ivar: _cachedContextChangeTrigger
@property (retain, nonatomic) NSObject<TIClientProxy> *clientProxy; // ivar: _clientProxy
@property (retain, nonatomic) TIKeyboardInputManagerBase *inputManager; // ivar: _inputManager
@property (retain, nonatomic) NSObject<TIKeyboardInputManagerLogging> *logger; // ivar: _logger


-(id)init;
-(void)_updateKeyboardOutput:(id)arg0 withSecureCandidatePayload:(id)arg1 keyboardState:(id)arg2 ;
-(void)acceptSecureCandidate:(id)arg0 keyboardState:(id)arg1 completion:(id)arg2 ;
-(void)acceptingCandidateWithTrigger:(id)arg0 ;
-(void)addSupplementalLexicon:(id)arg0 completionHandler:(id)arg1 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)candidateRejected:(id)arg0 ;
-(void)changingContextWithTrigger:(id)arg0 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 requestToken:(id)arg2 completionHandler:(id)arg3 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateCandidatesWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)generateRefinementsForCandidate:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateReplacementsForString:(id)arg0 keyLayout:(id)arg1 continuation:(id)arg2 ;
-(void)handleAcceptedCandidate:(id)arg0 acceptedSecureCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleAcceptedCandidate:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleKeyboardInput:(id)arg0 acceptedSecureCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleKeyboardInput:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleKeyboardState:(id)arg0 ;
-(void)lastAcceptedCandidateCorrected;
-(void)logDiscoverabilityEvent:(int)arg0 userInfo:(id)arg1 ;
-(void)performHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 continuation:(id)arg2 ;
-(void)performHitTestForTouchEvents:(id)arg0 keyboardState:(id)arg1 continuation:(id)arg2 ;
-(void)removeSupplementalLexiconWithIdentifier:(NSUInteger)arg0 ;
-(void)setOriginalInput:(id)arg0 ;
-(void)skipHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(void)skipHitTestForTouchEvents:(id)arg0 keyboardState:(id)arg1 ;
-(void)smartSelectionForTextInDocument:(id)arg0 inRange:(struct _NSRange )arg1 language:(id)arg2 tokenizedRanges:(id)arg3 options:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)syncToKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(void)textAccepted:(id)arg0 ;
-(void)textAccepted:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAnalyticsForRejectedSuggestion:(id)arg0 keyboardState:(id)arg1 ;
-(void)writeTypologyLogWithCompletionHandler:(id)arg0 ;


@end


#endif