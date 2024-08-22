// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKPHOTOASSETWALLPAPER_H
#define WKPHOTOASSETWALLPAPER_H

@class PHAsset, NSString, UIImage, NSURL;
@protocol WKValueBasedWallpaper;


#import "WKAbstractWallpaper.h"

@interface WKPhotoAssetWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>



@property (retain, nonatomic) PHAsset *_asset; // ivar: __asset
@property (readonly, nonatomic) NSUInteger backingType;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger representedType;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) NSUInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPhotoAsset:(id)arg0 ;
-(id)wallpaperValue;


@end


#endif