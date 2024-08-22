// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIROWSECTION_H
#define SKUIROWSECTION_H

@class NSMapTable, NSMutableIndexSet, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIClientContext.h"
#import "SKUIMissingItemLoader.h"
#import "SKUIProductPageOverlayController.h"
#import "SKUILockupComponent.h"
#import "SKUIRowComponent.h"

@interface SKUIRowSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate>

 {
    SKUIClientContext *_clientContext;
    NSMapTable *_columnViews;
    NSMapTable *_componentArtworkRequestIDs;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_expandedEditorialIndexes;
    NSMapTable *_galleryViewControllers;
    NSMapTable *_countdownViewControllers;
    BOOL _isPad;
    CGFloat _landscapeCellContentHeight;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIProductPageOverlayController *_overlayController;
    SKUILockupComponent *_overlaySourceComponent;
    CGFloat _portraitCellContentHeight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIRowComponent *pageComponent;
@property (readonly) Class superclass;


-(CGFloat)_cellContentHeightForRowWidth:(CGFloat)arg0 ;
-(CGFloat)_columnWidthForColumnIndex:(NSInteger)arg0 rowWidth:(CGFloat)arg1 ;
-(CGFloat)_heightForArtwork:(id)arg0 columnIndex:(NSInteger)arg1 rowWidth:(CGFloat)arg2 ;
-(CGFloat)_heightForComponent:(id)arg0 columnIndex:(CGFloat)arg1 rowWidth:(CGFloat)arg2 ;
-(CGFloat)_heightForCountdownComponent:(id)arg0 columnIndex:(NSInteger)arg1 rowWidth:(CGFloat)arg2 ;
-(CGFloat)_heightForEditorialComponent:(id)arg0 columnIndex:(NSInteger)arg1 rowWidth:(CGFloat)arg2 ;
-(CGFloat)_heightForGalleryComponent:(id)arg0 columnIndex:(NSInteger)arg1 rowWidth:(CGFloat)arg2 ;
-(CGFloat)_heightForLockupComponent:(id)arg0 columnIndex:(NSInteger)arg1 rowWidth:(CGFloat)arg2 ;
-(CGFloat)_heightForMediaComponent:(id)arg0 columnIndex:(NSInteger)arg1 rowWidth:(CGFloat)arg2 ;
-(CGFloat)_interColumnSpacing;
-(NSInteger)numberOfCells;
-(id)_columnViews;
-(id)_editorialLayoutForEditorial:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(id)_editorialLayoutForLockup:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(id)_imageConsumerWithItem:(id)arg0 lockupSize:(NSInteger)arg1 ;
-(id)_lockupImageForComponent:(id)arg0 ;
-(id)_lockupPlaceholderForComponent:(id)arg0 ;
-(id)_missingItemLoader;
-(id)_newSizeToFitArtworkRequestWithArtwork:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(id)_newViewWithMediaComponent:(id)arg0 ;
-(id)_overlaySourceCell;
-(id)_popSourceViewForOverlayController:(id)arg0 ;
-(id)_viewControllerForCountdownComponent:(id)arg0 ;
-(id)_viewControllerForGalleryComponent:(id)arg0 ;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)clickEventWithItem:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)itemOfferClickEventWithItem:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)productPageOverlay:(id)arg0 flipSourceViewToDismissItem:(id)arg1 ;
-(id)productPageOverlay:(id)arg0 flipSourceViewToPresentItem:(id)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct SKUILockupStyle )_lockupStyleForComponent:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForColumnIndex:(NSInteger)arg0 ;
-(void)_enumerateLockupsWithBlock:(id)arg0 ;
-(void)_expandEditorialComponent:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(void)_loadImagesForGalleryComponent:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(void)_reloadEditorialCell:(id)arg0 forComponent:(id)arg1 columnIndex:(NSInteger)arg2 ;
-(void)_reloadEditorialLockupCell:(id)arg0 forComponent:(id)arg1 columnIndex:(NSInteger)arg2 ;
-(void)_reloadLockupCell:(id)arg0 forComponent:(id)arg1 columnIndex:(NSInteger)arg2 ;
-(void)_reloadView:(id)arg0 forMediaComponent:(id)arg1 columnIndex:(NSInteger)arg2 ;
-(void)_selectGalleryComponent:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(void)_selectLockupComponent:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(void)_selectMediaComponent:(id)arg0 columnIndex:(NSInteger)arg1 ;
-(void)_setPositionForClickEvent:(id)arg0 elementIndex:(NSInteger)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCachedLayoutInformation;
-(void)itemStateCenter:(id)arg0 itemStatesChanged:(id)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg0 ;
-(void)mediaView:(id)arg0 playbackStateDidChange:(NSInteger)arg1 ;
-(void)missingItemLoader:(id)arg0 didLoadItems:(id)arg1 invalidItemIdentifiers:(id)arg2 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)productPageOverlayDidDismiss:(id)arg0 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willHideInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif