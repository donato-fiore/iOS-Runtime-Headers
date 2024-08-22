// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKPOLYLINEPATH_H
#define VKPOLYLINEPATH_H

@class NSArray, GEOComposedRouteSection;

#import <Foundation/Foundation.h>

#import "VKPolylineOverlay.h"

@interface VKPolylinePath : NSObject {
    VKPolylineOverlay *_overlay;
    vector<gm::Matrix<float, 3, 1>, std::allocator<gm::Matrix<float, 3, 1>>> _points;
    vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> _polylineCoordinates;
    BOOL _distanceSnapping;
    unsigned char _trafficSpeed;
    CGFloat _sectionLengthScaleFactor;
    GradientTraffic _gradientTraffic;
}


@property (readonly) BOOL hasCompletedMapMatching;
@property (readonly) BOOL isMapMatched;
@property (readonly, nonatomic) NSArray *matchedPathSegments; // ivar: _matchedPathSegments
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) *void points;
@property (readonly, nonatomic) *void polylineCoordinates;
@property (nonatomic) PolylineCoordinate routeEnd; // ivar: _routeEnd
@property (nonatomic) PolylineCoordinate routeStart; // ivar: _routeStart
@property (readonly, weak, nonatomic) GEOComposedRouteSection *section; // ivar: _section
@property (nonatomic) CGFloat startDistance; // ivar: _startDistance


-(float)laneHalfWidthAtIndex:(unsigned int)arg0 ;
-(id)description;
-(id)initWithOverlay:(id)arg0 section:(id)arg1 matchedPathSegments:(id)arg2 ;
-(id)initWithOverlay:(id)arg0 section:(id)arg1 routeStartIndex:(unsigned int)arg2 routeEndIndex:(unsigned int)arg3 matchedPathSegments:(id)arg4 ;
-(struct GradientTraffic *)gradientTrafficAtIndex:(unsigned int)arg0 ;
-(struct Matrix<float, 3, 1> )convertCoordinateToTile:(struct ? *)arg0 ;


@end


#endif