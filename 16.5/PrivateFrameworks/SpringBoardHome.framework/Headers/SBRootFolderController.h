// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROOTFOLDERCONTROLLER_H
#define SBROOTFOLDERCONTROLLER_H

@class NSHashTable, NSMapTable, UIViewController<SBHMainAddSheetViewControlling>, UIView, NSString, UIViewController, NSArray, SBHomeScreenDefaults, UIViewController<SBHRootFolderCustomViewPresenting>, _UILegibilitySettings, NSSet, SBFParallaxSettings, UIViewController<SBHSearchPresentable>, UIViewController<SBHLegibility>, CHSWidgetDescriptorProvider;
@protocol SBFramewiseInteractiveTransitionAnimatorDelegate, SBViewControllerTransitionContextDelegate, SBRootFolderViewDelegate, SBSearchGestureObserver, SBHAddWidgetSheetViewControllerDelegate, UIGestureRecognizerDelegate, SBIconWidgetIntroductionDelegate, SBHWidgetSheetViewControllerPresenter, SBHStackConfigurationInteractionDelegate, SBHStackConfigurationViewControllerAppearanceDelegate, SBHWidgetDragHandling, SBRootFolderPageStateTransitioning, SBHIconRootViewProviding, SBRootFolderControllerAccessoryViewControllerDelegate, SBRootFolderControllerDelegate, SBRootFolderPageTransition, BSInvalidatable, SBHSearchPresenting;


#import "SBFolderController.h"
#import "SBViewControllerTransitionContext.h"
#import "SBFramewiseInteractiveTransitionAnimator.h"
#import "SBPercentPassthroughInteractiveTransition.h"
#import "_SBRootFolderPageTransitionHandle.h"
#import "SBRootFolder.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"
#import "SBHRecentsDocumentExtensionProvider.h"
#import "SBRootFolderView.h"
#import "SBSearchGesture.h"
#import "SBHStackConfigurationViewController.h"

@interface SBRootFolderController : SBFolderController <SBFramewiseInteractiveTransitionAnimatorDelegate, SBViewControllerTransitionContextDelegate, SBRootFolderViewDelegate, SBSearchGestureObserver, SBHAddWidgetSheetViewControllerDelegate, UIGestureRecognizerDelegate, SBIconWidgetIntroductionDelegate, SBHWidgetSheetViewControllerPresenter, SBHStackConfigurationInteractionDelegate, SBHStackConfigurationViewControllerAppearanceDelegate, SBHWidgetDragHandling, SBRootFolderPageStateTransitioning, SBHIconRootViewProviding>

 {
    SBViewControllerTransitionContext *_currentTransitionContext;
    SBFramewiseInteractiveTransitionAnimator *_currentTransitionAnimator;
    SBPercentPassthroughInteractiveTransition *_currentTransitionInteractor;
    NSHashTable *_pageStateObservers;
    NSMapTable *_widgetAddSheetObservers;
    os_activity_scope_state_s _widgetAddSheetActivityState;
}


@property (weak, nonatomic) NSObject<SBRootFolderControllerAccessoryViewControllerDelegate> *accessoryViewControllerDelegate; // ivar: _accessoryViewControllerDelegate
@property (retain, nonatomic) UIViewController<SBHMainAddSheetViewControlling> *addSheetViewController; // ivar: _addSheetViewController
@property (nonatomic) BOOL allowsAutoscrollToLeadingCustomView;
@property (readonly, nonatomic, getter=isAnySearchVisible) BOOL anySearchVisible;
@property (readonly, nonatomic, getter=isAnySearchVisibleOrTransitioning) BOOL anySearchVisibleOrTransitioning;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) NSUInteger contentVisibility;
@property (nonatomic) NSInteger currentPageIndex;
@property (retain, nonatomic) _SBRootFolderPageTransitionHandle *currentTransitionHandle; // ivar: _currentTransitionHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *deepestFolderController;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destinationPageState;
@property (nonatomic) NSUInteger dockEdge;
@property (readonly, nonatomic, getter=isDockExternal) BOOL dockExternal;
@property (readonly, nonatomic) CGFloat dockHeight;
@property (readonly, nonatomic, getter=isDockPinnedForRotation) BOOL dockPinnedForRotation;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (copy, nonatomic) NSArray *editingSuggestedWidgetItems; // ivar: _editingSuggestedWidgetItems
@property (retain, nonatomic) SBRootFolder *folder;
@property (readonly, copy, nonatomic) NSArray *folderControllers;
@property (weak, nonatomic) NSObject<SBRootFolderControllerDelegate> *folderDelegate;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger hiddenListCountWhenPageManagementPresented; // ivar: _hiddenListCountWhenPageManagementPresented
@property (readonly, nonatomic) SBHomeScreenDefaults *homeScreenDefaults; // ivar: _homeScreenDefaults
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (retain, nonatomic) NSObject<SBRootFolderPageTransition> *implicitScrollTransition; // ivar: _implicitScrollTransition
@property (readonly, nonatomic, getter=isOnLeadingCustomPage) BOOL leadingCustomPage;
@property (readonly, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *leadingCustomViewController; // ivar: _leadingCustomViewController
@property (nonatomic, getter=isLeadingCustomViewPageHidden) BOOL leadingCustomViewPageHidden;
@property (readonly, nonatomic) NSInteger leadingCustomViewPageIndex;
@property (readonly, nonatomic, getter=isLeadingCustomViewSearchTransitioning) BOOL leadingCustomViewSearchTransitioning;
@property (readonly, nonatomic, getter=isLeadingCustomViewSearchVisible) BOOL leadingCustomViewSearchVisible;
@property (readonly, nonatomic, getter=isLeadingCustomViewSearchVisibleOrTransitioning) BOOL leadingCustomViewSearchVisibleOrTransitioning;
@property (readonly, nonatomic, getter=isLeadingCustomViewTransitioning) BOOL leadingCustomViewTransitioning;
@property (readonly, nonatomic, getter=isLeadingCustomViewVisible) BOOL leadingCustomViewVisible;
@property (readonly, nonatomic, getter=isLeadingCustomViewVisibleOrTransitionDestination) BOOL leadingCustomViewVisibleOrTransitionDestination;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) BOOL managesStatusBarWidth; // ivar: _managesStatusBarWidth
@property (readonly, copy, nonatomic) NSSet *nonDockPresentedIconLocations;
@property (nonatomic, getter=isOccludedByOverlay) BOOL occludedByOverlay;
@property (readonly, nonatomic, getter=isPageManagementUIVisible) BOOL pageManagementUIVisible;
@property (nonatomic) NSInteger pageState; // ivar: _pageState
@property (readonly, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (nonatomic) NSUInteger presentationSource; // ivar: _presentationSource
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly, nonatomic, getter=isPullDownSearchTransitioning) BOOL pullDownSearchTransitioning;
@property (readonly, nonatomic) UIViewController *pullDownSearchViewController; // ivar: _pullDownSearchViewController
@property (readonly, nonatomic, getter=isPullDownSearchVisible) BOOL pullDownSearchVisible;
@property (readonly, nonatomic, getter=isPullDownSearchVisibleOrTransitioning) BOOL pullDownSearchVisibleOrTransitioning;
@property (readonly, nonatomic, getter=isPullDownSearchVisibleOrTransitioningToVisible) BOOL pullDownSearchVisibleOrTransitioningToVisible;
@property (retain, nonatomic) SBHRecentsDocumentExtensionProvider *recentsDocumentExtensionProvider; // ivar: _recentsDocumentExtensionProvider
@property (readonly, nonatomic) SBRootFolderView *rootFolderView;
@property (readonly, nonatomic, getter=isScrollTracking) BOOL scrollTracking;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly, nonatomic) UIView *searchBackdropView;
@property (retain, nonatomic) SBSearchGesture *searchGesture; // ivar: _searchGesture
@property (retain, nonatomic) NSObject<BSInvalidatable> *searchGestureIconViewTouchCancellationAssertion; // ivar: _searchGestureIconViewTouchCancellationAssertion
@property (retain, nonatomic) NSObject<SBRootFolderPageTransition> *searchGestureTransition; // ivar: _searchGestureTransition
@property (readonly, nonatomic) UIViewController<SBHSearchPresentable> *searchPresentableViewController; // ivar: _searchPresentableViewController
@property (readonly, nonatomic) NSObject<SBHSearchPresenting> *searchPresenter; // ivar: _searchPresenter
@property (readonly, nonatomic) UIView *searchableLeadingCustomWrapperView;
@property (readonly, nonatomic) NSUInteger showsAddWidgetButtonWhileEditingAllowedOrientations; // ivar: _showsAddWidgetButtonWhileEditingAllowedOrientations
@property (readonly, nonatomic) BOOL showsDoneButtonWhileEditing; // ivar: _showsDoneButtonWhileEditing
@property (readonly, nonatomic) CGFloat spotlightFirstIconRowOffset;
@property (copy, nonatomic) NSArray *stackConfigurationSuggestedWidgetItems; // ivar: _stackConfigurationSuggestedWidgetItems
@property (weak, nonatomic) SBHStackConfigurationViewController *stackConfigurationViewController; // ivar: _stackConfigurationViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesExtraEditingButtons; // ivar: _suppressesExtraEditingButtons
@property (nonatomic) CGFloat titledButtonsAlpha;
@property (readonly, nonatomic) UIViewController<SBHLegibility> *todayViewController;
@property (nonatomic, getter=isTodayViewPageHidden) BOOL todayViewPageHidden; // ivar: _todayViewPageHidden
@property (readonly, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController; // ivar: _trailingCustomViewController
@property (readonly, nonatomic) NSInteger trailingCustomViewPageIndex;
@property (readonly, nonatomic, getter=isTransitioningPageState) BOOL transitioningPageState;
@property (readonly, nonatomic) CHSWidgetDescriptorProvider *widgetDescriptorProvider; // ivar: _widgetDescriptorProvider
@property (readonly, weak, nonatomic) NSObject<SBHWidgetDragHandling> *widgetDragHandler;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(Class)configurationClass;
+(id)dockIconLocation;
+(id)iconLocation;
+(struct SBRootFolderPageStateTransitionSnapshot )pageStateTransitionSnapshotForScrollOffset:(CGFloat)arg0 pageWidth:(CGFloat)arg1 pageSpacing:(CGFloat)arg2 pages:(*NSInteger)arg3 pageCount:(NSUInteger)arg4 userInterfaceLayoutDirection:(NSInteger)arg5 currentPageState:(NSInteger)arg6 ;
-(BOOL)_dockLayoutReversedForInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_internalDismissWidgetAddSheet:(BOOL)arg0 clearAddSheetViewController:(BOOL)arg1 notifyObservers:(BOOL)arg2 ;
-(BOOL)_isDescriptorAllowed:(id)arg0 ;
-(BOOL)_isDescriptorSupported:(id)arg0 ;
-(BOOL)_isDescriptorVisibleByDefault:(id)arg0 ;
-(BOOL)_isDockSwitchedForOrientation:(NSInteger)arg0 ;
-(BOOL)_isVisibilityWidgetDefined:(NSInteger)arg0 ;
-(BOOL)_leadingCustomViewPageIsVisibleForOrientation:(NSInteger)arg0 ;
-(BOOL)_listIndexIsVisible:(NSUInteger)arg0 ;
-(BOOL)_shouldAddSpecialAvocadoOfType:(NSUInteger)arg0 ;
-(BOOL)_shouldSlideDockOutDuringRotationFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(BOOL)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(BOOL)canAcceptFolderIconDrags;
-(BOOL)canShowWidgetIntroduction;
-(BOOL)canTransitionPageStateToState:(NSInteger)arg0 ;
-(BOOL)closesAfterDragExits;
-(BOOL)disablesScrollingWhileIconDragIsDropping;
-(BOOL)dismissWidgetAddSheetIfPresentedAndClearAnimated:(BOOL)arg0 ;
-(BOOL)iconListViewContainsWidget:(NSUInteger)arg0 ;
-(BOOL)iconListViewsContainWidget;
-(BOOL)isAnySearchTransitioning;
-(BOOL)isDisplayingEditingButtons;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isDisplayingWidgetIntroductionOnPage:(NSInteger)arg0 ;
-(BOOL)isDockVisible;
-(BOOL)isLeadingCustomViewOrLeadingCustomViewSearchVisible;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)isTransitioningBetweenHorizontalPageStates;
-(BOOL)isTransitioningBetweenIconAndLeadingCustomView;
-(BOOL)isTransitioningBetweenIconAndTrailingCustomView;
-(BOOL)isTransitioningBetweenIconPageAndLeadingCustomPage;
-(BOOL)isTransitioningBetweenIconPageAndTrailingCustomPage;
-(BOOL)isTransitioningBetweenPageStateVerticalGroups;
-(BOOL)shouldOpenFolderIcon:(id)arg0 ;
-(BOOL)suspendsWallpaperAnimationWhileOpen;
-(CGFloat)_additionalMinimumOffsetForSheetPresentation;
-(CGFloat)_anySearchVisibilityProgress;
-(CGFloat)_leadingCustomViewVisibilityProgress;
-(CGFloat)_trailingCustomViewVisibilityProgress;
-(CGFloat)distanceToTopOfSpotlightIconsForRootFolderView:(id)arg0 ;
-(CGFloat)externalDockHeightForRootFolderView:(id)arg0 ;
-(CGFloat)maxExternalDockHeightForRootFolderView:(id)arg0 ;
-(CGFloat)pageTransitionProgress;
-(CGFloat)preferredExternalDockVerticalMarginForRootFolderView:(id)arg0 ;
-(CGFloat)visibilityProgressTowardPageStateMatchingTest:(id)arg0 ;
-(NSUInteger)_currentHomeScreenEditingGridSize;
-(NSUInteger)_defaultEditingSuggestedWidgetItemsFamilyMask;
-(NSUInteger)_depth;
-(NSUInteger)_dockEdgeForInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)_stackConfigurationGridSize;
-(NSUInteger)presenterType;
-(id)_makeContentViewWithConfiguration:(id)arg0 ;
-(id)_vendorNameForBundleIdentifier:(id)arg0 ;
-(id)_viewControllersToNotifyForViewObscuration;
-(id)_widgetIconForDescriptors:(id)arg0 sizeClass:(NSInteger)arg1 ;
-(id)addWidgetAddSheetObserver:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)applicationWidgetCollectionsForEditingViewController:(id)arg0 withAllowedSizeClasses:(*NSUInteger)arg1 allowingNonStackableItems:(BOOL)arg2 ;
-(id)backgroundViewForDockForRootFolderView:(id)arg0 ;
-(id)backgroundViewForEditingDoneButtonForRootFolderView:(id)arg0 ;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg0 ;
-(id)beginPageStateTransitionToState:(NSInteger)arg0 reason:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(id)defaultTransitionForTransitioningFromPageState:(NSInteger)arg0 toPageState:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)dockIconListView;
-(id)dockListView;
-(id)firstIconViewForIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(id)iconLocationForListsWithNonDefaultSizedIconsForRootFolderView:(id)arg0 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)interactionControllerForDismissal:(id)arg0 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)stackConfigurationInteraction:(id)arg0 dragPreviewForIconView:(id)arg1 ;
-(id)stackConfigurationInteraction:(id)arg0 draggedIconForIdentifier:(id)arg1 ;
-(id)stackConfigurationInteraction:(id)arg0 promoteSuggestedWidget:(id)arg1 withinStack:(id)arg2 ;
-(id)updateStateTransitionsDuringScrollingScrollView:(id)arg0 pageBounceComparator:(*unk)arg1 ;
-(id)viewControllerForPageState:(NSInteger)arg0 ;
-(id)viewControllerForTransitioningFromPageState:(NSInteger)arg0 toPageState:(NSInteger)arg1 ;
-(id)viewControllersForPageIndex:(NSInteger)arg0 ;
-(id)widgetIconForDescriptor:(id)arg0 sizeClass:(NSInteger)arg1 ;
-(id)widgetIconForGalleryItem:(id)arg0 sizeClass:(NSInteger)arg1 ;
-(id)windowForIconDragPreviewsForStackConfigurationInteraction:(id)arg0 forWindowScene:(id)arg1 ;
-(struct SBRootFolderPageStateTransitionSnapshot )pageStateTransitionSnapshotForScrollOffset:(CGFloat)arg0 ;
-(struct UIEdgeInsets )statusBarInsetsForOrientation:(NSInteger)arg0 ;
-(void)_addBatteriesSpecialAvocadosToApplicationWidgetCollections:(id)arg0 ;
-(void)_addFilesSpecialAvocadosToApplicationWidgetCollections:(id)arg0 ;
-(void)_addShortcutsSpecialAvocadoToApplicationWidgetCollections:(id)arg0 ;
-(void)_addSiriSuggestionsSpecialAvocadosToApplicationWidgetCollections:(id)arg0 ;
-(void)_cancelTouchesForSearchGestureOnIconView:(id)arg0 ;
-(void)_checkForImproperScrollOffsetForPageState;
-(void)_configureAppStatusBarInsetsAnimated:(BOOL)arg0 ;
-(void)_configureAppStatusBarInsetsForOrientation:(NSInteger)arg0 ;
-(void)_configureDockViewForOrientationDuringAnimation:(NSInteger)arg0 dockAnimationWindow:(id)arg1 dockBorrowedAssertion:(id)arg2 ;
-(void)_configureDockViewForOrientationWithoutAnimation:(NSInteger)arg0 ;
-(void)_configureTodayViewPageForOrientation:(NSInteger)arg0 ;
-(void)_configureViewForOrientationWithoutAnimation:(NSInteger)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_dismissPageManagementIfPresented:(id)arg0 ;
-(void)_doPageManagementEducation;
-(void)_fetchGalleryContentForGridSize:(NSUInteger)arg0 withFamilyMask:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_fetchGalleryContentForHomeScreenEditing;
-(void)_fetchGalleryContentForStackConfiguration;
-(void)_handleWidgetSheetViewControllerDidAppear:(id)arg0 ;
-(void)_handleWidgetSheetViewControllerDidDisappear:(id)arg0 ;
-(void)_handleWidgetSheetViewControllerWillAppear:(id)arg0 ;
-(void)_handleWidgetSheetViewControllerWillDisappear:(id)arg0 ;
-(void)_insertSmartStackSpecialAvocadosAtTheTopOfApplicationWidgetCollections:(id)arg0 ;
-(void)_invalidateSearchGestureIconViewTouchCancellationAssertion;
-(void)_presentPageManagement:(id)arg0 ;
-(void)_reduceTransparencyChanged;
-(void)_refreshGalleryContentForHomeScreenEditingIfNecessary;
-(void)_setupDebugTapGestureRecognizerForDockIconListView:(id)arg0 ;
-(void)_updateAddWidgetSheetIconCache;
-(void)_updateFolderRequiredTrailingEmptyListCount;
-(void)_updateStatusBarHiddenForWidgetSheetViewController:(id)arg0 visible:(BOOL)arg1 ;
-(void)acceptWidgetIntroduction;
-(void)addPageStateObserver:(id)arg0 ;
-(void)addWidgetSheetViewController:(id)arg0 didSelectWidgetIconView:(id)arg1 ;
-(void)addWidgetSheetViewControllerDidAppear:(id)arg0 ;
-(void)addWidgetSheetViewControllerDidCancel:(id)arg0 ;
-(void)addWidgetSheetViewControllerDidDisappear:(id)arg0 ;
-(void)addWidgetSheetViewControllerWillAppear:(id)arg0 ;
-(void)addWidgetSheetViewControllerWillDisappear:(id)arg0 ;
-(void)bringWidgetIntroductionPopoverToFront;
-(void)configureAppStatusBarInsets;
-(void)dealloc;
-(void)didBeginDraggingWidgetIcon:(id)arg0 ;
-(void)didContinueTransitionToState:(NSInteger)arg0 progress:(CGFloat)arg1 ;
-(void)didEndDraggingWidgetIcon:(id)arg0 ;
-(void)didEndTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 successfully:(BOOL)arg2 ;
-(void)dismissSpotlightAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dismissWidgetEditingViewControllerIfPresentedAnimated:(BOOL)arg0 ;
-(void)enterPageManagementUIWithCompletionHandler:(id)arg0 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateDisplayedIconViewsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePageStateObserversUsingBlock:(id)arg0 ;
-(void)enumerateWidgetAddSheetObserversUsingBlock:(id)arg0 ;
-(void)exitPageManagementUIWithCompletionHandler:(id)arg0 ;
-(void)folderController:(id)arg0 didBeginEditingTitle:(id)arg1 ;
-(void)folderController:(id)arg0 didEndEditingTitle:(id)arg1 ;
-(void)folderView:(id)arg0 currentPageIndexDidChange:(NSInteger)arg1 ;
-(void)folderView:(id)arg0 currentPageIndexWillChange:(NSInteger)arg1 ;
-(void)folderView:(id)arg0 didBeginEditingTitle:(id)arg1 ;
-(void)folderView:(id)arg0 didEndEditingTitle:(id)arg1 ;
-(void)folderView:(id)arg0 willAnimateScrollToPageIndex:(NSInteger)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg0 ;
-(void)folderViewDidScroll:(id)arg0 ;
-(void)folderViewWillUpdatePageDuringScrolling:(id)arg0 ;
-(void)orientationDidChange:(NSInteger)arg0 ;
-(void)pageTransitionHandle:(id)arg0 endPageStateTransitionSuccessfully:(BOOL)arg1 ;
-(void)pageTransitionHandle:(id)arg0 updateCurrentPageStateTransitionToProgress:(CGFloat)arg1 ;
-(void)performDefaultPageStateTransitionToState:(NSInteger)arg0 reason:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)performPageStateTransitionToState:(NSInteger)arg0 reason:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)presentSpotlightAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)presentWidgetEditingViewControllerFromViewController:(id)arg0 ;
-(void)presentWidgetEditingViewControllerFromViewController:(id)arg0 withAllowedSizeClasses:(NSUInteger)arg1 allowingNonStackableItems:(BOOL)arg2 ;
-(void)rejectWidgetIntroduction;
-(void)removePageStateObserver:(id)arg0 ;
-(void)removeWidgetAddSheetObserverForHandle:(id)arg0 ;
-(void)rootFolderView:(id)arg0 didDismissPageManagementWithLayoutManager:(id)arg1 context:(id)arg2 ;
-(void)rootFolderView:(id)arg0 didEndOverscrollOnFirstPageWithVelocity:(CGFloat)arg1 translation:(CGFloat)arg2 ;
-(void)rootFolderView:(id)arg0 didEndOverscrollOnLastPageWithVelocity:(CGFloat)arg1 translation:(CGFloat)arg2 ;
-(void)rootFolderView:(id)arg0 didOverscrollOnFirstPageByAmount:(CGFloat)arg1 ;
-(void)rootFolderView:(id)arg0 didOverscrollOnLastPageByAmount:(CGFloat)arg1 ;
-(void)rootFolderView:(id)arg0 wantsToAdjustLeadingCustomContentForEdgeBounceForScrollOffset:(struct CGPoint )arg1 ;
-(void)rootFolderView:(id)arg0 willDismissPageManagementUsingAnimator:(id)arg1 context:(id)arg2 ;
-(void)rootFolderView:(id)arg0 willPresentPageManagementWithLayoutManager:(id)arg1 animator:(id)arg2 context:(id)arg3 ;
-(void)rootFolderViewWantsSearchPresented:(id)arg0 ;
-(void)rootFolderViewWantsToEndEditing:(id)arg0 ;
-(void)rootFolderViewWantsWidgetEditingViewControllerPresented:(id)arg0 ;
-(void)searchGesture:(id)arg0 changedPercentComplete:(CGFloat)arg1 ;
-(void)searchGesture:(id)arg0 completedShowing:(BOOL)arg1 ;
-(void)searchGesture:(id)arg0 resetAnimated:(BOOL)arg1 ;
-(void)searchGesture:(id)arg0 startedShowing:(BOOL)arg1 ;
-(void)setIdleText:(id)arg0 ;
-(void)setParallaxDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setSuppressesEditingStateForListView:(BOOL)arg0 ;
-(void)stackConfigurationInteraction:(id)arg0 isConsumingDropSession:(id)arg1 ;
-(void)stackConfigurationInteraction:(id)arg0 noteDidRemoveSuggestedWidgetIcon:(id)arg1 ;
-(void)stackConfigurationInteraction:(id)arg0 requestsPresentAddWidgetSheetFromPresenter:(id)arg1 ;
-(void)stackConfigurationInteractionWillAnimateWidgetInsertion:(id)arg0 ;
-(void)stackConfigurationViewControllerDidAppear:(id)arg0 ;
-(void)stackConfigurationViewControllerDidDisappear:(id)arg0 ;
-(void)stackConfigurationViewControllerWillAppear:(id)arg0 ;
-(void)stackConfigurationViewControllerWillDisappear:(id)arg0 ;
-(void)transitionContext:(id)arg0 updateTransitionProgress:(CGFloat)arg1 ;
-(void)transitionDidFinish:(id)arg0 ;
-(void)transitionWillBegin:(id)arg0 ;
-(void)transitionWillFinish:(id)arg0 ;
-(void)transitionWillReverse:(id)arg0 ;
-(void)updateExtraButtonVisibilityAnimated:(BOOL)arg0 ;
-(void)updatePronouncedContainerViewVisibilityIfPossible:(BOOL)arg0 vertical:(BOOL)arg1 ;
-(void)updateViewsAfterOrientationChange;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 forOperation:(NSInteger)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBeginTransitionToState:(NSInteger)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)willEndTransitionToState:(NSInteger)arg0 successfully:(BOOL)arg1 ;


@end


#endif