// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDGPUVORONOITRIANGLEDATA_H
#define TSDGPUVORONOITRIANGLEDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSDGPUVoronoiTriangleData : NSObject {
    *NSUInteger _triangleIndexToCellIndexMappingTable;
    *NSUInteger _triangleIndexToCellTriangleIndexMappingTable;
    NSUInteger _triangleIndexToCellMappingTableCount;
}


@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) NSUInteger cellCount;
@property (readonly, nonatomic) NSArray *cells; // ivar: _cells
@property (readonly, nonatomic) NSUInteger triangleCount; // ivar: _triangleCount


-(NSUInteger)cellIndexFromTriangleIndex:(NSUInteger)arg0 ;
-(NSUInteger)triangleIndexInCellFromGlobalTriangleIndex:(NSUInteger)arg0 ;
-(id)cellFromTriangleIndex:(NSUInteger)arg0 ;
-(id)initWithPoints:(NSUInteger)arg0 clippedToRect:(struct CGRect )arg1 percentOfCellsToSplit:(CGFloat)arg2 randomGenerator:(id)arg3 ;
-(void)dealloc;
-(void)p_setupDataWithPointCount:(NSUInteger)arg0 clippedToRect:(struct CGRect )arg1 percentOfCellsToSplit:(CGFloat)arg2 randomGenerator:(id)arg3 ;


@end


#endif