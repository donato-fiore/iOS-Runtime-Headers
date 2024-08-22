// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTPAGEHEADERVIEWCONTROLLER_H
#define SKUIPRODUCTPAGEHEADERVIEWCONTROLLER_H

@class UIViewController, UIPopoverController, UIImage, SSVLoadURLOperation, NSString, NSOperationQueue;
@protocol SKUIItemStateCenterObserver, UIPopoverControllerDelegate, SKUIProductPageHeaderViewDelegate;


#import "SKUIContentRatingArtworkResourceLoader.h"
#import "SKUIItemArtworkContext.h"
#import "SKUIProductPageHeaderView.h"
#import "SKUIItemOffer.h"
#import "SKUIProductPage.h"
#import "SKUIProductPageHeaderFloatingView.h"
#import "SKUIClientContext.h"
#import "SKUIItem.h"

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate>

 {
    UIPopoverController *_activityPopoverController;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIItemArtworkContext *_artworkContext;
    SKUIProductPageHeaderView *_headerView;
    UIImage *_iconImage;
    NSInteger _itemIdentifier;
    SSVLoadURLOperation *_loadIconOperation;
    SSVLoadURLOperation *_loadUberOperation;
    NSInteger _personalizationState;
    SKUIItemOffer *_personalizedOffer;
    UIImage *_placeholderImage;
    SKUIProductPage *_productPage;
    UIImage *_uberImage;
    BOOL _wantsActivityViewController;
    SKUIProductPageHeaderFloatingView *_floatingView;
    BOOL _performArtistActionOnLoad;
}


@property (nonatomic) BOOL askPermission; // ivar: _askPermission
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProductPageHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SKUIProductPageHeaderFloatingView *floatingView;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) SKUIItem *item; // ivar: _item
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) NSInteger selectedSectionIndex;
@property (readonly) Class superclass;


-(BOOL)_isRestricted;
-(id)_activeItem;
-(id)_ageBandString;
-(id)_artworkContext;
-(id)_contentRatingResourceLoader;
-(id)_segmentedControlTitles;
-(id)initWithItem:(id)arg0 ;
-(void)_artistButtonAction:(id)arg0 ;
-(void)_destroyPopoverController;
-(void)_disableItemOfferButtonWithTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)_itemOfferButtonAction:(id)arg0 ;
-(void)_loadUberImageIfAvailable;
-(void)_reloadItemStateAnimated:(BOOL)arg0 ;
-(void)_sectionControlAction:(id)arg0 ;
-(void)_sendDidReloadOffer;
-(void)_setArtworkWithImage:(id)arg0 error:(id)arg1 ;
-(void)_setPersonalizedOffer:(id)arg0 ;
-(void)_setUberWithImage:(id)arg0 error:(id)arg1 ;
-(void)_shareButtonAction:(id)arg0 ;
-(void)_showActivityViewControllerFromView:(id)arg0 ;
-(void)_showAskPermissionBanner;
-(void)_showSynthesizedItemStateWithFlag:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)itemStateCenter:(id)arg0 itemStatesChanged:(id)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg0 ;
-(void)loadView;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)reloadData;
-(void)setProductPage:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif