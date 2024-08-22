// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYMEDIACOLLECTIONVIEWCONTROLLER_H
#define VUILIBRARYMEDIACOLLECTIONVIEWCONTROLLER_H

@class NSString, UICollectionViewDiffableDataSource, NSArray;
@protocol UICollectionViewDelegate, VUIProductLockupViewDelegate, TVShelfViewLayoutDelegate, VUILibraryEpisodeFooterCellDelegate, VUILibraryEpisodeShelfViewControllerDelegate, VUILibraryDataSourceDelegate;


#import "VUILibraryStackViewController.h"
#import "VUIViewControllerContentPresenter.h"
#import "VUIMediaEntitiesDataSource.h"
#import "VUIMediaCollection.h"
#import "VUILibraryMediaCollectionViewModel.h"

@interface VUILibraryMediaCollectionViewController : VUILibraryStackViewController <UICollectionViewDelegate, VUIProductLockupViewDelegate, TVShelfViewLayoutDelegate, VUILibraryEpisodeFooterCellDelegate, VUILibraryEpisodeShelfViewControllerDelegate, VUILibraryDataSourceDelegate>



@property (nonatomic) BOOL canShowMultipleSeasons; // ivar: _canShowMultipleSeasons
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) NSArray *episodeGroups; // ivar: _episodeGroups
@property (retain, nonatomic) NSArray *episodes; // ivar: _episodes
@property (retain, nonatomic) VUIMediaEntitiesDataSource *episodesDataSource; // ivar: _episodesDataSource
@property (nonatomic) BOOL episodesFetchHasCompleted; // ivar: _episodesFetchHasCompleted
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIMediaCollection *mediaCollection; // ivar: _mediaCollection
@property (retain, nonatomic) VUILibraryMediaCollectionViewModel *mediaCollectionViewModel; // ivar: _mediaCollectionViewModel
@property (retain, nonatomic) NSArray *seasons; // ivar: _seasons
@property (retain, nonatomic) VUIMediaEntitiesDataSource *seasonsDataSource; // ivar: _seasonsDataSource
@property (nonatomic) BOOL seasonsFetchHasCompleted; // ivar: _seasonsFetchHasCompleted
@property (retain, nonatomic) NSString *showTitle; // ivar: _showTitle
@property (readonly) Class superclass;


-(BOOL)_allFetchesHaveCompleted;
-(BOOL)_usingEpisodesGroupFetch;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(id)_createDiffableDataSourceForCollectionView:(id)arg0 ;
-(id)_createDiffableDataSourceSnapshot;
-(id)_episodeShelfViewControllerWithSeason:(id)arg0 episodes:(id)arg1 ;
-(id)_productLockupViewWithSeason:(id)arg0 ;
-(id)_seasonViewModelByIdentifier:(id)arg0 ;
-(id)_seasonViewModelIdentifiers;
-(id)initWithTitle:(id)arg0 withSeasonsDataSource:(id)arg1 withEpisodesDataSource:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_buildMediaCollectionViewModel;
-(void)_updateAfterContentWasManuallyDeleted:(BOOL)arg0 ;
-(void)_updateDeletedContentErrorMessage;
-(void)_updateEpisodeShelvesWithLatestEpisodes;
-(void)_updateMediaCollectionViewModelForSeasons;
-(void)_updateProductLockupView:(id)arg0 withSeason:(id)arg1 ;
-(void)_updateProductLockupViewWithSeasonIdentifier:(id)arg0 ;
-(void)addDownloadButtonToProductLockupView:(id)arg0 forSeason:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg0 ;
-(void)contentDescriptionExpanded;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)libraryEpisodesShelfViewController:(id)arg0 didRemoveDownloadForAssetController:(id)arg1 ;
-(void)loadView;
-(void)start;
-(void)titleButtonPressedForStoreId:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif