// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKROUTELINE_H
#define VKROUTELINE_H

@class NSSet, GEOComposedRoute, NSMutableArray, GEOPathMatcher;
@protocol VKRouteLineObserverProtocol;

#import <Foundation/Foundation.h>

#import "VKPolylineOverlay.h"
#import "VKPolylineOverlayRenderRegion.h"

@interface VKRouteLine : NSObject {
    BOOL _matchToRoads;
    Box<double, 3> _bounds;
    Matrix<double, 4, 4> _inverseMatrix;
    CGFloat _boundsUnitsPerMeter;
    CGFloat _metersPerPoint;
    CGFloat _viewUnitsPerPoint;
    vector<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> _sections;
    fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> _userLocationSection;
    PolylineCoordinate _userLocationIndex;
    Matrix<float, 2, 1> _userLocation;
    _retain_ptr<NSUUID *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _revisionIdentifier;
    CGFloat _lastTrafficTimeStamp;
    NSSet *_retainedMatchedSegment;
    ManeuverArrowCoordinates _maneuverArrowCoordinates;
    CGFloat _builtViewUnitsPerPoint;
}


@property ? bounds;
@property (readonly, nonatomic) CGFloat boundsInWorldUnit; // ivar: _boundsInWorldUnit
@property (readonly, nonatomic) GEOComposedRoute *composedRoute;
@property BOOL hasNewRoadMatches; // ivar: _hasNewRoadMatches
@property (retain) NSMutableArray *matchedSegments; // ivar: _matchedSegments
@property (nonatomic) unsigned int matchingEndIndex; // ivar: _matchingEndIndex
@property (nonatomic) unsigned int matchingStartIndex; // ivar: _matchingStartIndex
@property unsigned short numPathsMatching; // ivar: _numPathsMatching
@property (weak, nonatomic) NSObject<VKRouteLineObserverProtocol> *observer; // ivar: _observer
@property (readonly, nonatomic) VKPolylineOverlay *overlay; // ivar: _overlay
@property (readonly, nonatomic) GEOPathMatcher *pathMatcher; // ivar: _pathMatcher
@property (readonly, nonatomic) VKPolylineOverlayRenderRegion *renderRegion; // ivar: _renderRegion
@property ? sections;
@property (nonatomic) CGFloat simplificationEpsilonPoints; // ivar: _simplificationEpsilonPoints


-(BOOL)buildRouteLine:(id)arg0 matchToRoads:(BOOL)arg1 shouldGenerateSnapPath:(BOOL)arg2 viewUnitsPerPoint:(CGFloat)arg3 force:(BOOL)arg4 boundsInflation:(float)arg5 isGradientTraffic:(BOOL)arg6 currentLegIndex:(unsigned int)arg7 ;
-(BOOL)isTrafficUptoDate:(CGFloat)arg0 ;
-(BOOL)needsUpdateForViewingScale:(CGFloat)arg0 ;
-(id)initWithPolylineOverlay:(id)arg0 ;
-(struct optional<VKRouteLineSnapResult> )snapRouteMatch:(id)arg0 ;
-(void)_updateBounds:(id)arg0 boundsInflation:(float)arg1 ;
-(void)_updateTilesCovered:(id)arg0 ;
-(void)createMeshIfNecessary:(NSInteger)arg0 ;
-(void)forEachSection:(id)arg0 ;
-(void)generateArrowsForManeuverDisplayMode:(int)arg0 routeLineWidth:(CGFloat)arg1 ;
-(void)splitRouteLineAtAnnotation:(id)arg0 ;


@end


#endif