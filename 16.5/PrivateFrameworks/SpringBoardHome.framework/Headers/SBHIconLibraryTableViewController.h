// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHICONLIBRARYTABLEVIEWCONTROLLER_H
#define SBHICONLIBRARYTABLEVIEWCONTROLLER_H

@class ATXAppDirectoryClient, NSHashTable, NSMapTable, NSCountedSet, NSString, UIView, _UILegibilitySettings, NSSet;
@protocol SBIconObserver, SBIconViewObserver, PTSettingsKeyObserver, UITableViewDelegatePrivate, UITableViewDragDelegate, UIGestureRecognizerDelegate, SBHTableViewIconLibraryObserver, SBHScrollableIconViewContaining, SBHLibraryChildViewController, SBHSearchResultsUpdating, BSInvalidatable, SBIconViewProviding, SBHIconLibraryTableViewControllerLayoutDelegate, SBIconListLayoutProvider, SBHIconLibraryTableViewControllerObserver;


#import "SBHTableViewController.h"
#import "SBHScrollableIconViewInteraction.h"
#import "SBHAppLibrarySettings.h"
#import "SBHIconLibraryQuery.h"
#import "SBHIconTableViewDiffableDataSource.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"
#import "SBHIconModel.h"
#import "SBHTableViewIconLibrary.h"
#import "SBHLibraryCategoryMap.h"
#import "SBRootFolder.h"
#import "SBHLibrarySearchController.h"

@interface SBHIconLibraryTableViewController : SBHTableViewController <SBIconObserver, SBIconViewObserver, PTSettingsKeyObserver, UITableViewDelegatePrivate, UITableViewDragDelegate, UIGestureRecognizerDelegate, SBHTableViewIconLibraryObserver, SBHScrollableIconViewContaining, SBHLibraryChildViewController, SBHSearchResultsUpdating>

 {
    BOOL _showHeaders;
    BOOL _needsLowQualityAlphaFade;
    ATXAppDirectoryClient *_appDirectoryClient;
    SBHScrollableIconViewInteraction *_scrollingInteraction;
    NSHashTable *_grabbedIconViews;
    NSHashTable *_observedIcons;
    NSMapTable *_dragSessionsForIconView;
    SBHAppLibrarySettings *_settings;
    BOOL _usesPlatterAppearance;
    BOOL _hasAppeared;
    id<BSInvalidatable> *_isVisibleLibrarySearchPrewarmAssertion;
    NSCountedSet *_libraryPrewarmAssertions;
}


@property (readonly, nonatomic) SBHIconLibraryQuery *currentQuery; // ivar: _currentQuery
@property (readonly, nonatomic) SBHIconTableViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesNullQueryExecution; // ivar: _disablesNullQueryExecution
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerBlurView; // ivar: _headerBlurView
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (retain, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (retain, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (weak, nonatomic) NSObject<SBHIconLibraryTableViewControllerLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) SBHTableViewIconLibrary *library; // ivar: _library
@property (retain, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap; // ivar: _libraryCategoryMap
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (weak, nonatomic) NSObject<SBHIconLibraryTableViewControllerObserver> *observer; // ivar: _observer
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (retain, nonatomic) SBRootFolder *rootFolder; // ivar: _rootFolder
@property (weak, nonatomic) SBHLibrarySearchController *searchController; // ivar: _searchController
@property (readonly) Class superclass;


+(Class)tableViewClass;
-(BOOL)_executeQuery:(id)arg0 ;
-(BOOL)_isIndexPathVisible:(id)arg0 ;
-(BOOL)_isViewControllerVisible;
-(BOOL)_observeIcon:(id)arg0 ;
-(BOOL)_shouldShowNoResultsViewForQueryResult:(id)arg0 ;
-(BOOL)_startObservingIcon:(id)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)searchControllerShouldReturn:(id)arg0 ;
-(BOOL)tableView:(id)arg0 dragSessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)headerTopOccludingInset;
-(id)_contentUnavailableConfigurationState;
-(id)_createIconView;
-(id)_dragSessionForIconView:(id)arg0 ;
-(id)_iconFilter:(SEL)arg0 ;
-(id)_iconViewAtIndexPath:(id)arg0 ;
-(id)_iconViewForDragSession:(id)arg0 ;
-(id)_iconViewForIcon:(id)arg0 ;
-(id)_indexPathForDefaultSearchResult;
-(id)_nullQuery;
-(id)_processDragItemsForIconView:(id)arg0 session:(id)arg1 ;
-(id)_queryForCurrentSearchTextField;
-(id)_searchTextField;
-(id)_visibleIcons;
-(id)_visibleIndexPaths;
-(id)_visibleSectionIndicies;
-(id)acquireLibrarySearchPrewarmAssertionForReason:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 dragPreviewParametersForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(struct CGRect )tableView:(id)arg0 frameForSectionIndexGivenProposedFrame:(struct CGRect )arg1 ;
-(struct UIEdgeInsets )visibleContainerInsets;
-(void)_configureCell:(id)arg0 forIcon:(id)arg1 ;
-(void)_handleAlphaFadeForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_handleDidTapEmptyResultsArea:(id)arg0 ;
-(void)_handleLowQualityAlphaFade;
-(void)_iconModelWillReload:(id)arg0 ;
-(void)_invalidatePrewarmAssertion:(id)arg0 ;
-(void)_logLaunchOfIcon:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_mapIconView:(id)arg0 forDragSession:(id)arg1 ;
-(void)_notifyDelegatesOfAppLaunchFromSearchController:(id)arg0 ;
-(void)_refreshIconCache;
-(void)_refreshIconIfVisible:(id)arg0 ;
-(void)_refreshLibrary:(id)arg0 ;
-(void)_reloadAppIcons;
-(void)_reloadRowsAtIndexPaths:(id)arg0 ;
-(void)_reloadVisibleCells;
-(void)_resetDragSession:(id)arg0 ;
-(void)_setupLibrary;
-(void)_setupObservedIcons;
-(void)_stopObservingIcon:(id)arg0 ;
-(void)_teardownLibrary;
-(void)_teardownObservedIcons;
-(void)_unobserveIcon:(id)arg0 ;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)_updateSectionHeaderHeight;
-(void)_updateShowHeadersFromQueryResult:(id)arg0 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateScrollableIconViewsUsingBlock:(id)arg0 ;
-(void)iconAccessoriesDidUpdate:(id)arg0 ;
-(void)iconLibrary:(id)arg0 hasUpdatedQueryResult:(id)arg1 ;
-(void)iconViewDidEndDrag:(id)arg0 ;
-(void)iconViewWillBeginDrag:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)tableView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif