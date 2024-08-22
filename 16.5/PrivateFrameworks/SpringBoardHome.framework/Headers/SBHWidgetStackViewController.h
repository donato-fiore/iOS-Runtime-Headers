// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHWIDGETSTACKVIEWCONTROLLER_H
#define SBHWIDGETSTACKVIEWCONTROLLER_H

@class UIViewController, NSHashTable, SBFFluidBehaviorSettings, NSArray, UIColor, UIView, NSString, _UILegibilitySettings, UIPageControl, NSTimer, BSUIScrollView, NSMutableDictionary;
@protocol BSUIScrollViewDelegate, SBLeafIconObserver, PTSettingsKeyObserver, SBIconViewCustomImageViewControllerObserving, SBHWidgetContainerViewControllerDelegate, SBIconViewCustomImageViewControlling, BSInvalidatable, SBLeafIconDataSource, SBHWidgetStackViewControllerDataSource, SBHWidgetStackViewControllerDelegate;


#import "SBWidgetIcon.h"
#import "SBHWidgetSettings.h"

@interface SBHWidgetStackViewController : UIViewController <BSUIScrollViewDelegate, SBLeafIconObserver, PTSettingsKeyObserver, SBIconViewCustomImageViewControllerObserving, SBHWidgetContainerViewControllerDelegate, SBIconViewCustomImageViewControlling>

 {
    NSHashTable *_observers;
    NSHashTable *_containerViewControllersRequiringLayoutUponActivation;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
}


@property (retain, nonatomic) NSObject<SBLeafIconDataSource> *activeWidget; // ivar: _activeWidget
@property (nonatomic) BOOL alwaysShowsAsStack; // ivar: _alwaysShowsAsStack
@property (retain, nonatomic) SBFFluidBehaviorSettings *animationSettings; // ivar: _animationSettings
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (nonatomic) SBIconApproximateLayoutPosition approximateLayoutPosition; // ivar: _approximateLayoutPosition
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled; // ivar: _automaticallyUpdatesVisiblySettled
@property (nonatomic) NSUInteger backgroundAnimationCount; // ivar: _backgroundAnimationCount
@property (readonly, copy, nonatomic) UIColor *backgroundTintingColor;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) id *backgroundViewConfigurator; // ivar: _backgroundViewConfigurator
@property (copy, nonatomic) id *backgroundViewProvider; // ivar: _backgroundViewProvider
@property (nonatomic) CGFloat brightness; // ivar: _brightness
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) CGFloat continuousCornerRadius;
@property (weak, nonatomic) NSObject<SBHWidgetStackViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHWidgetStackViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic) BOOL flashPageControlOnNextAlphaChange; // ivar: _flashPageControlOnNextAlphaChange
@property (nonatomic) BOOL flashPageControlOnNextAppearance; // ivar: _flashPageControlOnNextAppearance
@property (nonatomic) BOOL forcesEdgeAntialiasing; // ivar: _forcesEdgeAntialiasing
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightsAtAnySize; // ivar: _highlightsAtAnySize
@property (retain, nonatomic) SBWidgetIcon *icon; // ivar: _icon
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (retain, nonatomic) NSHashTable *imageUpdateDisableAssertions; // ivar: _imageUpdateDisableAssertions
@property (retain, nonatomic) NSObject<BSInvalidatable> *imageUpdatesDisabledForContextMenuAssertion; // ivar: _imageUpdatesDisabledForContextMenuAssertion
@property (nonatomic) NSUInteger imageViewAlignment; // ivar: _imageViewAlignment
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) UIEdgeInsets minimumPreferredEdgeInsetsForContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping; // ivar: _overlapping
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (retain, nonatomic) NSTimer *pageControlHidingTimer; // ivar: _pageControlHidingTimer
@property (nonatomic) NSUInteger pauseReasons; // ivar: _pauseReasons
@property (nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (retain, nonatomic) BSUIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSObject<BSInvalidatable> *scrollingTouchCancellationAssertion; // ivar: _scrollingTouchCancellationAssertion
@property (nonatomic) BOOL showStackBorderWhenShowingPageControl; // ivar: _showStackBorderWhenShowingPageControl
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu; // ivar: _showingContextMenu
@property (nonatomic) BOOL showsSnapshotWhenDeactivated; // ivar: _showsSnapshotWhenDeactivated
@property (nonatomic) BOOL showsSquareCorners; // ivar: _showsSquareCorners
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) CGPoint snapshotViewCenter;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (nonatomic) NSUInteger userVisibilityStatus; // ivar: _userVisibilityStatus
@property (readonly, nonatomic) CGRect visibleBounds;
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *visiblyActiveDataSource;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (nonatomic) BOOL wantsEditingDisplayStyle;
@property (readonly, nonatomic) BOOL wantsLabelHidden;
@property (retain, nonatomic) NSMutableDictionary *widgetContainerViewControllers; // ivar: _widgetContainerViewControllers
@property (readonly, nonatomic, getter=isWidgetHitTestingDisabled) BOOL widgetHitTestingDisabled;
@property (readonly, nonatomic) SBWidgetIcon *widgetIcon;
@property (nonatomic) NSUInteger widgetScaleAnimationCount; // ivar: _widgetScaleAnimationCount
@property (retain, nonatomic) SBHWidgetSettings *widgetSettings; // ivar: _widgetSettings
@property (readonly, nonatomic) NSArray *widgetViewControllers;


-(BOOL)_alwaysShowStackBorder;
-(BOOL)_alwaysShowStackPageControl;
-(BOOL)_canShowWhileLocked;
-(BOOL)_containerRequiresClippingToBoundsForWidget:(id)arg0 ;
-(BOOL)_createViewControllerForWidgetIfNecessary:(id)arg0 usingSize:(struct CGSize )arg1 ;
-(BOOL)_insetWidgetsForTrackingAppearance;
-(BOOL)_isContentViewExtendingOutsideBounds;
-(BOOL)_isScrollViewTracking;
-(BOOL)_scrollToActiveWidgetAnimated:(BOOL)arg0 ;
-(BOOL)_shouldDrawSystemBackgroundMaterialForWidget:(id)arg0 ;
-(BOOL)_showAdjacentWidgets;
-(BOOL)sbh_isWidgetStackViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSInteger)_newActiveWidgetIndexForContentOffset:(struct CGPoint )arg0 ;
-(id)_backgroundColorForWidgetWithDistanceFromRestingContentOffset:(CGFloat)arg0 ;
-(id)_createBackgroundView;
-(id)_disableImageUpdatesForReason:(id)arg0 animateChangesUponInvalidation:(BOOL)arg1 ;
-(id)_widgetContextMenuController;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)disableImageUpdatesForReason:(id)arg0 ;
-(id)initWithIcon:(id)arg0 ;
-(id)sbh_underlyingAvocadoHostViewControllers;
-(id)sourceBackgroundView:(id)arg0 ;
-(id)sourceView;
-(struct CGPoint )_restingContentOffset;
-(struct CGSize )_pageSize;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureBackgroundViewIfNecessary:(id)arg0 ;
-(void)_createBackgroundViewIfNecessary:(BOOL)arg0 ;
-(void)_decrementBackgroundAnimationCount;
-(void)_decrementWidgetScaleAnimationCount;
-(void)_flashPageControlAnimated:(BOOL)arg0 ;
-(void)_handleInstalledAppsChanged:(id)arg0 ;
-(void)_incrementBackgroundAnimationCount;
-(void)_incrementWidgetScaleAnimationCount;
-(void)_layoutWithAnimationUpdateMode:(NSInteger)arg0 ;
-(void)_removeWidget:(id)arg0 animated:(BOOL)arg1 ;
-(void)_requireLayoutUponActivationForWidgetContainerViewController:(id)arg0 ;
-(void)_restartPageControlTimer;
-(void)_setupStateCapture;
-(void)_teardownBackgroundView:(id)arg0 contactDelegate:(BOOL)arg1 ;
-(void)_teardownStateCapture;
-(void)_updateAccessibilityValue;
-(void)_updateActiveWidgetIndexAndScrollViewContentOffset;
-(void)_updateApproximateLayoutPositionForWidgetViewControllers;
-(void)_updateBackgroundViewWithAnimationUpdateMode:(NSInteger)arg0 ;
-(void)_updateBackgroundViewWithAnimationUpdateMode:(NSInteger)arg0 allowingOutsetting:(BOOL)arg1 ;
-(void)_updatePageControlWithAnimationUpdateMode:(NSInteger)arg0 ;
-(void)_updatePauseReasonForWidgetViewControllers;
-(void)_updatePresentationModeForWidgetViewControllers;
-(void)_updateScrollViewDelaysContentTouches;
-(void)_updateShowsSnapshotWhenDeactivatedForWidgetViewControllers;
-(void)_updateVisiblySettledForWidgetViewControllers;
-(void)_updateWidgetViewClippingAndBackgroundView;
-(void)_updateWidgetViewEdgeAntialiasing;
-(void)_updateWidgetViewHitTesting;
-(void)_updateWidgetViewsWithAnimationUpdateMode:(NSInteger)arg0 ;
-(void)addCustomImageViewControllerObserver:(id)arg0 ;
-(void)customImageViewControllerWantsLabelHiddenDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didSelectApplicationShortcutItem:(id)arg0 ;
-(void)evaluateBackground;
-(void)leafIcon:(id)arg0 didAddIconDataSource:(id)arg1 ;
-(void)leafIcon:(id)arg0 didChangeActiveDataSource:(id)arg1 ;
-(void)leafIcon:(id)arg0 didRemoveIconDataSource:(id)arg1 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeCustomImageViewControllerObserver:(id)arg0 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateImageAnimated:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)widgetContainerViewControllerContentViewControllerDidActivate:(id)arg0 ;
-(void)widgetContainerViewControllerContentViewControllerWillDeactivate:(id)arg0 ;
-(void)willShowContextMenuAtLocation:(struct CGPoint )arg0 ;


@end


#endif