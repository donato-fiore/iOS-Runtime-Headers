// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBVIEWCONTROLLERTRANSITIONCONTEXT_H
#define SBVIEWCONTROLLERTRANSITIONCONTEXT_H

@class NSMutableDictionary, NSMapTable, BSUIAnimationFactory, NSMutableArray, NSMutableSet, UIView, NSString;
@protocol SBViewControllerContextTransitioning, SBViewControllerTransitionCoordinator, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, SBHViewControllerTransitionAnimationContext, SBViewControllerTransitionContextDelegate;

#import <Foundation/Foundation.h>


@interface SBViewControllerTransitionContext : NSObject <SBViewControllerContextTransitioning, SBViewControllerTransitionCoordinator>

 {
    NSMutableDictionary *_viewControllersByKey;
    NSMutableDictionary *_viewsByKey;
    NSMapTable *_initialFramesByViewController;
    NSMapTable *_finalFramesByViewController;
    BOOL _transitionStarted;
    BOOL _animationFinished;
    BOOL _transitionFinished;
    BOOL _transitionIsCancelled;
    BOOL _transitionWasEverCancelled;
    BOOL _transitionBeganInteractively;
    BOOL _transitionWasInteractive;
    BOOL _transitionDidBeginCalled;
    CGFloat _transitionPercentComplete;
    NSUInteger _transitionAnimationOptions;
    BSUIAnimationFactory *_transitionAnimationFactory;
    id<UIViewControllerAnimatedTransitioning> *_animator;
    id<UIViewControllerInteractiveTransitioning> *_interactor;
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
    NSMutableArray *_alongsideInteractionEndedHandlers;
    NSMutableSet *_alongsideAnimationViews;
    NSMutableArray *_transitionContinuations;
    NSUInteger _outstandingClientCompletionCount;
}


@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (retain, nonatomic) NSObject<SBHViewControllerTransitionAnimationContext> *animationContext;
@property (retain, nonatomic) NSObject<UIViewControllerAnimatedTransitioning> *animator;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionVelocity;
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBViewControllerTransitionContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL initiallyInteractive;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (retain, nonatomic) NSObject<UIViewControllerInteractiveTransitioning> *interactor;
@property (readonly, nonatomic) BOOL isInterruptible;
@property (readonly, nonatomic) BOOL isTransitioning;
@property (readonly, nonatomic) CGFloat percentComplete;
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform targetTransform; // ivar: _targetTransform
@property (readonly, nonatomic) CGFloat transitionDuration;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo
@property (nonatomic) BOOL wantsAnimation; // ivar: _wantsAnimation


-(BOOL)_objectSupportsRestarting:(id)arg0 ;
// -(BOOL)animateAlongsideTransition:(id)arg0 completion:(unk)arg1  ;
// -(BOOL)animateAlongsideTransitionInView:(id)arg0 animation:(id)arg1 completion:(unk)arg2  ;
-(BOOL)requiresCancellableAnimations;
-(BOOL)requiresInteractiveAnimations;
-(BOOL)requiresRestartableAnimations;
-(BOOL)supportsCancelling;
-(BOOL)supportsRestarting;
-(BOOL)transitionWasRestarted;
-(BOOL)wasPreviousPhaseInteractive;
-(NSUInteger)transitionAnimationOptions;
-(id)_acquireTransitionCompletion:(SEL)arg0 ;
-(id)_interactiveAnimator;
-(id)_reversibleAnimator;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)transitionAnimationFactory;
-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(struct CGRect )finalFrameForViewController:(id)arg0 ;
-(struct CGRect )initialFrameForViewController:(id)arg0 ;
-(void)_completeTransition;
-(void)_completeTransitionIfPossible;
-(void)_runAlongsideAnimationBlocksInEnclosingAnimationContext;
-(void)_runAlongsideAnimationBlocksWithFactory:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_runInteractionEndedHandlers;
-(void)_startInteractiveTransition;
-(void)_updateTransitionAnimationFactoryAndOptions;
-(void)addTransitionContinuation:(id)arg0 ;
-(void)cancelInteractiveTransition;
-(void)cancelTransition;
-(void)completeTransition:(BOOL)arg0 ;
-(void)dealloc;
-(void)finishInteractiveTransition;
-(void)notifyWhenInteractionChangesUsingBlock:(id)arg0 ;
-(void)notifyWhenInteractionEndsUsingBlock:(id)arg0 ;
-(void)pauseInteractiveTransition;
-(void)restartTransition;
-(void)setFinalFrame:(struct CGRect )arg0 forViewController:(id)arg1 ;
-(void)setInitialFrame:(struct CGRect )arg0 forViewController:(id)arg1 ;
-(void)setView:(id)arg0 forKey:(id)arg1 ;
-(void)setViewController:(id)arg0 forKey:(id)arg1 ;
-(void)startTransition;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif