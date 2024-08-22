// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLREGIONGATHERER_H
#define TSTCELLREGIONGATHERER_H


#import <Foundation/Foundation.h>


@interface TSTCellRegionGatherer : NSObject {
    TSTCellRegionGathererMap _gathererMap;
    unordered_map<TSUCellCoord, TSUCellRect, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSUCellRect>>> _originToRangeMap;
}


@property (nonatomic) TSUCellRect lastCellRangeAdded; // ivar: _lastCellRangeAdded
@property (nonatomic) BOOL mightOverlap; // ivar: _mightOverlap


+(id)gatherer;
-(id)gatheredCellRegion;
-(id)init;
-(id)p_gatherCellRegionViaCellRegionAddition;
-(id)p_gatherCellRegionViaReducedOverlap;
-(void)addColumns:(id)arg0 ;
-(void)addRange:(struct TSUCellRect )arg0 ;
-(void)addRegion:(id)arg0 ;
-(void)addRows:(id)arg0 ;
-(void)moveColumnsFromRange:(struct _NSRange )arg0 toIndex:(unsigned short)arg1 ;
-(void)moveRowsFromRange:(struct _NSRange )arg0 toIndex:(unsigned int)arg1 ;
-(void)p_addRange:(struct TSUCellRect )arg0 ;
-(void)p_cleanupStashedRangeIffExists;
-(void)removeColumns:(id)arg0 ;
-(void)removeRows:(id)arg0 ;


@end


#endif