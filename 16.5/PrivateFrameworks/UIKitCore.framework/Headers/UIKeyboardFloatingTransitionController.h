// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDFLOATINGTRANSITIONCONTROLLER_H
#define UIKEYBOARDFLOATINGTRANSITIONCONTROLLER_H

@class NSArray, NSString;
@protocol UIGestureRecognizerDelegate, UIKeyboardFloatingTransitionControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIViewSpringAnimationBehavior.h"
#import "UIKeyboardFloatingTransitionState.h"
#import "UIInputWindowController.h"
#import "UIPanGestureRecognizer.h"
#import "UIView.h"
#import "UIKeyboardFloatingPinchGestureRecognizer.h"
#import "_UIPopoverStandardChromeView.h"
#import "UIKBVisualEffectView.h"

@interface UIKeyboardFloatingTransitionController : NSObject <UIGestureRecognizerDelegate>



@property (retain) UIViewSpringAnimationBehavior *animationBehavior; // ivar: _animationBehavior
@property (retain, nonatomic) NSArray *commonVisibleKeys; // ivar: _commonVisibleKeys
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKeyboardFloatingTransitionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIKeyboardFloatingTransitionState *endState; // ivar: _endState
@property (nonatomic) BOOL expandedForDocking; // ivar: _expandedForDocking
@property (nonatomic) CGFloat gestureBeginTime; // ivar: _gestureBeginTime
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIInputWindowController *inputWindowController; // ivar: _inputWindowController
@property (nonatomic) BOOL isTransitioning; // ivar: _isTransitioning
@property (nonatomic) CGPoint lastGestureCenter; // ivar: _lastGestureCenter
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) UIView *pillView; // ivar: _pillView
@property (retain, nonatomic) UIKeyboardFloatingPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (retain, nonatomic) UIView *platterCornerRadiusView; // ivar: _platterCornerRadiusView
@property (retain, nonatomic) _UIPopoverStandardChromeView *platterPopoverBackgroundView; // ivar: _platterPopoverBackgroundView
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (retain, nonatomic) UIKBVisualEffectView *platterVisualEffectView; // ivar: _platterVisualEffectView
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) UIKeyboardFloatingTransitionState *startState; // ivar: _startState
@property (nonatomic) BOOL startedFromFloating; // ivar: _startedFromFloating
@property (readonly) Class superclass;
@property (nonatomic) BOOL withinDockingRegion; // ivar: _withinDockingRegion


+(BOOL)isPointWithinDockingRegion:(struct CGPoint )arg0 ;
+(CGFloat)magneticEdgeMargin;
+(id)snapshotOfKeyplaneView:(id)arg0 ;
+(struct CGRect )dockingRegion;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(void)addGestureRecognizersToView:(id)arg0 ;
-(void)beginPanGesture:(id)arg0 ;
-(void)beginPinchGesture:(id)arg0 ;
-(void)beginTransitionAtPoint:(struct CGPoint )arg0 withScale:(CGFloat)arg1 ;
-(void)beginTransitionFromPanGestureRecognizer:(id)arg0 ;
-(void)captureStateForStart:(BOOL)arg0 ;
-(void)constrainAccessoryViewToBottom;
-(void)endPanGesture:(id)arg0 ;
-(void)endPinchGesture:(id)arg0 ;
-(void)endTransitionAtPoint:(struct CGPoint )arg0 withScale:(CGFloat)arg1 ;
-(void)finalizeTransition;
-(void)handlePanGestureRecognizerAction:(id)arg0 ;
-(void)handlePinchGestureRecognizerAction:(id)arg0 ;
-(void)initializeContextAtPoint:(struct CGPoint )arg0 ;
-(void)inputViewSnapshot:(*id)arg0 withPlatterInsets:(struct UIEdgeInsets *)arg1 ;
-(void)removeGestureRecognizers;
-(void)restoreAccessoryViewConstraints;
-(void)updateAnimationAtScale:(CGFloat)arg0 ;
-(void)updateHysteresisForCurrentFloatingState;
-(void)updateLayoutGuideForTransitionStart:(BOOL)arg0 ;
-(void)updateLayoutGuideFromFrame:(struct CGRect )arg0 ;
-(void)updatePanGesture:(id)arg0 ;
-(void)updatePinchGesture:(id)arg0 ;
-(void)updateTransitionAtPoint:(struct CGPoint )arg0 withScale:(CGFloat)arg1 interactive:(BOOL)arg2 ;


@end


#endif