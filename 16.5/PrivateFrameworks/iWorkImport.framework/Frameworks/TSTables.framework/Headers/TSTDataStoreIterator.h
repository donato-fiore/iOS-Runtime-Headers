// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTDATASTOREITERATOR_H
#define TSTDATASTOREITERATOR_H

@class NSString;
@protocol TSTCellIterating, TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating;

#import <Foundation/Foundation.h>

#import "TSTTableTileRowInfo.h"
#import "TSTTableTile.h"
#import "TSTTableDataListCache.h"
#import "TSTTableDataStore.h"
#import "TSTCellRegion.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"

@interface TSTDataStoreIterator : NSObject <TSTCellIterating, TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>



@property (nonatomic) BOOL columnOrderReversed; // ivar: _columnOrderReversed
@property (nonatomic) TSUCellCoord curCellID; // ivar: _curCellID
@property (retain, nonatomic) TSTTableTileRowInfo *curRow; // ivar: _curRow
@property (nonatomic) unsigned int curRowIndex; // ivar: _curRowIndex
@property (retain, nonatomic) TSTTableTile *curTile; // ivar: _curTile
@property (nonatomic) _NSRange curTileRange; // ivar: _curTileRange
@property (readonly, nonatomic) TSTTableDataListCache *dataListCache; // ivar: _dataListCache
@property (readonly, nonatomic) TSTTableDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) TSTPerformanceLoggingToken logToken; // ivar: _logToken
@property (readonly, nonatomic) TSTCellRegion *region; // ivar: _region
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // ivar: _regionIterator
@property (nonatomic) NSUInteger searchMask; // ivar: _searchMask
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel
@property (nonatomic) BOOL terminated; // ivar: _terminated


-(BOOL)getNextCellData:(*id)arg0 ;
-(id)initWithInfo:(id)arg0 region:(id)arg1 flags:(NSUInteger)arg2 searchMask:(NSUInteger)arg3 ;
-(id)initWithModel:(id)arg0 region:(id)arg1 flags:(NSUInteger)arg2 searchMask:(NSUInteger)arg3 ;
-(id)nextCellData;
-(struct TSUCellCoord )advanceToCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )getNext;
-(void)iterateCellsUsingBlock:(id)arg0 ;
-(void)p_setupTileAndRowAtCellID:(struct TSUCellCoord )arg0 ;
-(void)terminate;
-(void)updateCellData:(id)arg0 ;
-(void)updateFormulaForCellData:(id)arg0 ;


@end


#endif