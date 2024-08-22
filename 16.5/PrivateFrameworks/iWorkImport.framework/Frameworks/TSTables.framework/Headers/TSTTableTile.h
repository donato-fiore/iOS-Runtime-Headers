// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLETILE_H
#define TSTTABLETILE_H

@class TSPObject, NSIndexSet, NSPointerArray;
@protocol TSTCompatibilityVersionProviding;



@interface TSTTableTile : TSPObject <TSTCompatibilityVersionProviding>

 {
    unsigned char _storageVersion;
    BOOL _shouldUseWideRows;
    NSUInteger _pruningCount;
}


@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) BOOL lastSavedInBNC; // ivar: _lastSavedInBNC
@property (readonly, nonatomic) unsigned short maxColumn;
@property (readonly, nonatomic) unsigned int maxRow;
@property (readonly, nonatomic) unsigned int numRows;
@property (readonly, nonatomic) NSIndexSet *populatedRows;
@property (retain, nonatomic) NSPointerArray *rowInfos; // ivar: _rowInfos
@property (readonly, nonatomic) BOOL shouldUseWideRows;


-(NSInteger)setCell:(id)arg0 atColumnIndex:(unsigned short)arg1 tileRowIndex:(unsigned int)arg2 ;
-(id)description;
-(id)findOrAddRowInfoAtTileRowIndex:(unsigned int)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithRows:(id)arg0 context:(id)arg1 ;
-(id)initWithRows:(id)arg0 shouldUseWideRows:(BOOL)arg1 context:(id)arg2 ;
-(id)packageLocator;
-(id)removeColumnsAtColumnIndex:(unsigned short)arg0 numberOfColumns:(unsigned int)arg1 ;
-(id)rowInfoAtOrAfterTileRowIndex:(unsigned int)arg0 outTileRowIndex:(*unsigned int)arg1 ;
-(id)rowInfoForTileRowIndex:(unsigned int)arg0 ;
-(id)shiftUpAndYankBy:(unsigned int)arg0 ;
-(id)yankRowInfoAtTileRowIndex:(unsigned int)arg0 ;
-(id)yankRowsAtTileRowIndex:(unsigned int)arg0 ;
-(id)yankRowsAtTileRowIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(int)insertColumnsAtColumnIndex:(unsigned short)arg0 numberOfColumns:(unsigned int)arg1 ;
-(struct TSTCellStorage *)cellStorageRefAtColumnIndex:(unsigned short)arg0 tileRowIndex:(unsigned int)arg1 ;
-(void)_removeRowInfo:(id)arg0 atTileRowIndex:(unsigned int)arg1 ;
-(void)_removeRowsAtTileRowIndex:(unsigned int)arg0 numberOfRows:(unsigned int)arg1 shiftingContent:(BOOL)arg2 ;
-(void)_setRowInfo:(id)arg0 atTileRowIndex:(unsigned int)arg1 ;
-(void)assertListRows;
-(void)clearRowsAtTileRowIndex:(unsigned int)arg0 numberOfRows:(unsigned int)arg1 ;
-(void)didApplyConcurrentCellMap:(id)arg0 ;
-(void)enumerateRowsAndIndexesWithBlock:(id)arg0 ;
-(void)enumerateRowsWithBlock:(id)arg0 ;
-(void)insertRowsAtTileRowIndex:(unsigned int)arg0 numberOfRows:(unsigned int)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveColumnsAtColumnIndex:(unsigned short)arg0 numberOfColumns:(unsigned int)arg1 toDestColumnIndex:(unsigned short)arg2 ;
-(void)p_pruneRowCount;
-(void)pruneEmptyRows;
-(void)saveToArchiver:(id)arg0 ;
-(void)shiftUpAtTileRowIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)spliceRowInfo:(id)arg0 atTileRowIndex:(unsigned int)arg1 overwrite:(BOOL)arg2 ;
-(void)spliceRows:(id)arg0 atTileRowIndex:(unsigned int)arg1 ;
-(void)swapRowAtTileRowIndex:(unsigned int)arg0 withRowAtTileRowIndex:(unsigned int)arg1 ;
-(void)widenAllRowsForUpgrade;
-(void)willModify;


@end


#endif