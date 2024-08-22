// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISCROLLINGSEGMENTEDCONTROLLER_H
#define SKUISCROLLINGSEGMENTEDCONTROLLER_H

@class NSMutableArray, NSMapTable, NSString, UIViewController, UIScrollView, NSArray;
@protocol SKUIProxyScrollViewDelegate, SKUIScrollingSegmentedControllerCollectionViewDelegate, SKUIScrollingSegmentedControllerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIViewControllerWithFocusedViewController, SKUIScrollingSegmentedControllerDelegate;


#import "SKUIViewController.h"
#import "SKUIScrollingSegmentedControllerCollectionView.h"
#import "SKUIProxyScrollView.h"
#import "SKUIScrollingSegmentedControllerNavigationBarTitleView.h"
#import "SKUIInteractiveSegmentedControl.h"

@interface SKUIScrollingSegmentedController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollingSegmentedControllerCollectionViewDelegate, SKUIScrollingSegmentedControllerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIViewControllerWithFocusedViewController>

 {
    CGSize _contentCollectionViewItemSize;
    SKUIScrollingSegmentedControllerCollectionView *_contentCollectionView;
    SKUIProxyScrollView *_proxyScrollView;
    UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    ? _scrollingTabAppearanceStatus;
    NSMutableArray *_titleObservingViewControllers;
    BOOL _viewBackgroundIsWhite;
    NSMapTable *_viewControllerToItemContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIScrollingSegmentedControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController *focusedViewController;
@property (readonly, nonatomic) NSUInteger focusedViewControllerIndex; // ivar: _focusedViewControllerIndex
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumContentWidth; // ivar: _maximumContentWidth
@property (readonly, nonatomic) SKUIScrollingSegmentedControllerNavigationBarTitleView *navigationBarTitleView; // ivar: _navigationBarTitleView
@property (nonatomic) BOOL scrollEnabled; // ivar: _scrollEnabled
@property (readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
@property (nonatomic) UIEdgeInsets segmentedControlContentEdgeInsets;
@property (nonatomic) CGFloat segmentedControlHeight;
@property (nonatomic) NSInteger segmentedControlLayoutStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_titlesSegmentedControl) SKUIInteractiveSegmentedControl *titlesSegmentedControl; // ivar: _titlesSegmentedControl
@property (copy, nonatomic) NSArray *viewControllers; // ivar: _viewControllers
@property (nonatomic) BOOL wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing; // ivar: _wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing
@property (nonatomic) BOOL wantsWhiteBackgroundBeyondRightEdgeWhenBouncing; // ivar: _wantsWhiteBackgroundBeyondRightEdgeWhenBouncing


-(BOOL)_configureSegment:(id)arg0 forViewController:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(BOOL)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)contentScrollView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(NSUInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )_viewControllerContentScrollViewContentInset;
-(void)_reloadTitleSegments;
-(void)_scrollToTitlesSelectionProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_titlesSegmentedControlValueChangeAction:(id)arg0 ;
-(void)_updateScrollViewContentOffsetsToTargetContentOffsets;
-(void)_updateTitleValueObservation;
-(void)_updateTitlesSelectionProgress;
-(void)_updateViewBackgroundColor;
-(void)_viewControllerNeedsContentScrollViewUpdates:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)arg0 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)replaceViewControllerAtIndex:(NSUInteger)arg0 withViewController:(id)arg1 ;
-(void)scrollViewDidChangeContentInset:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidMoveToWindow:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)arg0 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(struct ? )arg0 ;
-(void)selectViewControllerAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setClientContext:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif