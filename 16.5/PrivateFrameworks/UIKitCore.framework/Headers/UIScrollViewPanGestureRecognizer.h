// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCROLLVIEWPANGESTURERECOGNIZER_H
#define UISCROLLVIEWPANGESTURERECOGNIZER_H

@class NSString;
@protocol _UIScrollEventAsyncDeliverable;


#import "UIPanGestureRecognizer.h"
#import "UIScrollViewDirectionalPressGestureRecognizer.h"
#import "UIScrollView.h"

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer <_UIScrollEventAsyncDeliverable>

 {
    SEL _scrollViewAction;
    CGPoint _reconsideredLockingLocation;
    BOOL _lastLockingAxis;
    BOOL _lockingAxis;
    BOOL _hasParentScrollView;
    BOOL _caughtDeceleratingScrollView;
    BOOL _directionalLockEnabled;
    BOOL _transfersTrackingFromParentScrollView;
    BOOL _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered;
    NSInteger _modifierFlags;
    NSInteger _indirectScrollingState;
    BOOL _scrollViewCanScrubWithTouch;
    BOOL _activeEventIsDiscrete;
}


@property (readonly, nonatomic, getter=_beganCaughtDeceleratingScrollViewAndMoved) BOOL beganCaughtDeceleratingScrollViewAndMoved;
@property (readonly, nonatomic, getter=_caughtDeceleratingScrollView) BOOL caughtDeceleratingScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property (weak, nonatomic) UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer; // ivar: _directionalPressGestureRecognizer
@property (nonatomic, getter=_discreteFastScrollMultiplier, setter=_setDiscreteFastScrollMultiplier:) CGFloat discreteFastScrollMultiplier; // ivar: _discreteFastScrollMultiplier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (nonatomic) CGFloat translationScaleFactor; // ivar: _translationScaleFactor


-(BOOL)_allowsBounce;
-(BOOL)_canTransferTrackingFromParentPagingScrollView;
-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_isParentScrollView:(id)arg0 consideringEvent:(id)arg1 ;
-(BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg0 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)delaysTouchesBegan;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(CGFloat)_hysteresis;
-(NSInteger)_modifierFlags;
-(id)_asyncDeliveryTargetForScrollEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )_adjustSceneReferenceLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 toSceneReferenceCoordinatesFromView:(id)arg1 ;
-(struct CGPoint )_velocityIncludingDiscreteScrollInView:(id)arg0 ;
-(struct CGPoint )translationInView:(id)arg0 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(void)_beginScroll;
-(void)_centroidMovedTo:(struct CGPoint )arg0 atTime:(CGFloat)arg1 affectingTranslation:(BOOL)arg2 ;
-(void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg0 ;
-(void)_resetGestureRecognizer;
-(void)_scrollingChangedWithEvent:(id)arg0 ;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setAllowedTouchTypes:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif