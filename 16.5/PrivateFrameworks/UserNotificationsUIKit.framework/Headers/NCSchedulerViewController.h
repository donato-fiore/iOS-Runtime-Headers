// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCSCHEDULERVIEWCONTROLLER_H
#define NCSCHEDULERVIEWCONTROLLER_H

@class NSLayoutConstraint, NSMutableArray, UICollectionView, NSString, NSArray;
@protocol NCSchedulerViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate;


#import "NCOnboardingViewController.h"

@interface NCSchedulerViewController : NCOnboardingViewController <NCSchedulerViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>

 {
    NSLayoutConstraint *_heightConstraint;
    NSMutableArray *_mutableDeliveryTimes;
    CGFloat _dynamicCellHeight;
    CGFloat _dynamicHeaderHeight;
}


@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *deliveryTimes;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)schedulerWithDeliveryTimes:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isAddIndexPath:(id)arg0 ;
-(BOOL)_isFirstIndexPath:(id)arg0 ;
-(BOOL)_isLastIndexPath:(id)arg0 ;
-(CGFloat)_heightThatFitsCollectionView;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_cellCount;
-(NSUInteger)_currentDailyDigestCount;
-(id)_addSummaryText;
-(id)_dateComponentsForHour:(NSUInteger)arg0 minute:(NSUInteger)arg1 ;
-(id)_indexPathForCell:(id)arg0 ;
-(id)_initWithDeliveryTimes:(id)arg0 ;
-(id)_summaryTextForCount:(NSUInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_animateAddIndexPath:(id)arg0 ;
-(void)_animateDeleteIndexPath:(id)arg0 ;
-(void)_animateReloadIndexPath:(id)arg0 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_handleAddOrRemoveActionForIndexPath:(id)arg0 ;
-(void)_insertNextTime;
-(void)_reloadCollectionViewHeight;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)schedulerCell:(id)arg0 didChangeTime:(id)arg1 ;
-(void)schedulerCellButtonPressed:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif