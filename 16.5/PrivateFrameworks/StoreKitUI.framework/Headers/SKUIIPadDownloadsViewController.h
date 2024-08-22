// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIIPADDOWNLOADSVIEWCONTROLLER_H
#define SKUIIPADDOWNLOADSVIEWCONTROLLER_H

@class UIViewController, UICollectionView, _UIContentUnavailableView, NSString, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, SKUIDownloadsChildViewControllerDelegate;


#import "SKUIClientContext.h"

@interface SKUIIPadDownloadsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

 {
    UICollectionView *_collectionView;
    _UIContentUnavailableView *_noContentView;
    BOOL _editing;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIDownloadsChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *downloads; // ivar: _downloads
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)_cancelAction:(id)arg0 ;
-(void)_deleteAction:(id)arg0 ;
-(void)_editAction:(id)arg0 ;
-(void)_reload;
-(void)_reloadLayout;
-(void)_reloadNavigationItem;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)reloadDownloadsAtIndexes:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif