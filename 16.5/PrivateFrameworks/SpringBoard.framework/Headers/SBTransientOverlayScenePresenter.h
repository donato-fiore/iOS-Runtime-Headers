// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRANSIENTOVERLAYSCENEPRESENTER_H
#define SBTRANSIENTOVERLAYSCENEPRESENTER_H

@class NSMutableArray, NSMapTable, SBFZStackParticipant, UIWindow, UIStatusBarStyleRequest, NSString, NSNumber, NSArray;
@protocol SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate, SBHomeGrabberViewObserver, SBTransientOverlayPresenting, SBIdleTimerProviding, BSInvalidatable, CSExternalBehaviorProviding, SBTransientOverlayScenePresenterDelegate;

#import <Foundation/Foundation.h>

#import "SBAlertItemsController.h"
#import "SBIdleTimerCoordinatorHelper.h"
#import "SBLockStateAggregator.h"
#import "SBReachabilityManager.h"
#import "SBWindowSceneStatusBarSettingsAssertion.h"
#import "SBInAppStatusBarHiddenAssertion.h"
#import "SBBannerManager.h"
#import "SBCoverSheetPresentationManager.h"
#import "SBInCallPresentationManager.h"
#import "SBTransientOverlayViewController.h"
#import "SBWindowScene.h"

@interface SBTransientOverlayScenePresenter : NSObject <SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate, SBHomeGrabberViewObserver, SBTransientOverlayPresenting, SBIdleTimerProviding>

 {
    SBAlertItemsController *_alertItemsController;
    id<BSInvalidatable> *_bannerSuppressionAssertion;
    id<BSInvalidatable> *_inCallNonModalSuppressionAssertion;
    NSMutableArray *_contentStatusBarHiddenAssertions;
    id<CSExternalBehaviorProviding> *_coverSheetExternalBehaviorProvider;
    id<BSInvalidatable> *_deviceOrientationUpdateDeferralAssertion;
    NSMutableArray *_entities;
    NSMapTable *_entityToSceneDeactivationAssertion;
    SBFZStackParticipant *_zStackParticipant;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    UIWindow *_initialPresentationKeyWindow;
    id<BSInvalidatable> *_interactiveScreenshotGestureDisabledAssertion;
    BOOL _isInitiatingEntityPresentation;
    BOOL _isPendingAlertItems;
    BOOL _isReachabilityTemporarilyDisabled;
    BOOL _homeAffordanceUpdatesShouldBeAnimated;
    SBLockStateAggregator *_lockStateAggregator;
    SBReachabilityManager *_reachabilityManager;
    SBWindowSceneStatusBarSettingsAssertion *_globalStatusBarAssertion;
    SBInAppStatusBarHiddenAssertion *_appStatusBarAssertion;
}


@property (readonly, nonatomic) BOOL activePresentationPreventsDragAndDrop;
@property (retain, nonatomic) SBBannerManager *bannerManager; // ivar: _bannerManager
@property (readonly, nonatomic) BOOL canActivePresentationBecomeLocalFirstResponder;
@property (readonly, nonatomic) BOOL canHandleButtonEvents;
@property (retain, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager; // ivar: _coverSheetPresentationManager
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *currentStatusBarStyleRequest;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBTransientOverlayScenePresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActivePresentation;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly, nonatomic) BOOL hasVisibleStatusBar;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator;
@property (retain, nonatomic) SBInCallPresentationManager *inCallPresentationManager; // ivar: _inCallPresentationManager
@property (readonly, nonatomic) BOOL ownsHomeGesture;
@property (readonly, nonatomic) NSInteger preferredGestureDismissalStyle;
@property (readonly, nonatomic) NSNumber *preferredWhitePointAdaptivityStyleValue; // ivar: _preferredWhitePointAdaptivityStyleValue
@property (readonly, nonatomic) BOOL prefersStatusBarActivityItemVisible;
@property (readonly, nonatomic) NSInteger presentedViewControllerCount;
@property (readonly, nonatomic) NSArray *presentedViewControllers;
@property (readonly, nonatomic) BOOL shouldDisableControlCenter;
@property (readonly, nonatomic) BOOL shouldDisableCoverSheetGesture;
@property (readonly, nonatomic) BOOL shouldDisableSiri;
@property (readonly, nonatomic) BOOL shouldUseSceneBasedKeyboardFocusForActivePresentation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBTransientOverlayViewController *topmostPresentedViewController;
@property (readonly, nonatomic) NSInteger topmostViewControllerInterfaceOrientation; // ivar: _topmostViewControllerInterfaceOrientation
@property (readonly, nonatomic) CGFloat topmostWindowLevel;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewControllerForGestureDismissal;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(BOOL)_isPresentationStatusBarHiddenForVisibility:(int)arg0 currentExternalStatusBarSettings:(id)arg1 ;
-(BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg0 ;
-(BOOL)handleDoubleHeightStatusBarTap;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hasActivePresentationFromBundleIdentifier:(id)arg0 ;
-(BOOL)hasActivePresentationFromProcess:(id)arg0 ;
-(BOOL)hasActiveSpotlightPresentation;
-(BOOL)hasPresentationAboveWindowLevel:(CGFloat)arg0 ;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg0 ;
-(BOOL)isPresentingViewController:(id)arg0 ;
-(BOOL)isTopmostPresentedViewController:(id)arg0 ;
-(CGFloat)_backgroundWindowLevelForEntity:(id)arg0 ;
-(CGFloat)_windowLevelForEntity:(id)arg0 ;
-(NSInteger)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg0 ;
-(NSUInteger)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg0 ;
-(id)_buttonEventHandlingViewController;
-(id)_currentExternalStatusBarSettings;
-(id)_newSceneDeactivationAssertionWithReason:(NSInteger)arg0 ;
-(id)_statusBarEntity;
-(id)_topmostPresentedEntity;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)initWithWindowScene:(id)arg0 alertItemsController:(id)arg1 lockStateAggregator:(id)arg2 zStackResolver:(id)arg3 reachabilityManager:(id)arg4 ;
-(id)newContentStatusBarHiddenAssertionWithReason:(id)arg0 ;
-(int)_preferredStatusBarVisibilityForEntity:(id)arg0 ;
-(void)_applyProximityDetectionModeForEntity:(id)arg0 ;
-(void)_applyWallpaperAnimationSuspensionAssertionForEntity:(id)arg0 ;
-(void)_dismissEntity:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_getContentScale:(*CGFloat)arg0 translation:(struct CGPoint *)arg1 fromRect:(struct CGRect )arg2 entity:(id)arg3 ;
-(void)_handleCoverSheetWillPresent:(id)arg0 ;
-(void)_invalidateAssertionsForEntity:(id)arg0 ;
-(void)_updateBackgroundWindowForEntity:(id)arg0 ;
-(void)_updateContentStatusBarPresentation;
-(void)_updateCurrentEntityHomeGrabberAnimated:(BOOL)arg0 ;
-(void)_updateDeactivationAssertions;
-(void)_updateFeaturePolicies;
-(void)_updatePreferredWhitePointAdaptivityStyle;
-(void)_updateStatusBarWithCurrentExternalStatusBarSettings:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateWindowHitTestingForEntity:(id)arg0 ;
-(void)_updateZStackStateWithAnimationBehavior:(NSInteger)arg0 reason:(id)arg1 ;
-(void)_windowedAccessoryDidAttachOrDetach:(id)arg0 ;
-(void)dealloc;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)homeGrabberViewDidUpdateHidden:(id)arg0 ;
-(void)performDismissalRequest:(id)arg0 outerCompletionHandler:(id)arg1 ;
-(void)performPresentationRequest:(id)arg0 ;
-(void)setFluidDismissalState:(id)arg0 forViewController:(id)arg1 ;
-(void)transientOverlayViewControllerDidEndRotation:(id)arg0 ;
-(void)transientOverlayViewControllerDidUpdatePresentationPrefersStatusBarHidden:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerWillBeginRotation:(id)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif