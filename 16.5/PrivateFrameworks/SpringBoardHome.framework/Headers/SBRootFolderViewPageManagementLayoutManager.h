// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROOTFOLDERVIEWPAGEMANAGEMENTLAYOUTMANAGER_H
#define SBROOTFOLDERVIEWPAGEMANAGEMENTLAYOUTMANAGER_H

@class NSMapTable, UIViewController, UITapGestureRecognizer, NSURL, NSString, UIImageView, UIScrollView;
@protocol SBFolderObserver, SBIconViewProviding, SBIconViewDelegate, SBIconViewActionDelegate, SBIconListViewDragDelegate, SBHPageManagementCellViewControllerDelegate, SBIconListViewDominoPivotAnimatorDelegate, SBIconDragManagerDelegate, SBIconListModelObserver, UIScrollViewDelegate, SBRootFolderViewLayoutManager, SBDockOffscreenFractionModifying, UIViewImplicitlyAnimating, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBIconDragManager.h"
#import "SBHFocusMode.h"
#import "SBTitledHomeScreenButton.h"
#import "SBHIconModel.h"
#import "SBRootFolder.h"
#import "SBRootFolderView.h"
#import "SBIconListView.h"

@interface SBRootFolderViewPageManagementLayoutManager : NSObject <SBFolderObserver, SBIconViewProviding, SBIconViewDelegate, SBIconViewActionDelegate, SBIconListViewDragDelegate, SBHPageManagementCellViewControllerDelegate, SBIconListViewDominoPivotAnimatorDelegate, SBIconDragManagerDelegate, SBIconListModelObserver, UIScrollViewDelegate, SBRootFolderViewLayoutManager>

 {
    NSMapTable *_iconViewControllersByIcon;
    NSMapTable *_iconViewControllersByListModel;
    NSMapTable *_pageIconsByListModel;
    NSMapTable *_initialScalingAttributesByIconView;
    SBIconDragManager *_iconDragManager;
}


@property (retain, nonatomic) SBHFocusMode *activeFocusMode; // ivar: _activeFocusMode
@property (nonatomic) NSUInteger activeTransitionCount; // ivar: _activeTransitionCount
@property (weak, nonatomic) UIViewController *alertPresentationViewController; // ivar: _alertPresentationViewController
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) BOOL allowsPageHiding; // ivar: _allowsPageHiding
@property (retain, nonatomic) UITapGestureRecognizer *backgroundTapGestureRecognizer; // ivar: _backgroundTapGestureRecognizer
@property (copy, nonatomic) NSURL *completionURL; // ivar: _completionURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SBDockOffscreenFractionModifying> *dockOffscreenAssertion; // ivar: _dockOffscreenAssertion
@property (nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic) SBTitledHomeScreenButton *focusModeOptionsButton; // ivar: _focusModeOptionsButton
@property (retain, nonatomic) UIImageView *focusModeSymbolView; // ivar: _focusModeSymbolView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIconContentPossiblyVisibleOverApplication) BOOL iconContentPossiblyVisibleOverApplication;
@property (readonly, nonatomic) SBIconDragManager *iconDragManager;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, nonatomic) BOOL isTrackingActiveOrDroppingIconDrags;
@property (retain, nonatomic) NSObject<UIViewImplicitlyAnimating> *latestActiveTransitionAnimator; // ivar: _latestActiveTransitionAnimator
@property (nonatomic) NSInteger layoutAction; // ivar: _layoutAction
@property (nonatomic) NSInteger layoutConfiguration; // ivar: _layoutConfiguration
@property (nonatomic, getter=isMainDisplayLibraryViewVisible) BOOL mainDisplayLibraryViewVisible;
@property (nonatomic, getter=isOverlayTodayViewVisible) BOOL overlayTodayViewVisible;
@property (retain, nonatomic) NSObject<BSInvalidatable> *pageDotsVisibilityAssertion; // ivar: _pageDotsVisibilityAssertion
@property (retain, nonatomic) SBRootFolder *pageManagementRootFolder; // ivar: _pageManagementRootFolder
@property (retain, nonatomic) UIScrollView *pageManagementScrollView; // ivar: _pageManagementScrollView
@property (readonly, nonatomic, getter=isRootFolderContentVisible) BOOL rootFolderContentVisible;
@property (weak, nonatomic) SBRootFolderView *rootFolderView; // ivar: _rootFolderView
@property (retain, nonatomic) SBIconListView *rootListView; // ivar: _rootListView
@property (retain, nonatomic) NSObject<BSInvalidatable> *scrollAccessoryBorrowedAssertion; // ivar: _scrollAccessoryBorrowedAssertion
@property (nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTrackingScroll) BOOL trackingScroll;
@property (nonatomic) NSUInteger transitionCount; // ivar: _transitionCount
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)_allowsCloseBoxForIconView:(id)arg0 ;
-(BOOL)_canRasterizeIconView:(id)arg0 ;
-(BOOL)iconDragManager:(id)arg0 doesIconViewRepresentRealIconPosition:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 canHandleIconDropSession:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg1 onIconView:(id)arg2 ;
-(BOOL)iconShouldAllowCloseBoxTap:(id)arg0 ;
-(BOOL)iconView:(id)arg0 canAddDragItemsToSession:(id)arg1 ;
-(BOOL)iconViewCanBecomeFocused:(id)arg0 ;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)isIconViewRecycled:(id)arg0 ;
-(BOOL)pageContainsBookmarkIcons:(id)arg0 ;
-(BOOL)pageManagementCellViewControllerCanReceiveTap:(id)arg0 ;
-(BOOL)pageManagementCellViewControllerShouldSuppressHighlight:(id)arg0 ;
-(NSInteger)closeBoxTypeForIconView:(id)arg0 ;
-(NSUInteger)folderListIndexToAnimateOutForList:(id)arg0 inFolder:(id)arg1 avoidingList:(id)arg2 ;
-(id)backgroundViewForSnapshotForPageManagementCellViewController:(id)arg0 ;
-(id)customImageViewControllerForIconView:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)dragItemsForIconView:(id)arg0 ;
-(id)iconDragManager:(id)arg0 dragPreviewForIconView:(id)arg1 ;
-(id)iconListView:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)iconListView:(id)arg0 iconDropSessionDidUpdate:(id)arg1 ;
-(id)iconListView:(id)arg0 iconViewForDroppingIconDragItem:(id)arg1 proposedIconView:(id)arg2 ;
-(id)iconListView:(id)arg0 previewForDroppingIconDragItem:(id)arg1 proposedPreview:(id)arg2 ;
-(id)iconListViewForIndexPath:(id)arg0 ;
-(id)iconView:(id)arg0 dragPreviewForItem:(id)arg1 session:(id)arg2 previewParameters:(id)arg3 ;
-(id)iconViewQueryableForIconDragManager:(id)arg0 ;
-(id)init;
-(id)newCellBackgroundMaterialViewInFolderView:(id)arg0 initialWeighting:(CGFloat)arg1 ;
-(id)rootFolderForIconDragManager:(id)arg0 ;
-(id)rootViewForIconDragManager:(id)arg0 ;
-(void)_removePageIcon:(id)arg0 ;
-(void)_updateCloseBoxVisibilityWithAnimation:(NSInteger)arg0 ;
-(void)backgroundTapped:(id)arg0 ;
-(void)cleanUpViewsInFolderView:(id)arg0 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)dominoPivotAnimator:(id)arg0 didLayOutIconView:(id)arg1 ;
-(void)focusModeOptionsButtonTapped:(id)arg0 ;
-(void)folder:(id)arg0 listHiddenDidChange:(id)arg1 ;
-(void)iconCloseBoxTapped:(id)arg0 ;
-(void)iconList:(id)arg0 didMoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didRemoveIcon:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDragItem:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)iconListView:(id)arg0 iconDropSession:(id)arg1 didPauseAtLocation:(struct CGPoint )arg2 ;
-(void)iconListView:(id)arg0 iconDropSessionDidEnter:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDropSessionDidExit:(id)arg1 ;
-(void)iconListView:(id)arg0 performIconDrop:(id)arg1 ;
-(void)iconListView:(id)arg0 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 willUseIconView:(id)arg1 forDroppingIconDragItem:(id)arg2 ;
-(void)iconView:(id)arg0 didEndDragSession:(id)arg1 withOperation:(NSUInteger)arg2 ;
-(void)iconView:(id)arg0 dragLiftAnimationDidChangeDirection:(NSInteger)arg1 ;
-(void)iconView:(id)arg0 item:(id)arg1 willAnimateDragCancelWithAnimator:(id)arg2 ;
-(void)iconView:(id)arg0 willAnimateDragLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)iconViewWillBeginDrag:(id)arg0 session:(id)arg1 ;
-(void)layoutFooterViewsInFolderView:(id)arg0 ;
-(void)layoutHeaderViewsInFolderView:(id)arg0 ;
-(void)layoutScrollViewAndRootListViewInFolderView:(id)arg0 ;
-(void)makeMaterialViewsVisible;
-(void)makeRootListViewInFolderView:(id)arg0 animated:(BOOL)arg1 ;
-(void)pageManagementCellViewControllerDidReceiveTap:(id)arg0 ;
-(void)presentPageDeleteConfirmationAlertForIconView:(id)arg0 completion:(id)arg1 ;
-(void)presentSecondPageDeleteConfirmationAlertBookmarksFoundForIconView:(id)arg0 completion:(id)arg1 ;
-(void)rasterizeIconViewsForImprovedLegibilityInScaledDownListViews;
-(void)recycleIconView:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)transitionToActive:(BOOL)arg0 inFolderView:(id)arg1 usingAnimator:(id)arg2 ;
-(void)turnOffIconViewRazterizationForNormalSizeListViews;


@end


#endif