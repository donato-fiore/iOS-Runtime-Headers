// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIFACEBOOKPAGESECTION_H
#define SKUIFACEBOOKPAGESECTION_H

@class ACAccountStore;


#import "SKUIStorePageSection.h"
#import "SKUIReviewsFacebookView.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIFacebookLikeStatus.h"
#import "SKUIFacebookPageComponent.h"

@interface SKUIFacebookPageSection : SKUIStorePageSection {
    ACAccountStore *_accountStore;
    char _facebookAccountsExist;
    SKUIReviewsFacebookView *_facebookView;
    BOOL _isLoadingLikeStatus;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIFacebookLikeStatus *_likeStatus;
}


@property (readonly, nonatomic) SKUIFacebookPageComponent *pageComponent;


-(NSInteger)_facebookAccountsExist;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)numberOfCells;
-(id)_accountStore;
-(id)_facebookView;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)_accountStoreDidChangeNotification:(id)arg0 ;
-(void)_applyColorSchemeToFacebookView:(id)arg0 ;
-(void)_changeStatusToUserLiked:(BOOL)arg0 ;
-(void)_finishLookupWithStatus:(id)arg0 error:(id)arg1 ;
-(void)_reloadCollectionViewSection;
-(void)_reloadLikeStatus;
-(void)_resetState;
-(void)_toggleLikeAction:(id)arg0 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif