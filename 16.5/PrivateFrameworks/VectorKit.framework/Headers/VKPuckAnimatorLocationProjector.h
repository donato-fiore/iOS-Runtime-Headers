// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKPUCKANIMATORLOCATIONPROJECTOR_H
#define VKPUCKANIMATORLOCATIONPROJECTOR_H

@class GEORouteMatch;

#import <Foundation/Foundation.h>


@interface VKPuckAnimatorLocationProjector : NSObject {
    Matrix<double, 3, 1> _projectedPosition;
    optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> _currentSnappedSegment;
    PolylineCoordinate _maxTravelledCoordinate;
}


@property (nonatomic) BOOL alwaysUseGoodRouteMatch; // ivar: _alwaysUseGoodRouteMatch
@property ? currentSnappedSegment;
@property (readonly, nonatomic) optional<double> elevationInProjectedPostion; // ivar: _elevationInProjectedPosition
@property (readonly, nonatomic) BOOL isProjectedPositionBehind; // ivar: _isProjectedPositionBehind
@property (readonly, nonatomic) CGFloat projectedCourse; // ivar: _projectedCourse
@property (readonly, nonatomic) ? projectedLocation;
@property (readonly, nonatomic) BOOL projectedLocationOnRoute;
@property ? projectedPosition;
@property (retain, nonatomic) GEORouteMatch *projectedRouteMatch; // ivar: _projectedRouteMatch
@property (retain, nonatomic) GEORouteMatch *routeMatch; // ivar: _routeMatch


-(void)_updateCourseAndPositionFromRouteMatch:(id)arg0 ;
-(void)projectFromLocation:(id)arg0 routeMatch:(id)arg1 speedMultiplier:(CGFloat)arg2 routeLine:(id)arg3 ;


@end


#endif