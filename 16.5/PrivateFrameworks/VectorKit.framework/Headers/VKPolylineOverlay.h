// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKPOLYLINEOVERLAY_H
#define VKPOLYLINEOVERLAY_H

@class GEOMapRegion, GEOComposedRoute, NSString, GEOComposedRouteTraffic;
@protocol VKRouteOverlay, GEOComposedRouteObserver, VKPolylineOverlayRouteRibbonObserver;

#import <Foundation/Foundation.h>

#import "VKRouteLine.h"

@interface VKPolylineOverlay : NSObject <VKRouteOverlay, GEOComposedRouteObserver>

 {
    *__CFSet _observers;
    BOOL _isReadyForSnapping;
    unique_ptr<md::TrafficSegmentsAlongRoute, std::default_delete<md::TrafficSegmentsAlongRoute>> _trafficSegments;
}


@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property (readonly, nonatomic) GEOComposedRoute *composedRoute; // ivar: _composedRoute
@property (readonly, nonatomic) BOOL containsTransit;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFocus; // ivar: _hasFocus
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) VKRouteLine *routeRibbon; // ivar: _routeRibbon
@property (weak, nonatomic) NSObject<VKPolylineOverlayRouteRibbonObserver> *routeRibbonObserver; // ivar: _routeRibbonObserver
@property (nonatomic) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL showTraffic; // ivar: _showTraffic
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOComposedRouteTraffic *traffic; // ivar: _traffic
@property (readonly, nonatomic) CGFloat trafficTimeStamp; // ivar: _trafficTimeStamp


-(?)createDebugNode;
-(BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg0 end:(unsigned int)arg1 ;
-(BOOL)isSnappingForSceneTiles;
-(id)getPathsForRenderRegion:(id)arg0 shouldSnapToRoads:(BOOL)arg1 shouldGenerateSnapPath:(BOOL)arg2 verifySnapping:(BOOL)arg3 isGradientTraffic:(BOOL)arg4 observer:(id)arg5 ;
-(id)initWithComposedRoute:(id)arg0 traffic:(id)arg1 ;
-(struct _NSRange )sectionRangeForBounds:(struct Box<double, 2> )arg0 ;
-(void)_setNeedsLayout;
-(void)addObserver:(id)arg0 ;
-(void)clearSnappedPathsForObserver:(id)arg0 ;
-(void)composedRoute:(id)arg0 appliedTransitRouteUpdates:(id)arg1 ;
-(void)composedRoute:(id)arg0 changedSelectedRideInClusteredSegment:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3 ;
-(void)composedRoute:(id)arg0 selectedSections:(id)arg1 deselectedSections:(id)arg2 ;
-(void)composedRouteUpdatedSnappedPaths:(id)arg0 ;
-(void)createMatchedSegmentAndAddToPaths:(id)arg0 section:(id)arg1 pathStartIndex:(unsigned int)arg2 pathEndIndex:(unsigned int)arg3 shouldGenerateSnapPath:(BOOL)arg4 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)updateTraffic:(id)arg0 ;


@end


#endif