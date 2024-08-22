// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSFASTSCROLLINGCONTROLLER_H
#define _UIFOCUSFASTSCROLLINGCONTROLLER_H

@class NSMutableArray, CADisplayLink, NSArray, NSTimer;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"
#import "UIPanGestureRecognizer.h"
#import "_UIFocusMovementPressGestureRecognizer.h"
#import "_UIFocusEngineJoystickGestureRecognizer.h"
#import "_UIRotaryGestureRecognizer.h"
#import "_UIDynamicValueAnimation.h"
#import "_UIDynamicAnimationGroup.h"
#import "_UIFocusFastScrollingIndexBarEntry.h"
#import "_UIFocusFastScrollingIndexBarView.h"

@interface _UIFocusFastScrollingController : NSObject {
    UIScrollView *_scrollView;
    UIPanGestureRecognizer *_panGesture;
    _UIFocusMovementPressGestureRecognizer *_arrowButtonGesture;
    _UIFocusMovementPressGestureRecognizer *_pageButtonGesture;
    _UIFocusEngineJoystickGestureRecognizer *_joystickGesture;
    _UIRotaryGestureRecognizer *_rotaryGesture;
    CGFloat _lastRotaryMilestoneAccumulatedDistance;
    CGFloat _rotaryAccelerationMultiplier;
    BOOL _rotaryModeIsFullContent;
    CGFloat _currentRotaryDirection;
    NSMutableArray *_rotaryDeltaBufferArray;
    CGFloat _rotaryDeltaBufferAverage;
    CGFloat _rotaryDeltaBufferPendingValue;
    NSInteger _rotaryDeltaBufferCurrentIndex;
    CADisplayLink *_rotaryDeltaBufferDisplayLink;
    _UIDynamicValueAnimation *_animationX;
    _UIDynamicValueAnimation *_animationY;
    _UIDynamicAnimationGroup *_animationGroup;
    NSInteger _style;
    NSInteger _userStyle;
    CGPoint _offsetWhenPanStarted;
    ? _previousPanVelocity;
    CGFloat _panDeadBand;
    CGPoint _panDeadBandTranslationAdjustment;
    NSUInteger _accelerationSwipeCount;
    CGFloat _accelerationMultiplier;
    CGFloat _accelerationStartMultiplier;
    CGFloat _accelerationLastSwipeTime;
    NSArray *_displayedEntries;
    CGFloat _initialEdgeDigitizerLocation;
    NSInteger _initialIndexEntry;
    NSInteger _highlightedIndexEntry;
    ? _initialVelocity;
    CGPoint _initialContentOffset;
    NSUInteger _heading;
    NSUInteger _allowedHeadings;
    CADisplayLink *_discreteButtonScrollDisplayLink;
    CGFloat _discreteButtonScrollProgress;
    CADisplayLink *_continuousButtonScrollDisplayLink;
    ? _continuousButtonScrollAnimationVelocity;
    CGVector _pressForce;
    CGFloat _scrollHighlight;
    NSTimer *_cooldownTimer;
    NSTimer *_buttonScrollDelayTimer;
    ? _flags;
}


@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic) _UIFocusFastScrollingIndexBarEntry *highlightedEntry;
@property (readonly, nonatomic) _UIFocusFastScrollingIndexBarView *indexBarView; // ivar: _indexBarView
@property (copy, nonatomic) NSArray *indexEntries; // ivar: _indexEntries
@property (readonly, nonatomic) CGPoint initialContentOffset;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) NSInteger scrollingStyle;
@property (readonly, nonatomic, getter=isScrollingX) BOOL scrollingX;
@property (readonly, nonatomic, getter=isScrollingY) BOOL scrollingY;
@property (readonly, nonatomic) NSInteger userScrollingStyle;


+(BOOL)_shouldIncludePlaceholderIndexBarEntriesForScrollStyle:(NSInteger)arg0 ;
+(NSInteger)_indexOfEntryNearestToScrollViewBounds:(struct CGRect )arg0 inDisplayedEntries:(id)arg1 includePlaceholders:(BOOL)arg2 ;
+(NSInteger)indexOfEntryForScrollStyle:(NSInteger)arg0 nearestToScrollViewBounds:(struct CGRect )arg1 inDisplayedEntries:(id)arg2 ;
+(id)controllerWithRequest:(id)arg0 ;
+(id)indexBarViewForScrollView:(id)arg0 ;
-(BOOL)_canFastScrollWithEdgeSwipe;
-(BOOL)_canFastScrollWithStyle:(NSInteger)arg0 ;
-(BOOL)_cancelButtonScrollDelay;
-(BOOL)_isPanDeadBandActive;
-(BOOL)_shouldArrowButtonGestureDiscreteScroll;
-(BOOL)_shouldArrowButtonGestureInstantlyAdvanceToNextEntry;
-(BOOL)_shouldArrowButtonInterruptPanGesture;
-(BOOL)_shouldShowEntriesInIndexBar;
-(BOOL)_updateRotaryDirection:(id)arg0 ;
-(NSInteger)_advanceToNextEntryFromIndex:(NSInteger)arg0 alongHeading:(NSUInteger)arg1 ;
-(NSInteger)_nextDiscretePageScrollIndexFromIndex:(NSInteger)arg0 forHeading:(NSUInteger)arg1 ;
-(NSInteger)_nextDiscretePageScrollIndexFromIndex:(NSInteger)arg0 inDirection:(CGFloat)arg1 ;
-(NSInteger)_panFastScrollStyleFromGesture:(id)arg0 ;
-(NSInteger)indexOfEntryNearestToScrollViewBounds:(struct CGRect )arg0 inDisplayedEntries:(id)arg1 ;
-(NSUInteger)currentHeading;
-(id)initWithRequest:(id)arg0 ;
-(struct ? )_currentScrollViewDecelerationVelocity;
-(struct ? )_velocityOfRotaryGesture:(id)arg0 inView:(id)arg1 ;
-(struct CGPoint )_applyPanDeadbandToTranslation:(struct CGPoint )arg0 withVelocity:(struct ? )arg1 inScrollView:(id)arg2 ;
-(struct CGPoint )_lerpRotaryGestureAccumulatedDistanceToDigitizerLocation;
-(struct CGPoint )_rotaryRubberbandedOffsetForTranslatedOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )_rotaryTranslatedOffsetForCurrentOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(struct CGPoint )_translationOfRotaryGesture:(id)arg0 inView:(id)arg1 ;
-(void)_attemptToStop;
-(void)_attemptToStopDueToExternalEvent:(BOOL)arg0 ;
-(void)_beginButtonScrollDelayWithDuration:(CGFloat)arg0 ;
-(void)_beginCooldownWithDuration:(CGFloat)arg0 ;
-(void)_beginDeceleratingAfterContinuousButtonScroll;
-(void)_beginInitialSwipeDeceleration;
-(void)_buttonScrollDelayEnded;
-(void)_cancelCooldown;
-(void)_configureWithRequest:(id)arg0 ;
-(void)_continuousButtonScrollHeartbeat:(id)arg0 ;
-(void)_cooldownEnded;
-(void)_discreteButtonScrollHeartbeat:(id)arg0 ;
-(void)_endDiscreteButtonScrollGesture;
-(void)_endDraggingWithFinalVelocity:(struct ? )arg0 ;
-(void)_finishDecelerating;
-(void)_handleAnimationGroupScrollingAnimations;
-(void)_handleAnimationGroupScrollingCompletionWithInitialVelocity:(struct CGPoint )arg0 bounces:(BOOL)arg1 ;
-(void)_handleArrowButtonGesture:(id)arg0 ;
-(void)_handleCommonRotaryBegin:(id)arg0 ;
-(void)_handleEdgePanBegin:(id)arg0 ;
-(void)_handleEdgePanChanged:(id)arg0 ;
-(void)_handleEdgePanEnd:(id)arg0 ;
-(void)_handleFullContentRotaryBegin:(id)arg0 ;
-(void)_handleFullContentRotaryChanged:(id)arg0 ;
-(void)_handleFullContentRotaryEnd:(id)arg0 ;
-(void)_handleJoystickGesture:(id)arg0 ;
-(void)_handlePageButtonGesture:(id)arg0 ;
-(void)_handlePanBegin:(id)arg0 withStyle:(NSInteger)arg1 ;
-(void)_handlePanChanged:(id)arg0 ;
-(void)_handlePanEnd:(id)arg0 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handleRotaryBegin:(id)arg0 ;
-(void)_handleRotaryChanged:(id)arg0 ;
-(void)_handleRotaryEnd:(id)arg0 ;
-(void)_handleRotaryGesture:(id)arg0 ;
-(void)_handleSwipePanBegin:(id)arg0 ;
-(void)_handleSwipePanChanged:(id)arg0 ;
-(void)_handleSwipePanEnd:(id)arg0 ;
-(void)_hideDestinationIndicators;
-(void)_interpretDigitzerLocation:(struct CGPoint )arg0 toFindEntryIndex:(*NSInteger)arg1 deflection:(*CGFloat)arg2 ;
-(void)_resetAllButtonGestures;
-(void)_resetPanDeadBand;
-(void)_resetSwipeAcceleration;
-(void)_rotaryHeartbeat:(id)arg0 ;
-(void)_setContentOffset:(struct CGPoint )arg0 withVelocity:(struct ? )arg1 ;
-(void)_showDestinationIndicators;
-(void)_start;
-(void)_startContinuousButtonScrollAlongHeading:(NSUInteger)arg0 withVelocity:(struct ? )arg1 delayed:(BOOL)arg2 ;
-(void)_startContinuousButtonScrollDisplayLink;
-(void)_startDiscreteButtonScrollDisplayLink;
-(void)_startDiscreteButtonScrollGestureAlongHeading:(NSUInteger)arg0 ;
-(void)_startEdgeGesture;
-(void)_startFullContentRotaryGesture;
-(void)_startScrollingAnimationWithVelocity:(struct ? )arg0 friction:(struct CGPoint )arg1 ;
-(void)_startTrackingModeIfNecessary;
-(void)_stopContinuousButtonScrollDisplayLink;
-(void)_stopDiscreteButtonScrollDisplayLink;
-(void)_stopDueToExternalEvent;
-(void)_stopScrollingAnimation;
-(void)_stopTrackingMode;
-(void)_updateEdgeGesture;
-(void)_updateFullContentRotaryGesture;
-(void)_updateIndexBarIndicator;
-(void)_updateRotaryAcceleration:(id)arg0 ;
-(void)_updateSoftFocusForVelocity:(struct ? )arg0 ;
-(void)start;
-(void)stop;


@end


#endif