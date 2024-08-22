// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDRAGINTERACTION_H
#define UIDRAGINTERACTION_H

@class NSArray, NSString, NSSet;
@protocol UIGestureRecognizerDelegate, _UIViewInternalDraggingSourceDelegate, _UIDragInteractionDriverDelegate, _UIVisualStyleStylable, UIInteraction, _UIDragInteractionDefaultDriverProvider, UIDragInteractionDelegate, UIDragInteractionEffect, _UIDragInteractionPresentationDelegate;

#import <Foundation/Foundation.h>

#import "_UIDragSessionImpl.h"
#import "UIDragInteractionContextImpl.h"
#import "_UIDragAddItemsGesture.h"
#import "UIView.h"

@interface UIDragInteraction : NSObject <UIGestureRecognizerDelegate, _UIViewInternalDraggingSourceDelegate, _UIDragInteractionDriverDelegate, _UIVisualStyleStylable, UIInteraction>

 {
    BOOL _didSetEnabled;
    BOOL _enabled;
    _UIDragSessionImpl *_preliminarySession;
    _UIDragSessionImpl *_sessionForAddingItems;
    UIDragInteractionContextImpl *_interactionContext;
    _UIDragAddItemsGesture *_gestureRecognizerForAddingItems;
    id<_UIDragInteractionDefaultDriverProvider> *_defaultDriverProvider;
}


@property (nonatomic, getter=_addItemsGestureConfiguration, setter=_setAddItemsGestureConfiguration:) NSInteger addItemsGestureConfiguration; // ivar: _addItemsGestureConfiguration
@property (nonatomic, getter=_additionalTouchesCancelLift, setter=_setAdditionalTouchesCancelLift:) BOOL additionalTouchesCancelLift; // ivar: _additionalTouchesCancelLift
@property (copy, nonatomic, getter=_allowedTouchTypes, setter=_setAllowedTouchTypes:) NSArray *allowedTouchTypes; // ivar: _allowedTouchTypes
@property (nonatomic, getter=_allowsMultipleSessions, setter=_setAllowsMultipleSessions:) BOOL allowsMultipleSessions; // ivar: _allowsMultipleSessions
@property (nonatomic, getter=_allowsPointerDragBeforeLiftDelay, setter=_setAllowsPointerDragBeforeLiftDelay:) BOOL allowsPointerDragBeforeLiftDelay; // ivar: _allowsPointerDragBeforeLiftDelay
@property (nonatomic) BOOL allowsSimultaneousRecognitionDuringLift; // ivar: _allowsSimultaneousRecognitionDuringLift
@property (nonatomic, getter=_automaticallyAddsFailureRelationships, setter=_setAutomaticallyAddsFailureRelationships:) BOOL automaticallyAddsFailureRelationships; // ivar: _automaticallyAddsFailureRelationships
@property (nonatomic, getter=_cancellationDelay, setter=_setCancellationDelay:) CGFloat cancellationDelay; // ivar: _cancellationDelay
@property (nonatomic, getter=_isCancellationTimerEnabled, setter=_setCancellationTimerEnabled:) BOOL cancellationTimerEnabled; // ivar: _cancellationTimerEnabled
@property (nonatomic, getter=_competingLongPressDelay, setter=_setCompetingLongPressDelay:) CGFloat competingLongPressDelay; // ivar: _competingLongPressDelay
@property (nonatomic, getter=_competingLongPressOnLift, setter=_setCompetingLongPressOnLift:) BOOL competingLongPressOnLift; // ivar: _competingLongPressOnLift
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UIDragInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_initiationDrivers, setter=_setInitiationDrivers:) NSSet *initiationDrivers; // ivar: _initiationDrivers
@property (retain, nonatomic) NSObject<UIDragInteractionEffect> *interactionEffect; // ivar: _interactionEffect
@property (readonly, nonatomic, getter=_isActive) BOOL isActive;
@property (nonatomic, getter=_liftDelay, setter=_setLiftDelay:) CGFloat liftDelay; // ivar: _liftDelay
@property (nonatomic, getter=_liftMoveHysteresis, setter=_setLiftMoveHysteresis:) CGFloat liftMoveHysteresis; // ivar: _liftMoveHysteresis
@property (nonatomic, getter=_pointerLiftDelay, setter=_setPointerLiftDelay:) CGFloat pointerLiftDelay; // ivar: _pointerLiftDelay
@property (nonatomic, getter=_pointerLiftMoveHysteresis, setter=_setPointerLiftMoveHysteresis:) CGFloat pointerLiftMoveHysteresis; // ivar: _pointerLiftMoveHysteresis
@property (weak, nonatomic, getter=_presentationDelegate, setter=_setPresentationDelegate:) NSObject<_UIDragInteractionPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(id)visualStyleRegistryIdentity;
+(void)_cancelAllDrags;
-(BOOL)_accessibilityAddItemsToDragSessionAtPlatformPoint:(struct CGPoint )arg0 ;
-(BOOL)_accessibilityCanAddItemsToDragSession;
-(BOOL)_beginLiftForItems:(id)arg0 session:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canDragFromView:(id)arg0 ;
-(BOOL)_isPointerDriver:(id)arg0 ;
-(BOOL)_session:(id)arg0 item:(id)arg1 shouldDelaySetDownAnimationWithCompletion:(id)arg2 ;
-(BOOL)_sessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg0 ;
-(BOOL)_sessionPrefersFullSizePreviews:(id)arg0 ;
-(BOOL)_viewSupportsSystemDrag:(id)arg0 ;
-(BOOL)dragDriver:(id)arg0 canExcludeCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)dragDriver:(id)arg0 competingGestureRecognizerShouldDelayLift:(id)arg1 ;
-(BOOL)dragDriver:(id)arg0 prepareToLiftWithCompletion:(id)arg1 ;
-(BOOL)dragDriver:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)dragDriver:(id)arg0 shouldDelayCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)dragDriver:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)dragDriverBeginLift:(id)arg0 ;
-(BOOL)dragDriverWantsExclusionOverride:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)liftDelay;
-(NSInteger)_dataOwnerOfDragFromView:(id)arg0 ;
-(NSUInteger)_session:(id)arg0 sourceOperationMaskForDraggingWithinApp:(BOOL)arg1 ;
-(id)_createDefaultInitiationDrivers;
-(id)_initiationDriver;
-(id)_itemsToDragFromView:(id)arg0 ;
-(id)_queryDelegate:(id)arg0 forItemsForBeginningSession:(id)arg1 ;
-(id)_requiredContextIDsForDragSessionInView:(id)arg0 ;
-(id)_session:(id)arg0 customSpringAnimationBehaviorForCancellingItem:(id)arg1 ;
-(id)_session:(id)arg0 targetedPreviewForCancellingItem:(id)arg1 duiPreview:(id)arg2 snapshotView:(id)arg3 window:(id)arg4 ;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGPoint )_locationInView:(id)arg0 ;
-(void)_accessibilityPrepareForDragAtPlatformPoint:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)_beginDragWithTouches:(id)arg0 itemUpdater:(id)arg1 ;
-(void)_cancelDrag;
-(void)_cancelLift;
-(void)_endLiftWithoutDragging;
-(void)_finalizeLiftCancellation;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handoffSession:(id)arg0 ;
-(void)_immediatelyBeginDragWithTouch:(id)arg0 completion:(id)arg1 ;
-(void)_queryDelegate:(id)arg0 forLiftPreviewsUsingItems:(id)arg1 session:(id)arg2 ;
-(void)_session:(id)arg0 item:(id)arg1 willCancelWithAnimator:(id)arg2 ;
-(void)_session:(id)arg0 willAddItems:(id)arg1 forInteraction:(id)arg2 ;
-(void)_sessionDidEnd:(id)arg0 withOperation:(NSUInteger)arg1 ;
-(void)_sessionDidMove:(id)arg0 ;
-(void)_sessionDidTransferItems:(id)arg0 ;
-(void)_sessionHandedOffDragImage:(id)arg0 ;
-(void)_sessionWillBegin:(id)arg0 ;
-(void)_sessionWillEnd:(id)arg0 withOperation:(NSUInteger)arg1 ;
-(void)_updateDriverParameters;
-(void)_updateInteractionEffectWithContext:(id)arg0 notifyDelegate:(BOOL)arg1 ;
-(void)_view:(id)arg0 willBeginDraggingWithSession:(id)arg1 ;
-(void)_viewFailedToDrag:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
// -(void)dragDriver:(id)arg0 beginDragWithTouches:(id)arg1 itemUpdater:(id)arg2 beginningSessionHandler:(unk)arg3  ;
-(void)dragDriverCancelAddItemsGesture:(id)arg0 ;
-(void)dragDriverCancelLift:(id)arg0 ;
-(void)setDragCancellationDelay:(CGFloat)arg0 ;
-(void)setLiftDelay:(CGFloat)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif