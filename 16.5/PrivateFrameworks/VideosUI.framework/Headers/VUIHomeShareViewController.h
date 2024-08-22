// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIHOMESHAREVIEWCONTROLLER_H
#define VUIHOMESHAREVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, VUIHomeShareViewControllerDelegate;


#import "VUILibraryStackViewController.h"
#import "VUIViewControllerContentPresenter.h"
#import "VUILibraryMenuItemViewCell.h"

@interface VUIHomeShareViewController : VUILibraryStackViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>



@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIHomeShareViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *homeShares; // ivar: _homeShares
@property (retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell; // ivar: _menuItemSizingCell
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_homeShareMediaLibrariesDidChange:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif