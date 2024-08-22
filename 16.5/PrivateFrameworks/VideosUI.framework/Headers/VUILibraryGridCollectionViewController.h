// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYGRIDCOLLECTIONVIEWCONTROLLER_H
#define VUILIBRARYGRIDCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSMutableDictionary, UIBarButtonItem, NSString, UICollectionViewDiffableDataSource, NSArray, UICollectionViewCell;
@protocol VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol, VUILibraryGridCollectionViewControllerDelegate;


#import "VUICollectionHeaderView.h"
#import "VUIViewControllerContentPresenter.h"
#import "VUIMediaEntitiesDataSource.h"
#import "VUIFamilyMember.h"
#import "VUIMediaEntityFetchRequest.h"

@interface VUILibraryGridCollectionViewController : UICollectionViewController <VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol>

 {
    CGFloat _lastViewWidth;
    BOOL _requiresRelayout;
    CGSize _cellSize;
    NSMutableDictionary *_cellMetrics;
    VUICollectionHeaderView *_sizingHeaderView;
}


@property (nonatomic) CGFloat cellWidth; // ivar: _cellWidth
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem; // ivar: _currentNavBarButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUILibraryGridCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) VUIMediaEntitiesDataSource *entitiesDataSource; // ivar: _entitiesDataSource
@property (retain, nonatomic) VUIFamilyMember *familyMember; // ivar: _familyMember
@property (retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (nonatomic) BOOL forceBackButton; // ivar: _forceBackButton
@property (nonatomic) NSInteger gridFilter; // ivar: _gridFilter
@property (nonatomic) NSInteger gridStyle; // ivar: _gridStyle
@property (nonatomic) NSInteger gridType; // ivar: _gridType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideLockupTitles; // ivar: _hideLockupTitles
@property (retain, nonatomic) UIBarButtonItem *libraryBarButton; // ivar: _libraryBarButton
@property (retain, nonatomic) NSArray *mediaEntities; // ivar: _mediaEntities
@property (retain, nonatomic) NSString *pageType; // ivar: _pageType
@property (retain, nonatomic) UICollectionViewCell *sizingCell; // ivar: _sizingCell
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitingForFetch; // ivar: _waitingForFetch


-(CGFloat)_computeBottomMargin;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(id)_createCollectionView;
-(id)_createCollectionViewFlowLayout;
-(id)_createDiffableDataSource;
-(id)_createDiffableDataSourceSnapshot;
-(id)_getEntityIdentifiersFromEntities;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_applyInitialSnapshot;
-(void)_applySnapshotFromEntitiesAndAnimateDifferences:(BOOL)arg0 ;
-(void)_configureSizingCellForItemAtIndexPath:(id)arg0 ;
-(void)_iOSHandleCellSelectionAtIndexPath:(id)arg0 ;
-(void)_updateCurrentViewIfNeeded;
-(void)_updateLayoutForSize:(struct CGSize )arg0 ;
-(void)_updateNavigationBarPadding;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)dataSourceDidFinishFetchingArtwork:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)setTitle:(id)arg0 withLargeTitleDisplayEnabled:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithLatestMediaEntities:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif