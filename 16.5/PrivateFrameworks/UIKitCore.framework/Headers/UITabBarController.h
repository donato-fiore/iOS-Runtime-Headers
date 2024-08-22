// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABBARCONTROLLER_H
#define UITABBARCONTROLLER_H

@class NSString, NSArray, NSMutableArray, NSMapTable;
@protocol UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, _UIScrollViewScrollObserver_Internal, _UITVScrollViewManagerDelegate, _UITabBarDelegateInternal, _UIScrollViewScrollObserver, UITabBarDelegate, NSCoding, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UITabBarControllerDelegate;


#import "UIViewController.h"
#import "UITabBar.h"
#import "UILayoutContainerView.h"
#import "UIView.h"
#import "UIMoreNavigationController.h"
#import "UITabBarAppearance.h"
#import "UITapGestureRecognizer.h"
#import "UIGestureRecognizer.h"
#import "UIFocusContainerGuide.h"
#import "UILongPressGestureRecognizer.h"
#import "UIScrollView.h"
#import "_UITVScrollViewManager.h"
#import "UIFocusGuide.h"
#import "UINavigationController.h"

@interface UITabBarController : UIViewController <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, _UIScrollViewScrollObserver_Internal, _UITVScrollViewManagerDelegate, _UITabBarDelegateInternal, _UIScrollViewScrollObserver, UITabBarDelegate, NSCoding>

 {
    UITabBar *_tabBar;
    UILayoutContainerView *_containerView;
    UIView *_viewControllerTransitionView;
    id *_tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UIMoreNavigationController *_moreNavigationController;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    NSUInteger _customMaxItems;
    NSUInteger _defaultMaxItems;
    NSInteger _tabBarPosition;
    UITabBarAppearance *_lastUsedScrollEdgeAppearance;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_nudgeLeftGestureRecognizer;
    UITapGestureRecognizer *_nudgeRightGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    UIGestureRecognizer *_touchDetectionGestureRecognizer;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
    UIScrollView *_observingScrollView;
    UIView *_tabBarContainerView;
    _UITVScrollViewManager *_scrollViewManager;
    UIFocusGuide *_tabBarOffscreenFocusGuide;
    ? _tabBarControllerFlags;
}


@property (retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // ivar: _accessoryView
@property (nonatomic, setter=_setAllowLateralFocusMovementOutOfTabBar:) BOOL _allowLateralFocusMovementOutOfTabBar; // ivar: __allowLateralFocusMovementOutOfTabBar
@property (retain, nonatomic, setter=_setAnimator:) NSObject<UIViewControllerAnimatedTransitioning> *_animator; // ivar: __animator
@property (retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // ivar: __backdropGroupName
@property (retain, nonatomic, setter=_setInteractor:) NSObject<UIViewControllerInteractiveTransitioning> *_interactor; // ivar: __interactor
@property (readonly, nonatomic) BOOL _isBarHidden;
@property (nonatomic) BOOL _shouldFocusViewControllerAfterTransition; // ivar: __shouldFocusViewControllerAfterTransition
@property (copy, nonatomic) NSArray *customizableViewControllers; // ivar: _customizableViewControllers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UITabBarControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *moreChildViewControllers; // ivar: _moreChildViewControllers
@property (readonly, nonatomic) UINavigationController *moreNavigationController;
@property (readonly, nonatomic, getter=_rememberedFocusedItemsByViewController) NSMapTable *rememberedFocusedItemsByViewController; // ivar: _rememberedFocusedItemsByViewController
@property (nonatomic) NSUInteger selectedIndex;
@property (nonatomic) UIViewController *selectedViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITabBar *tabBar;
@property (copy, nonatomic) NSArray *viewControllers;


+(BOOL)_directlySetsContentOverlayInsetsForChildren;
+(BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
-(BOOL)_allowsAutorotation;
-(BOOL)_allowsCustomizing;
-(BOOL)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg0 inViewController:(id)arg1 ;
-(BOOL)_doAllViewControllersSupportInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_ignoreUnselectedTabsForStateRestoration;
-(BOOL)_isBarEffectivelyHidden;
-(BOOL)_isFocusedTabVisible;
-(BOOL)_isLegacyTabBar;
-(BOOL)_isModernTVTabBar;
-(BOOL)_isPresentationContextByDefault;
-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_isTabBarController;
-(BOOL)_isTabBarFocused;
-(BOOL)_isViewControllerContainedInSelected:(id)arg0 ;
-(BOOL)_notifySplitViewControllerForSelectionChange;
-(BOOL)_reallyWantsFullScreenLayout;
-(BOOL)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg0 adjustedTabBarFrame:(struct CGRect )arg1 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)_shouldUseOnePartRotation;
-(BOOL)_suspendBarBackgroundUpdating;
-(BOOL)_transitionsChildViewControllers;
-(BOOL)_tvTabBarShouldTrackScrollView:(id)arg0 ;
-(BOOL)_wrapsNavigationController:(*id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)showsEditButtonOnLeft;
-(CGFloat)_childViewControllerModernTVTabBarTopInset;
-(NSInteger)_effectiveTabBarPosition;
-(NSInteger)_subclassPreferredFocusedViewPrioritizationType;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSUInteger)_effectiveMaxItems;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_accessibilityHUDLongPressRecognizer;
-(id)_additionalViewControllersToCheckForUserActivity;
-(id)_allContainedViewControllers;
-(id)_backdropBarGroupName;
-(id)_childViewControllerForMultitaskingDragExclusionRects;
-(id)_customAnimatorForFromViewController:(id)arg0 toViewController:(id)arg1 ;
-(id)_customInteractionControllerForAnimator:(id)arg0 ;
-(id)_deepestActionResponder;
-(id)_effectiveInteractionActivityTrackingBaseName;
-(id)_existingMoreNavigationController;
-(id)_overrideTraitCollectionToPassDuringTraitChangeToChildViewController:(id)arg0 ;
-(id)_overridingPreferredFocusEnvironment;
-(id)_recallRememberedFocusedItemForViewController:(id)arg0 ;
-(id)_responderSelectionContainerViewForResponder:(id)arg0 ;
-(id)_scrollViewObservedBeforeHidingBar;
-(id)_tabBarWindowForInterfaceOrientation:(id)arg0 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_transitionView;
-(id)_viewControllerForObservableScrollView;
-(id)_viewControllerForSelectAtIndex:(NSUInteger)arg0 ;
-(id)_viewControllerForTabBarItem:(id)arg0 ;
-(id)_viewForViewController:(id)arg0 ;
-(id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg0 ;
-(id)_wrapperViewForViewController:(id)arg0 ;
-(id)allViewControllers;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForPointerLock;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForUserInterfaceStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(id)rotatingFooterView;
-(id)rotatingHeaderView;
-(id)rotatingSnapshotViewForWindow:(id)arg0 ;
-(id)transientViewController;
-(id)transitionCoordinator;
-(struct CGRect )_adjustContentViewFrameForOffscreenFocus:(struct CGRect )arg0 viewController:(id)arg1 ;
-(struct CGRect )_adjustTabBarFrameForOffscreenFocus:(struct CGRect )arg0 barPosition:(NSInteger)arg1 ;
-(struct CGRect )_adjustTabBarFrameForSafeAreas:(struct CGRect )arg0 ;
-(struct CGRect )_frameForViewController:(id)arg0 ;
-(struct CGRect )_frameForWrapperViewForViewController:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_overlayInsetsAdjustment;
-(void)__viewWillLayoutSubviews;
-(void)_accessibilityLongPressChanged:(id)arg0 ;
-(void)_adjustTVTabBarForContentScrollView:(id)arg0 ;
-(void)_childViewController:(id)arg0 updatedObservedScrollView:(id)arg1 ;
-(void)_configureTargetActionForTabBarItem:(id)arg0 ;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_forgetFocusedItemForViewController:(id)arg0 ;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_handleObservingForScrollView:(id)arg0 sharedWithNavigationController:(id)arg1 ;
-(void)_hideBarWithTransition:(int)arg0 isExplicit:(BOOL)arg1 ;
-(void)_hideBarWithTransition:(int)arg0 isExplicit:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)_invalidateBarLayoutIfNecessary;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg0 ;
-(void)_layoutContainerView;
-(void)_layoutViewController:(id)arg0 ;
-(void)_navigationController:(id)arg0 didUpdateAndObserveScrollView:(id)arg1 forEdges:(NSUInteger)arg2 ;
-(void)_navigationControllerDidUpdateStack:(id)arg0 ;
-(void)_observableScrollViewDidChangeFrom:(id)arg0 forViewController:(id)arg1 edges:(NSUInteger)arg2 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_observeScrollViewGeometryAffectingContentBottomDidChange:(id)arg0 ;
-(void)_performBackGesture:(id)arg0 ;
-(void)_performFocusGesture:(NSUInteger)arg0 ;
-(void)_performLeftGesture:(id)arg0 ;
-(void)_performRightGesture:(id)arg0 ;
-(void)_performSelectGesture:(id)arg0 ;
-(void)_performTouchDetectionGesture:(id)arg0 ;
-(void)_populateArchivedChildViewControllers:(id)arg0 ;
-(void)_prepareTabBar;
-(void)_rebuildTabBarItemsAnimated:(BOOL)arg0 ;
-(void)_rebuildTabBarItemsIfNeeded;
-(void)_rememberFocusedItem:(id)arg0 forViewController:(id)arg1 ;
-(void)_rememberPresentingFocusedItem:(id)arg0 ;
-(void)_safeAreaInsetsDidChangeForView;
-(void)_scrollViewManagerDidFinishScrolling:(id)arg0 ;
-(void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)arg0 ;
-(void)_setBadgeValue:(id)arg0 forTabBarItem:(id)arg1 ;
-(void)_setMaximumNumberOfItems:(NSUInteger)arg0 ;
-(void)_setNotifySplitViewControllerForSelectionChange:(BOOL)arg0 ;
-(void)_setScrollViewObservedBeforeHidingBar:(id)arg0 ;
-(void)_setSelectedTabBarItem:(id)arg0 ;
-(void)_setSuspendBarBackgroundUpdating:(BOOL)arg0 ;
-(void)_setUpFocusContainerGuides;
-(void)_showBarWithTransition:(int)arg0 isExplicit:(BOOL)arg1 ;
-(void)_showBarWithTransition:(int)arg0 isExplicit:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)_stopObservingScrollView:(id)arg0 ;
-(void)_tabBarItemClicked:(id)arg0 ;
-(void)_toggleAccessibilityHUDLongPressRecognizerIfNecessary;
-(void)_updateAndObserveScrollView:(id)arg0 viewController:(id)arg1 ;
-(void)_updateAndObserveScrollView:(id)arg0 viewController:(id)arg1 updateBackgroundTransitionProgressForNilScrollView:(BOOL)arg2 ;
-(void)_updateBackgroundTransitionProgressForScrollView:(id)arg0 tabBar:(id)arg1 ;
-(void)_updateBackgroundTransitionProgressForScrollView:(id)arg0 tabBar:(id)arg1 isNavigationTransitionUpdate:(BOOL)arg2 ;
-(void)_updateGestureRecognizersForTraitCollection:(id)arg0 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_updateLayoutForTraitCollection:(id)arg0 ;
-(void)_updateObservingScrollViewWithScrollView:(id)arg0 viewController:(id)arg1 getTabBarRequiresStandardBackground:(*BOOL)arg2 ;
-(void)_updateOffscreenStatus:(BOOL)arg0 withFocusAnimationCoordinator:(id)arg1 ;
-(void)_updateTabBarLayout;
-(void)_updateViewController:(id)arg0 forTabbarObservedScrollView:(id)arg1 ;
-(void)_viewControllerDidBeginDismissal:(id)arg0 ;
-(void)_viewControllerObservableScrollViewAmbiguityStatusDidChange:(id)arg0 ;
-(void)_viewDidPerformLayout;
-(void)_viewSubtreeDidGainScrollView:(id)arg0 enclosingViewController:(id)arg1 ;
-(void)_willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)animationDidStop:(id)arg0 finished:(id)arg1 context:(id)arg2 ;
-(void)beginCustomizingTabBar:(id)arg0 ;
-(void)concealTabBarSelection;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)hideBarWithTransition:(int)arg0 ;
-(void)hideBarWithTransition:(int)arg0 duration:(CGFloat)arg1 ;
-(void)loadView;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)revealTabBarSelection;
-(void)setRestorationIdentifier:(id)arg0 ;
-(void)setShowsEditButtonOnLeft:(BOOL)arg0 ;
-(void)setTransientViewController:(id)arg0 ;
-(void)setTransientViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setView:(id)arg0 ;
-(void)showBarWithTransition:(int)arg0 ;
-(void)showBarWithTransition:(int)arg0 duration:(CGFloat)arg1 ;
-(void)tabBar:(id)arg0 didEndCustomizingItems:(id)arg1 changed:(BOOL)arg2 ;
-(void)tabBar:(id)arg0 willBeginCustomizingItems:(id)arg1 ;
-(void)tabBar:(id)arg0 willEndCustomizingItems:(id)arg1 changed:(BOOL)arg2 ;
-(void)tabBarSizingDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionFromViewController:(id)arg0 toViewController:(id)arg1 ;
-(void)transitionFromViewController:(id)arg0 toViewController:(id)arg1 transition:(int)arg2 shouldSetSelected:(BOOL)arg3 ;
-(void)transitionViewDidComplete:(id)arg0 fromView:(id)arg1 toView:(id)arg2 ;
-(void)transitionViewDidStart:(id)arg0 ;
-(void)unwindForSegue:(id)arg0 towardsViewController:(id)arg1 ;
-(void)updateTabBarItemForViewController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif