// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKLAYEREDSTILLWALLPAPERINPUT_H
#define WKLAYEREDSTILLWALLPAPERINPUT_H

@class NSURL;


#import "WKLayeredThumbnailWallpaperInput.h"

@interface WKLayeredStillWallpaperInput : WKLayeredThumbnailWallpaperInput

@property (readonly, copy, nonatomic) NSURL *backgroundFullSizeImageURL; // ivar: _backgroundFullSizeImageURL
@property (readonly, copy, nonatomic) NSURL *floatingFullSizeImageURL; // ivar: _floatingFullSizeImageURL
@property (readonly, copy, nonatomic) NSURL *foregroundFullSizeImageURL; // ivar: _foregroundFullSizeImageURL


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithBackgroundThumbnailImageURL:(id)arg0 foregroundThumbnailImageURL:(id)arg1 floatingThumbnailImageURL:(id)arg2 backgroundFullSizeImageURL:(id)arg3 foregroundFullSizeImageURL:(id)arg4 floatingFullSizeImageURL:(id)arg5 ;
-(id)wk_descriptionBuilder;


@end


#endif