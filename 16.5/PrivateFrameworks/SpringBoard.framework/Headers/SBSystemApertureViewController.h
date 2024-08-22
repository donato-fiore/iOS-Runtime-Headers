// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREVIEWCONTROLLER_H
#define SBSYSTEMAPERTUREVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, UIView, MTMaterialView, SBFTouchPassThroughView, _UIPortalView, UIView<SBSystemApertureGainMapBackedRendering>, NSMutableArray, NSMutableSet, SAUISystemApertureManager, UIPanGestureRecognizer, UILongPressGestureRecognizer, UIGestureRecognizer, NSTimer, NSDate, NSSet, NSMapTable, NSCountedSet, SBFZStackParticipant, UIViewFloatAnimatableProperty, NSString, NSPointerArray, NSArray;
@protocol SBSystemApertureElementOrientationObserving, SBSystemApertureProximityBacklightPolicyDelegate, SBSystemApertureStatusBarPillElementProviderObserving, SAUISystemApertureManagerDelegate, SAUILayoutHosting, SAUILayoutHostingPrivate, SAAlertingConfiguring, SAUILayoutSpecifyingOverridingParticipant, SAUIElementViewControllingObserving, SABehaviorOverridingParticipant, SAElementHosting, SBSystemApertureContainerViewDelegate, SBSystemApertureElementOrientationAuthority, UIGestureRecognizerDelegate, SBFZStackParticipantDelegate, SBSystemApertureGestureHandling, SBSystemApertureElementAuthorityDelegate, SAElementRegistering, SBFBacklightEnvironmentSceneProviding, SBButtonEventsHandler, SBSystemApertureViewControllerVisibilityDelegate, SBSystemApertureCurtainViewHoster, BSInvalidatable, UIViewControllerTransitionCoordinator, SBSystemApertureBacklightSessionAggregator;


#import "SBSystemApertureWindowScene.h"
#import "_SBSystemApertureIndicatorContainerView.h"
#import "SBSystemApertureElementAuthority.h"
#import "SBSystemApertureContainerView.h"
#import "SBSystemApertureSettings.h"
#import "_SBSystemApertureBouncingState.h"
#import "_SBSystemApertureLayoutState.h"
#import "SBSystemApertureKeyLineColorValidator.h"

@interface SBSystemApertureViewController : SBFTouchPassThroughViewController <SBSystemApertureElementOrientationObserving, SBSystemApertureProximityBacklightPolicyDelegate, SBSystemApertureStatusBarPillElementProviderObserving, SAUISystemApertureManagerDelegate, SAUILayoutHosting, SAUILayoutHostingPrivate, SAAlertingConfiguring, SAUILayoutSpecifyingOverridingParticipant, SAUIElementViewControllingObserving, SABehaviorOverridingParticipant, SAElementHosting, SBSystemApertureContainerViewDelegate, SBSystemApertureElementOrientationAuthority, UIGestureRecognizerDelegate, SBFZStackParticipantDelegate, SBSystemApertureGestureHandling, SBSystemApertureElementAuthorityDelegate, SAElementRegistering, SBFBacklightEnvironmentSceneProviding, SBButtonEventsHandler>

 {
    SBSystemApertureWindowScene *_systemApertureWindowScene;
    id<SBSystemApertureViewControllerVisibilityDelegate> *_visibilityDelegate;
    UIView *_containerSubBackgroundParent;
    UIView *_containerBackgroundParent;
    MTMaterialView *_variableBlurView;
    SBFTouchPassThroughView *_containerParent;
    id<SBSystemApertureCurtainViewHoster> *_curtainViewHoster;
    _SBSystemApertureIndicatorContainerView *_indicatorContainerView;
    _UIPortalView *_indicatorContainerPortalView;
    UIView<SBSystemApertureGainMapBackedRendering> *_magiciansCurtainView;
    UIView<SBSystemApertureGainMapBackedRendering> *_highLevelMagiciansCurtainView;
    NSMutableArray *_orderedContainerViews;
    NSMutableSet *_containerViewsToRemove;
    SAUISystemApertureManager *_systemApertureManager;
    SBSystemApertureElementAuthority *_elementAuthority;
    id<SBSystemApertureElementOrientationAuthority> *_elementOrientationAuthority;
    SBSystemApertureContainerView *_containerViewForActiveGesture;
    UIPanGestureRecognizer *_resizePanGesture;
    UILongPressGestureRecognizer *_interactionLongPressGesture;
    id<BSInvalidatable> *_suppressTouchCancellationAssertion;
    UIGestureRecognizer *_coverSheetPresentationGesture;
    NSTimer *_interactionLongPressTimer;
    NSDate *_interactionBeganDate;
    NSInteger _interactionGestureState;
    CGPoint _initialLocationInContainerViewForActiveGesture;
    CGRect _initialFrameOfContainerViewForActiveGesture;
    CGRect _minimumFrameOfContainerViewForActiveGesture;
    NSInteger _resizeGestureResult;
    id<UIViewControllerTransitionCoordinator> *_transitionCoordinator;
    SBSystemApertureSettings *_settings;
    NSMutableSet *_systemApertureSuppressionAssertions;
    NSSet *_sceneIDsPreferringSuppression;
    NSSet *_bundleIDsPreferringSuppression;
    NSMapTable *_reasonsToLayoutAssertions;
    NSInteger _consensusBackgroundLuminanceLevel;
    NSCountedSet *_mitosisBlobEffectsRequiringReasons;
    NSCountedSet *_backlightAssertionRequiringReasons;
    id<BSInvalidatable> *_liveUpdatingAssertion;
    NSInteger _activeElementInterfaceOrientation;
    SBFZStackParticipant *_zStackParticipant;
    id<BSInvalidatable> *_suppressForSystemChromeSuppressionAssertion;
    NSMutableSet *_transitionShadowAssertions;
    UIViewFloatAnimatableProperty *_animatablePropertyForTransitionToInert;
    UIViewFloatAnimatableProperty *_animatablePropertyForSuppressedKeyLineRestoration;
    _SBSystemApertureBouncingState *_bouncingState;
    NSString *_zoomRegistrationIdentifier;
    NSMutableArray *_activeOvershootingStates;
    NSInteger _shakingPhase;
    _SBSystemApertureLayoutState *_activeLayoutState;
    NSInteger _cloningStyle;
    SBSystemApertureKeyLineColorValidator *_colorValidator;
    NSPointerArray *_significantUpdateTransitionAssertions;
    NSMutableArray *_zoomAnimationAssertions;
    BOOL _zoomServicesReportedAXisZooming;
    BOOL _systemApertureContainsAnyContent;
    BOOL _suppressKeyLineForMitosis;
    BOOL _prefersSuppressionOfElementsDueToCoversheetVisibility;
    BOOL _prefersSuppressionOfElementsDueToSystemChromeSuppression;
    BOOL _hostedScenesMayHaveChanged;
    BOOL _shadowNeedsUpdate;
    BOOL _lastLayoutWasReboundingFromBounce;
}


@property (weak, nonatomic) NSObject<SBSystemApertureBacklightSessionAggregator> *backlightSessionAggregator; // ivar: _backlightSessionAggregator
@property (readonly, nonatomic) NSInteger behaviorOverridingRole;
@property (nonatomic) NSInteger cloningStyle;
@property (retain, nonatomic) NSObject<SBSystemApertureCurtainViewHoster> *curtainViewHoster;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SBSystemApertureElementOrientationAuthority> *elementOrientationAuthority;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect minimumSensorRegionFrame;
@property (readonly, copy) NSArray *stateDump;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SBSystemApertureViewControllerVisibilityDelegate> *visibilityDelegate;


+(id)_sharedFeedbackGenerator;
-(BOOL)_abortInProgressShakeAnimation;
-(BOOL)_axLayoutSpecifierRequestsCollapseIfExpandedByUserInteraction:(id)arg0 ;
-(BOOL)_axZoomActiveAndEnabled;
-(BOOL)_bailForHandlingPanGestureDueToLandscapeOrientation;
-(BOOL)_canPurgeViewController:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_collapseExpandedElementIfPossible;
-(BOOL)_didContainerViewForActiveGestureCollapseWithFrame:(struct CGRect )arg0 ;
// -(BOOL)_handleButtonEventWithTest:(id)arg0 handler:(unk)arg1  ;
-(BOOL)_isAnyGestureRecognizerActive;
-(BOOL)_isGestureRecognizerActive:(id)arg0 ;
-(BOOL)_isInteractionLongPressGestureActive;
-(BOOL)_isInteractiveHidingSupportedByElement:(id)arg0 ;
-(BOOL)_isManualExpansionTransitionTargetingInertState:(BOOL)arg0 orderedElementViewControllers:(id)arg1 ;
-(BOOL)_isObjectTrackingTransitionForLayout:(id)arg0 ;
-(BOOL)_isResizePanGestureActive;
-(BOOL)_isSystemGesture:(id)arg0 ;
-(BOOL)_isTargetingInertOrIsInert;
-(BOOL)_shouldSuppressElement:(id)arg0 allowsSuppressionForSystemChromeSuppression:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)isRequestingMenuPresentationForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(BOOL)isTransitionTargetForSceneIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)systemApertureApertureElementAuthority:(id)arg0 isActivityElementAlerting:(id)arg1 ;
-(BOOL)systemApertureApertureElementAuthority:(id)arg0 isElementExpandedDueToUserInteraction:(id)arg1 ;
-(BOOL)systemApertureApertureElementAuthority:(id)arg0 isElementRequiredToRemainVisible:(id)arg1 ;
-(BOOL)systemApertureManagerShouldUseOrderedElementViewControllers:(id)arg0 ;
-(BOOL)systemApertureProximityBacklightPolicy:(id)arg0 isSystemApertureElementVisibleAtPoint:(struct CGPoint )arg1 ;
-(BOOL)systemApertureProximityBacklightPolicyShouldConsiderSystemApertureInert:(id)arg0 ;
-(BOOL)systemApertureProximityBacklightPolicyShouldDisableGracePeriod:(id)arg0 ;
-(BOOL)viewProviderShouldAvoidAppearanceTransitionInitialization:(id)arg0 ;
-(BOOL)viewProviderShouldMakeSensorShadowVisible:(id)arg0 ;
-(CGFloat)_viewScaleForOvershoot;
-(CGFloat)_viewScaleForOvershootTargetingFrame:(struct CGRect )arg0 fromFrame:(struct CGRect )arg1 ;
-(CGFloat)_viewScaleForOvershootTargetingInertState:(BOOL)arg0 reboundingFromBounce:(id)arg1 orderedElementViewControllers:(id)arg2 ;
-(CGFloat)_yOffsetForCustomLayout:(NSInteger)arg0 ;
-(CGFloat)alertingDurationForHost:(id)arg0 ;
-(CGFloat)concentricPaddingForProvidedView:(id)arg0 fromViewProvider:(id)arg1 ;
-(CGFloat)systemApertureContainerView:(id)arg0 cornerRadiusWithSuggestion:(CGFloat)arg1 ;
-(CGFloat)viewProviderSensorShadowOpacityFactor:(id)arg0 ;
-(NSInteger)_activeElementInterfaceOrientation;
-(NSInteger)_mostRestrictiveLayoutModeFromActiveLayoutAssertions;
-(NSInteger)_shadowStyleForContainerView:(id)arg0 targetingInert:(BOOL)arg1 frame:(struct CGRect )arg2 ;
-(NSInteger)activeElementInterfaceOrientationForSystemApertureElementOrientationObserver:(id)arg0 ;
-(NSInteger)systemApertureApertureElementAuthority:(id)arg0 preferredLayoutModeForElement:(id)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(NSUInteger)systemApertureApertureElementAuthorityMaximumNumberOfSimultaneouslyVisibleElements:(id)arg0 ;
-(NSUInteger)systemApertureManagerMaximumNumberOfSimultaneouslyVisibleElements:(id)arg0 ;
-(id)_activeOvershootingState;
-(id)_animatablePropertyWithProgressMilestones:(id)arg0 block:(id)arg1 ;
-(id)_associatedWindowScene;
-(id)_bounceAnimationSettingsForState:(id)arg0 ;
-(id)_boundsDefaultSettings;
-(id)_boundsExpandingSettings;
-(id)_boundsResizingAnimationSettings:(BOOL)arg0 ;
-(id)_containerViewAncestorOfViewOfViewController:(id)arg0 ;
-(id)_containerViewForGesture:(id)arg0 initialLocationInContainerView:(struct CGPoint *)arg1 ;
-(id)_containerViewForLayoutSpecifier:(id)arg0 ;
-(id)_containerViewForTouch:(id)arg0 ofGestureRecognizer:(id)arg1 initialLocation:(struct CGPoint *)arg2 ;
-(id)_containerViewForViewController:(id)arg0 ;
-(id)_containerViewForViewController:(id)arg0 includingOutgoing:(BOOL)arg1 ;
-(id)_containerViewWithRank:(NSUInteger)arg0 ;
-(id)_containerViewWithRank:(NSUInteger)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)_elementConfigurationDescriptionForElement:(id)arg0 inLayoutMode:(NSInteger)arg1 ;
-(id)_elementForContainerView:(id)arg0 ;
-(id)_elementViewControllerForLayoutSpecifyingOverrider:(id)arg0 ;
-(id)_layoutAssertionWithMaximumPermittedLayoutMode:(NSInteger)arg0 reason:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(id)_layoutMetrics;
-(id)_layoutSpecifyingOverriderForContainerView:(id)arg0 ;
-(id)_newContainerViewHousingSensorRegion:(BOOL)arg0 ;
-(id)_primaryContainerView;
-(id)_startOrRestartTemporaryKeyLineSuppressionForMitosis;
-(id)_transitionCoordinator;
-(id)initWithWindowScene:(id)arg0 ;
-(id)keyLineColorValidatorForSystemApertureContainerView:(id)arg0 ;
-(id)layoutModePreferenceForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(id)parentViewForBackgroundForSystemApertureContainerView:(id)arg0 ;
-(id)parentViewForSubBackgroundForSystemApertureContainerView:(id)arg0 ;
-(id)registerElement:(id)arg0 ;
-(id)requireHeavyShadowAssertionForTransition;
-(id)restrictSystemApertureToDefaultLayoutWithReason:(id)arg0 ;
-(id)restrictSystemApertureToInertWithReason:(id)arg0 ;
-(id)scenesForBacklightSession;
-(id)systemApertureRepresentationSuppressionAssertionForCoversheetVisibility;
-(id)systemApertureRepresentationSuppressionAssertionForSystemChromeSuppression;
-(struct CGPoint )_touchOffsetFromInertCenterForGestureRecognizer:(id)arg0 ;
-(struct CGRect )_adjunctContainerViewFrameForContainerWithRank:(NSUInteger)arg0 containerCount:(NSUInteger)arg1 bounds:(struct CGRect )arg2 sensorContainerViewFrame:(struct CGRect )arg3 layoutMode:(NSInteger)arg4 preferredEdgeOutsets:(struct NSDirectionalEdgeInsets )arg5 interfaceOrientation:(NSInteger)arg6 layoutDirection:(NSInteger)arg7 ;
-(struct CGRect )_boundsForAdjunctContainerViewWithPreferredEdgeOutsets:(struct NSDirectionalEdgeInsets )arg0 layoutDirection:(NSInteger)arg1 ;
-(struct CGRect )_calculateStatusBarAvoidanceFrame;
-(struct CGRect )_expandedBouncingContainerViewFrameForBounceStyle:(NSInteger)arg0 unexpandedFrame:(struct CGRect )arg1 ;
-(struct CGRect )_frameForAdjunctContainerView:(id)arg0 resizedWithGesture:(id)arg1 initialLocationInContainerView:(struct CGPoint )arg2 initialContainerViewFrame:(struct CGRect )arg3 ;
-(struct CGRect )_frameForContainerView:(id)arg0 ;
-(struct CGRect )_frameForContainerView:(id)arg0 resizedWithGesture:(id)arg1 initialLocationInContainerView:(struct CGPoint )arg2 initialContainerViewFrame:(struct CGRect )arg3 ;
-(struct CGRect )_frameForSensorRegionInBounds:(struct CGRect )arg0 ;
-(struct CGRect )_frameForVariableBlurUnderContainerViewWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_indicatorContainerViewFrameInBounds:(struct CGRect )arg0 ;
-(struct CGRect )_initialFrameForContainerView:(id)arg0 ;
-(struct CGRect )_maximumContainerViewFrame;
-(struct CGRect )_portraitFrameForPrimaryContainerViewInBounds:(struct CGRect )arg0 withPreferredEdgeOutsets:(struct NSDirectionalEdgeInsets )arg1 layoutDirection:(NSInteger)arg2 ;
-(struct CGRect )_rectClippedToMaximumContainerFrame:(struct CGRect )arg0 ;
-(struct CGRect )interSensorRegionInContentView:(id)arg0 ;
-(struct CGRect )sensorRegionInContentView:(id)arg0 fromViewProvider:(id)arg1 ;
-(struct CGRect )sensorRegionObstructingViewProvider:(id)arg0 inContentView:(id)arg1 ;
-(struct CGRect )systemApertureContainerView:(id)arg0 hitRectForBounds:(struct CGRect )arg1 debugColor:(*id)arg2 ;
-(struct CGSize )_adjunctContainerMinimalViewSize;
-(struct CGSize )_preferredMinSizeForCustomLayout:(NSInteger)arg0 elementInterfaceOrientation:(NSInteger)arg1 ;
-(struct NSDirectionalEdgeInsets )_applySymmetryToPreferredLayoutOutsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(struct NSDirectionalEdgeInsets )_maximumContainerViewOutsetsInBounds:(struct CGRect )arg0 inLayoutMode:(NSInteger)arg1 ;
-(struct NSDirectionalEdgeInsets )_validatedEdgeOutsetsForPreferredOutsets:(struct NSDirectionalEdgeInsets )arg0 maximumOutsets:(struct NSDirectionalEdgeInsets )arg1 ;
-(struct NSDirectionalEdgeInsets )edgeOutsetsForSize:(struct CGSize )arg0 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 forTargetWithOverrider:(id)arg3 isDefaultValue:(*BOOL)arg4 ;
-(void)_addMitosisBlobEffects;
-(void)_addZoomAnimationAssertion;
-(void)_animateNegativeResponseForElement:(id)arg0 ;
-(void)_axLayoutSpecifierRequestsDiminishment:(id)arg0 ;
-(void)_axRegisterForZoomUpdatesIfNecessary;
-(void)_axRevealHiddenElementIfPossible;
-(void)_axZoomLevelOrStandbyModeChanged;
-(void)_beginInteractionLongPressTimerIfNecessary;
-(void)_beginRequiringBacklightAssertionForReason:(id)arg0 ;
-(void)_beginRequiringMitosisBlobEffectsForReason:(id)arg0 ;
-(void)_beginTargetingInertStateIfNecessaryWithOrderedElementViewControllers:(id)arg0 ;
-(void)_cleanupAfterLayout;
-(void)_cleanupViewControllerIfPossible:(id)arg0 ;
-(void)_configureIndicatorContainerView;
-(void)_configureInteractionLongPressIfNecessary;
-(void)_configureVariableBlur;
-(void)_elementKeyColorWasInvalidated:(id)arg0 ;
-(void)_endRequiringBacklightAssertionForReason:(id)arg0 ;
-(void)_endRequiringMitosisBlobEffectsForReason:(id)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handleInteractionLongPress:(id)arg0 ;
-(void)_handleResizePan:(id)arg0 ;
-(void)_handleResizeResult:(NSInteger)arg0 withContainerView:(id)arg1 ;
-(void)_interactionLongPressTimerDidEnd:(id)arg0 ;
-(void)_invalidateInteractionLongPressTimer;
-(void)_layoutContainerViewsWithLayoutState:(id)arg0 orderedElementViewControllers:(id)arg1 animationSettings:(id)arg2 transitionCoordinator:(id)arg3 ;
-(void)_layoutVariableBlurForContainerView:(id)arg0 withFrame:(struct CGRect )arg1 targetingInert:(BOOL)arg2 ;
-(void)_promote:(BOOL)arg0 gestureRecognizer:(id)arg1 toSystemGestureWithManager:(id)arg2 type:(NSUInteger)arg3 ;
-(void)_reduceTransparencyDidChange:(id)arg0 ;
-(void)_reevaluateElementSuppression;
-(void)_reevaluateRenderingAndDisplayCloningConfigurationAfterLayout:(BOOL)arg0 ;
-(void)_removeLayoutAssertionAndReevaluate:(id)arg0 ;
-(void)_removeMitosisBlobEffects;
-(void)_resetContainerViewForActiveGestureIfPossible;
-(void)_setContainerForActiveGesture:(id)arg0 ;
-(void)_triggerBounceAcceptResponse:(NSInteger)arg0 triggeredBlock:(id)arg1 ;
-(void)_updateActiveElementInterfaceOrientation;
-(void)_updateAndLayoutIndicatorIfNecessary;
-(void)_updateContainerViewRanks;
-(void)_updateElementViewControllerReferences:(id)arg0 ;
-(void)_updateElementViewControllersAndPerformLayout;
-(void)_updateKeyLineStyle;
-(void)_updatePreferredContentSizeCategoryForAllElements;
-(void)_updatePreferredContentSizeCategoryForElementViewController:(id)arg0 ;
-(void)_updateRenderingStyle;
-(void)_updateStatusBarAvoidanceFrameWithAnimationSettings:(id)arg0 ;
-(void)_updateStatusBarAvoidanceFrameWithAnimationSettings:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_updateVariableBlurVisibility;
-(void)animateNegativeResponse;
-(void)animateTransitionAcceptanceBounceWithVelocityVector:(struct CGPoint )arg0 triggeredBlock:(id)arg1 ;
-(void)animateTransitionEjectionStretchWithVelocityVector:(struct CGPoint )arg0 ;
-(void)applyFailureRequirementsForCoverSheetPresentationGesture:(id)arg0 ;
-(void)dealloc;
-(void)elementOrientationDidChangeWithTransitionCoordinator:(id)arg0 ;
-(void)elementRequestsCancellingResizeGesture:(id)arg0 ;
-(void)elementRequestsNegativeResponse:(id)arg0 ;
-(void)elementRequestsSignificantUpdateTransition:(id)arg0 ;
-(void)elementViewControllingDidAppear:(id)arg0 ;
-(void)elementViewControllingDidDisappear:(id)arg0 ;
-(void)elementViewControllingWillAppear:(id)arg0 ;
-(void)elementViewControllingWillDisappear:(id)arg0 ;
-(void)menuPresentationRequestDidChangeForLayoutSpecifier:(id)arg0 ;
-(void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id)arg0 ;
-(void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id)arg0 ;
-(void)setLayoutMode:(NSInteger)arg0 reason:(NSInteger)arg1 forTargetWithOverrider:(id)arg2 ;
-(void)statusBarStyleOverridesDidChangeWithoutUpdateFromProvider:(id)arg0 ;
-(void)systemApertureContainerView:(id)arg0 sampledLuminanceLevelChangedTo:(NSInteger)arg1 ;
-(void)systemApertureManagerIndicatorHostingDidChange:(BOOL)arg0 ;
-(void)systemApertureManagerRequestsHostNeedsLayout:(id)arg0 ;
-(void)systemApertureProximityBacklightPolicy:(id)arg0 embedProximityTouchTrackingView:(id)arg1 touchBlockingView:(id)arg2 ;
-(void)systemApertureProximityBacklightPolicy:(id)arg0 removeProximityTouchTrackingView:(id)arg1 touchBlockingView:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif