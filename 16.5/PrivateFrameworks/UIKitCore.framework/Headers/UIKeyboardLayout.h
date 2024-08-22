// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDLAYOUT_H
#define UIKEYBOARDLAYOUT_H

@class NSMutableArray, NSUUID, NSString, NSMutableDictionary, NSMutableSet;
@protocol _UIKBRTRecognizerDelegate, _UIKBRTTouchDriftingDelegate, _UIViewRepresentingKeyboardLayout, _UIScreenEdgePanRecognizerDelegate, OS_dispatch_queue, UIKeyboardLayoutSizeDelegate;


#import "UIView.h"
#import "UITextInputTraits.h"
#import "UIKBTextEditingTraits.h"
#import "UIKeyboardTaskQueue.h"
#import "UIKeyboardTypingStyleEstimator.h"
#import "UIEvent.h"
#import "UIKBCadenceMonitor.h"
#import "_UIKBRTFingerDetection.h"
#import "_UIKBRTRecognizer.h"
#import "_UIScreenEdgePanRecognizer.h"
#import "UIKBScreenTraits.h"
#import "_UIKBRTTouchDrifting.h"
#import "_UIKBRTTouchVelocities.h"

@interface UIKeyboardLayout : UIView <_UIKBRTRecognizerDelegate, _UIKBRTTouchDriftingDelegate, _UIViewRepresentingKeyboardLayout, _UIScreenEdgePanRecognizerDelegate>

 {
    UITextInputTraits *_inputTraits;
    UIKBTextEditingTraits *_textEditingTraits;
    NSMutableArray *_uncommittedTouchUUIDs;
    UIKeyboardTaskQueue *_taskQueue;
    UIKeyboardTypingStyleEstimator *_typingStyleEstimator;
    UIEvent *_currentTouchDownEvent;
}


@property (retain, nonatomic) NSUUID *activeTouchUUID; // ivar: _activeTouchUUID
@property (retain, nonatomic) UIKBCadenceMonitor *cadenceMonitor; // ivar: _cadenceMonitor
@property (readonly, nonatomic) UIEvent *currentTouchDownEvent;
@property (nonatomic) NSUInteger cursorLocation; // ivar: _cursorLocation
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deferredTaskForActiveTouch; // ivar: _deferredTaskForActiveTouch
@property (copy, nonatomic) id *deferredTouchDownTask; // ivar: _deferredTouchDownTask
@property (copy, nonatomic) id *deferredTouchMovedTask; // ivar: _deferredTouchMovedTask
@property (retain, nonatomic) NSMutableDictionary *deferredTouchTaskLists; // ivar: _deferredTouchTaskLists
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deferredTouchTaskListsQueue; // ivar: _deferredTouchTaskListsQueue
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableInteraction; // ivar: _disableInteraction
@property (retain, nonatomic) _UIKBRTFingerDetection *fingerDetection; // ivar: _fingerDetection
@property (retain, nonatomic) _UIKBRTRecognizer *handRestRecognizer; // ivar: _handRestRecognizer
@property (readonly, nonatomic) BOOL hasPreferredHeight; // ivar: _hasPreferredHeight
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideKeysUnderIndicator; // ivar: hideKeysUnderIndicator
@property (readonly, nonatomic) NSInteger idiom;
@property (nonatomic) BOOL ignoringKeyplaneChange; // ivar: _ignoringKeyplaneChange
@property (nonatomic) BOOL isExecutingDeferredTouchTasks; // ivar: _isExecutingDeferredTouchTasks
@property (readonly, nonatomic) BOOL isFloating;
@property (nonatomic) CGFloat lastTouchUpTime; // ivar: lastTouchUpTime
@property (retain, nonatomic) NSString *layoutTag;
@property (nonatomic) BOOL listeningForDidChange; // ivar: _listeningForDidChange
@property (nonatomic) BOOL listeningForWillChange; // ivar: _listeningForWillChange
@property (readonly, nonatomic) NSInteger orientation;
@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (retain, nonatomic) _UIScreenEdgePanRecognizer *screenEdgePanRecognizer; // ivar: _screenEdgePanRecognizer
@property (retain, nonatomic) UIKBScreenTraits *screenTraits; // ivar: _screenTraits
@property (retain, nonatomic) NSUUID *shiftKeyTouchUUID; // ivar: _shiftKeyTouchUUID
@property (weak, nonatomic) NSObject<UIKeyboardLayoutSizeDelegate> *sizeDelegate; // ivar: _sizeDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) CGFloat timestampOfLastTouchesEnded; // ivar: _timestampOfLastTouchesEnded
@property (retain, nonatomic) _UIKBRTTouchDrifting *touchDrifting; // ivar: _touchDrifting
@property (retain, nonatomic) NSMutableSet *touchIgnoredUUIDSet; // ivar: _touchIgnoredUUIDSet
@property (retain, nonatomic) _UIKBRTTouchVelocities *touchVelocities; // ivar: _touchVelocities
@property (readonly, nonatomic) UIKeyboardTypingStyleEstimator *typingStyleEstimator;


+(BOOL)_showSmallDisplayKeyplane;
+(Class)_subclassForScreenTraits:(id)arg0 ;
+(struct CGSize )keyboardSizeForInputMode:(id)arg0 screenTraits:(id)arg1 keyboardType:(NSInteger)arg2 ;
-(BOOL)_allowContinuousPathUI;
-(BOOL)_canAddTouchesToScreenGestureRecognizer:(id)arg0 ;
-(BOOL)_hasRelatedTouchesForTouchState:(id)arg0 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingForTouchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldAllowKeyboardHandlingIfNecessaryForTouch:(id)arg0 phase:(NSInteger)arg1 withTouchState:(id)arg2 task:(id)arg3 ;
-(BOOL)canForceTouchUUIDCommit:(id)arg0 inWindow:(id)arg1 ;
-(BOOL)canHandleEvent:(id)arg0 ;
-(BOOL)canMultitap;
-(BOOL)canProduceString:(id)arg0 ;
-(BOOL)diacriticForwardCompose;
-(BOOL)globeKeyDisplaysAsEmojiKey;
-(BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg0 fromPoint:(struct CGPoint )arg1 toPoint:(struct CGPoint )arg2 forRestingState:(NSUInteger)arg3 otherRestedTouchLocations:(id)arg4 ;
-(BOOL)hasAccentKey;
-(BOOL)hasActiveContinuousPathInput;
-(BOOL)hasCandidateKeys;
-(BOOL)ignoresShiftState;
-(BOOL)isAlphabeticPlane;
-(BOOL)isEmojiKeyplane;
-(BOOL)isGeometricShiftOrMoreKeyForTouch:(id)arg0 ;
-(BOOL)isHandwritingPlane;
-(BOOL)isKanaPlane;
-(BOOL)isPossibleToTypeFast;
-(BOOL)isReachableDevice;
-(BOOL)isResized;
-(BOOL)isResizing;
-(BOOL)isShiftKeyBeingHeld;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)keyplaneContainsDismissKey;
-(BOOL)keyplaneContainsEmojiKey;
-(BOOL)performReturnAction;
-(BOOL)performSpaceAction;
-(BOOL)queryShouldNeverIgnoreTouchStateWithIdentifier:(id)arg0 touchState:(id)arg1 startPoint:(struct CGPoint )arg2 forRestingState:(NSUInteger)arg3 ;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg0 atPoint:(struct CGPoint )arg1 toBegin:(BOOL)arg2 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
-(BOOL)shouldMergeAssistantBarWithKeyboardLayout;
-(BOOL)shouldShowIndicator;
-(BOOL)showsDedicatedEmojiKeyAlongsideGlobeButton;
-(BOOL)supportsEmoji;
-(BOOL)supportsVirtualDrift;
-(BOOL)usesAutoShift;
-(CGFloat)biasedKeyboardWidthRatio;
-(CGFloat)flickDistance;
-(CGFloat)hitBuffer;
-(NSInteger)currentHandBias;
-(NSUInteger)_uikbrtTouchDrifting:(id)arg0 fingerIDFortouchIdentifier:(id)arg1 ;
-(NSUInteger)fingerIDForTouchUUID:(id)arg0 ;
-(NSUInteger)targetEdgesForScreenGestureRecognition;
-(NSUInteger)textEditingKeyMask;
-(SEL)handlerForNotification:(id)arg0 ;
-(id)_keyboardLayoutView;
-(id)_keyboardLongPressInteractionRegions;
-(id)_touchStateForTouch:(id)arg0 ;
-(id)_uikbrtTouchDrifting:(id)arg0 touchIdentifiersForFingerID:(NSUInteger)arg1 ;
-(id)activationIndicatorMask;
-(id)activationIndicatorView;
-(id)baseKeyForString:(id)arg0 ;
-(id)candidateList;
-(id)currentKeyplane;
-(id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(NSInteger)arg0 ;
-(id)getRomanAccentVariantsForString:(id)arg0 inputMode:(id)arg1 keyboardVariantIndludes:(int)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)internationalKeyDisplayStringOnEmojiKeyboard;
-(id)keyplaneForKey:(id)arg0 ;
-(id)keyplaneNamed:(id)arg0 ;
-(id)simulateTouch:(struct CGPoint )arg0 ;
-(id)simulateTouchForCharacter:(id)arg0 errorVector:(struct CGPoint )arg1 shouldTypeVariants:(BOOL)arg2 baseKeyForVariants:(BOOL)arg3 ;
-(id)touchCancelledTaskForTouchState:(SEL)arg0 forResting:(id)arg1 ;
-(id)touchChangedTaskForTouchState:(SEL)arg0 ;
-(id)touchDownTaskForTouchState:(SEL)arg0 ;
-(id)touchDraggedTaskForTouchState:(SEL)arg0 ;
-(id)touchUUIDsToCommitBeforeTouchUUID:(id)arg0 ;
-(id)touchUpTaskForTouchState:(SEL)arg0 ;
-(struct CGPoint )_uikbrtTouchDrifting:(id)arg0 touchCenterForFingerID:(NSUInteger)arg1 ;
-(struct CGPoint )getCenterForKeyUnderLeftIndexFinger;
-(struct CGPoint )getCenterForKeyUnderRightIndexFinger;
-(struct CGPoint )leftVirtualDriftOffset;
-(struct CGPoint )rightVirtualDriftOffset;
-(struct CGRect )dragGestureRectInView:(id)arg0 ;
-(struct CGRect )frameForKeylayoutName:(id)arg0 ;
-(struct CGSize )stretchFactor;
-(struct UIEdgeInsets )keyplanePadding;
-(unsigned char)getHandRestRecognizerState;
-(void)_addTouchToScreenEdgePanRecognizer:(id)arg0 ;
-(void)_clearDeferredTouchTasks;
-(void)_enumerateDeferredTouchUUIDs:(id)arg0 withBlock:(id)arg1 ;
-(void)_executeDeferredTouchTasks;
-(void)_ignoreTouchState:(id)arg0 ;
-(void)_removeTouchesFromProcessing:(id)arg0 ;
-(void)_setRequiresExclusiveTouch:(BOOL)arg0 ;
-(void)_touchEndedProcessingForTouches:(id)arg0 ;
-(void)_uikbrtTouchDriftingStateChanged:(id)arg0 ;
-(void)_updateTouchState:(id)arg0 errorVector:(struct CGPoint )arg1 rowOffsetFromHomeRow:(NSInteger)arg2 ;
-(void)acceptRecentInputIfNecessary;
-(void)assertSavedLocation:(struct CGPoint )arg0 onTouch:(id)arg1 inWindow:(id)arg2 resetPrevious:(BOOL)arg3 ;
-(void)cancelTouchesForTwoFingerTapGesture:(id)arg0 ;
-(void)changeToKeyplane:(id)arg0 ;
-(void)clearShiftIfNecessaryForEndedTouchState:(id)arg0 ;
-(void)clearTransientState;
-(void)clearUnusedObjects:(BOOL)arg0 ;
-(void)commitTouchUUIDs:(id)arg0 ;
-(void)commitTouchUUIDs:(id)arg0 cancelInsteadOfUp:(BOOL)arg1 ;
-(void)commitTouches:(id)arg0 executionContext:(id)arg1 ;
-(void)deactivateActiveKeys;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg0 clearingDimming:(BOOL)arg1 ;
-(void)dealloc;
-(void)didClearInput;
-(void)didCommitTouchState:(id)arg0 ;
-(void)didEndIndirectSelectionGesture;
-(void)didEndTrackpadModeForServerSideDictation;
-(void)didMoveToWindow;
-(void)fadeActivationIndicatorWithDuration:(CGFloat)arg0 withDelay:(CGFloat)arg1 ;
-(void)fadeWithInvocation:(id)arg0 ;
-(void)forceUpdatesForCommittedTouch;
-(void)handRestRecognizerNotifyRestForBegin:(BOOL)arg0 location:(struct CGPoint )arg1 timestamp:(CGFloat)arg2 pathIndex:(int)arg3 touchUUID:(id)arg4 context:(id)arg5 ;
-(void)longPressAction;
-(void)preparePopupVariantsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(void)recognizer:(id)arg0 beginTouchDownForTouchWithId:(id)arg1 atPoint:(struct CGPoint )arg2 forBeginState:(NSUInteger)arg3 whenStateReady:(id)arg4 ;
-(void)recognizer:(id)arg0 cancelTouchOnLayoutWithId:(id)arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 whenReady:(id)arg4 ;
-(void)recognizer:(id)arg0 continueTrackingIgnoredTouchWithId:(id)arg1 currentPoint:(struct CGPoint )arg2 whenReady:(id)arg3 ;
-(void)recognizer:(id)arg0 releaseTouchToLayoutWithId:(id)arg1 startPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 whenReady:(id)arg4 ;
-(void)recognizer:(id)arg0 restartTouchDownForTouchWithId:(id)arg1 startingAt:(CGFloat)arg2 atPoint:(struct CGPoint )arg3 currentPoint:(struct CGPoint )arg4 whenStateReady:(id)arg5 ;
-(void)recognizer:(id)arg0 shouldContinueTrackingTouchWithId:(id)arg1 startingAt:(CGFloat)arg2 atPoint:(struct CGPoint )arg3 currentPoint:(struct CGPoint )arg4 forContinueState:(NSUInteger)arg5 whenStateReady:(id)arg6 ;
-(void)recognizer:(id)arg0 willIgnoreTouchWithId:(id)arg1 startingAt:(CGFloat)arg2 atPoint:(struct CGPoint )arg3 currentPoint:(struct CGPoint )arg4 whenReady:(id)arg5 ;
-(void)recognizerBlockUntilTaskQueueReadyForceUsingDeferredTask:(BOOL)arg0 ;
-(void)reloadKeyboardGestureRecognition;
-(void)reloadKeyboardWithInputTraits:(id)arg0 screenTraits:(id)arg1 splitTraits:(id)arg2 ;
-(void)resetHRRLayoutState;
-(void)resetTouchProcessingForKeyboardChange;
-(void)restoreDefaultsForAllKeys;
-(void)restoreDefaultsForKey:(id)arg0 ;
-(void)restoreFocusFromEntryPoint:(struct CGPoint )arg0 ;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg0 ;
-(void)setAction:(SEL)arg0 forKey:(id)arg1 ;
-(void)setAutoshift:(BOOL)arg0 ;
-(void)setDisableTouchInput:(BOOL)arg0 ;
-(void)setKeyboardBias:(NSInteger)arg0 ;
-(void)setLabel:(id)arg0 forKey:(id)arg1 ;
-(void)setLongPressAction:(SEL)arg0 forKey:(id)arg1 ;
-(void)setNeedsVirtualDriftUpdate;
-(void)setPasscodeOutlineAlpha:(CGFloat)arg0 ;
-(void)setRecentInputs:(id)arg0 ;
-(void)setRenderConfig:(id)arg0 ;
-(void)setReturnKeyEnabled:(BOOL)arg0 withDisplayName:(id)arg1 withType:(int)arg2 ;
-(void)setShift:(BOOL)arg0 ;
-(void)setTarget:(id)arg0 forKey:(id)arg1 ;
-(void)setTextEditingTraits:(id)arg0 ;
-(void)setTwoFingerTapTimestamp:(CGFloat)arg0 ;
-(void)showKeyboardWithInputTraits:(id)arg0 screenTraits:(id)arg1 splitTraits:(id)arg2 ;
-(void)touchCancelled:(id)arg0 ;
-(void)touchCancelled:(id)arg0 executionContext:(id)arg1 ;
-(void)touchCancelled:(id)arg0 forResting:(BOOL)arg1 executionContext:(id)arg2 ;
-(void)touchChanged:(id)arg0 ;
-(void)touchChanged:(id)arg0 executionContext:(id)arg1 ;
-(void)touchDown:(id)arg0 ;
-(void)touchDown:(id)arg0 executionContext:(id)arg1 ;
-(void)touchDragged:(id)arg0 ;
-(void)touchDragged:(id)arg0 executionContext:(id)arg1 ;
-(void)touchUp:(id)arg0 ;
-(void)touchUp:(id)arg0 executionContext:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg0 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(void)updateBackgroundCorners;
-(void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)arg0 ;
-(void)updateLocalizedKeys:(BOOL)arg0 ;
-(void)updateTouchProcessingForKeyboardChange;
-(void)updateTouchProcessingForKeyplaneChange;
-(void)updateUndoKeyState;
-(void)willBeginIndirectSelectionGesture;
-(void)willBeginTrackpadModeForServerSideDictation;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif