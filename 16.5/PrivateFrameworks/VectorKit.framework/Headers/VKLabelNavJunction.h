// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKLABELNAVJUNCTION_H
#define VKLABELNAVJUNCTION_H

@class NSString, NSArray;
@protocol VKLabelNavFeature;

#import <Foundation/Foundation.h>

#import "VKLabelNavRoad.h"
#import "VKLabelNavRoadLabel.h"
#import "VKLabelNavJunction.h"

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature>

 {
    Matrix<float, 2, 1> _tileCoordinate;
    Matrix<float, 2, 1> _sharedRouteDirection;
    BOOL _foundRoads;
    int _largestRoadClass;
    *void _labelFeature;
    BOOL _areLabelsDisabled;
    BOOL _cachedSignVisibility;
    BOOL _isVisibilityCached;
    CGFloat _sortValue;
}


@property (nonatomic) NSUInteger depthFromRoute; // ivar: _depthFromRoute
@property (nonatomic) float distanceFromPreviousShieldLabel; // ivar: _distanceFromPreviousShieldLabel
@property (readonly, nonatomic) *GeoCodecsConnectivityJunction geoJunction; // ivar: _geoJunction
@property (readonly, nonatomic) BOOL hasSharedRouteDirection; // ivar: _hasSharedRouteDirection
@property (readonly, weak, nonatomic) VKLabelNavRoad *incomingRoad; // ivar: _incomingRoad
@property (readonly, nonatomic) NSInteger intraRoadPriorityForRoadLabel;
@property (readonly, nonatomic) NSInteger intraRoadPriorityForShieldLabel;
@property (readonly, nonatomic) BOOL isAwayFromRoute;
@property (readonly, nonatomic) BOOL isEtaFeature;
@property (readonly, nonatomic) BOOL isGuidanceStepStart;
@property (readonly, nonatomic) BOOL isInGuidance;
@property (readonly, nonatomic) BOOL isIntersection;
@property (readonly, nonatomic) BOOL isIntraRamp;
@property (readonly, nonatomic) BOOL isMultiRoadIntersection;
@property (readonly, nonatomic) BOOL isOffRouteGraph;
@property (nonatomic) BOOL isOnDualCarriageway; // ivar: _isOnDualCarriageway
@property (readonly, nonatomic) BOOL isOnRoute;
@property (readonly, nonatomic) BOOL isOverpass; // ivar: _isOverpass
@property (nonatomic) BOOL isPicked; // ivar: _isPicked
@property (readonly, nonatomic) BOOL isRamp;
@property (readonly, nonatomic) BOOL isRoadTerminus;
@property (nonatomic) BOOL isRouteOverpass; // ivar: _isRouteOverpass
@property (nonatomic) BOOL isRouteRefineJunction; // ivar: _isRouteRefineJunction
@property (readonly, nonatomic) BOOL isStartOfRoadName;
@property (readonly, nonatomic) BOOL isTileEdgeJunction;
@property (readonly, nonatomic) BOOL isTrafficCameraFeature;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isVisible; // ivar: _isVisible
@property (readonly, nonatomic) VKLabelNavRoadLabel *junctionSign; // ivar: _junctionSign
@property (readonly, nonatomic) int largestRoadClass;
@property (readonly, nonatomic) *void mercatorCoordinate; // ivar: _mercatorCoordinate
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, weak, nonatomic) VKLabelNavRoad *outgoingRoad; // ivar: _outgoingRoad
@property (weak, nonatomic) VKLabelNavJunction *overpassJunction; // ivar: _overpassJunction
@property (nonatomic) int preferredLabelPlacement; // ivar: _preferredLabelPlacement
@property (readonly, nonatomic) int requiredLabelPlacement;
@property (readonly, nonatomic) NSArray *roads; // ivar: _roads
@property (nonatomic) PolylineCoordinate routeOffset; // ivar: _routeOffset
@property ? sharedRouteDirection;
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (readonly, nonatomic) *void tile; // ivar: _tile
@property ? tileCoordinate;
@property (readonly, nonatomic) CGFloat worldUnitsPerMeter; // ivar: _worldUnitsPerMeter


-(BOOL)matchesLocationForJunction:(id)arg0 ;
-(struct Mercator3<double> )_anchorCoordinateForSignOrientation:(unsigned char)arg0 ;
-(unsigned char)_signOrientationWithDrivingSide:(BOOL)arg0 ;
-(void)_updateWithNavContext:(struct NavContext *)arg0 ;
-(void)_updateWithNavContext:(struct NavContext *)arg0 threshold:(CGFloat)arg1 ;
-(void)addRouteEdge:(struct VKLabelNavRouteRoadEdge *)arg0 atA:(BOOL)arg1 ;
-(void)createLabelWithNavContext:(struct NavContext *)arg0 isDrivingSideRight:(BOOL)arg1 artworkCache:(*void)arg2 ;
-(void)evaluateCrossStreetsUsingRouteJunction:(id)arg0 ;
-(void)layoutWithNavContext:(struct NavContext *)arg0 ;
-(void)prepareStyleVarsWithContext:(struct NavContext *)arg0 ;


@end


#endif