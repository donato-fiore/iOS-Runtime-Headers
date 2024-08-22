// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKCOLORWALLPAPER_H
#define WKCOLORWALLPAPER_H

@class UIImage, UIColor, NSString, NSURL;
@protocol WKValueBasedWallpaper;


#import "WKAbstractWallpaper.h"

@interface WKColorWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>



@property (retain, nonatomic) UIImage *_thumbnailImage; // ivar: __thumbnailImage
@property (retain, nonatomic) UIColor *_wallpaperValue; // ivar: __wallpaperValue
@property (readonly, nonatomic) NSUInteger backingType;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger representedType;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) NSUInteger type;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 color:(id)arg2 ;
-(id)propertyListRepresentation;
-(id)wallpaperValue;


@end


#endif