// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALTTILEFETCHER_H
#define ALTTILEFETCHER_H

@class GEOTileLoader, NSString;

#import <Foundation/Foundation.h>


@interface AltTileFetcher : NSObject {
    GEOTileLoader *_geoTileLoader;
    _retain_ptr<GEOVectorTileDecoder *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _vectorTileDecoder;
    _retain_ptr<GEOApplicationAuditToken *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _auditToken;
    unordered_map<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, std::allocator<std::pair<const _GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>> _keyToJobMap;
    Mutex _mutex;
    unsigned int _numDownloads;
    NSString *_tileLoaderClientIdentifier;
}




-(id)initWithToken:(id)arg0 ;
-(struct shared_ptr<altitude::GeoServicesLoadJob> )getJobForKey:(struct _GEOTileKey *)arg0 ;
-(void)cancelJob:(*void)arg0 ;
-(void)cancelRequests;
-(void)fetchDataForJob:(*void)arg0 ;
-(void)purgeExpired:(CGFloat)arg0 ;
-(void)reportCorruptTile:(struct _GEOTileKey *)arg0 ;
-(void)updateJobPriority:(*void)arg0 ;


@end


#endif