// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGALLERYSWOOSHPAGESECTION_H
#define SKUIGALLERYSWOOSHPAGESECTION_H

@class NSMapTable, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIGallerySwooshViewController.h"
#import "SKUISwooshPageComponent.h"

@interface SKUIGallerySwooshPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate>

 {
    NSMapTable *_componentArtworkRequests;
    SKUIGallerySwooshViewController *_swooshViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUISwooshPageComponent *pageComponent;
@property (readonly) Class superclass;


-(NSInteger)numberOfCells;
-(id)_newArtworkRequestWithArtwork:(id)arg0 ;
-(id)_swooshViewController;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)swoosh:(id)arg0 imageForCellAtIndex:(NSInteger)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)_addImpressionForIndex:(NSInteger)arg0 toSession:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)swoosh:(id)arg0 didChangePlaybackState:(NSInteger)arg1 forItemAtIndex:(NSInteger)arg2 ;
-(void)swoosh:(id)arg0 didSelectCellAtIndex:(NSInteger)arg1 ;
-(void)swoosh:(id)arg0 willDisplayCellAtIndex:(NSInteger)arg1 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif