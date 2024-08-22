// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYPODFOLDERCONTROLLER_H
#define SBHLIBRARYPODFOLDERCONTROLLER_H

@class UIWindow, UIView, NSString, NSArray, _UILegibilitySettings, ATXAppDirectoryClient, NSSet, UITapGestureRecognizer;
@protocol SBHLibraryCategoriesFolderDataSourceObserver, UIGestureRecognizerDelegate, SBHLibraryChildViewController, SBHLibraryPodIconZoomAnimationContaining, SBHLibrarySearchControllerContentViewControllerScrollViewProvider, BSUIScrollViewDelegate, SBIconListLayoutProvider, SBHLibraryPodFolderControllerDelegate;


#import "SBFolderController.h"
#import "SBIconListView.h"
#import "SBHLibraryCategoriesFolderDataSource.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"
#import "SBHIconModel.h"
#import "SBHLibraryCategoryMap.h"
#import "SBRootFolder.h"

@interface SBHLibraryPodFolderController : SBFolderController <SBHLibraryCategoriesFolderDataSourceObserver, UIGestureRecognizerDelegate, SBHLibraryChildViewController, SBHLibraryPodIconZoomAnimationContaining, SBHLibrarySearchControllerContentViewControllerScrollViewProvider>



@property (readonly, nonatomic) UIWindow *animationWindow;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) SBIconListView *currentIconListView;
@property (readonly, nonatomic) SBHLibraryCategoriesFolderDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBIconListView *dockIconListView;
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (readonly, nonatomic) UIView *fallbackIconContainerView;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap; // ivar: _libraryCategoryMap
@property (weak, nonatomic) NSObject<BSUIScrollViewDelegate> *librarySearchControllerScrollViewDelegate;
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (readonly, nonatomic) ATXAppDirectoryClient *loggingClient; // ivar: _loggingClient
@property (weak, nonatomic) NSObject<SBHLibraryPodFolderControllerDelegate> *podFolderControllerDelegate; // ivar: _podFolderControllerDelegate
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (retain, nonatomic) SBRootFolder *rootFolder;
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapToDismissRecognizer; // ivar: _tapToDismissRecognizer


+(Class)_contentViewClass;
+(Class)configurationClass;
+(id)iconLocation;
-(BOOL)_isViewControllerVisible;
-(BOOL)_ourFolderContainsFolder:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isOpen;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)shouldOpenFolderIcon:(id)arg0 ;
-(Class)controllerClassForFolder:(id)arg0 ;
-(id)_nestingViewControllerForPushing;
-(id)contentScrollView;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)firstNonSuggestionsOrRecentsIconViewForIcon:(id)arg0 ;
-(id)folderIconViewForIcon:(id)arg0 folderRelativeIconIndexPath:(*id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)podFolderView;
-(void)_reloadAppIcons;
-(void)categoriesDataSource:(id)arg0 shouldAnimateLayoutForCategories:(id)arg1 ;
-(void)categoriesDataSourceNeedsAnimatedReload:(id)arg0 ;
-(void)configureInnerFolderControllerConfiguration:(id)arg0 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateNonSuggestionsOrRecentsViewControllersUsingBlock:(id)arg0 ;
-(void)enumerateViewControllersUsingBlock:(id)arg0 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)iconListView:(id)arg0 didAddIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 didRemoveIconView:(id)arg1 ;
-(void)iconViewDidHandleTap:(id)arg0 ;
-(void)pushNestedViewController:(id)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)setContentAlpha:(CGFloat)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif