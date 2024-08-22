// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKVECTOROVERLAYPOLYGON_H
#define VKVECTOROVERLAYPOLYGON_H


#import <Foundation/Foundation.h>


@interface VKVectorOverlayPolygon : NSObject {
    ? _geometry;
    unique_ptr<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>>> _simplifiedGeometryCache;
    unfair_lock _simplifiedGeometryCacheLock;
}


@property (readonly, nonatomic) Range<signed char> worldIndexes; // ivar: _worldIndexes


-(id)initWithMapPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(struct shared_ptr<geo::Polygon2<double>> )simplifiedGeometryAtZoomLevel:(unsigned char)arg0 ;


@end


#endif