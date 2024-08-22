// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKLIVEWALLPAPER_H
#define WKLIVEWALLPAPER_H

@class NSURL, NSString, UIImage;
@protocol WKFileBasedWallpaper;


#import "WKStillWallpaper.h"

@interface WKLiveWallpaper : WKStillWallpaper <WKFileBasedWallpaper>



@property (readonly, nonatomic) NSUInteger backingType;
@property (readonly, copy, nonatomic) NSURL *fullsizeImageURL;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger representedType;
@property (nonatomic) CGFloat stillTimeInVideo; // ivar: _stillTimeInVideo
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) NSUInteger type;
@property (copy, nonatomic) NSURL *videoAssetURL; // ivar: _videoAssetURL


+(id)na_identity;
-(BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 type:(NSUInteger)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4 videoAssetURL:(id)arg5 stillTimeInVideo:(CGFloat)arg6 ;
-(id)propertyListRepresentation;


@end


#endif