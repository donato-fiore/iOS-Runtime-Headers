// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUILAYOUTSPECIFYINGELEMENTVIEWCONTROLLER_H
#define SAUILAYOUTSPECIFYINGELEMENTVIEWCONTROLLER_H

@class UIViewController, UIImageView, UIViewFloatAnimatableProperty, NSHashTable, NSMutableDictionary, NSPointerArray, NSMapTable, SAAutomaticallyInvalidatingAssertion, NSString, NSMutableSet, UIView, NSArray;
@protocol SAElementHosting, SAActivityHostingPrivate, SAUILayoutHosting, SAUILayoutSpecifyingPrivate, SAUILayoutSpecifyingOverridingParticipant, SAActivityHosting, SAAlertHosting, SAUIElementViewControlling, SAUILayoutSpecifying, SAUIContentTransitioning, SAUITransitionTracking, SAInvalidatable, SAAutomaticallyInvalidatable, SAElementViewProviding, SAUILayoutModePreferring;


#import "SAUIPreferredLayoutModeAssertion.h"

@interface SAUILayoutSpecifyingElementViewController : UIViewController <SAElementHosting, SAActivityHostingPrivate, SAUILayoutHosting, SAUILayoutSpecifyingPrivate, SAUILayoutSpecifyingOverridingParticipant, SAActivityHosting, SAAlertHosting, SAUIElementViewControlling, SAUILayoutSpecifying, SAUIContentTransitioning, SAUITransitionTracking>

 {
    UIImageView *_contentsTransitionShadowView;
    UIViewFloatAnimatableProperty *_shadowViewAnimatableProperty;
    NSHashTable *_shadowViewAssertions;
    id<SAInvalidatable> *_shadowViewAssertion;
    NSMutableDictionary *_transitionIDsToReasons;
    NSPointerArray *_preferredLayoutModeAssertions;
    SAUIPreferredLayoutModeAssertion *_preferredLayoutModeAssertion;
    NSMapTable *_reasonsToAlertingActivityAssertions;
    SAAutomaticallyInvalidatingAssertion *_cooldownAssertion;
    NSHashTable *_observers;
    NSString *_contentTransitionBlurKeyPath;
    NSString *_contentTransitionBlurInputRadiusKeyPath;
    NSInteger _previousLayoutMode;
    NSMutableSet *_userInteractionAssertionsInCooldown;
    id<SAInvalidatable> *_appearanceTransitionInitializationAvoidanceAssertion;
    BOOL _initializedAppearanceTransition;
    BOOL _avoidShadowViewOvershooting;
    BOOL _shadowViewAlphaDidPassOutsideOfRange;
}


@property (readonly, nonatomic) NSObject<SAAutomaticallyInvalidatable> *alertAssertion; // ivar: _alertAssertion
@property (readonly, weak, nonatomic) NSObject<SAAutomaticallyInvalidatable> *alertingActivityAssertion;
@property (readonly, weak, nonatomic) NSObject<SAAutomaticallyInvalidatable> *alertingActivityAssertion; // ivar: _alertingActivityAssertion
@property (readonly, nonatomic) NSInteger behaviorOverridingRole;
@property (readonly, nonatomic, getter=_containerView) UIView *containerView;
@property (readonly, nonatomic, getter=_contentView) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SAElementViewProviding> *elementViewProvider; // ivar: _elementViewProvider
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost;
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost; // ivar: _layoutHost
@property (readonly, nonatomic) NSInteger layoutMode;
@property (readonly, nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (readonly, nonatomic) NSObject<SAUILayoutModePreferring> *layoutModePreference;
@property (readonly, nonatomic) NSInteger maximumSupportedLayoutMode;
@property (readonly, nonatomic) NSInteger maximumSupportedLayoutMode;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic) NSInteger minimumSupportedLayoutMode;
@property (readonly, nonatomic) NSInteger minimumSupportedLayoutMode;
@property (readonly, nonatomic, getter=_isNotInCustomLayoutOrTransitionFromCustomLayout) BOOL notInCustomLayoutOrTransitionFromCustomLayout;
@property (readonly, nonatomic, getter=_isObstructedBySensorRegion) BOOL obstructedBySensorRegion;
@property (readonly, nonatomic, getter=_obstructedRegionSize) CGSize obstructedRegionSize;
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (readonly, nonatomic) SAUIPreferredLayoutModeAssertion *preferredLayoutModeAssertion;
@property (readonly, copy, nonatomic) NSArray *preferredLayoutModeAssertions;
@property (readonly, nonatomic, getter=_previousLayoutMode) NSInteger previousLayoutMode;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *temporallyOrderedAlertingActivityAssertions;
@property (readonly, nonatomic, getter=isTrackingTransition) BOOL trackingTransition;


+(void)initialize;
-(BOOL)_axCollapseIfExpandedByUserInteraction;
-(BOOL)_canShowWhileLocked;
-(BOOL)_expandToCustomLayoutModeFromUserActionIfPossible;
-(BOOL)_isBlurFilterConfiguredForView:(id)arg0 ;
-(BOOL)_shouldAvoidAppearanceTransitionInitialization;
-(BOOL)handleLongPress:(id)arg0 ;
-(BOOL)handleTap:(id)arg0 ;
-(BOOL)isInteractiveDismissalEnabledForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(BOOL)isMinimalPresentationPossibleForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(BOOL)isTrackingTransitionWithReason:(id)arg0 ;
-(CGFloat)_defaultAlertingDuration;
-(CGFloat)concentricPaddingForProvidedView:(id)arg0 fromViewProvider:(id)arg1 ;
-(NSInteger)layoutModeForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(NSInteger)maximumSupportedLayoutModeForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(NSInteger)minimumSupportedLayoutModeForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(id)_acquireShadowViewAssertion;
-(id)_alertingActivityAssertionWithReason:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)_contentTransitionBlurInputRadiusKeyPath;
-(id)_contentTransitionBlurKeyPath;
-(id)_elementHost;
-(id)_newShadowViewAssertion;
-(id)_overrideWithPreference:(id)arg0 ;
-(id)_updatePreferredLayoutModeAssertionWithPreference:(SEL)arg0 ;
-(id)alertWithReason:(id)arg0 ;
-(id)initWithElementViewProvider:(id)arg0 ;
-(id)layoutModePreferenceForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(id)preferredLayoutModeAssertionForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(id)systemManagedAlertingActivityAssertionWithReason:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )edgeOutsetsForSize:(struct CGSize )arg0 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 forTargetWithOverrider:(id)arg3 isDefaultValue:(*BOOL)arg4 ;
-(void)_animateShadowViewAvoidingOvershoot:(BOOL)arg0 ;
-(void)_axRequestDiminishment;
-(void)_configureAlertAssertionIfNecessary;
-(void)_configureBlurFilterIfNecessary:(id)arg0 ;
-(void)_configureShadowViewAnimatablePropertyIfNecessary;
-(void)_configureTransitionShadowViewIfNecessary;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_insertSnapshotView:(id)arg0 ;
-(void)_invalidatePreferredLayoutModeAssertionWithReason:(NSInteger)arg0 ;
-(void)_performAppearanceTransitionInitialization;
-(void)_performAppearanceTransitionInitializationIfNecessary;
-(void)_performBlurAppearanceTransition:(BOOL)arg0 ;
-(void)_performBlurAppearanceTransition:(BOOL)arg0 forView:(id)arg1 ;
-(void)_performContainerViewAppearanceTransition:(BOOL)arg0 ;
-(void)_performContentAppearanceTransition:(BOOL)arg0 ;
-(void)_performShadowViewAppearanceTransition:(BOOL)arg0 ;
-(void)_toggleShadowView;
-(void)addElementViewControllingObserver:(id)arg0 ;
-(void)beginTrackingTransitionWithUniqueIdentifier:(id)arg0 reason:(id)arg1 ;
-(void)contentProviderWillTransitionToSize:(struct CGSize )arg0 inContainerView:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)dealloc;
-(void)elementRequestsNegativeResponse:(id)arg0 ;
-(void)elementRequestsSignificantUpdateTransition:(id)arg0 ;
-(void)endTrackingTransitionWithUniqueIdentifier:(id)arg0 ;
-(void)menuPresentationRequestDidChangeForLayoutSpecifier:(id)arg0 ;
-(void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id)arg0 ;
-(void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id)arg0 ;
-(void)removeElementViewControllingObserver:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif