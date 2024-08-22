// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKLABELNAVROADGRAPH_H
#define VKLABELNAVROADGRAPH_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VKLabelNavRoadGraph : NSObject {
    unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _tiles;
    unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _duplicateTiles;
    NSMutableDictionary *_tileDatasByIndex;
    NSMutableArray *_intersections;
    BOOL _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    Matrix<float, 2, 1> _unitHeading;
    BOOL _offRouteJunctionsValid;
    Box<double, 2> _offRouteJunctionSelectRect;
    NSMutableArray *_offRouteJunctions;
    PolylineCoordinate _routeUserOffset;
    BOOL _routeFeatureMapValid;
    unordered_map<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, geo::StdAllocator<std::pair<const std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>> _routeFeatureMap;
    BOOL _simplifiedRouteValid;
    vector<md::LabelPoint, geo::StdAllocator<md::LabelPoint, mdm::Allocator>> _simplifiedRoutePoints;
    NSUInteger _currentRoadStartSimplifiedPointIndex;
    BOOL _screenRouteValid;
    vector<RouteSegment, geo::StdAllocator<RouteSegment, mdm::Allocator>> _screenRouteSegments;
    NSUInteger _firstPOIAligningRouteSegment;
}


@property (retain, nonatomic) NSMutableArray *junctions; // ivar: _junctions


-(?)_junctionForRoadEdge:(?)arg0 atA:(?)arg1 routeOffsettile;
-(?)addRouteRoadEdge:(?)arg0 atA:(?)arg1 isRouteRefineJunction:(?)arg2 tilejunctionList;
-(BOOL)_checkIfDualCarriageWayConnectorRoad:(id)arg0 fromJunction:(id)arg1 toJunction:(id)arg2 checkShields:(BOOL)arg3 ;
-(BOOL)collideRouteWithLabel:(id)arg0 routeCrossProduct:(*float)arg1 context:(struct NavContext *)arg2 ;
-(BOOL)isPriorRouteCollinearWithRoad:(id)arg0 distance:(float)arg1 ;
-(BOOL)prepareOppositeCarriagewayJunctions;
-(NSUInteger)countReadyJunctionLists;
-(id)_findInterTileJunctionForJunction:(id)arg0 ;
-(id)_nextIntersectionForRoad:(id)arg0 ;
-(id)initWithJunctions:(id)arg0 ;
-(id)junctionForRoad:(id)arg0 nearJunction:(BOOL)arg1 crossTileEdge:(BOOL)arg2 ;
-(id)junctionListForDepth:(NSUInteger)arg0 ;
-(id)nextRoadSegmentForRoad:(id)arg0 ;
-(id)offRouteGraphJunctionsWithNavContext:(struct NavContext *)arg0 maxJunctions:(NSUInteger)arg1 isOnRoute:(BOOL)arg2 ;
-(id)offRouteJunctionList;
-(id)oppositeCarriagewayJunctions;
-(id)overpassJunctionForJunction:(id)arg0 ;
-(struct Matrix<float, 2, 1> )unitHeading;
-(unsigned char)computeRoutePositionForPOIAtPixel:(*void)arg0 currentPosition:(unsigned char)arg1 context:(struct NavContext *)arg2 ;
-(void)_findOffRouteJunctions;
-(void)_transformRouteToScreenWithContext:(struct NavContext *)arg0 ;
-(void)_updateIntersectionsForDepth:(NSUInteger)arg0 ;
-(void)_updateSimplifiedRoute;
-(void)debugDraw:(id)arg0 overlayConsole:(*void)arg1 navContext:(struct NavContext *)arg2 ;
-(void)evaluateDualCarriagewayForJunction:(id)arg0 outputJunctionList:(id)arg1 ;
-(void)reset;
-(void)routeJunctionsHaveChanged;
-(void)setTiles:(*void)arg0 ;
-(void)startingLabelLayoutWithContext:(struct NavContext *)arg0 routeUserOffset:(struct PolylineCoordinate )arg1 ;


@end


#endif