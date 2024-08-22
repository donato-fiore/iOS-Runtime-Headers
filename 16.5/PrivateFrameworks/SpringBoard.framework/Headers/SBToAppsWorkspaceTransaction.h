// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTOAPPSWORKSPACETRANSACTION_H
#define SBTOAPPSWORKSPACETRANSACTION_H

@class NSMutableSet, UIApplicationSceneDeactivationAssertion, NSCountedSet, NSSet, NSString;
@protocol SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver;


#import "SBMainWorkspaceTransaction.h"
#import "SBAppRepairTransaction.h"
#import "SBUIAnimationController.h"
#import "SBFloatingDockBehaviorAssertion.h"
#import "SBSceneLayoutWorkspaceTransaction.h"

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver>

 {
    NSMutableSet *_layoutTransitionCompletions;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id *_layoutTransitionContinuation;
    SBAppRepairTransaction *_appRepairTransaction;
    SBUIAnimationController *_animationController;
    NSCountedSet *_completionDelayRequesters;
    BOOL _underLockScreenInForeground;
    BOOL _gestureInitiated;
    NSUInteger _preactivationForegroundRunningApplicationCount;
    BOOL _toAndFromApplicationsDiffer;
    BOOL _retriedAfterVoluntaryExit;
    BOOL _applicationStateNeedsCapture;
    BOOL _dismissedOverlays;
    BOOL _shouldSerialDismissOverlays;
    BOOL _touchCancellationDisabled;
}


@property (readonly, nonatomic) NSSet *allLayoutTransactions;
@property (readonly, nonatomic) NSSet *allTransitionRequests;
@property (readonly, nonatomic) NSSet *ancillaryLayoutTransactions; // ivar: _ancillaryLayoutTransactions
@property (readonly, nonatomic) NSSet *ancillaryTransitionRequests; // ivar: _ancillaryTransitionRequests
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *floatingDockBehaviorAssertion; // ivar: _floatingDockBehaviorAssertion
@property (readonly, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBSceneLayoutWorkspaceTransaction *layoutTransaction; // ivar: _layoutTransaction
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *toApplicationSceneEntities;


+(BOOL)canInterruptTransaction:(id)arg0 forTransitionRequest:(id)arg1 ;
-(BOOL)_beginAnimation;
-(BOOL)_canBeInterrupted;
-(BOOL)_hasPostAnimationTasks;
-(BOOL)_hasPreAnimationTasks;
-(BOOL)_isGoingToHomeScreenForTransitionRequest:(id)arg0 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg0 ;
-(BOOL)_shouldResignActiveForAnimation;
-(BOOL)_shouldSerialDismissOverlays;
-(BOOL)_transitionWasCancelled;
-(BOOL)isGoingToCoverSheet;
-(BOOL)isGoingToLauncher;
-(BOOL)isGoingToMainSwitcher;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(BOOL)shouldWatchdog:(*id)arg0 ;
-(BOOL)toAndFromAppsDiffer;
-(BOOL)transaction:(id)arg0 shouldKeepSceneForeground:(id)arg1 withReason:(*id)arg2 ;
-(CGFloat)watchdogTimeout;
-(NSInteger)_isGoingToHomeScreenInMainDisplayWindowScene;
-(NSUInteger)_concurrentOverlayDismissalOptions;
-(NSUInteger)_serialOverlayPreDismissalOptions;
-(id)_customizedDescriptionProperties;
-(id)_milestoneForLayoutTransaction:(id)arg0 ;
-(id)_setupAnimation;
-(id)_transitionContext;
-(id)animationController;
-(id)createSceneEntityForHandle:(id)arg0 ;
-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_acquireResignActiveAssertion;
-(void)_animationDidFinish;
-(void)_animationDidRevealApplication;
-(void)_animationWillBegin:(BOOL)arg0 ;
-(void)_beginAnimationIfNecessary;
-(void)_beginTransition;
-(void)_captureApplicationState;
-(void)_checkForAnimationCompletion;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_clearAnimation;
-(void)_completeCurrentTransition;
-(void)_configureAnimation;
-(void)_delayTransitionCompletionForRequester:(id)arg0 ;
-(void)_didComplete;
-(void)_didInterruptWithReason:(id)arg0 ;
-(void)_endTransition;
-(void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)arg0 ;
-(void)_handleApplicationDidNotChange:(id)arg0 ;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg0 ;
-(void)_logForInterruptAttemptReason:(id)arg0 ;
-(void)_noteAnimationFinished;
-(void)_performPostAnimationTasksWithCompletion:(id)arg0 ;
-(void)_performPreAnimationTasksWithCompletion:(id)arg0 ;
-(void)_relinquishResignActiveAssertion;
-(void)_setShouldSerialDismissOverlays:(BOOL)arg0 ;
-(void)_stopDelayingTransitionCompletionForRequester:(id)arg0 ;
-(void)_synchronizeWithSceneUpdates;
-(void)_willBegin;
-(void)_willFailWithReason:(id)arg0 ;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)activateApplications;
-(void)animationController:(id)arg0 willBeginAnimation:(BOOL)arg1 ;
-(void)animationControllerDidFinishAnimation:(id)arg0 ;
-(void)animationControllerDidRevealApplication:(id)arg0 ;
-(void)dealloc;
-(void)performToAppStateCleanup;
-(void)synchronizedTransaction:(id)arg0 didCommitSynchronizedTransactions:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg0 willCommitSynchronizedTransactions:(id)arg1 ;
-(void)synchronizedTransactionReadyToCommit:(id)arg0 ;
-(void)transaction:(id)arg0 didEndLayoutTransitionWithContinuation:(id)arg1 ;
-(void)transaction:(id)arg0 performTransitionWithCompletion:(id)arg1 ;
-(void)transactionWillBeginLayoutTransition:(id)arg0 ;


@end


#endif