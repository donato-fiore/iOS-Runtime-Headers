// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISEASONPICKERVIEWCONTROLLER_H
#define VUISEASONPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, UICollectionViewDiffableDataSource;
@protocol UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol;


#import "VUISeasonPickerCollectionViewCell.h"
#import "VUIViewControllerContentPresenter.h"
#import "VUIMediaEntitiesDataSource.h"
#import "VUIFamilyMember.h"
#import "_VUISeasonPickerView.h"

@interface VUISeasonPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol>

 {
    VUISeasonPickerCollectionViewCell *_sizingCell;
}


@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (retain, nonatomic) UIViewController *currentSeasonViewController; // ivar: _currentSeasonViewController
@property (retain, nonatomic) VUIMediaEntitiesDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) VUIFamilyMember *familyMember; // ivar: _familyMember
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastViewedSeasonWasManuallyDeleted; // ivar: _lastViewedSeasonWasManuallyDeleted
@property (retain, nonatomic) _VUISeasonPickerView *seasonPickerView; // ivar: _seasonPickerView
@property (readonly) Class superclass;


-(id)_createDiffableDataSource;
-(id)_createDiffableDataSourceSnapshot;
-(id)_getSeasonIdentifiersFromSeasons;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif