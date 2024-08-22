// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGRIDPAGESECTION_H
#define SKUIGRIDPAGESECTION_H

@class NSMapTable, NSMutableIndexSet, NSString, NSMutableDictionary;
@protocol SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIEmbeddedMediaViewDelegate, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIClientContext.h"
#import "SKUIMissingItemLoader.h"
#import "SKUIProductPageOverlayController.h"
#import "SKUIVideoImageDataConsumer.h"
#import "SKUIGridComponent.h"

@interface SKUIGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIEmbeddedMediaViewDelegate, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate>

 {
    NSMapTable *_artworkRequests;
    SKUIClientContext *_clientContext;
    BOOL _containsLockups;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_hiddenIconIndexSet;
    BOOL _isLandscape;
    BOOL _isPad;
    CGSize _lockupImageBoundingSize;
    SKUIMissingItemLoader *_missingItemLoader;
    NSString *_moreButtonTitle;
    NSInteger _numberOfColumns;
    SKUIProductPageOverlayController *_overlayController;
    NSInteger _overlaySourceItemIndex;
    NSInteger _screenScale;
    NSMapTable *_lockupArtworkContexts;
    SKUIVideoImageDataConsumer *_videoImageDataConsumer;
    NSMutableDictionary *_videoPlaceholderImages;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;


-(CGFloat)_heightForEditorialAtIndexPath:(id)arg0 ;
-(CGFloat)_heightForEditorialLockup:(id)arg0 ;
-(CGFloat)_heightForEditorialLockupAtIndexPath:(id)arg0 ;
-(CGFloat)_heightForLockupAtIndexPath:(id)arg0 gridType:(NSInteger)arg1 ;
-(CGFloat)_heightForMedia:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)_heightForMediaAtIndexPath:(id)arg0 ;
-(CGFloat)_mediaWidthForMediaIndex:(NSInteger)arg0 gridWidth:(CGFloat)arg1 ;
-(NSInteger)_numberOfLandscapeColumnsWithGridType:(NSInteger)arg0 ;
-(NSInteger)_numberOfPortraitColumnsWithGridType:(NSInteger)arg0 ;
-(NSInteger)numberOfCells;
-(id)_artworkContextForLockupSize:(NSInteger)arg0 ;
-(id)_cellImageForItem:(id)arg0 lockupSize:(NSInteger)arg1 ;
-(id)_editorialCellWithEditorials:(id)arg0 indexPath:(id)arg1 ;
-(id)_editorialLayoutForEditorial:(id)arg0 ;
-(id)_editorialLayoutForLockup:(id)arg0 ;
-(id)_editorialLockupCellWithLockups:(id)arg0 indexPath:(id)arg1 ;
-(id)_itemCellWithLockups:(id)arg0 indexPath:(id)arg1 ;
-(id)_itemForIndex:(NSInteger)arg0 ;
-(id)_mediaCellWithMedia:(id)arg0 indexPath:(id)arg1 ;
-(id)_missingItemLoader;
-(id)_newSizeToFitArtworkRequestWithArtwork:(id)arg0 mediaIndex:(NSInteger)arg1 ;
-(id)_popSourceViewForOverlayController:(id)arg0 ;
-(id)_videoThumbnailImageForVideo:(id)arg0 thumbnailSize:(struct CGSize )arg1 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)clickEventWithItem:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)itemOfferClickEventWithItem:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)productPageOverlay:(id)arg0 flipSourceViewToDismissItem:(id)arg1 ;
-(id)productPageOverlay:(id)arg0 flipSourceViewToPresentItem:(id)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )_contentInsetForMediaIndex:(NSInteger)arg0 ;
-(struct UIEdgeInsets )_contentInsetForVideoLockupIndex:(NSInteger)arg0 ;
-(void)_enumerateItemsFromStartIndex:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)_enumerateVisibleIndexPathsWithBlock:(id)arg0 ;
-(void)_enumerateVisibleItemsWithBlock:(id)arg0 ;
-(void)_loadImageForItem:(id)arg0 lockupSize:(NSInteger)arg1 loader:(id)arg2 reason:(NSInteger)arg3 ;
-(void)_loadImageForVideo:(id)arg0 thumbnailSize:(struct CGSize )arg1 loader:(id)arg2 reason:(NSInteger)arg3 ;
-(void)_loadMissingItemsFromIndex:(NSInteger)arg0 withReason:(NSInteger)arg1 ;
-(void)_reloadEditorialLockupCell:(id)arg0 withLockup:(id)arg1 index:(NSInteger)arg2 ;
-(void)_reloadItemCell:(id)arg0 withLockup:(id)arg1 index:(NSInteger)arg2 ;
-(void)_selectItem:(id)arg0 withIndex:(NSInteger)arg1 ;
-(void)_setPositionForClickEvent:(id)arg0 withElementIndex:(NSInteger)arg1 ;
-(void)_showProductPageWithItem:(id)arg0 index:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibileEditorialWithEditorialOrientation:(NSInteger)arg0 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg0 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidTapVideoAtIndexPath:(id)arg0 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)dealloc;
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