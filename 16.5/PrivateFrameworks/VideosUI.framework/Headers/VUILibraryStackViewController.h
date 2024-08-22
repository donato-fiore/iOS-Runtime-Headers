// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYSTACKVIEWCONTROLLER_H
#define VUILIBRARYSTACKVIEWCONTROLLER_H

@class UIViewController, NSIndexPath, NSString, UICollectionView;
@protocol UICollectionViewDelegate;


#import "VUILibraryStackView.h"

@interface VUILibraryStackViewController : UIViewController <UICollectionViewDelegate>

 {
    CGFloat _lastAppearWidth;
    BOOL _requiresRelayout;
    NSIndexPath *_focusedIndexPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UICollectionView *stackCollectionView; // ivar: _stackCollectionView
@property (readonly, nonatomic) VUILibraryStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)preferredStatusBarStyle;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(void)_invalidateLayouts;
-(void)_updateNavigationBarPadding;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureWithCollectionView:(id)arg0 ;
-(void)scrollToTop;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif