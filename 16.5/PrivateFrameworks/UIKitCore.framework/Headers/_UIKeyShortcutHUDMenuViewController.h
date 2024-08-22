// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYSHORTCUTHUDMENUVIEWCONTROLLER_H
#define _UIKEYSHORTCUTHUDMENUVIEWCONTROLLER_H

@class NSString;
@protocol _UIKeyShortcutHUDCollectionViewManagerClient, _UIKeyShortcutHUDMenuViewControllerDelegate;


#import "UIViewController.h"
#import "UICollectionViewCellRegistration.h"
#import "UICollectionViewSupplementaryRegistration.h"
#import "UICollectionView.h"
#import "_UIKeyShortcutHUDCollectionViewManager.h"
#import "UICollectionViewDiffableDataSource.h"
#import "_UIKeyShortcutHUDMenu.h"
#import "UIKeyShortcutHUDMetrics.h"
#import "UIVisualEffectView.h"

@interface _UIKeyShortcutHUDMenuViewController : UIViewController <_UIKeyShortcutHUDCollectionViewManagerClient>



@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: _cellRegistration
@property (retain, nonatomic) UICollectionViewSupplementaryRegistration *cellSeparatorRegistration; // ivar: _cellSeparatorRegistration
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (weak, nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager; // ivar: _collectionViewManager
@property (nonatomic) NSUInteger currentScrolledToCategoryIndex; // ivar: _currentScrolledToCategoryIndex
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDMenuViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) _UIKeyShortcutHUDMenu *menu; // ivar: _menu
@property (weak, nonatomic) UIKeyShortcutHUDMetrics *metrics; // ivar: _metrics
@property (nonatomic, getter=isSearching) BOOL searching; // ivar: _searching
@property (retain, nonatomic) UICollectionViewSupplementaryRegistration *sectionHeaderRegistration; // ivar: _sectionHeaderRegistration
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitioningSearch) BOOL transitioningSearch; // ivar: _transitioningSearch
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(BOOL)_canShowWhileLocked;
-(BOOL)selectionFollowsFocusForItemAtIndexPath:(id)arg0 ;
-(BOOL)shouldPersistSelectionForCellAtIndexPath:(id)arg0 ;
-(id)_searchModeCollectionViewLayout;
-(id)_standardModeCollectionViewLayout;
-(id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)arg0 ;
-(id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)arg0 ;
-(void)_configureCollectionView;
-(void)_displayMenu:(id)arg0 animatingDifferences:(BOOL)arg1 ;
-(void)_setupSubviews;
-(void)didCompleteSearchTransition;
-(void)didScrollCollectionView;
-(void)flashShortcutIfVisible:(id)arg0 completionHandler:(id)arg1 ;
-(void)hudWillBecomeHidden:(BOOL)arg0 ;
-(void)performActionForSelectingCellAtIndexPath:(id)arg0 ;
-(void)prepareForSearchTransition:(BOOL)arg0 ;
-(void)scrollToCategory:(id)arg0 withCategoryIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;


@end


#endif