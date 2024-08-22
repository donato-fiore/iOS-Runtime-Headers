// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIHORIZONTALSCROLLINGCONTAINERVIEWCONTROLLER_H
#define SKUIHORIZONTALSCROLLINGCONTAINERVIEWCONTROLLER_H

@class UICollectionView, NSMapTable, NSString, NSIndexPath, NSArray;
@protocol SKUIProxyScrollViewDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SKUIHorizontalScrollingContainerViewControllerDelegate;


#import "SKUIViewController.h"
#import "SKUIProxyScrollView.h"

@interface SKUIHorizontalScrollingContainerViewController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

 {
    CGSize _contentCollectionViewItemSize;
    UICollectionView *_contentCollectionView;
    BOOL _isHandlingScrollViewDidScroll;
    SKUIProxyScrollView *_proxyScrollView;
    UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    NSMapTable *_viewControllerToExistingContentInsetAdjustment;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIHorizontalScrollingContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexPath *indexPathOfFocusedItem;
@property (readonly, nonatomic) BOOL initialScrollWasPerformed; // ivar: _initialScrollWasPerformed
@property (retain, nonatomic) UICollectionView *menuBarCollectionView; // ivar: _menuBarCollectionView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewControllers; // ivar: _viewControllers


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_indexPathOfFocusedContentItemWithDistanceToFocusedPosition:(*CGFloat)arg0 layoutAttributes:(*id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)contentScrollView;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )viewControllerContentScrollViewContentInset;
-(void)_applyNewContentInset:(struct UIEdgeInsets )arg0 toViewController:(id)arg1 ;
-(void)_applyNewContentInset:(struct UIEdgeInsets )arg0 toViewControllers:(id)arg1 ;
-(void)_scrollViewDidScroll:(id)arg0 ;
-(void)_scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)_synchronizeContentCollectionViewWithMenuBarCollectionView;
-(void)_synchronizeMenuBarCollectionViewWithContentCollectionView;
-(void)_updateScrollViewContentOffsetsToTargetContentOffsets;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)observedScrollViewDidScroll:(id)arg0 ;
-(void)observedScrollViewWillBeginDecelerating:(id)arg0 ;
-(void)replaceViewControllerAtIndex:(NSUInteger)arg0 withViewController:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidChangeContentInset:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)setClientContext:(id)arg0 ;
-(void)setNeedsViewControllerContentScrollViewContentInsetUpdate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif