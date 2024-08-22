// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYVIEWCONTROLLER_H
#define SBHLIBRARYVIEWCONTROLLER_H

@class NSArray, NSMapTable, NSTimer, NSHashTable, UIViewController, NSMutableArray, NSString, _UILegibilitySettings, UIView, NSSet, BSEventQueue;
@protocol UISearchBarDelegate, SBHLibrarySearchControllerDelegate, SBHLibraryCategoryMapProviderObserver, SBHIconLibraryTableViewControllerObserver, SBIconViewProviding, SBIconViewDelegate, SBNestingViewControllerDelegate, SBHLibraryPodFolderControllerDelegate, SBFolderControllerDelegate, SBHLibraryProvider, SBFOverlayObserving, SBHVisibleContentPresenter, BSInvalidatable, SBHLibraryViewControllerDelegate, SBHomeScreenIconTransitionAnimatorDelegate, SBIconListLayoutProvider, SBHLibraryViewControllerPresenter;


#import "SBNestingViewController.h"
#import "SBFolderIconImageCache.h"
#import "SBHLibraryCategoryMap.h"
#import "_SBHLibraryCollectionOfModelThings.h"
#import "SBHLibraryCategoriesRootFolder.h"
#import "SBRootFolder.h"
#import "SBHLibraryCategoryMapProvider.h"
#import "SBHLibrarySearchController.h"
#import "SBHomeScreenIconTransitionAnimator.h"
#import "SBFolderController.h"
#import "SBHIconImageCache.h"
#import "SBHIconModel.h"
#import "SBHIconLibraryTableViewController.h"
#import "SBHLibraryPodFolderController.h"

@interface SBHLibraryViewController : SBNestingViewController <UISearchBarDelegate, SBHLibrarySearchControllerDelegate, SBHLibraryCategoryMapProviderObserver, SBHIconLibraryTableViewControllerObserver, SBIconViewProviding, SBIconViewDelegate, SBNestingViewControllerDelegate, SBHLibraryPodFolderControllerDelegate, SBFolderControllerDelegate, SBHLibraryProvider, SBFOverlayObserving, SBHVisibleContentPresenter>

 {
    NSArray *_containerViewControllerConstraints;
    NSMapTable *_iconViewControllerForCategoryIdentifier;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHLibraryCategoryMap *_pendingLibraryCategoryMap;
    _SBHLibraryCollectionOfModelThings *_model;
    SBHLibraryCategoriesRootFolder *_categoriesFolder;
    NSTimer *_searchControllerAppLaunchResetTimer;
    NSTimer *_libraryViewControllerDismissalTimer;
    NSHashTable *_observers;
    NSMapTable *_presentedFolderControllers;
    NSMapTable *_dismissingFolderControllers;
    id<BSInvalidatable> *_libraryPrewarmAssertion;
}


@property (nonatomic) BOOL allowsBadging; // ivar: _allowsBadging
@property (retain, nonatomic) UIViewController *barSwipeViewController; // ivar: _barSwipeViewController
@property (weak, nonatomic) NSObject<SBHLibraryViewControllerDelegate> *behaviorDelegate; // ivar: _behaviorDelegate
@property (readonly, nonatomic) SBRootFolder *categoriesRootFolder;
@property (readonly, nonatomic) SBHLibraryCategoryMapProvider *categoryMapProvider; // ivar: _categoryMapProvider
@property (readonly, nonatomic) SBHLibrarySearchController *containerViewController; // ivar: _containerViewController
@property (nonatomic) NSUInteger contentVisibility; // ivar: _contentVisibility
@property (retain, nonatomic) NSMutableArray *currentCollapseCompletions; // ivar: _currentCollapseCompletions
@property (retain, nonatomic) NSMutableArray *currentExpandCompletions; // ivar: _currentExpandCompletions
@property (retain, nonatomic) SBHomeScreenIconTransitionAnimator *currentTransitionAnimator; // ivar: _currentTransitionAnimator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _UILegibilitySettings *effectiveLegibilitySettings;
@property (weak, nonatomic) UIView *externalBackgroundView; // ivar: _externalBackgroundView
@property (readonly, nonatomic) SBFolderController *folderController;
@property (readonly, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBHomeScreenIconTransitionAnimatorDelegate> *homeScreenIconTransitionAnimatorDelegate; // ivar: _homeScreenIconTransitionAnimatorDelegate
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (retain, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (readonly, nonatomic) SBHIconLibraryTableViewController *iconTableViewController; // ivar: _iconTableViewController
@property (weak, nonatomic) NSObject<SBIconViewDelegate> *iconViewDelegate; // ivar: _iconViewDelegate
@property (weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap; // ivar: _libraryCategoryMap
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (retain, nonatomic) _UILegibilitySettings *overrideLegibilitySettings; // ivar: _overrideLegibilitySettings
@property (readonly, nonatomic) SBHLibraryPodFolderController *podFolderViewController; // ivar: _podFolderViewController
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (weak, nonatomic) NSObject<SBHLibraryViewControllerPresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic, getter=isPresentingFolder) BOOL presentingFolder;
@property (readonly, nonatomic, getter=isPresentingSearch) BOOL presentingSearch;
@property (retain, nonatomic) UIView *searchDimmingView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesEditingStateForListViews; // ivar: _suppressesEditingStateForListViews
@property (readonly, nonatomic) BSEventQueue *transitionEventQueue; // ivar: _transitionEventQueue


+(id)_updateCategoryMap:(id)arg0 withCategoryDataFrom:(id)arg1 ;
-(BOOL)_canPerformDropForAnyItemInSession:(id)arg0 ;
-(BOOL)_canPerformDropForDraggedIcon:(id)arg0 ;
-(BOOL)folderController:(id)arg0 canChangeCurrentPageIndexToIndex:(NSInteger)arg1 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(BOOL)folderControllerShouldClose:(id)arg0 withPinchGesture:(id)arg1 ;
-(BOOL)iconShouldAllowCloseBoxTap:(id)arg0 ;
-(BOOL)iconShouldAllowTap:(id)arg0 ;
-(BOOL)iconView:(id)arg0 canAddDragItemsToSession:(id)arg1 ;
-(BOOL)iconView:(id)arg0 editingModeGestureRecognizerDidFire:(id)arg1 ;
-(BOOL)iconViewCanBecomeFocused:(id)arg0 ;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)iconViewDisplaysAccessories:(id)arg0 ;
-(BOOL)iconViewDisplaysCloseBox:(id)arg0 ;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg0 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)presentPodWithCategory:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)presentPodWithCategoryIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(Class)controllerClassForFolder:(id)arg0 ;
-(NSInteger)closeBoxTypeForIconView:(id)arg0 ;
-(NSInteger)iconViewComponentBackgroundViewTypeForIconView:(id)arg0 ;
-(NSUInteger)focusEffectTypeForIconView:(id)arg0 ;
-(id)_additionalItemsIndicatorIconViewForFolderController:(id)arg0 ;
-(id)_createIconViewControllerForCategoryIdentifier:(id)arg0 ;
-(id)_customImageViewControllerForCategoryPodIconView:(id)arg0 usingInternalCache:(BOOL)arg1 ;
-(id)_destinationFolderIconViewForDragItem:(id)arg0 folderRelativeIconIndexPath:(*id)arg1 ;
-(id)_draggedItemIdentifiersInSession:(id)arg0 ;
-(id)_iconIdentifierForDragItem:(id)arg0 ;
-(id)_iconLocationForCategoryIdentifier:(id)arg0 ;
-(id)_iconViewControllerForCategoryIdentifier:(id)arg0 ;
-(id)_wrappedCompletionBlockForNestedTransitionWithCompletion:(SEL)arg0 ;
-(id)acquireLibrarySearchPrewarmAssertionForReason:(id)arg0 ;
-(id)contentScrollView;
-(id)customImageViewControllerForIconView:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)draggingDelegateForIconView:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(id)firstNonSuggestionsOrRecentsIconViewForIcon:(id)arg0 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(id)iconView:(id)arg0 labelImageWithParameters:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 options:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithCategoryMapProvider:(id)arg0 ;
-(id)keyCommands;
-(id)nestingViewController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 onViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg0 ;
-(id)shortcutsDelegateForIconView:(id)arg0 ;
-(void)_addBarSwipeView;
-(void)_dismissExpandedPods:(BOOL)arg0 completion:(id)arg1 ;
-(void)_dismissLibraryViewControllerForReason:(id)arg0 sessionIdentifier:(id)arg1 ;
-(void)_dismissSearchIfNotInUseForReason:(id)arg0 sessionIdentifier:(id)arg1 ;
-(void)_enqueueAppLibraryUpdate;
-(void)_enqueueTransitionName:(id)arg0 withHandler:(id)arg1 ;
-(void)_enumerateAllViewControllersUsingBlock:(id)arg0 ;
-(void)_enumerateObservers:(id)arg0 ;
-(void)_expandPodAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_flushPendingLibraryCategoryMapUpdateIfNeeded;
-(void)_installCategoryMap:(id)arg0 ;
-(void)_invalidateLibraryViewControllerDismissalTimer;
-(void)_notifyObserversDataSourceDidChange;
-(void)_notifyObserversDidDismiss;
-(void)_notifyObserversDidDismissFolderController:(id)arg0 ;
-(void)_notifyObserversDidDismissSearchController:(id)arg0 ;
-(void)_notifyObserversDidPresent;
-(void)_notifyObserversDidPresentSearchController:(id)arg0 ;
-(void)_notifyObserversOfAcceptedDrop:(id)arg0 ;
-(void)_notifyObserversOfAppLaunchOfIcon:(id)arg0 fromLocation:(id)arg1 ;
-(void)_notifyObserversWillDismiss;
-(void)_notifyObserversWillDismissFolderController:(id)arg0 ;
-(void)_notifyObserversWillDismissSearchController:(id)arg0 ;
-(void)_notifyObserversWillPresent;
-(void)_notifyObserversWillPresentFolderController:(id)arg0 ;
-(void)_notifyObserversWillPresentSearchController:(id)arg0 ;
-(void)_popExpandedPod;
-(void)_precacheIconViewControllersForCategories:(id)arg0 ;
-(void)_rebuildIconCache;
-(void)_scrollIconViewToVisible:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setupIconTableViewController:(BOOL)arg0 ;
-(void)_startAppLaunchResetTimer:(id)arg0 ;
-(void)_startLibraryViewControllerDismissalTimer:(id)arg0 ;
-(void)_updateDragPreviewIconViewsForDropSession:(id)arg0 inIconListView:(id)arg1 ;
-(void)_updateEditingStateAnimated:(BOOL)arg0 ;
-(void)_updateLibraryCategoryMap:(id)arg0 ;
-(void)_updateViewControllerLegibility;
-(void)_updateViewControllerLegibility:(id)arg0 legibilitySettings:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)dealloc;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didPresentSearchController:(id)arg0 ;
-(void)dismissSearch;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateIconViewQueryableChildrenUsingBlock:(id)arg0 ;
-(void)enumerateIconViewQueryableChildrenWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateViewControllersUsingBlock:(id)arg0 ;
-(void)folderController:(id)arg0 draggedIconShouldDropFromListView:(id)arg1 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint )arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(void)folderController:(id)arg0 willUseIconTransitionAnimator:(id)arg1 forOperation:(NSInteger)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 ;
-(void)folderControllerDidEndScrolling:(id)arg0 ;
-(void)folderControllerShouldBeginEditing:(id)arg0 withHaptic:(BOOL)arg1 ;
-(void)folderControllerShouldEndEditing:(id)arg0 ;
-(void)folderControllerWillBeginScrolling:(id)arg0 ;
-(void)forcedSearchTextFieldNoneditable:(BOOL)arg0 ;
-(void)iconCloseBoxTapped:(id)arg0 ;
-(void)iconModelDidLayout:(id)arg0 ;
-(void)iconTapped:(id)arg0 ;
-(void)iconViewWasDiscarded:(id)arg0 ;
-(void)iconViewWasRecycled:(id)arg0 ;
-(void)invalidateSearchControllerAppLaunchResetTimer;
-(void)layoutIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)libraryCategoryMapProvider:(id)arg0 categoryMapWasRefreshed:(NSUInteger)arg1 libraryCategoryMap:(id)arg2 ;
-(void)libraryPodFolderController:(id)arg0 willLayoutDisplayedCategories:(NSUInteger)arg1 ;
-(void)libraryPodFolderControllerRequestsDismissal:(id)arg0 ;
-(void)libraryTableViewControllerDidAppear:(id)arg0 ;
-(void)libraryTableViewControllerDidLaunchIcon:(id)arg0 ;
-(void)libraryTableViewControllerWillDisappear:(id)arg0 ;
-(void)loadView;
-(void)nestingViewController:(id)arg0 willPerformOperation:(NSInteger)arg1 onViewController:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)noteIconViewWillZoomDown:(id)arg0 ;
-(void)noteInstalledApplicationsDidChange;
-(void)overlayController:(id)arg0 didChangePresentationProgress:(CGFloat)arg1 newPresentationProgress:(CGFloat)arg2 fromLeading:(BOOL)arg3 ;
-(void)overlayController:(id)arg0 visibilityDidChange:(BOOL)arg1 ;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg0 ;
-(void)popNestedViewControllerAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)popPresentationState;
-(void)pushNestedViewController:(id)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)recycleIconView:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif