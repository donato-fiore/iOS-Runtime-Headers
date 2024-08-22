// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVSTACKCOLLECTIONVIEWCONTROLLER_H
#define _TVSTACKCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, NSIndexPath, UIViewController, UIView, NSString, IKViewElement;
@protocol _TVCollectionViewing, _TVStackCollectionViewControllerDelegate;


#import "_TVNeedsMoreContentEvaluator.h"
#import "_TVStackCollectionView.h"

@interface _TVStackCollectionViewController : UICollectionViewController <_TVCollectionViewing>

 {
    NSArray *_viewControllers;
    NSArray *_stackSections;
    NSArray *_stackRows;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
    BOOL _configureForListTemplate;
    ? _delegateFlags;
}


@property (retain, nonatomic) _TVStackCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVStackCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(BOOL)_updateWithCollectionListElement:(id)arg0 autoHighlightIndexPath:(*id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(CGFloat)_maxViewWidth;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_needsMoreTargetElement;
-(id)_viewControllerWithElement:(id)arg0 existingController:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(struct CGSize )_maxContentSize;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_adjustedContentOffsetForRowIndex:(NSInteger)arg0 targetContentOffset:(struct CGPoint *)arg1 ;
-(void)_buildStackSections;
-(void)_configureBackgroundTintView;
-(void)_updateBackgroundTintView;
-(void)_updateBackgroundTintViewEffects;
-(void)_updateFirstItemRowIndexes;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)loadView;
-(void)preloadCellsInRect:(struct CGRect )arg0 ;
-(void)resetLastFocusedIndexPath;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif