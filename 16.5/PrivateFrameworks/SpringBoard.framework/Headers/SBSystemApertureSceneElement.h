// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURESCENEELEMENT_H
#define SBSYSTEMAPERTURESCENEELEMENT_H

@class NSHashTable, SBUISystemApertureAlertingAction, NSString, SBSystemApertureSceneElementAccessoryView, SAAssertion, UIColor, FBScene, SBSystemApertureSceneElementScenePresenterView;
@protocol SAActivityBehavior, SAAlertBehavior, SBSystemApertureContextProviding, SBSystemApertureContextAccepting, SAUIElementViewProviding, SAUIContentTransitioning, SBSystemApertureElementAssertionObserving, SBSystemApertureStatusBarStyleOverridesRepresenting, SBSystemApertureElementVisibilityObserving, FBSceneObserver, FBSceneLayerManagerObserver, SBBacklightControllerObserver, SBPresentableElement, SBSystemApertureLayoutCustomizing, SBSystemApertureGestureCustomizing, SBButtonEventsHandler, BSInvalidatable, SAActivityHosting, SAAlertHosting, SAAutomaticallyInvalidatable, SAElement, SAElementHosting, SBSystemApertureGestureHandling, SBSystemApertureSceneElementLaunchActionHandling, SAUILayoutHosting, BNPresentable, SBSystemApertureStatusBarStyleOverridesSuppressing;

#import <Foundation/Foundation.h>

#import "SBApplication.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBSystemApertureSceneElementConfiguration.h"
#import "SBSystemApertureSettings.h"

@interface SBSystemApertureSceneElement : NSObject <SAActivityBehavior, SAAlertBehavior, SBSystemApertureContextProviding, SBSystemApertureContextAccepting, SAUIElementViewProviding, SAUIContentTransitioning, SBSystemApertureElementAssertionObserving, SBSystemApertureStatusBarStyleOverridesRepresenting, SBSystemApertureElementVisibilityObserving, FBSceneObserver, FBSceneLayerManagerObserver, SBBacklightControllerObserver, SBPresentableElement, SBSystemApertureLayoutCustomizing, SBSystemApertureGestureCustomizing, SBButtonEventsHandler>



@property (readonly, nonatomic) NSHashTable *_layoutObservers; // ivar: __layoutObservers
@property (readonly, nonatomic) CGRect _obstructedAreaFrame;
@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (readonly, nonatomic) NSUInteger activationAttributes; // ivar: _activationAttributes
@property (retain, nonatomic) NSObject<BSInvalidatable> *activeApplicationElementAssertion; // ivar: _activeApplicationElementAssertion
@property (weak, nonatomic) NSObject<SAActivityHosting> *activityHost; // ivar: _activityHost
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (weak, nonatomic) NSObject<SAAlertHosting> *alertHost; // ivar: _alertHost
@property (nonatomic, getter=isAlerting) BOOL alerting;
@property (retain, nonatomic, getter=_alertingAction, setter=_setAlertingAction:) SBUISystemApertureAlertingAction *alertingAction; // ivar: _alertingAction
@property (readonly, nonatomic, getter=_alertingActivityAssertion) NSObject<SAAutomaticallyInvalidatable> *alertingActivityAssertion; // ivar: _alertingActivityAssertion
@property (readonly, nonatomic) NSInteger alertingSource; // ivar: _alertingSource
@property (nonatomic) BOOL alwaysAllowTapToAppForBodyTaps; // ivar: _alwaysAllowTapToAppForBodyTaps
@property (retain, nonatomic) SBApplication *associatedApplication; // ivar: _associatedApplication
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *associatedApplicationSceneHandle; // ivar: _associatedApplicationSceneHandle
@property (nonatomic) BOOL backlightIsOrWillBecomeActive; // ivar: _backlightIsOrWillBecomeActive
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) id *clientInvalidationRequestHandler; // ivar: _clientInvalidationRequestHandler
@property (copy, nonatomic) SBSystemApertureSceneElementConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSInteger customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
@property (readonly, nonatomic, getter=isDeactivating) BOOL deactivating;
@property (copy, nonatomic) id *deactivationHandler; // ivar: _deactivationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBSystemApertureSceneElementAccessoryView *detachedMinimalView; // ivar: _detachedMinimalView
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (nonatomic) int elementAppearState; // ivar: _elementAppearState
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost; // ivar: _elementHost
@property (retain, nonatomic) SAAssertion *elementHostPrefersSuppressionAssertion; // ivar: _elementHostPrefersSuppressionAssertion
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic) BOOL elementProviderPrefersSuppression;
@property (weak, nonatomic) NSObject<SBSystemApertureGestureHandling> *gestureHandler; // ivar: _gestureHandler
@property (nonatomic) BOOL hasCompletedInitialPresentation; // ivar: _hasCompletedInitialPresentation
@property (nonatomic) BOOL hasHandledLaunchAction; // ivar: _hasHandledLaunchAction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic) UIColor *keyColor;
@property (weak, nonatomic) NSObject<SBSystemApertureSceneElementLaunchActionHandling> *launchActionHandler; // ivar: _launchActionHandler
@property (nonatomic) NSUInteger layoutAxis; // ivar: _layoutAxis
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost; // ivar: _layoutHost
@property (readonly, nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (retain, nonatomic) SBSystemApertureSceneElementAccessoryView *leadingView; // ivar: _leadingView
@property (readonly, nonatomic) NSInteger maximumSupportedLayoutMode;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (retain, nonatomic) SBSystemApertureSceneElementAccessoryView *minimalView; // ivar: _minimalView
@property (readonly, nonatomic) NSInteger minimumSupportedLayoutMode;
@property (nonatomic) NSInteger mostRecentLayoutModeChangeReason; // ivar: _mostRecentLayoutModeChangeReason
@property (nonatomic) NSUInteger obstructionEdge; // ivar: _obstructionEdge
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (retain, nonatomic) NSObject<BNPresentable> *presentable; // ivar: _presentable
@property (nonatomic, getter=isReadyForPresentation) BOOL readyForPresentation; // ivar: _readyForPresentation
@property (readonly, nonatomic) id *readyHandler; // ivar: _readyHandler
@property (readonly, nonatomic) NSUInteger representedStatusBarStyleOverrides;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (nonatomic) BOOL requiresSuppressionFromSystemAperture; // ivar: _requiresSuppressionFromSystemAperture
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (copy, nonatomic) id *sceneInvalidationHandler; // ivar: _sceneInvalidationHandler
@property (retain, nonatomic) SBSystemApertureSceneElementScenePresenterView *sceneView; // ivar: _sceneView
@property (readonly, nonatomic, getter=_sessionMonitorAssertion) NSObject<SAAutomaticallyInvalidatable> *sessionMonitorAssertion; // ivar: _sessionMonitorAssertion
@property (readonly, nonatomic) SBSystemApertureSettings *settings; // ivar: _settings
@property (weak, nonatomic) NSObject<SBSystemApertureStatusBarStyleOverridesSuppressing> *statusBarStyleOverridesSuppresser; // ivar: _statusBarStyleOverridesSuppresser
@property (retain, nonatomic) NSObject<BSInvalidatable> *statusBarStyleOverridesSuppressionAssertion; // ivar: _statusBarStyleOverridesSuppressionAssertion
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) NSInteger systemApertureCustomLayout; // ivar: _systemApertureCustomLayout
@property (retain, nonatomic) SBSystemApertureSceneElementAccessoryView *trailingView; // ivar: _trailingView
@property (readonly, nonatomic) id *transitionRequestHandler; // ivar: _transitionRequestHandler
@property (nonatomic) BOOL wantsLayoutPassForClientUpdate; // ivar: _wantsLayoutPassForClientUpdate
@property (nonatomic) BOOL wantsSpecialFlowerBoundsResizingAnimationForWallet; // ivar: _wantsSpecialFlowerBoundsResizingAnimationForWallet


+(id)activeElements;
+(id)defaultAnimationParameters;
+(void)addActiveElement:(id)arg0 ;
+(void)hostedScenesDidChange;
+(void)removeActiveElement:(id)arg0 ;
-(BOOL)_activateCorrespondingAppSceneIfPossible;
-(BOOL)_calculateRequiresSuppressionFromSystemAperture;
-(BOOL)_canShowWhileLocked;
-(BOOL)_handleAction:(id)arg0 ;
-(BOOL)_handleLaunchAction;
-(BOOL)_hasActivationAttribute:(NSUInteger)arg0 ;
-(BOOL)_hasPresentationBehavior:(NSUInteger)arg0 ;
-(BOOL)_isAssociatedWithBundleIdentifier:(id)arg0 ;
-(BOOL)_isAssociatedWithSceneWithPersistenceIdentifier:(id)arg0 ;
-(BOOL)_isValidAlertingSource:(NSInteger)arg0 ;
-(BOOL)_ownsScene;
-(BOOL)_requiresForegroundScene;
-(BOOL)_shouldHandleLaunchAction;
-(BOOL)_supportsMenuPresentations;
-(BOOL)_updateRequiresSuppressionFromSystemAperture;
-(BOOL)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)arg0 ofBundleId:(id)arg1 ;
-(BOOL)handleElementViewEvent:(NSInteger)arg0 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hasActivityBehavior;
-(BOOL)hasAlertBehavior;
-(BOOL)isBiometricKit;
-(BOOL)isFixedInOrientation;
-(BOOL)isRequestingLayoutUpdateForHostedClient;
-(BOOL)overridesConcentricPaddingForView:(id)arg0 inLayoutMode:(NSInteger)arg1 ;
-(BOOL)shouldSuppressElementWhileOnCoversheet;
-(BOOL)shouldSuppressElementWhilePresentingAppWithBundleId:(id)arg0 ;
-(BOOL)shouldSuppressElementWhilePresentingSceneWithIdentifier:(id)arg0 ;
-(CGFloat)concentricPaddingOverrideForView:(id)arg0 inLayoutMode:(NSInteger)arg1 ;
-(NSInteger)_clientLayoutModeForLayoutMode:(NSInteger)arg0 ;
-(NSInteger)_layoutModeForClientLayoutMode:(NSInteger)arg0 ;
-(NSUInteger)_updateReasonsForTransitionWithProposedParameters:(id)arg0 ;
-(NSUInteger)_updateReasonsForTransitionWithProposedParameters:(id)arg0 excludingReasons:(NSUInteger)arg1 ;
-(id)_bundleIdForLaunchTarget;
-(id)_existingAlertingAssertion;
-(id)_inferredElementIdentifier;
-(id)_proposeTransitionParametersForTransitionToFrameInSceneView:(struct CGRect )arg0 excludingParametersAssociatedWithReasons:(NSUInteger)arg1 usingCurrentAnimationParameters:(BOOL)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithScene:(id)arg0 statusBarStyleOverridesSuppresser:(id)arg1 readyForPresentationHandler:(id)arg2 ;
-(id)initWithSceneSpecification:(id)arg0 sceneClientIdentity:(id)arg1 statusBarStyleOverridesSuppresser:(id)arg2 readyForPresentationHandler:(id)arg3 ;
-(id)requestAlertingAssertion;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)viewProvider;
-(struct CGRect )_frameForSceneViewInContainerView:(id)arg0 ;
-(struct CGRect )_frameInSceneContainerForView:(id)arg0 ;
-(struct CGSize )_sizeForSceneView;
-(struct CGSize )sizeThatFitsSize:(struct CGSize )arg0 forProvidedView:(id)arg1 inLayoutMode:(NSInteger)arg2 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(void)_acquireOrUpdateAppStatusBarSessionsAssertionIfNeeded;
-(void)_addActivationAttribute:(NSUInteger)arg0 ;
-(void)_applyTransitionParameters:(id)arg0 ;
-(void)_finishDeactivationIfNeeded;
-(void)_handleAlertingAssertionRequest;
-(void)_layoutSceneViewInContainerView:(id)arg0 ;
-(void)_setupSceneViewInContainerView:(id)arg0 ;
-(void)_updateActiveElementsAndAssociatedApplication;
-(void)_updateAlertAssertionIfNecessary;
-(void)_updateMutableSceneSettings:(id)arg0 withParameters:(id)arg1 ;
-(void)_updatePortalViews;
-(void)_updateReadyForPresentationIfNeeded;
-(void)_updateScene:(id)arg0 activatingIfNeeded:(BOOL)arg1 settingsWithTransitionBlock:(id)arg2 ;
-(void)_updateSceneBackgroundStateIfNeeded;
-(void)_updateSceneWithTransitionParameters:(id)arg0 ;
-(void)activate;
-(void)activateWithInitialOtherClientSettings:(id)arg0 ;
-(void)activateWithInitialOtherClientSettings:(id)arg0 transitionRequestHandler:(id)arg1 ;
-(void)addElementLayoutSpecifierObserver:(id)arg0 ;
-(void)backlightController:(id)arg0 didTransitionToBacklightState:(NSInteger)arg1 source:(NSInteger)arg2 ;
-(void)backlightController:(id)arg0 willTransitionToBacklightState:(NSInteger)arg1 source:(NSInteger)arg2 ;
-(void)contentProviderWillTransitionToSize:(struct CGSize )arg0 inContainerView:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)deactivateWhenRemovedWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)element:(id)arg0 visibilityDidChange:(BOOL)arg1 ;
-(void)element:(id)arg0 visibilityWillChange:(BOOL)arg1 ;
-(void)invalidate;
-(void)removeElementLayoutSpecifierObserver:(id)arg0 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)sceneLayerManagerDidStartTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg0 ;
-(void)systemApertureElementAssertionAcquired;
-(void)systemApertureElementAssertionInvalidated;


@end


#endif