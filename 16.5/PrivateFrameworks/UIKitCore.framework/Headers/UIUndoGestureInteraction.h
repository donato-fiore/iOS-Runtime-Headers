// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIUNDOGESTUREINTERACTION_H
#define UIUNDOGESTUREINTERACTION_H

@class NSString, NSLayoutConstraint;
@protocol UIInteractiveUndoHUDActionDelegate, UIGestureRecognizerDelegate, UIEditingOverlayInteractionWithView, UIInteraction;

#import <Foundation/Foundation.h>

#import "UIKBTextEditingTraits.h"
#import "UILayoutGuide.h"
#import "UIDelayedAction.h"
#import "_UIKBUndoGestureObserver.h"
#import "_UIKBProductivityDoubleTapGesture.h"
#import "_UIKBProductivityLongPressGestureRecognizer.h"
#import "_UIKBProductivityPinchGestureRecognizer.h"
#import "_UIKBProductivitySingleTapGesture.h"
#import "_UIKBProductivityPanGestureRecognizer.h"
#import "UIKBUndoInteractionHUD.h"
#import "UIKBUndoStateHUD.h"
#import "UIView.h"

@interface UIUndoGestureInteraction : NSObject <UIInteractiveUndoHUDActionDelegate, UIGestureRecognizerDelegate, UIEditingOverlayInteractionWithView, UIInteraction>



@property (nonatomic) NSInteger beginPanDirection; // ivar: _beginPanDirection
@property (nonatomic) CGPoint beginPanLocation; // ivar: _beginPanLocation
@property (nonatomic) CGRect currentActuallSceneBounds; // ivar: _currentActuallSceneBounds
@property (nonatomic) NSInteger currentAppearance; // ivar: _currentAppearance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIKBTextEditingTraits *editingTraits; // ivar: _editingTraits
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initPinchableDistance; // ivar: _initPinchableDistance
@property (nonatomic) BOOL interactiveHUDIsVisible; // ivar: _interactiveHUDIsVisible
@property (nonatomic) NSInteger interactiveHUDMode; // ivar: _interactiveHUDMode
@property (nonatomic) CGFloat lastTapTimestamp; // ivar: _lastTapTimestamp
@property (retain, nonatomic) UILayoutGuide *layoutGuide; // ivar: _layoutGuide
@property (retain, nonatomic) UIDelayedAction *multiPansTimer; // ivar: _multiPansTimer
@property (nonatomic) BOOL multiPinchTimerOn; // ivar: _multiPinchTimerOn
@property (retain, nonatomic) _UIKBUndoGestureObserver *observerGesture; // ivar: _observerGesture
@property (nonatomic) NSUInteger panDownStateChangedCounter; // ivar: _panDownStateChangedCounter
@property (copy, nonatomic) id *pasteConfirmationAction; // ivar: _pasteConfirmationAction
@property (nonatomic) NSInteger potentialPinchDirection; // ivar: _potentialPinchDirection
@property (nonatomic) CGPoint previousPanLocation; // ivar: _previousPanLocation
@property (nonatomic) CGFloat previousPinchPerimeter; // ivar: _previousPinchPerimeter
@property (nonatomic) NSInteger previousRecognizedPanDirection; // ivar: _previousRecognizedPanDirection
@property (nonatomic) CGFloat remainingDistanceToTravel; // ivar: _remainingDistanceToTravel
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIKBProductivityDoubleTapGesture *threeFingerDoubleTap; // ivar: _threeFingerDoubleTap
@property (retain, nonatomic) _UIKBProductivityLongPressGestureRecognizer *threeFingerLongPress; // ivar: _threeFingerLongPress
@property (retain, nonatomic) _UIKBProductivityPinchGestureRecognizer *threeFingerPinch; // ivar: _threeFingerPinch
@property (retain, nonatomic) _UIKBProductivitySingleTapGesture *threeFingerSingleTap; // ivar: _threeFingerSingleTap
@property (retain, nonatomic) _UIKBProductivityPanGestureRecognizer *threeFingerSlide; // ivar: _threeFingerSlide
@property (retain, nonatomic) NSLayoutConstraint *undoHUDContainerHeightConstraint; // ivar: _undoHUDContainerHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *undoHUDContainerWidthConstraint; // ivar: _undoHUDContainerWidthConstraint
@property (retain, nonatomic) UIKBUndoInteractionHUD *undoInteractiveHUD; // ivar: _undoInteractiveHUD
@property (retain, nonatomic) UIKBUndoStateHUD *undoStateHUD; // ivar: _undoStateHUD
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDCenterConstraint; // ivar: _undoStateHUDCenterConstraint
@property (retain, nonatomic) UIDelayedAction *undoStateHUDDismissTimer; // ivar: _undoStateHUDDismissTimer
@property (nonatomic) BOOL undoStateHUDIsAnimating; // ivar: _undoStateHUDIsAnimating
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDTopConstraint; // ivar: _undoStateHUDTopConstraint
@property (weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)_isKeyWindowSceneSessionRoleValidForTutorial;
+(id)iWorkFamily;
+(void)presentProductivityGestureTutorialIfNeededWithCompletion:(id)arg0 ;
+(void)presentProductivityGestureTutorialInlineWithCompletion:(id)arg0 ;
+(void)showSecurePasteConfirmationWithCompletionHandler:(id)arg0 ;
-(BOOL)_endPanWithDirection:(NSInteger)arg0 ;
-(BOOL)bundleIniWorkFamily:(id)arg0 ;
-(BOOL)canCopy;
-(BOOL)canCut;
-(BOOL)canPaste;
-(BOOL)canRedo;
-(BOOL)canUndo;
-(BOOL)currentInteractiveHUDVisible;
-(BOOL)currentStateHUDVisible;
-(BOOL)editingInteractionOptionsAllowGestureRecognizerToBegin:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isRTLMode;
-(BOOL)needUpdateHUDForContainerChange;
-(BOOL)performActionWithDirection:(NSInteger)arg0 ;
-(BOOL)performGestureWithDirection:(NSInteger)arg0 ;
-(BOOL)performGestureWithDirection:(NSInteger)arg0 authenticationMessage:(id)arg1 ;
-(BOOL)textEditingOperationsAvailableWithGestureRecognizer:(id)arg0 ;
-(BOOL)undoGestureIsMoving:(id)arg0 ;
-(BOOL)undoManagerOperationsCutCopyPasteAvailable;
-(BOOL)undoManagerOperationsUndoRedoAvailable;
-(CGFloat)currentTime;
-(NSInteger)keyboardAppearance;
-(NSInteger)slideDirectionWithGesture:(id)arg0 ;
-(NSInteger)undoControlTypeWithDirection:(NSInteger)arg0 ;
-(NSUInteger)privateEditingInteractionOptions;
-(id)_undoManager;
-(id)_undoManagerFlattenedGroupingInfo;
-(id)currentInteractionHUD;
-(id)currentResponder;
-(id)interactiveHUDButtonForDirection:(NSInteger)arg0 ;
-(id)responderForOperation:(SEL)arg0 withSender:(id)arg1 ;
-(id)scrollViewForInputDelegate;
-(struct CGRect )actualSceneBounds;
-(void)_addGestureRecognizers;
-(void)_cancelPinch:(id)arg0 ;
-(void)_createAndUpdateUndoInteractiveHUDIfNecessary;
-(void)_createAndUpdateUndoStateHUDIfNecessary;
-(void)_createGestureRecognizersIfNecessary;
-(void)_endPan:(id)arg0 ;
-(void)_endPinch:(id)arg0 ;
-(void)_endPinchWithDirection:(NSInteger)arg0 ;
-(void)_installUndoManagerObservers;
-(void)_removeGestureRecognizers;
-(void)_startPinch:(id)arg0 ;
-(void)_startUndoPan:(id)arg0 ;
-(void)_uninstallUndoManagerObservers;
-(void)_updateHUDControlState;
-(void)_updatePinch:(id)arg0 ;
-(void)_updateUndoPan:(id)arg0 ;
-(void)animateDisplayingStateHUD;
-(void)animateInStateHUD;
-(void)animateSpringCoverWithSuccess:(BOOL)arg0 direction:(NSInteger)arg1 remainingDistanceToTravel:(CGFloat)arg2 ;
-(void)applicationWillSuspend;
-(void)clearHUDViews;
-(void)clearMultiPansTimer;
-(void)clearMultiPinchTimer;
-(void)clearUndoStateHUDDismissTimer;
-(void)copyOperation;
-(void)cutOperation;
-(void)deactiveActiveKeysIfNeeded:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)disableEnclosingScrollViewScrolling;
-(void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect )arg0 ;
-(void)fullyCloseCoverWithComplete:(id)arg0 ;
-(void)fullyOpenAndCloseCoverWithBeginDirection:(NSInteger)arg0 ;
-(void)layoutUndoInteractiveHUD;
-(void)layoutUndoStateHUD;
-(void)multiPansTimerElaspsed:(id)arg0 ;
-(void)observerGestureHandler:(id)arg0 ;
-(void)pasteOperation;
-(void)redo:(BOOL)arg0 ;
-(void)removeAllHUDOnContainerChange;
-(void)setPasteConfirmationHUDVisibility:(BOOL)arg0 ;
-(void)setUndoHUDType:(NSInteger)arg0 visibility:(BOOL)arg1 ;
-(void)startMultiPinchTimer:(CGFloat)arg0 ;
-(void)threeFingerDoubleTap:(id)arg0 ;
-(void)threeFingerLongPress:(id)arg0 ;
-(void)threeFingerPinch:(id)arg0 ;
-(void)threeFingerSingleTap:(id)arg0 ;
-(void)threeFingerSlide:(id)arg0 ;
-(void)tooSlow:(id)arg0 ;
-(void)touchMultiPansTimer;
-(void)touchUndoStateHUDDismissTimer;
-(void)undo:(BOOL)arg0 ;
-(void)undoStateHUDDismissTimerElaspsed:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif