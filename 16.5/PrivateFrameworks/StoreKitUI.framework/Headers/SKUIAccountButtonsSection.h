// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIACCOUNTBUTTONSSECTION_H
#define SKUIACCOUNTBUTTONSSECTION_H

@class NSString;
@protocol SKUIAccountButtonsDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIAccountButtonsViewController.h"
#import "SKUIAccountButtonsComponent.h"

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate>

 {
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIAccountButtonsComponent *pageComponent;
@property (readonly) Class superclass;


-(NSInteger)numberOfCells;
-(id)_accountButtonsViewController;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)accountButtonsViewControllerDidSignIn:(id)arg0 ;
-(void)accountButtonsViewControllerDidSignOut:(id)arg0 ;
-(void)accountButtonsViewControllerDidTapECommerceLink:(id)arg0 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif