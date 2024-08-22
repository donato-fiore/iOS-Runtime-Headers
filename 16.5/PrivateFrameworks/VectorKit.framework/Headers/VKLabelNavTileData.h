// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKLABELNAVTILEDATA_H
#define VKLABELNAVTILEDATA_H

@class NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VKLabelNavTileData : NSObject {
    NSMapTable *_geoJunctionToJunctionMap;
    NSMutableArray *_tileEdgeJunctions;
    BOOL _foundTileEdgeJunctions;
    vector<LabelNavJunctionInfo, geo::StdAllocator<LabelNavJunctionInfo, mdm::Allocator>> _junctionInfos;
}


@property (readonly, retain, nonatomic) NSMutableArray *oppositeCarriagewayJunctions; // ivar: _oppositeCarriagewayJunctions
@property (nonatomic) BOOL oppositeCarriagewayJunctionsValid; // ivar: _oppositeCarriagewayJunctionsValid
@property (readonly, nonatomic) *void tile; // ivar: _tile


-(id)findTileEdgeJunctionAtCoordinate:(struct Matrix<float, 2, 1> )arg0 ;
-(id)initWithTile:(*void)arg0 ;
-(id)junctionAtCoordinate:(struct Matrix<float, 2, 1> )arg0 ;
-(id)junctionForGeoJunction:(struct GeoCodecsConnectivityJunction *)arg0 ;
-(void)_findTileEdgeJunctions;
-(void)addJunction:(id)arg0 ;
-(void)appendNavJunctionsInWorldRect:(*void)arg0 junctions:(id)arg1 ;
-(void)findOppositeCarriagewayJunctionsWithRouteFeatures:(*void)arg0 distanceThreshold:(CGFloat)arg1 ;
-(void)initializeJunctionInfos;


@end


#endif