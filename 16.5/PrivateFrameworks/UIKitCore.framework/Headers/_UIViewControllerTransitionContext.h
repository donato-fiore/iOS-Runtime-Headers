// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWCONTROLLERTRANSITIONCONTEXT_H
#define _UIVIEWCONTROLLERTRANSITIONCONTEXT_H

@class NSArray, NSString;
@protocol UIViewControllerContextTransitioningEx, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIViewControllerTransitionCoordinator.h"

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx>

 {
    CGFloat _previousPercentComplete;
    NSArray *_disabledViews;
    ? _transitionContextFlags;
    id<UIViewControllerAnimatedTransitioning> *__animator;
    UIView *_containerView;
}


@property (nonatomic, getter=_allowUserInteraction, setter=_setAllowUserInteraction:) BOOL _allowUserInteraction; // ivar: __allowUserInteraction
@property (weak, nonatomic, setter=_setAnimator:) NSObject<UIViewControllerAnimatedTransitioning> *_animator;
@property (retain, nonatomic, setter=_setAuxContext:) _UIViewControllerTransitionCoordinator *_auxContext; // ivar: __auxContext
@property (nonatomic, setter=_setCompletionCurve:) NSInteger _completionCurve; // ivar: __completionCurve
@property (copy, nonatomic, setter=_setCompletionHandler:) id *_completionHandler; // ivar: __completionHandler
@property (nonatomic, setter=_setCompletionVelocity:) CGFloat _completionVelocity; // ivar: __completionVelocity
@property (retain, nonatomic, setter=_setContainerViews:) NSArray *_containerViews; // ivar: __containerViews
@property (copy, nonatomic, setter=_setDidCompleteHandler:) id *_didCompleteHandler; // ivar: __didCompleteHandler
@property (nonatomic, setter=_setDuration:) CGFloat _duration; // ivar: __duration
@property (copy, nonatomic, setter=_setInteractiveUpdateHandler:) id *_interactiveUpdateHandler; // ivar: __interactiveUpdateHandler
@property (weak, nonatomic, setter=_setInteractor:) NSObject<UIViewControllerInteractiveTransitioning> *_interactor; // ivar: __interactor
@property (nonatomic, setter=_setIsPresentation:) BOOL _isPresentation; // ivar: __isPresentation
@property (nonatomic, setter=_setPercentOffset:) CGFloat _percentOffset; // ivar: __percentOffset
@property (copy, nonatomic, setter=_setPostInteractiveCompletionHandler:) id *_postInteractiveCompletionHandler; // ivar: __postInteractiveCompletionHandler
@property (nonatomic, setter=_setState:) NSInteger _state; // ivar: __state
@property (nonatomic, setter=_setTransitionIsCompleting:) BOOL _transitionIsCompleting;
@property (copy, nonatomic, setter=_setWillCompleteHandler:) id *_willCompleteHandler; // ivar: __willCompleteHandler
@property (readonly, nonatomic, getter=_affineTransform) CGAffineTransform affineTransform;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) UIView *containerView;
@property (nonatomic, getter=isCurrentlyInteractive, setter=_setCurrentlyInteractive:) BOOL currentlyInteractive; // ivar: _currentlyInteractive
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_initiallyInteractive, setter=_setInitiallyInteractive:) BOOL initiallyInteractive; // ivar: _initiallyInteractive
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic, getter=isInterruptible, setter=_setInterruptible:) BOOL interruptible;
@property (nonatomic, setter=_setPresentationStyle:) NSInteger presentationStyle; // ivar: _presentationStyle
@property (nonatomic, getter=_isRotating, setter=_setRotating:) BOOL rotating; // ivar: _rotating
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGAffineTransform targetTransform;
@property (readonly, nonatomic) BOOL transitionWasCancelled;


+(id)_associatedTransitionContextForObject:(id)arg0 ;
-(BOOL)_transitionIsInFlight;
-(BOOL)initiallyInteractive;
-(CGFloat)_previousPercentComplete;
-(NSInteger)_alongsideAnimationsCount;
-(id)_transitionCoordinator;
-(id)init;
-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(struct CGRect )finalFrameForViewController:(id)arg0 ;
-(struct CGRect )initialFrameForViewController:(id)arg0 ;
-(void)__runAlongsideAnimations;
-(void)_disableInteractionForViews:(id)arg0 ;
-(void)_enableInteractionForDisabledViews;
-(void)_interactivityDidChange:(BOOL)arg0 ;
-(void)_runAlongsideCompletions;
-(void)_setIsAnimated:(BOOL)arg0 ;
-(void)_setPreviousPercentComplete:(CGFloat)arg0 ;
-(void)_setTransitionIsInFlight:(BOOL)arg0 ;
-(void)_stopInteractiveTransition;
-(void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(CGFloat)arg0 ;
-(void)cancelInteractiveTransition;
-(void)completeTransition:(BOOL)arg0 ;
-(void)dealloc;
-(void)finishInteractiveTransition;
-(void)pauseInteractiveTransition;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif