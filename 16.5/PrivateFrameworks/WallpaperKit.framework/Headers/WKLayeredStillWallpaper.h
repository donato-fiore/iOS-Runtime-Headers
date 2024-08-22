// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKLAYEREDSTILLWALLPAPER_H
#define WKLAYEREDSTILLWALLPAPER_H



#import "WKLayeredThumbnailWallpaper.h"
#import "WKLayeredStillWallpaperInput.h"

@interface WKLayeredStillWallpaper : WKLayeredThumbnailWallpaper

@property (retain, nonatomic) WKLayeredStillWallpaperInput *_wallpaperValue; // ivar: __wallpaperValue


+(id)na_identity;
-(BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsSerialization;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 backgroundThumbnailImageURL:(id)arg2 foregroundThumbnailImageURL:(id)arg3 floatingThumbnailImageURL:(id)arg4 backgroundFullSizeImageURL:(id)arg5 foregroundFullSizeImageURL:(id)arg6 floatingFullSizeImageURL:(id)arg7 ;
-(id)propertyListRepresentation;
-(id)wallpaperValue;


@end


#endif