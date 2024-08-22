// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPINGSESSION_H
#define TITYPINGSESSION_H

@class NSMutableArray, NSString, NSDate, TIKeyboardInput, NSLocale, NSArray, TIKeyboardState, NSUUID, TIKeyboardTouchEvent, NSMutableDictionary;
@protocol NSSecureCoding, TIKeyboardInteractionProtocol;

#import <Foundation/Foundation.h>

#import "TIWordEntry.h"
#import "TIFeatureUsageMetricsCache.h"
#import "TIDeleteWordEvent.h"
#import "TITypingSessionParams.h"

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol>

 {
    NSMutableArray *_cachedKeyboardStates;
    NSMutableArray *_cachedCandidatesOffered;
}


@property (copy, nonatomic) NSString *applicationID; // ivar: _applicationID
@property CGFloat calibratedTimeBase; // ivar: _calibratedTimeBase
@property (retain, nonatomic) NSString *candidateAcceptedTrigger; // ivar: _candidateAcceptedTrigger
@property (nonatomic) int candidatesAccepted; // ivar: _candidatesAccepted
@property (nonatomic) int candidatesAcceptedWithText; // ivar: _candidatesAcceptedWithText
@property (retain, nonatomic) NSString *contextChangeTrigger; // ivar: _contextChangeTrigger
@property (nonatomic) NSUInteger currentLayoutID; // ivar: _currentLayoutID
@property (retain, nonatomic) TIWordEntry *currentWord; // ivar: _currentWord
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didReceiveSecureFieldEvent; // ivar: _didReceiveSecureFieldEvent
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache; // ivar: _featureUsageMetricsCache
@property (nonatomic) BOOL fromLegacyRecording; // ivar: _fromLegacyRecording
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeInputToLastDeletion; // ivar: _includeInputToLastDeletion
@property (nonatomic) BOOL includeInputToLastWord; // ivar: _includeInputToLastWord
@property (nonatomic) NSInteger lastActivePathIndex; // ivar: _lastActivePathIndex
@property (retain, nonatomic) TIDeleteWordEvent *lastDeletion; // ivar: _lastDeletion
@property (retain, nonatomic) TIKeyboardInput *lastInput; // ivar: _lastInput
@property (retain, nonatomic) TIWordEntry *lastWord; // ivar: _lastWord
@property (copy, nonatomic) NSString *layoutName; // ivar: _layoutName
@property (retain, nonatomic) NSMutableArray *layouts; // ivar: _layouts
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSArray *originalWords; // ivar: _originalWords
@property (retain, nonatomic) TIKeyboardState *savedDeleteInputKeyboardState; // ivar: _savedDeleteInputKeyboardState
@property (retain, nonatomic) NSUUID *sessionId; // ivar: _sessionId
@property (retain, nonatomic) TITypingSessionParams *sessionParams; // ivar: _sessionParams
@property (copy, nonatomic) NSString *startContext; // ivar: _startContext
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain) TIKeyboardTouchEvent *timeCalibrationTouch; // ivar: _timeCalibrationTouch
@property (retain, nonatomic) NSMutableDictionary *touchesHistory; // ivar: _touchesHistory
@property (retain, nonatomic) NSMutableArray *userActionHistory; // ivar: _userActionHistory


+(BOOL)supportsSecureCoding;
-(BOOL)isCurrentWordEmpty;
-(BOOL)testForRapidDeleteContextChange:(id)arg0 ;
-(CGFloat)calibratedCurrentTimestamp;
-(id)committedWordDeletionWithDocumentState:(id)arg0 keyboardState:(id)arg1 ;
-(id)createContextChangeEventWithClass:(Class)arg0 documentState:(id)arg1 keyboardState:(id)arg2 extendsPriorWord:(BOOL)arg3 inWord:(id)arg4 inWordRange:(struct _NSRange )arg5 selectionLocation:(NSUInteger)arg6 ;
-(id)currentInputsInRange:(struct _NSRange )arg0 ;
-(id)currentLayoutsInRange:(struct _NSRange )arg0 ;
-(id)currentTouchesInRange:(struct _NSRange )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocale:(id)arg0 keyboardLayout:(id)arg1 ;
-(id)uncommittedWordDeletionFromInputsWithRange:(struct _NSRange )arg0 ;
-(id)uncommittedWordEntryFromInputsWithRange:(struct _NSRange )arg0 documentState:(id)arg1 cancelled:(BOOL)arg2 ;
-(struct _NSRange )safeRangeFromRange:(struct _NSRange )arg0 fromArray:(id)arg1 ;
-(void)acceptingCandidateWithTrigger:(id)arg0 ;
-(void)addDrawInputWithSyllableCount:(NSUInteger)arg0 keyboardState:(id)arg1 ;
-(void)addKeyInput:(id)arg0 keyboardState:(id)arg1 ;
-(void)addTouchEvent:(id)arg0 ;
-(void)candidateAccepted:(id)arg0 withInput:(id)arg1 documentState:(id)arg2 inputContext:(id)arg3 inputStem:(id)arg4 predictionBarHit:(BOOL)arg5 useCandidateSelection:(BOOL)arg6 candidateIndex:(NSInteger)arg7 keyboardState:(id)arg8 ;
-(void)candidatesOffered:(id)arg0 keyboardState:(id)arg1 ;
-(void)changingContextWithTrigger:(id)arg0 ;
-(void)contextDidChange:(id)arg0 wordDelete:(BOOL)arg1 cursorMoved:(BOOL)arg2 extendsPriorWord:(BOOL)arg3 inWord:(id)arg4 range:(struct _NSRange )arg5 selectionLocation:(NSUInteger)arg6 keyboardState:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endSessionWithTimestamp:(id)arg0 ;
-(void)handleUncommittedWord;
-(void)initContextChangeEvent:(id)arg0 withDocumentState:(id)arg1 keyboardState:(id)arg2 extendsPriorWord:(BOOL)arg3 inWord:(id)arg4 inWordRange:(struct _NSRange )arg5 selectionLocation:(NSUInteger)arg6 ;
-(void)insertUncommittedUserAction:(id)arg0 ;
-(void)layoutDidChange:(id)arg0 keyboardState:(id)arg1 ;
-(void)removeInputsAndTouchesWithRange:(struct _NSRange )arg0 ;
-(void)removeInputsInRange:(struct _NSRange )arg0 ;
-(void)removeLayoutsInRange:(struct _NSRange )arg0 ;
-(void)removeTouchesInRange:(struct _NSRange )arg0 ;
-(void)resolveInputs:(id)arg0 cancelledTextRange:(struct _NSRange *)arg1 leadingBackspaceRange:(struct _NSRange *)arg2 trailingTextRange:(struct _NSRange *)arg3 ;
-(void)setClientID:(id)arg0 keyboardState:(id)arg1 ;
-(void)updateCachedStateAfterLastInputWithKeyboardState:(id)arg0 ;
-(void)updateCachedStateBeforeFirstInputWithKeyboardState:(id)arg0 ;


@end


#endif