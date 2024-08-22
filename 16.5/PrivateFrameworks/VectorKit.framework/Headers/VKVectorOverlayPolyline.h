// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKVECTOROVERLAYPOLYLINE_H
#define VKVECTOROVERLAYPOLYLINE_H


#import <Foundation/Foundation.h>


@interface VKVectorOverlayPolyline : NSObject {
    vector<geo::Mercator2<double>, std::allocator<geo::Mercator2<double>>> _points;
    vector<double, std::allocator<double>> _elevations;
    unique_ptr<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>> _simplifiedGeometryCache;
    unfair_lock _simplifiedGeometryCacheLock;
}


@property (readonly, nonatomic) Range<signed char> worldIndexes; // ivar: _worldIndexes


-(id)initWithMapPoints:(struct ? *)arg0 elevations:(*CGFloat)arg1 count:(NSUInteger)arg2 ;
-(struct PolylineWithElevation )simplifiedGeometryAtZoomLevel:(unsigned char)arg0 ;


@end


#endif