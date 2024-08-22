// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIANIMATIONCONTROLLER_H
#define SBUIANIMATIONCONTROLLER_H

@class NSSet, NSMutableArray, UIWindow, BSAnimationSettings, BSTransaction, UIView, NSString, SBViewControllerTransitionContext;
@protocol SBSceneHandleObserver, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate, SBUIAnimationStepping, SBUIAnimationControllerCoordinating, SBUIAnimationControllerTransitionContextProvider, SBViewControllerTransitionCoordinator;


#import "SBTransaction.h"
#import "SBAnimationStepper.h"
#import "SBApplicationSceneEntity.h"

@interface SBUIAnimationController : SBTransaction <SBSceneHandleObserver, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate, SBUIAnimationStepping, SBUIAnimationControllerCoordinating>

 {
    NSSet *_sceneHandlesBeingObserved;
    NSSet *_entitiesToObserve;
    NSSet *_startTransactionDependencies;
    NSMutableArray *_coordinatingChildRelationships;
    NSMutableArray *_steppedCoordinatingChildAnimations;
    SBAnimationStepper *_stepper;
    UIWindow *_transitionWindow;
    int _animationState;
    BOOL _didNotifyObserversOfCompletion;
}


@property (readonly, nonatomic) BSAnimationSettings *animationSettings;
@property (readonly, nonatomic) BSTransaction *animationTransaction; // ivar: _animationTransaction
@property (copy, nonatomic) id *animationTransactionCompletion; // ivar: _animationTransactionCompletion
@property (readonly, nonatomic) BSTransaction *cleanupTransaction; // ivar: _cleanupTransaction
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, nonatomic) UIView *containerView; // ivar: _transitionContainer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) SBApplicationSceneEntity *fromApplicationSceneEntity;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic) BOOL needsCATransactionActivate; // ivar: _needsCATransactionActivate
@property (readonly, nonatomic) BSTransaction *notifyObserversTransaction; // ivar: _notifyObserversTransaction
@property (nonatomic) CGFloat stepPercentage;
@property (readonly, nonatomic, getter=isStepped) BOOL stepped;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) SBApplicationSceneEntity *toApplicationSceneEntity;
@property (retain, nonatomic) SBViewControllerTransitionContext *transition; // ivar: _transition
@property (retain, nonatomic) NSObject<SBUIAnimationControllerTransitionContextProvider> *transitionContextProvider; // ivar: _transitionContextProvider
@property (readonly, nonatomic) NSObject<SBViewControllerTransitionCoordinator> *transitionCoordinator;
@property (readonly, nonatomic) BOOL transitionSupportsCancelling;
@property (readonly, nonatomic) BOOL transitionSupportsRestarting;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (readonly, nonatomic) BOOL transitionWasRestarted;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


+(BOOL)isPendingAlertItemsWithReason:(id)arg0 ;
+(void)_addAlertItemsPendingReason:(id)arg0 ;
+(void)_removeAlertItemsPendingReason:(id)arg0 ;
-(BOOL)__animationShouldStart;
-(BOOL)__wantsInitialProgressStateChange;
-(BOOL)_canBeInterrupted;
-(BOOL)_isNullAnimation;
-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(BOOL)_willAnimate;
-(BOOL)animating;
-(BOOL)isFinishedAnimating;
-(BOOL)isFluidSwitcherAnimationController;
-(BOOL)isReasonableMomentToInterrupt;
-(BOOL)shouldResignActiveForAnimation;
-(BOOL)waitingToStart;
-(id)__alertItemsController;
-(id)__startTransactionDependencyForEntity:(id)arg0 ;
-(id)_animationIdentifier;
-(id)_getTransitionWindow;
-(id)_progressDependencies;
-(id)_viewsForAnimationStepping;
-(id)coordinatingAnimationControllers;
-(id)init;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(int)_animationState;
-(void)__abortAnimation;
-(void)__cleanupAnimation;
-(void)__noteAnimationDidTerminate;
-(void)__reportAnimationCompletion;
-(void)__startAnimation;
-(void)_abortAnimation;
-(void)_addDebugLogCategory:(id)arg0 ;
-(void)_application:(id)arg0 processStateDidChange:(id)arg1 ;
-(void)_begin;
-(void)_cleanupAnimation;
-(void)_cleanupEntityObservers;
-(void)_didInterruptWithReason:(id)arg0 ;
// -(void)_entityObserverProgressDidChange:(id)arg0 waitForSceneContentAvailableTransactionBlock:(unk)arg1  ;
-(void)_enumerateCoordinatingAnimationsWithBlock:(id)arg0 ;
-(void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(NSUInteger)arg0 block:(id)arg1 ;
-(void)_enumerateCoordinatingChildRelationshipsWithBlock:(id)arg0 ;
-(void)_noteAnimationDidFail;
-(void)_noteAnimationDidFinish;
-(void)_noteAnimationDidRevealApplication;
-(void)_notifyObserversOfAnimationCompletion;
-(void)_prepareAnimation;
-(void)_processStateDidChange:(id)arg0 ;
-(void)_registerEntityObserversIfNecessary;
-(void)_sceneHandle:(id)arg0 didUpdateContentState:(NSInteger)arg1 ;
-(void)_setAnimationState:(int)arg0 ;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_startAnimation;
-(void)_willBeginWaitingForStartDependencies;
-(void)_willComplete;
-(void)_willSetupStartDependencies;
-(void)addCoordinatingChildTransaction:(id)arg0 withSchedulingPolicy:(NSUInteger)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)addSteppedCoordinatingChildAnimation:(id)arg0 ;
-(void)cancelTransition;
-(void)dealloc;
-(void)delayAnimationUntilTransactionFinishes:(id)arg0 ;
-(void)delayCleanupUntilTransactionFinishes:(id)arg0 ;
-(void)enableSteppingWithAnimationSettings:(id)arg0 ;
-(void)finishSteppingBackwardToStart;
-(void)finishSteppingForwardToEnd;
-(void)removeObserver:(id)arg0 ;
-(void)restartTransition;
-(void)sceneHandle:(id)arg0 didUpdateContentState:(NSInteger)arg1 ;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)stopDelayingAnimationForTransaction:(id)arg0 ;
-(void)stopDelayingCleanupForTransaction:(id)arg0 ;
-(void)transitionDidFinish:(id)arg0 ;


@end


#endif