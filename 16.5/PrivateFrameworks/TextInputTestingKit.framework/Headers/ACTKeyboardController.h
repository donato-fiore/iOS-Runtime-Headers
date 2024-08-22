// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTKEYBOARDCONTROLLER_H
#define ACTKEYBOARDCONTROLLER_H

@class TIAutocorrectionList, NSMutableDictionary, TIKeyboardCandidate, TIKeyboardCandidateResultSet, NSString, NSLock, TICandidateRequestToken, TIKeyboardInputManager, TIInputContextHistory, TIKeyboardInputManagerState, TIKeyboardInputManagerWrapper, TIInputMode, TIKeyboardIntermediateText, UIKBTree, TIKeyboardState, NSArray, NSMutableSet, NSCondition, TISmartPunctuationController;
@protocol ACTClientProtocol, TIKeyboardInputManagerFactory;

#import <Foundation/Foundation.h>

#import "ACTKeyboardLayoutUtils.h"
#import "TTKSimpleKeyboardPlane.h"

@interface ACTKeyboardController : NSObject <ACTClientProtocol>

 {
    BOOL _hardwareKeyboardMode;
    TIAutocorrectionList *_autocorrectionList;
}


@property (retain, nonatomic) NSMutableDictionary *activeTouchState; // ivar: _activeTouchState
@property (nonatomic) BOOL asyncPredictions; // ivar: _asyncPredictions
@property (nonatomic) NSUInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (nonatomic) NSUInteger autocorrectionType; // ivar: _autocorrectionType
@property (readonly, nonatomic, getter=isAutoshifted) BOOL autoshifted;
@property (nonatomic) BOOL canSuggestSupplementalItemsForCurrentSelection; // ivar: _canSuggestSupplementalItemsForCurrentSelection
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // ivar: _candidateResultSet
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSLock *cpRequestTokenLock; // ivar: _cpRequestTokenLock
@property (retain, nonatomic) TICandidateRequestToken *currentRequestToken; // ivar: _currentRequestToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TIKeyboardInputManager *existingInputManager;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TIInputContextHistory *inputContextHistory; // ivar: _inputContextHistory
@property (nonatomic) BOOL inputIsPunctuationFollowingContinuousPath; // ivar: _inputIsPunctuationFollowingContinuousPath
@property (readonly, nonatomic) TIKeyboardInputManager *inputManager;
@property (retain, nonatomic) TIKeyboardInputManagerState *inputManagerState; // ivar: _inputManagerState
@property (retain, nonatomic) TIKeyboardInputManagerWrapper *inputManagerWrapper; // ivar: _inputManagerWrapper
@property (readonly, nonatomic) TIInputMode *inputMode; // ivar: _inputMode
@property (copy, nonatomic) NSString *inputModeIdentifier; // ivar: _inputModeIdentifier
@property (nonatomic) BOOL insertsSpaceAfterPredictiveInput; // ivar: _insertsSpaceAfterPredictiveInput
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText; // ivar: _intermediateText
@property (nonatomic) BOOL isScreenLocked; // ivar: _isScreenLocked
@property (retain, nonatomic) UIKBTree *keyboard; // ivar: _keyboard
@property (nonatomic) NSObject<TIKeyboardInputManagerFactory> *keyboardInputManagerFactory; // ivar: _keyboardInputManagerFactory
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (retain, nonatomic) UIKBTree *keyplane; // ivar: _keyplane
@property (retain, nonatomic) NSArray *keys; // ivar: _keys
@property (retain, nonatomic) TICandidateRequestToken *lastCPRequestToken; // ivar: _lastCPRequestToken
@property (readonly, nonatomic) NSString *lastCommittedText; // ivar: _lastCommittedText
@property (nonatomic) BOOL lastInputWasContinuousPath; // ivar: _lastInputWasContinuousPath
@property (nonatomic) BOOL lastInputWasSelection; // ivar: _lastInputWasSelection
@property (readonly, nonatomic) ACTKeyboardLayoutUtils *layoutUtils; // ivar: _layoutUtils
@property (retain, nonatomic) NSMutableSet *leftKeys; // ivar: _leftKeys
@property (nonatomic) BOOL longPredictionListEnabled; // ivar: _longPredictionListEnabled
@property (copy, nonatomic) NSString *markedText; // ivar: _markedText
@property (nonatomic) BOOL nextKeyIsFlick; // ivar: _nextKeyIsFlick
@property (nonatomic) BOOL nextKeyIsMultitap; // ivar: _nextKeyIsMultitap
@property (readonly, nonatomic) NSArray *predictions;
@property (copy, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (readonly, nonatomic) NSCondition *requestCondition; // ivar: _requestCondition
@property (retain, nonatomic) NSMutableSet *rightKeys; // ivar: _rightKeys
@property (nonatomic) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (nonatomic) _NSRange selectedRange; // ivar: _selectedRange
@property (readonly, nonatomic, getter=isShifted) BOOL shifted;
@property (nonatomic) BOOL shouldSkipCandidateSelection;
@property (readonly, nonatomic) TISmartPunctuationController *smartPunctuationController; // ivar: _smartPunctuationController
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supplementalLexiconIdentifier; // ivar: _supplementalLexiconIdentifier
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) TTKSimpleKeyboardPlane *ttkLayout; // ivar: _ttkLayout
@property (nonatomic) BOOL usesAutocapitalization; // ivar: _usesAutocapitalization
@property (nonatomic) BOOL usesAutocorrection; // ivar: _usesAutocorrection
@property (nonatomic) BOOL usesPrediction; // ivar: _usesPrediction
@property (nonatomic) BOOL usesTransliteration; // ivar: _usesTransliteration
@property (nonatomic) BOOL wordLearningEnabled; // ivar: _wordLearningEnabled


-(BOOL)generatesCandidates;
-(BOOL)hasPrediction:(id)arg0 ;
-(BOOL)isContinuousPathNonSpacePunctuation:(unsigned int)arg0 ;
-(BOOL)isKeyplane:(id)arg0 alternateOfKeyplane:(id)arg1 ;
-(BOOL)isKeyplane:(id)arg0 shiftAlternateOfKeyplane:(id)arg1 ;
-(BOOL)syncToKeyboardStateByWaitingForResults:(BOOL)arg0 ;
-(BOOL)touchPassesDragThresholdAtPoint:(struct CGPoint )arg0 pathIndex:(NSUInteger)arg1 ;
-(NSInteger)keyCodeWithString:(id)arg0 inKeyplane:(id)arg1 ;
-(NSInteger)performTouchDownAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(NSInteger)performTouchDragAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(NSInteger)retestTouchAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(float)distanceFromKey:(id)arg0 toPoint:(struct CGPoint )arg1 ;
-(id)adjustContinuousPathCandidate:(id)arg0 ;
-(id)candidateByApplyingSmartPunctuationToCandidate:(id)arg0 ;
-(id)candidateToConfirmInputString;
-(id)candidatesForString:(id)arg0 ;
-(id)clonedKeyboardState;
-(id)createKeyboardInputManagerWrapper;
-(id)displayStringOverrideForKey:(id)arg0 ;
-(id)init;
-(id)initWithInputMode:(id)arg0 ;
-(id)keyContainingPoint:(struct CGPoint )arg0 inKeyplane:(id)arg1 ;
-(id)keyToAccessKeyplane:(id)arg0 fromKeyplane:(id)arg1 ;
-(id)performSkipTapAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 forcedKeyCode:(NSInteger)arg5 ;
-(id)performTouchUpAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 secondaryString:(BOOL)arg5 ;
-(id)trimmedCandidate:(id)arg0 ;
-(struct _NSRange )selectedRangeForText:(id)arg0 ;
-(void)acceptAutocorrection;
-(void)acceptCandidate:(id)arg0 ;
-(void)acceptCandidate:(id)arg0 predictiveCandidate:(BOOL)arg1 ;
-(void)acceptCandidateInputEvent:(id)arg0 fromCandidateBar:(BOOL)arg1 ;
-(void)addInput:(id)arg0 fromVariantKey:(BOOL)arg1 fromGestureKey:(BOOL)arg2 ;
-(void)addInput:(id)arg0 fromVariantKey:(BOOL)arg1 fromGestureKey:(BOOL)arg2 touchEvent:(id)arg3 ;
-(void)addInput:(id)arg0 fromVariantKey:(BOOL)arg1 touchEvent:(id)arg2 ;
-(void)addStringFromGestureKeyInput:(id)arg0 ;
-(void)addStringFromVariantKey:(id)arg0 ;
-(void)adjustCursorByOffset:(NSInteger)arg0 ;
-(void)adjustKeyplaneEmulatingKBStar:(id)arg0 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)alternateKeyplane;
-(void)closeRequestToken:(id)arg0 ;
-(void)commitText;
-(void)dealloc;
-(void)deleteBackwards;
-(void)deleteInput;
-(void)deleteInput:(id)arg0 ;
-(void)deleteText:(id)arg0 rawText:(id)arg1 ;
-(void)divideKeyplane:(id)arg0 intoLeft:(id)arg1 right:(id)arg2 ;
-(void)enumerateKeyplaneNamesAdjacentToKeyplane:(id)arg0 usingBlock:(id)arg1 ;
-(void)generateAutocorrectionsOrCandidates;
-(void)generateAutocorrectionsWithCount:(NSUInteger)arg0 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 ;
-(void)generateAutocorrectionsWithShiftState:(int)arg0 ;
-(void)generateCandidates;
-(void)generateCandidatesWithKeyboardState:(id)arg0 ;
-(void)handleKeyboardInput:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)mergeFrameFromKey:(id)arg0 intoKey:(id)arg1 ;
-(void)performTouchCancelAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(void)performTouchEndRestAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(void)performTouchRestAtLocation:(struct CGPoint )arg0 radius:(float)arg1 timestamp:(CGFloat)arg2 pathIndex:(NSUInteger)arg3 fingerID:(int)arg4 ;
-(void)processPayloadInfo:(id)arg0 ;
-(void)pushAutocorrections:(id)arg0 requestToken:(id)arg1 ;
-(void)registerLayoutWithFavonius;
-(void)rejectCandidate:(id)arg0 ;
-(void)reset;
-(void)setInitialKeyplane;
-(void)shiftKeyplane;
-(void)syncToDocumentState:(id)arg0 ;
-(void)syncToEmptyDocument;
-(void)syncToKeyboardState;
-(void)tearDown;
-(void)textAccepted:(id)arg0 ;
-(void)updateAutoshift;
-(void)updateDocumentState;
-(void)updateKeyboardOutput:(id)arg0 withInputForSmartPunctuation:(id)arg1 ;


@end


#endif