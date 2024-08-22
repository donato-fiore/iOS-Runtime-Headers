// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKSHAREDRESOURCES_H
#define VKSHAREDRESOURCES_H

@class NSString;
@protocol GEOResourceManifestTileGroupObserver;

#import <Foundation/Foundation.h>

#import "VKInternalIconManager.h"
#import "VKResourceManager.h"

@interface VKSharedResources : NSObject <GEOResourceManifestTileGroupObserver>

 {
    _retain_ptr<VKInternalIconManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _iconManager;
    shared_ptr<md::TextureManager> _textureManager;
    ? _materialTextureManager;
    _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _resourceManager;
    shared_ptr<md::DataOverrideManager> _dataOverrideManager;
    ? _standardCommandBufferSelector;
    ? _realisticCommandBufferSelector;
    unique_ptr<md::Device, std::default_delete<md::Device>> _device;
    unique_ptr<ggl::AlphaAtlas, std::default_delete<ggl::AlphaAtlas>> _alphaAtlas;
    unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> _highInflationAlphaAtlas;
    unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> _isoAlphaAtlas;
    unique_ptr<ggl::DistanceAtlas, std::default_delete<ggl::DistanceAtlas>> _distanceAtlas;
    shared_ptr<ggl::StandardLibrary> _shaderLibrary;
    *CMPhotoDecompressionSession _defaultDecompressionSession;
    read_write_lock _figCreationLock;
    shared_ptr<md::GeoResourceProvider> _resourceProvider;
    shared_ptr<grl::IconManager> _grlIconManager;
    ? _grlFontManager;
    unsigned int _referenceCount;
}


@property (readonly, nonatomic) *void alphaAtlas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) *CMPhotoDecompressionSession defaultDecompressionSession;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *void device;
@property (readonly, nonatomic) *void distanceAtlas;
@property (readonly, nonatomic) *void gglDevice;
@property (readonly, nonatomic) shared_ptr<grl::FontManager> grlFontManager;
@property (readonly, nonatomic) *void grlIconManager;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void highInflationAlphaAtlas;
@property (readonly, nonatomic) VKInternalIconManager *iconManager;
@property (readonly, nonatomic) *void isoAlphaAtlas;
@property (readonly, nonatomic) shared_ptr<md::MaterialTextureManager> materialTextureManager;
@property (readonly, nonatomic) shared_ptr<md::RealisticCommandBufferSelector> realisticCommandBufferSelector;
@property (readonly, nonatomic) VKResourceManager *resourceManager;
@property (readonly, nonatomic) *void shaderLibrary;
@property (nonatomic) BOOL snapshotterIsInService; // ivar: _snapshotterIsInService
@property (readonly, nonatomic) shared_ptr<md::StandardCommandBufferSelector> standardCommandBufferSelector;
@property (readonly, nonatomic) shared_ptr<md::StylesheetVendor> stylesheetVendor; // ivar: _stylesheetVendor
@property (readonly) Class superclass;
@property (readonly, nonatomic) shared_ptr<md::TextureManager> textureManager;


-(*void)dataOverrideManager;
-(BOOL)_hasResourceUsers;
-(id)_initWithDevice:(*void)arg0 standardLibrary:(*void)arg1 ;
-(void)_addResourceUser;
-(void)_removeResourceUser;
-(void)dealloc;
-(void)purge;
-(void)purgeDecompressSessionCachedBuffers;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;
-(void)startDecompressionSession;


@end


#endif