// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREVIEWLISTPAGESECTION_H
#define SKUIREVIEWLISTPAGESECTION_H

@class NSMutableDictionary;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIReviewListPageComponent.h"

@interface SKUIReviewListPageSection : SKUIStorePageSection {
    SKUIViewElementLayoutContext *_cellLayoutContext;
}


@property (copy, nonatomic) NSMutableDictionary *contextActionsRegistration; // ivar: _contextActionsRegistration
@property (readonly, nonatomic) SKUIReviewListPageComponent *pageComponent;


-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg0 ;
-(NSInteger)numberOfCells;
-(id)_contextActionRegistrationKeyWithCell:(id)arg0 indexPath:(id)arg1 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )_contentInsetForReviewIndex:(NSInteger)arg0 ;
-(void)_requestCellLayout;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)registerContextActionsForCell:(id)arg0 indexPath:(id)arg1 viewController:(id)arg2 ;
-(void)reloadCellWithIndexPath:(id)arg0 reason:(NSInteger)arg1 ;
-(void)unregisterContextActionsForCell:(id)arg0 indexPath:(id)arg1 viewController:(id)arg2 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif