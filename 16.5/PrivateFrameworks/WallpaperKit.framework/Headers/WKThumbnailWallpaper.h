// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKTHUMBNAILWALLPAPER_H
#define WKTHUMBNAILWALLPAPER_H

@class UIImage, NSURL;


#import "WKAbstractWallpaper.h"

@interface WKThumbnailWallpaper : WKAbstractWallpaper

@property (retain, nonatomic) UIImage *_thumbnailImage; // ivar: __thumbnailImage
@property (copy, nonatomic) NSURL *thumbnailImageURL; // ivar: _thumbnailImageURL


+(id)na_identity;
-(BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsCopying;
-(BOOL)supportsSerialization;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 type:(NSUInteger)arg2 representedType:(NSUInteger)arg3 backingType:(NSUInteger)arg4 thumbnailImageURL:(id)arg5 ;
-(id)propertyListRepresentation;
-(id)thumbnailImage;


@end


#endif