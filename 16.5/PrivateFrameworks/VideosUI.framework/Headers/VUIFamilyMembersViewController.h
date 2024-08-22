// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIFAMILYMEMBERSVIEWCONTROLLER_H
#define VUIFAMILYMEMBERSVIEWCONTROLLER_H

@class UIViewController, NSString, UICollectionViewDiffableDataSource, NSDictionary;
@protocol VUILibraryDataSourceDelegate, UICollectionViewDelegate, VUILegacyCollectionViewDelegate, VUIFamilyMembersViewControllerDelegate;


#import "VUILegacyCollectionView.h"
#import "VUIViewControllerContentPresenter.h"
#import "VUILibraryFamilyMembersDataSource.h"
#import "VUIFamilyMemberCell.h"

@interface VUIFamilyMembersViewController : UIViewController <VUILibraryDataSourceDelegate, UICollectionViewDelegate, VUILegacyCollectionViewDelegate>

 {
    CGFloat _lastAppearWidth;
}


@property (retain, nonatomic) VUILegacyCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (retain, nonatomic) VUILibraryFamilyMembersDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIFamilyMembersViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) NSDictionary *familyMemberHashToFamilyMemberDictionary; // ivar: _familyMemberHashToFamilyMemberDictionary
@property (nonatomic) NSInteger gridStyle; // ivar: _gridStyle
@property (nonatomic) NSInteger gridType; // ivar: _gridType
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize lastCollectionViewSize; // ivar: _lastCollectionViewSize
@property (retain, nonatomic) VUIFamilyMemberCell *sizingCell; // ivar: _sizingCell
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tvCellWidth; // ivar: _tvCellWidth


-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(id)_createCollectionView;
-(id)_createDiffableDataSource;
-(id)_createDiffableDataSourceSnapshot;
-(id)_generateFamilyMemberHashToFamilyMemberDictionaryForFamilyMembers:(id)arg0 ;
-(id)_getFamilyMemberIdentifiersFromFamilyMembers;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_clearCollectionViewSelections:(BOOL)arg0 ;
-(void)_updateCurrentViewIfNeeded;
-(void)_updateLayoutForSizeIfNeeded:(struct CGSize )arg0 ;
-(void)_updateNavigationBarPadding;
-(void)applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)registerForApplicationNotifications;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unregisterApplicationNotifications;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif