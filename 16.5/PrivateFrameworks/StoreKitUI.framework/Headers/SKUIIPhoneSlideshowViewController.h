// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIIPHONESLIDESHOWVIEWCONTROLLER_H
#define SKUIIPHONESLIDESHOWVIEWCONTROLLER_H

@class UIViewController, UIPageControl, NSOperationQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;


#import "SKUIGiftThemeCollectionView.h"
#import "SKUIClientContext.h"

@interface SKUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    SKUIGiftThemeCollectionView *_collectionView;
    UIPageControl *_pageControl;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_placeholderQueue;
    NSMutableArray *_images;
    NSMutableDictionary *_placeholderImages;
    NSInteger _indexToScrollToOnLoadView;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (nonatomic) NSInteger currentIndex;
@property (weak, nonatomic) NSObject<SKUISlideshowViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUISlideshowViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_imageAtIndex:(NSInteger)arg0 ;
-(id)_placeholderImageAtIndex:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_doneAction:(id)arg0 ;
-(void)_reloadPageControl;
-(void)_reloadSize;
-(void)_setImage:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif