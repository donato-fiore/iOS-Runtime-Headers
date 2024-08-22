// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISPLITVIEWCONTROLLERPANELIMPL_H
#define UISPLITVIEWCONTROLLERPANELIMPL_H

@class NSMutableDictionary, NSString, NSMutableArray, NSArray;
@protocol UIPanelControllerDelegate, UIDimmingViewDelegate, UIGestureRecognizerDelegate, UISplitViewControllerImpl, UISplitViewControllerDelegate, UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>

#import "UISplitViewController.h"
#import "UISplitViewControllerDisplayModeBarButtonItem.h"
#import "_UIFloatableBarButtonItem.h"
#import "UIView.h"
#import "UINavigationBar.h"
#import "UIBarButtonItem.h"
#import "UIPanGestureRecognizer.h"
#import "UITraitCollection.h"
#import "UISlidingBarStateRequest.h"
#import "UIResponder.h"
#import "_UIHyperregionUnion.h"
#import "_UIHyperrectangle.h"
#import "_UIHyperInteractor.h"
#import "_UIHyperConstantExtender.h"
#import "UIDimmingView.h"
#import "UIScreenEdgePanGestureRecognizer.h"
#import "UIImage.h"
#import "UISlidingBarConfiguration.h"
#import "UISlidingBarState.h"
#import "UIFocusContainerGuide.h"
#import "UITapGestureRecognizer.h"
#import "UIPanelController.h"

@interface UISplitViewControllerPanelImpl : NSObject <UIPanelControllerDelegate, UIDimmingViewDelegate, UIGestureRecognizerDelegate, UISplitViewControllerImpl>

 {
    NSMutableDictionary *_perColumnViewControllers;
    UISplitViewController *_svc;
    UISplitViewControllerDisplayModeBarButtonItem *_unspecifiedStyleDisplayModeButtonItem;
    NSString *_displayModeButtonItemTitle;
    _UIFloatableBarButtonItem *_sidebarToggleButtonItem;
    UIView *_floatableButtonContainer;
    UINavigationBar *_navBarForToggleButton;
    UIBarButtonItem *_secondaryOnlyShortcutButtonItem;
    UINavigationBar *_navBarForShortcutButton;
    CGFloat _presentationGestureDirection;
    UIPanGestureRecognizer *_sidebarPanGestureRecognizer;
    NSInteger _lastNotifiedMode;
    NSInteger _lastSettledDisplayMode;
    NSMutableArray *_overrideReportedDisplayModeStack;
    NSInteger _animatingToDisplayMode;
    BOOL _lastShouldAllowChange;
    BOOL _lastNotifiedIsCollapsed;
    NSInteger _lastNotifiedTopColumnForCollapse;
    UITraitCollection *_transitioningToTraitCollection;
    ? _transitioningFlags;
    CGSize _transitioningToSize;
    NSInteger _transitioningToOrientation;
    UITraitCollection *_suspendedTraitCollection;
    CGSize _suspendedSize;
    UISlidingBarStateRequest *_suspendedStateRequest;
    NSInteger _suspendedState;
    UIResponder *_suspendedFirstResponder;
    UIResponder *_postTransitionResponder;
    NSInteger _primaryEdge;
    NSMutableArray *_hyperpoints;
    _UIHyperregionUnion *_regionUnion;
    _UIHyperrectangle *_hyperrectangle;
    _UIHyperInteractor *_interactor;
    _UIHyperConstantExtender *_extender;
    ? _flags;
    CGFloat _lastUserInitiatedPrimaryWidth;
    NSInteger _primaryBackgroundStyle;
}


@property (nonatomic, getter=_allowsDimmedSecondaryAsDeepestUnambiguousResponder, setter=_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:) BOOL _allowsDimmedSecondaryAsDeepestUnambiguousResponder;
@property (retain, nonatomic, setter=_setDimmingView:) UIDimmingView *_dimmingView; // ivar: __dimmingView
@property (copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property (retain, nonatomic, setter=_setFluidOpenSidebarPresentationGestureRecognizer:) UIScreenEdgePanGestureRecognizer *_fluidOpenSidebarPresentationGestureRecognizer; // ivar: __fluidOpenSidebarPresentationGestureRecognizer
@property (retain, nonatomic, setter=_setFluidSidebarPresentationGestureRecognizer:) UIPanGestureRecognizer *_fluidSidebarPresentationGestureRecognizer;
@property (nonatomic, setter=_setForceDisplayModeBarButtonHidden:) BOOL _forceDisplayModeBarButtonHidden;
@property (retain, nonatomic, setter=_setFullScreenButtonImage:) UIImage *_fullScreenButtonImage; // ivar: __fullScreenButtonImage
@property (retain, nonatomic, setter=_setPresentationGestureRecognizer:) UIPanGestureRecognizer *_presentationGestureRecognizer;
@property (nonatomic, setter=_setVisibleToggleButtonRequiresPresentsWithGesture:) BOOL _visibleToggleButtonRequiresPresentsWithGesture;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (readonly, nonatomic) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UISplitViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide; // ivar: _detailFocusContainerGuide
@property (nonatomic) NSInteger displayModeButtonVisibility;
@property (nonatomic) float gutterWidth;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesMasterViewInPortrait;
@property (readonly, nonatomic) BOOL inCollapsingToProposedTopColumnCallback;
@property (readonly, nonatomic) BOOL inExpandingToProposedDisplayModeCallback;
@property (readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) NSUInteger lastFocusedChildViewControllerIndex; // ivar: _lastFocusedChildViewControllerIndex
@property (readonly, nonatomic) BOOL lockedForDelegateCallback;
@property (readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide; // ivar: _masterFocusContainerGuide
@property (nonatomic) CGFloat maximumPrimaryColumnWidth; // ivar: _maximumPrimaryColumnWidth
@property (nonatomic) CGFloat maximumSupplementaryColumnWidth; // ivar: _maximumSupplementaryColumnWidth
@property (readonly, nonatomic, getter=_menuGestureRecognizer) UITapGestureRecognizer *menuGestureRecognizer; // ivar: _menuGestureRecognizer
@property (nonatomic) CGFloat minimumPrimaryColumnWidth; // ivar: _minimumPrimaryColumnWidth
@property (nonatomic) CGFloat minimumSupplementaryColumnWidth; // ivar: _minimumSupplementaryColumnWidth
@property (retain, nonatomic) UIPanelController *panelController; // ivar: _panelController
@property (readonly, nonatomic) NSArray *possibleStates;
@property (nonatomic) NSInteger preferredDisplayMode; // ivar: _preferredDisplayMode
@property (nonatomic) CGFloat preferredPrimaryColumnWidth; // ivar: _preferredPrimaryColumnWidth
@property (nonatomic) CGFloat preferredPrimaryColumnWidthFraction; // ivar: _preferredPrimaryColumnWidthFraction
@property (nonatomic) NSInteger preferredSplitBehavior; // ivar: _preferredSplitBehavior
@property (nonatomic) CGFloat preferredSupplementaryColumnWidth; // ivar: _preferredSupplementaryColumnWidth
@property (nonatomic) CGFloat preferredSupplementaryColumnWidthFraction; // ivar: _preferredSupplementaryColumnWidthFraction
@property (nonatomic) BOOL prefersOverlayInRegularWidthPhone;
@property (nonatomic) BOOL presentsWithGesture; // ivar: _presentsWithGesture
@property (nonatomic) NSInteger primaryBackgroundStyle;
@property (nonatomic) NSInteger primaryEdge;
@property (nonatomic) BOOL showsSecondaryOnlyButton;
@property (readonly, nonatomic) NSInteger splitBehavior;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supplementaryColumnAdoptsPrimaryBackgroundStyle;
@property (readonly, nonatomic) CGFloat supplementaryColumnWidth;
@property (readonly, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator;
@property (nonatomic) BOOL usesDeviceOverlayPreferences;
@property (nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) BOOL usesExtraWidePrimaryColumn;
@property (copy, nonatomic) NSArray *viewControllers;


-(BOOL)_allowClientAnimationCoordination;
-(BOOL)_allowMoveToSecondaryOnlyGetIsInForcedOverlayFromGesture:(*BOOL)arg0 ;
-(BOOL)_allowsFocusBehindDimmingView;
-(BOOL)_allowsTriggeringSidebarKeyCommandAction;
-(BOOL)_alwaysHideSidebarToggleButton;
-(BOOL)_configurationPermitsFluidCloseGestureWithPrimaryShown:(BOOL)arg0 supplementaryShown:(BOOL)arg1 ;
-(BOOL)_configurationPermitsFluidOpenGestureWithPrimaryShown:(BOOL)arg0 supplementaryShown:(BOOL)arg1 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_fluidGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_gestureIsForcingOverlay;
-(BOOL)_gestureIsForcingOverlayForDisplayMode:(NSInteger)arg0 ;
-(BOOL)_handlesCounterRotationForPresentation;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_iPadShouldUseOverlayInCurrentEnvironment;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(BOOL)_isAnimating;
-(BOOL)_isDisplayModeBarButtonVisible;
-(BOOL)_isExpanding;
-(BOOL)_isPrimaryLeading;
-(BOOL)_isPrimaryShown;
-(BOOL)_isRotating;
-(BOOL)_isViewControllerForObservableScrollViewAmbiguous;
-(BOOL)_layoutPrimaryOnRight;
-(BOOL)_navigationControllerShouldNotAdjustTransitioningSizeForChildContainer:(id)arg0 ;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(BOOL)_scrollViewPreventsGestureForHitView:(id)arg0 ;
-(BOOL)_setPanelConfigurationWithIsPrimaryShown:(BOOL)arg0 isSupplementaryShown:(BOOL)arg1 shouldUseOverlay:(BOOL)arg2 dimMainIfNecessary:(BOOL)arg3 ;
-(BOOL)_setPanelConfigurationWithIsPrimaryShown:(BOOL)arg0 shouldUseOverlay:(BOOL)arg1 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)_shouldReturnBoundsWidthForColumnWidth;
-(BOOL)_shouldShowNSToolbarSidebarToggle;
-(BOOL)_shouldUseFluidSidebarGestures;
-(BOOL)_unspecifiedStyleGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_usePaddingForEdgeInsetsForChildViewController:(id)arg0 ;
-(BOOL)_wantsSideBarImageForOneOverSecondary;
-(BOOL)allowsSecondaryOnlyShortcutButton;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)panelController:(id)arg0 collapseOntoPrimaryViewController:(id)arg1 ;
-(BOOL)panelController:(id)arg0 collapsePrimaryViewController:(id)arg1 withFallbackSecondaryViewController:(id)arg2 onTopOfSupplementaryViewController:(id)arg3 transitionCoordinator:(id)arg4 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)_contentMarginForChildViewController:(id)arg0 ;
-(CGFloat)_defaultMaximumIPadWidthForColumn:(NSInteger)arg0 withSize:(struct CGSize )arg1 ;
-(CGFloat)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize )arg0 ;
-(CGFloat)_defaultMaximumSupplementaryColumnWidthForSize:(struct CGSize )arg0 ;
-(CGFloat)_defaultMaximumTVWidthForColumn:(NSInteger)arg0 withSize:(struct CGSize )arg1 ;
-(CGFloat)_primaryColumnWidthForSize:(struct CGSize )arg0 isCompact:(BOOL)arg1 shouldUseOverlay:(BOOL)arg2 ;
-(CGFloat)_primaryColumnWidthForSize:(struct CGSize )arg0 shouldUseOverlay:(BOOL)arg1 ;
-(CGFloat)_primaryDividerPosition;
-(CGFloat)_supplementaryDividerPosition;
-(CGFloat)panelController:(id)arg0 expectedWidthForColumnForViewController:(id)arg1 ;
-(CGFloat)primaryColumnWidth;
-(Class)viewClassForPanelController:(id)arg0 ;
-(NSInteger)_columnForMonitoredNavigationController:(id)arg0 ;
-(NSInteger)_columnForView:(id)arg0 getIsContent:(*BOOL)arg1 ;
-(NSInteger)_columnForViewController:(id)arg0 ;
-(NSInteger)_concreteDisplayModeForCurrentEnvironment;
-(NSInteger)_currentInterfaceIdiom;
-(NSInteger)_displayModeForState:(id)arg0 ;
-(NSInteger)_effectiveTargetDisplayMode;
-(NSInteger)_effectiveTargetDisplayModeForDisplayMode:(NSInteger)arg0 ;
-(NSInteger)_fullScreenStateForOrientation:(NSInteger)arg0 viewWidth:(CGFloat)arg1 ;
-(NSInteger)_lastSettledDisplayMode;
-(NSInteger)_nextTargetDisplayModeForDisplayMode:(NSInteger)arg0 showMoreIfPossible:(BOOL)arg1 ;
-(NSInteger)_primaryHidingState;
-(NSInteger)_svcOrientation;
-(NSInteger)_svcViewWindowOrientation;
-(NSInteger)_unspecifiedStyleDisplayModeForState:(id)arg0 ;
-(NSInteger)allowedDisplayModeForCurrentSplitBehaviorGivenDisplayMode:(NSInteger)arg0 ;
-(NSInteger)defaultDisplayModeForSize:(struct CGSize )arg0 ;
-(NSInteger)defaultDisplayModeForSplitBehavior:(NSInteger)arg0 ;
-(NSInteger)displayMode;
-(NSInteger)preferredCenterStatusBarStyle;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredLeadingStatusBarStyle;
-(NSInteger)preferredTrailingStatusBarStyle;
-(NSInteger)splitBehaviorForSize:(struct CGSize )arg0 ;
-(NSInteger)topColumnForCollapsingPanelController:(id)arg0 ;
-(NSInteger)userGeneratedDisplayMode;
-(NSInteger)validDisplayModeWithAllColumns;
-(NSUInteger)_effectivePrimaryRectEdge;
-(NSUInteger)preferredScreenEdgesDeferringSystemGestures;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_additionalViewControllersToCheckForUserActivity;
-(id)_allContainedViewControllers;
-(id)_childContainingSender:(id)arg0 ;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(id)_columnStyleDelegate;
-(id)_currentPrimaryChildViewController;
-(id)_currentSupplementaryChildViewController;
-(id)_deepestActionResponder;
-(id)_displayModeButtonItem;
-(id)_effectiveActivityItemsConfiguration;
-(id)_enterFullScreenSymbolImage;
-(id)_fullScreenSymbolImageForDisplayMode:(NSInteger)arg0 ;
-(id)_hiddenColumnsInCurrentEnvironmentWithConcreteDisplayMode:(NSInteger)arg0 ;
-(id)_leaveFullScreenSymbolImage;
-(id)_multitaskingDragExclusionRects;
-(id)_navigationBarForSidebarButtonForColumn:(NSInteger)arg0 ;
-(id)_navigationBarForSidebarButtonForDisplayMode:(NSInteger)arg0 ;
-(id)_navigationController:(id)arg0 navigationBarAdditionalActionsForBackButtonMenu:(id)arg1 ;
-(id)_newBarContentAnimationClippingView;
-(id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg0 ;
-(id)_overridingPreferredFocusEnvironment;
-(id)_primaryContentResponder;
-(id)_primaryDimmingView;
-(id)_sidebarChevronSymbolImage;
-(id)_sidebarToggleSymbolImage;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_unspecifiedCompositionDisplayModeButtonItem;
-(id)_unspecifiedStyleChildViewControllersToSendViewWillTransitionToSize;
-(id)_unspecifiedStyleViewControllers;
-(id)_viewControllerForObservableScrollView;
-(id)childViewControllerForStatusBarStyle;
-(id)detailViewController;
-(id)displayModeButtonItem;
-(id)initWithSplitViewController:(id)arg0 ;
-(id)leadingVisibleViewController;
-(id)masterViewController;
-(id)panelController:(id)arg0 navigationBarForViewController:(id)arg1 ;
-(id)panelController:(id)arg0 separateSecondaryViewControllerFromPrimaryViewController:(id)arg1 ;
-(id)panelController:(id)arg0 separateSupplementaryViewControllerFromPrimaryViewController:(id)arg1 ;
-(id)panelController:(id)arg0 unspecifiedStyleSeparateSecondaryViewControllerFromPrimaryViewController:(id)arg1 ;
-(id)panelControllerWillUpdate:(SEL)arg0 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(id)primaryViewControllerForCollapsingPanelController:(id)arg0 ;
-(id)primaryViewControllerForExpandingPanelController:(id)arg0 ;
-(id)trailingVisibleViewController;
-(id)viewControllerForColumn:(NSInteger)arg0 ;
-(struct CGRect )_frameForChildContentContainer:(id)arg0 ;
-(struct CGSize )_contentSizeForChildViewController:(id)arg0 inPopoverController:(id)arg1 ;
-(struct CGSize )_defaultViewSizeForResolvingDisplayModeOrSplitBehavior;
-(struct CGSize )_predictedDetailSizeForPredictedEndState:(id)arg0 ;
-(struct CGSize )_preferredContentSize;
-(struct CGSize )_screenSize;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_tvOSColumnStyleExtraInsetsForChildViewController:(id)arg0 ;
-(void)_addFocusPromiseRegionInContext:(id)arg0 ;
-(void)_allowingMutationsInDelegateCallback:(id)arg0 ;
-(void)_changeToDisplayMode:(NSInteger)arg0 fromPreferredDisplayMode:(NSInteger)arg1 ;
-(void)_commonInit;
-(void)_descendantWillPresentViewController:(id)arg0 modalSourceViewController:(id)arg1 presentationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_didChangeToFirstResponder:(id)arg0 ;
-(void)_didEndSnapshotSession;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg0 ;
-(void)_fluidPresentationGestureRecognizerChanged:(id)arg0 ;
-(void)_fluidUpdatePresentationGestureRecognizers;
-(void)_getPrimaryShown:(*BOOL)arg0 shouldUseOverlay:(*BOOL)arg1 ;
-(void)_getPrimaryShown:(*BOOL)arg0 supplementaryShown:(*BOOL)arg1 shouldUseOverlay:(*BOOL)arg2 dimMainIfNecessary:(*BOOL)arg3 ;
-(void)_getPrimaryShown:(*BOOL)arg0 supplementaryShown:(*BOOL)arg1 shouldUseOverlay:(*BOOL)arg2 dimMainIfNecessary:(*BOOL)arg3 forDisplayMode:(NSInteger)arg4 ;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_initWithCoder:(id)arg0 ;
-(void)_marginInfoForChild:(id)arg0 leftMargin:(*CGFloat)arg1 rightMargin:(*CGFloat)arg2 ;
-(void)_navigationController:(id)arg0 navigationBar:(id)arg1 itemBackButtonUpdated:(id)arg2 ;
-(void)_navigationController:(id)arg0 navigationBar:(id)arg1 topItemUpdatedContentLayout:(id)arg2 ;
-(void)_navigationControllerDidChangeNavigationBarHidden:(id)arg0 ;
-(void)_navigationControllerDidUpdateStack:(id)arg0 ;
-(void)_notifyFluidPresentationGestureDidEnd;
-(void)_notifyFluidPresentationGestureWillBegin;
-(void)_popOverrideOfReportedDisplayMode;
-(void)_popoverController:(id)arg0 didChangeFromVisible:(BOOL)arg1 ;
-(void)_popoverController:(id)arg0 willChangeToVisible:(BOOL)arg1 ;
-(void)_presentationGestureRecognizerChanged:(id)arg0 ;
-(void)_primaryColumnWidthAffectingPropertyDidChange;
-(void)_pushOverrideOfReportedDisplayMode:(NSInteger)arg0 ;
-(void)_revealSecondaryColumnIfNecessary;
-(void)_setInteractiveSidebarWidth:(CGFloat)arg0 ;
-(void)_setNumberOfSidebarColumnsVisibleFromGesture:(NSUInteger)arg0 withVelocity:(CGFloat)arg1 ;
-(void)_setPrimaryHidingState:(NSInteger)arg0 ;
-(void)_setPrimaryShownFromGesture:(BOOL)arg0 hideAll:(BOOL)arg1 ;
-(void)_setUpFocusContainerGuides;
-(void)_stopTransitionsInViewController:(id)arg0 ;
-(void)_supplementaryOrPrimaryColumnWidthAffectingPropertyDidChange;
-(void)_tabBarControllerDidChangeSelection:(id)arg0 ;
-(void)_transitionFromDisplayMode:(NSInteger)arg0 toDisplayMode:(NSInteger)arg1 ;
-(void)_triggerDisplayModeAction:(id)arg0 ;
-(void)_triggerSecondaryOnlyShortcutAction:(id)arg0 ;
-(void)_triggerSidebarKeyCommandAction:(id)arg0 ;
-(void)_unspecifiedShowDetailViewController:(id)arg0 onTargetVC:(id)arg1 sender:(id)arg2 ;
-(void)_unspecifiedStyleChangeToDisplayMode:(NSInteger)arg0 fromPreferredDisplayMode:(NSInteger)arg1 ;
-(void)_unspecifiedStylePanelController:(id)arg0 didChangeToState:(id)arg1 withSize:(struct CGSize )arg2 ;
-(void)_unspecifiedStylePresentationGestureRecognizerChanged:(id)arg0 ;
-(void)_unspecifiedStyleSetPrimaryShownFromGesture:(BOOL)arg0 ;
-(void)_unspecifiedStyleSetViewControllers:(id)arg0 ;
-(void)_unspecifiedStyleTriggerDisplayModeAction:(id)arg0 ;
-(void)_unspecifiedStyleUpdateDisplayModeButtonItem;
-(void)_updateAllowsTriggeringSidebarKeyCommandAction;
-(void)_updateChildContentMargins;
-(void)_updateConfigurationBackgroundStyle;
-(void)_updateDimmingView;
-(void)_updateDisplayModeButtonItem;
-(void)_updateDisplayModeButtonItemAndResetForCanceledAnimationWithTransitionCoordinator:(id)arg0 ;
-(void)_updateDisplayModeButtonItemForDisplayMode:(NSInteger)arg0 ;
-(void)_updateDisplayModeButtonItemIfNecessaryForChangingNavigationController:(id)arg0 ;
-(void)_updateFocusContainerGuideFrames;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_updatePresentationGestureRecognizer;
-(void)_updateTriggerSidebarKeyCommandTitleForNewDisplayMode:(NSInteger)arg0 ;
-(void)_validateTriggerSidebarKeyCommand:(id)arg0 ;
-(void)_viewControllerChildViewControllersDidChange:(id)arg0 ;
-(void)_willBeginSnapshotSession;
-(void)_willShowCollapsedDetailViewController:(id)arg0 inTargetController:(id)arg1 ;
-(void)animateToRequest:(id)arg0 ;
-(void)callDeprecatedWillHideDelegateCallbackIfNecessary;
-(void)callDeprecatedWillShowDelegateCallbackIfNecessary;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)dimmingViewWasTapped:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getPrimaryColumnWidth:(*CGFloat)arg0 supplementaryColumnWidth:(*CGFloat)arg1 forSize:(struct CGSize )arg2 displayMode:(NSInteger)arg3 isCompact:(BOOL)arg4 shouldUseOverlay:(BOOL)arg5 ;
-(void)getPrimaryColumnWidth:(*CGFloat)arg0 supplementaryColumnWidth:(*CGFloat)arg1 forSize:(struct CGSize )arg2 displayMode:(NSInteger)arg3 shouldUseOverlay:(BOOL)arg4 ;
-(void)hideColumn:(NSInteger)arg0 ;
-(void)loadView;
-(void)panelController:(id)arg0 adjustLeadingViewController:(id)arg1 forKeyboardInfo:(id)arg2 ;
-(void)panelController:(id)arg0 adjustTrailingViewController:(id)arg1 forKeyboardInfo:(id)arg2 ;
-(void)panelController:(id)arg0 animateTransitionToStateRequest:(id)arg1 predictedEndState:(id)arg2 predictedDuration:(CGFloat)arg3 ;
-(void)panelController:(id)arg0 collapsePrimaryViewController:(id)arg1 withFallbackSecondaryViewController:(id)arg2 transitionCoordinator:(id)arg3 ;
-(void)panelController:(id)arg0 didChangeToState:(id)arg1 withSize:(struct CGSize )arg2 ;
-(void)panelController:(id)arg0 didEndAnimatedTransitionToStateRequest:(id)arg1 ;
-(void)panelController:(id)arg0 willBeginAnimatedTransitionToStateRequest:(id)arg1 predictedEndState:(id)arg2 predictedDuration:(CGFloat)arg3 ;
-(void)panelController:(id)arg0 willBeginAnimationToPrimarySize:(struct CGSize )arg1 supplementarySize:(struct CGSize )arg2 secondarySize:(struct CGSize )arg3 ;
-(void)panelController:(id)arg0 willChangeToState:(id)arg1 ;
-(void)panelControllerDidCollapse:(id)arg0 ;
-(void)panelControllerDidExpand:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)preparePanelControllerForCollapse;
-(void)removeChildViewController:(id)arg0 ;
-(void)sendColumnShowHideNotificationsForNewState:(id)arg0 newDisplayMode:(NSInteger)arg1 oldDisplayMode:(NSInteger)arg2 ;
-(void)sendWillHideColumn:(NSInteger)arg0 ;
-(void)sendWillShowColumn:(NSInteger)arg0 ;
-(void)setUserGeneratedDisplayMode:(NSInteger)arg0 ;
-(void)setViewController:(id)arg0 forColumn:(NSInteger)arg1 ;
-(void)showColumn:(NSInteger)arg0 ;
-(void)showDetailViewController:(id)arg0 sender:(id)arg1 ;
-(void)showViewController:(id)arg0 sender:(id)arg1 ;
-(void)toggleMasterVisible:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unloadViewForced:(BOOL)arg0 ;
-(void)updateDisplayModeButtonItem;
-(void)updatePanelControllerForViewControllerChangeInColumn:(NSInteger)arg0 ;
-(void)updatePanelControllerForViewControllerChangeInColumn:(NSInteger)arg0 alwaysAnimate:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif