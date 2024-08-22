// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCOLUMNROWUIDMAP_H
#define TSTCOLUMNROWUIDMAP_H

@class TSPObject;
@protocol TSCEColumnRowUIDMapping;


#import "TSTColumnRowUIDMapper.h"

@interface TSTColumnRowUIDMap : TSPObject <TSCEColumnRowUIDMapping>

 {
    ? _columnUidForIndex;
    ? _rowUidForIndex;
    unordered_map<TSKUIDStruct, unsigned short, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned short>>> _columnIndexForUid;
    unordered_map<TSKUIDStruct, unsigned int, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned int>>> _rowIndexForUid;
    TSTColumnRowUIDMapper *_copyOnWriteUIDMapper;
}


@property (readonly, nonatomic) unsigned short numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) TSUCellRect range;
@property (readonly, nonatomic) NSUInteger versionCounter; // ivar: _versionCounter


-(*void)columnUIDs;
-(*void)rowUIDs;
-(?)columnUIDsForColumnIndexes;
-(?)columnUIDsForColumnRange;
-(?)orderedColumnUidsFromUids;
-(?)orderedRowUidsFromUids;
-(?)prunedColumnUIDsFromColumnUIDs;
-(?)prunedRowUIDsFromRowUIDs;
-(?)rowUIDsForRowIndexes;
-(?)rowUIDsForRowRange;
-(BOOL)_checkStructure;
-(BOOL)isEmpty;
-(BOOL)writeCellIDsInCellUIDList:(id)arg0 toVector:(*void)arg1 prunedCellUIDs:(*void)arg2 ;
-(id)UIDSetForIndexes:(id)arg0 isRows:(BOOL)arg1 ;
-(id)cellRegionForUIDRange:(*void)arg0 ;
-(id)cellTractRefForUIDRectRef:(id)arg0 ;
-(id)columnIndexesForUIDs:(*void)arg0 ;
-(id)columnUuids;
-(id)copyOnWriteUIDMapper;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 columnUIDs:(*void)arg1 rowUIDs:(*void)arg2 ;
-(id)initWithContext:(id)arg0 tableUUID:(id)arg1 numberOfRows:(unsigned int)arg2 numberOfColumns:(unsigned int)arg3 ;
-(id)mutableColumnIndexesForUIDs:(*void)arg0 ;
-(id)mutableIndexesForUIDSet:(id)arg0 isRows:(BOOL)arg1 ;
-(id)mutableIndexesForUIDSet:(id)arg0 isRows:(BOOL)arg1 notFoundUIDs:(id)arg2 ;
-(id)mutableRowIndexesForUIDs:(*void)arg0 ;
-(id)p_mutableColumnIndexesForUIDSet:(id)arg0 notFoundUIDs:(id)arg1 ;
-(id)p_mutableRowIndexesForUIDSet:(id)arg0 notFoundUIDs:(id)arg1 ;
-(id)rowIndexesForUIDs:(*void)arg0 ;
-(id)rowUuids;
-(id)uidRectRefForCellTractRef:(id)arg0 ;
-(struct TSCERangeCoordinate )tableRangeCoordinate;
-(struct TSKUIDStruct )columnUIDForColumnIndex:(unsigned short)arg0 ;
-(struct TSKUIDStruct )firstUidFromUIDSet:(id)arg0 isRows:(BOOL)arg1 ;
-(struct TSKUIDStruct )rowUIDForRowIndex:(unsigned int)arg0 ;
-(struct TSKUIDStructCoord )cellUIDForCellID:(struct TSUCellCoord )arg0 ;
-(struct TSKUIDStructTract )cellUIDRangeForCellRange:(struct TSUCellRect )arg0 ;
-(struct TSUCellCoord )cellIDForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(struct TSUCellRect )cellRangeForUIDRange:(*void)arg0 ;
-(struct _NSRange )columnRangeForUIDs:(*void)arg0 ;
-(struct _NSRange )rowRangeForUIDs:(*void)arg0 ;
-(unsigned int)rowIndexForRowUID:(struct TSKUIDStruct )arg0 ;
-(unsigned int)rowIndexForUUIDBytes:(unsigned char)arg0 ;
-(unsigned short)columnIndexForColumnUID:(struct TSKUIDStruct )arg0 ;
-(unsigned short)columnIndexForUUIDBytes:(unsigned char)arg0 ;
-(void)applyMap:(*void)arg0 toRows:(BOOL)arg1 ;
-(void)assertCollaborationConvergence;
-(void)convertCellUIDLookupList:(id)arg0 toCellRangeVector:(*void)arg1 prunedSummaryCellUIDs:(*void)arg2 ;
-(void)getUUIDBytes:(unsigned char)arg0 forColumnIndex:(unsigned short)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg0 forRowIndex:(unsigned int)arg1 ;
-(void)incrementVersionCounter;
-(void)insertColumnsWithUIDs:(*void)arg0 atIndex:(unsigned short)arg1 ;
-(void)insertNewColumnsInIndexRange:(struct _NSRange )arg0 ;
-(void)insertNewRowsInIndexRange:(struct _NSRange )arg0 ;
-(void)insertRowsWithUIDs:(*void)arg0 atIndex:(unsigned int)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveColumnIndexRange:(struct _NSRange )arg0 toIndex:(unsigned short)arg1 ;
-(void)moveRowIndexRange:(struct _NSRange )arg0 toIndex:(unsigned int)arg1 ;
-(void)removeColumnsAtIndexes:(id)arg0 ;
-(void)removeRowsAtIndexes:(id)arg0 ;
-(void)replaceColumnsWithUids:(*void)arg0 ;
-(void)replaceRowsWithUids:(*void)arg0 ;
-(void)reset;
-(void)saveToArchiver:(id)arg0 ;
-(void)swapRowAtIndex:(unsigned int)arg0 withRowAtIndex:(unsigned int)arg1 ;


@end


#endif