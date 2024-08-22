// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISWOOSHARTWORKLOADER_H
#define SKUISWOOSHARTWORKLOADER_H

@class NSMapTable, NSMutableIndexSet, UIImage, NSString;
@protocol SKUIArtworkRequestDelegate;

#import <Foundation/Foundation.h>

#import "SKUIResourceLoader.h"
#import "SKUIImageDataConsumer.h"
#import "SKUISwooshViewController.h"

@interface SKUISwooshArtworkLoader : NSObject <SKUIArtworkRequestDelegate>

 {
    NSMapTable *_artworkRequestIDs;
    NSMutableIndexSet *_outstandingRequestIDs;
    UIImage *_placeholderImage;
}


@property (readonly, nonatomic) SKUIResourceLoader *artworkLoader; // ivar: _artworkLoader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIImageDataConsumer *imageDataConsumer; // ivar: _imageDataConsumer
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUISwooshViewController *swooshViewController; // ivar: _swooshViewController


-(BOOL)loadImageForObject:(id)arg0 URL:(id)arg1 reason:(NSInteger)arg2 ;
-(BOOL)loadImageForObject:(id)arg0 artworkRequest:(id)arg1 reason:(NSInteger)arg2 ;
-(NSUInteger)artworkRequestIdentifierForObject:(id)arg0 ;
-(id)cachedImageForObject:(id)arg0 ;
-(id)initWithArtworkLoader:(id)arg0 swoosh:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)cancelImageLoading;
-(void)deprioritizePendingImageLoads;
-(void)loadImagesForNextPageWithReason:(NSInteger)arg0 ;
-(void)setImage:(id)arg0 forRequest:(id)arg1 ;
-(void)setPlaceholderColorWithColorScheme:(id)arg0 ;


@end


#endif