// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISHELFVIEWCONTROLLER_H
#define VUISHELFVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, NSIndexPath, UIView;
@protocol UICollectionViewDelegate, TVShelfViewLayoutDelegate;


#import "VUIShelfView.h"

@interface VUIShelfViewController : UIViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate>

 {
    BOOL _shouldUpdateBeforeLayout;
}


@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) VUIShelfView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSIndexPath *focusedIndexPath; // ivar: _focusedIndexPath
@property (readonly, nonatomic) NSInteger gridStyle; // ivar: _gridStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (readonly) Class superclass;


-(id)_findSnappingItemFromContentOffset:(struct CGPoint *)arg0 withVelocity:(struct CGPoint )arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)initWithGridStyle:(NSInteger)arg0 ;
-(void)_ensureScrollViewSnaps;
-(void)_snapTargetContentOffset:(struct CGPoint *)arg0 toItemIndexPath:(id)arg1 atItemOffset:(struct CGPoint )arg2 ;
-(void)_updateCollectionViewLayout:(BOOL)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentOffsetWithTransitionCoordinator:(id)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif