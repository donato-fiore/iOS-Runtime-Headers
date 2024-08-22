// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKWALLPAPERBUNDLE_H
#define WKWALLPAPERBUNDLE_H

@class NSURL, UIImage, NSMutableDictionary, NSString, NADescriptionBuilder;
@protocol NAIdentifiable, WKDescribable, WKWallpaperRepresenting;

#import <Foundation/Foundation.h>


@interface WKWallpaperBundle : NSObject <NAIdentifiable, WKDescribable, WKWallpaperRepresenting>



@property (copy, nonatomic) NSURL *_bundleURL; // ivar: __bundleURL
@property (nonatomic) BOOL _hasCalculatedSupportsSerialization; // ivar: __hasCalculatedSupportsSerialization
@property (nonatomic) BOOL _supportsSerialization; // ivar: __supportsSerialization
@property (retain, nonatomic) UIImage *_thumbnailImage; // ivar: __thumbnailImage
@property (retain, nonatomic) NSMutableDictionary *_wallpaperAssetLookup; // ivar: __wallpaperAssetLookup
@property (readonly, nonatomic, getter=isAppearanceAware) BOOL appearanceAware; // ivar: _appearanceAware
@property (readonly, nonatomic) NSUInteger contentSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *descriptionBuilderBlock;
@property (readonly, nonatomic) BOOL disableModifyingLegibilityBlur; // ivar: _disableModifyingLegibilityBlur
@property (readonly, nonatomic) BOOL disableParallax; // ivar: _disableParallax
@property (readonly, nonatomic, getter=hasDistinctWallpapersForLocations) BOOL distinctWallpapersForLocations; // ivar: _distinctWallpapersForLocations
@property (readonly, nonatomic, getter=isDynamicWallpaperBundle) BOOL dynamicWallpaperBundle; // ivar: _dynamicWallpaperBundle
@property (readonly, copy, nonatomic) NSString *family; // ivar: _family
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly, copy, nonatomic) NSString *logicalScreenClass; // ivar: _logicalScreenClass
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isOffloaded) BOOL offloaded; // ivar: _offloaded
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL; // ivar: _thumbnailImageURL
@property (readonly, nonatomic) NSInteger version; // ivar: _version
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;


+(BOOL)shouldLoadWallpaperBundleAtURL:(id)arg0 ;
+(id)_createWallpaperBundleInDirectory:(id)arg0 version:(NSInteger)arg1 identifier:(NSInteger)arg2 name:(id)arg3 family:(id)arg4 disableParallax:(BOOL)arg5 isOffloaded:(BOOL)arg6 logicalScreenClass:(id)arg7 thumbnailImageURL:(id)arg8 assetMapping:(id)arg9 ;
+(id)createTemporaryWallpaperBundleWithImages:(id)arg0 videoAssetURLs:(id)arg1 wallpaperOptions:(id)arg2 error:(*id)arg3 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)wallpaperBackingTypeForLocation:(id)arg0 ;
-(id)_bokehWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_colorWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_layeredAnimationWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_layeredStillWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_layeredStripeWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_layeredThumbnailWallpaperWithMetadataDictionary:(id)arg0 representedType:(NSUInteger)arg1 wallpaperAppearance:(id)arg2 ;
-(id)_liveWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_processCommonFileBackedWallpaperMetadataWithDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_processCommonWallpaperMetadataWithDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_stillWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_stripeWallpaperWithMetadataDictionary:(id)arg0 wallpaperAppearance:(id)arg1 ;
-(id)_thumbnailWallpaperWithMetadataDictionary:(id)arg0 representedType:(NSUInteger)arg1 wallpaperAppearance:(id)arg2 ;
-(id)copyWallpaperRepresentingToDestinationDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileBasedWallpaperForLocation:(id)arg0 ;
-(id)fileBasedWallpaperForLocation:(id)arg0 andAppearance:(id)arg1 ;
-(id)initWithDynamicDictionary:(id)arg0 identifier:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)thumbnailRepresentableForLocation:(id)arg0 ;
-(id)thumbnailRepresentableForLocation:(id)arg0 andAppearance:(id)arg1 ;
-(id)valueBasedWallpaperForLocation:(id)arg0 ;
-(id)valueBasedWallpaperForLocation:(id)arg0 andAppearance:(id)arg1 ;
-(void)_loadBundle;
-(void)_loadDynamicWallpaper:(id)arg0 ;
-(void)_processAssetDictionary:(id)arg0 forLocation:(id)arg1 ;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg0 ;


@end


#endif