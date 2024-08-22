// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTHEADERNAMEMGR_H
#define TSTHEADERNAMEMGR_H

@class TSPObject, NSMutableSet, NSCharacterSet, NSString;
@protocol TSTCellWillChangeProtocol, TSCEFormulaOwning;


#import "TSCECalculationEngine.h"
#import "TSCENameTrie.h"

@interface TSTHeaderNameMgr : TSPObject <TSTCellWillChangeProtocol, TSCEFormulaOwning>

 {
    TSCECalculationEngine *_calcEngine;
    TSCECalculationEngine *_weakCalcEngine;
    _opaque_pthread_rwlock_t _headerNameMgrReadWriteLock;
    TSKUIDStruct _ownerUID;
    TSUCellCoord _nextPrecedentCoord;
    os_unfair_lock_s _nextPrecedentCoordLock;
    TSUCellCoord _allHeaderPerTablesPrecedent;
    TSUCellCoord _needsTileSplittingPrecedent;
    vector<TSTHeaderNameMgrTile *, std::allocator<TSTHeaderNameMgrTile *>> _nameFragmentTiles;
    unordered_map<TSUCellCoord, TSTHeaderNameMgrEntry *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTHeaderNameMgrEntry *>>> _fragPrecedentToEntry;
    unordered_map<TSCEUidCellRef, TSCECellCoordSet, std::hash<TSCEUidCellRef>, std::equal_to<TSCEUidCellRef>, std::allocator<std::pair<const TSCEUidCellRef, TSCECellCoordSet>>> _fragPrecedentsUsedByCellRef;
    unordered_map<TSKUIDStruct, TSTHeaderPerTable *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTHeaderPerTable *>>> _perTableInfo;
    unordered_map<TSUCellCoord, TSKUIDStruct, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSKUIDStruct>>> _headerPerTablePrecedentToTableUID;
    TSCENameTrie *_namePrefixIndex;
    os_unfair_lock_s _reservedFragmentPrecedentsLock;
    unordered_map<NSString *, TSUCellCoord, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, TSUCellCoord>>> _reservedFragmentPrecedents;
    NSMutableSet *_tilesToConsiderSplitting;
    BOOL _isClosing;
    TSKUIDStruct _nrm_ownerUID;
    NSCharacterSet *_whitespaceToBreakAt;
    ? _removeFormulasDuringWritePhase;
}


@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isClosing;
@property (readonly) Class superclass;


-(*void)fragmentEntryForNameFragmentPrecedent:(struct TSUCellCoord *)arg0 ;
-(*void)fragmentEntryForString:(id)arg0 ;
-(BOOL)p_updateWithWordFragments:(*void)arg0 atCellCoord:(struct TSKUIDStructCoord *)arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(BOOL)referenceNameIsUnique:(id)arg0 forReference:(*void)arg1 contextTable:(struct TSKUIDStruct *)arg2 ;
-(BOOL)updateTrackedHeaders:(struct TSKUIDStruct *)arg0 checkForEmptyHeaders:(BOOL)arg1 ;
-(BOOL)updateWithIndexingChunks:(id)arg0 ;
-(NSInteger)evaluationMode;
-(NSUInteger)numberOfTiles;
-(id)anyRefForRangeForHeaderCell:(struct TSCECellRef *)arg0 usePreserveFlags:(BOOL)arg1 ;
-(id)findTileForString:(id)arg0 findClosest:(BOOL)arg1 ;
-(id)findTileForString:(id)arg0 findClosest:(BOOL)arg1 foundAtOffset:(*NSUInteger)arg2 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 calcEngine:(id)arg1 ;
-(id)linkedResolver;
-(id)namePrefixIndex;
-(id)stringInHeaderCell:(struct TSCECellRef *)arg0 ;
-(id)subsetForReferenceName:(id)arg0 limitToTable:(struct TSKUIDStruct *)arg1 includePrefixes:(BOOL)arg2 ;
-(id)tileForEntry:(*void)arg0 ;
-(int)registerWithCalcEngine:(id)arg0 ;
-(struct TSCECellRefSet )allHeaderCellRefsLimitedToTable:(struct TSKUIDStruct *)arg0 ;
-(struct TSCECellRefSet )headerCellsMatching:(id)arg0 limitToTable:(struct TSKUIDStruct *)arg1 includePrefixes:(BOOL)arg2 ;
-(struct TSCECellRefSet )nameFragmentPrecedentsForReferenceString:(id)arg0 ;
-(struct TSCERangeRef )baseHeaderColumnsForCell:(struct TSCECellRef *)arg0 ;
-(struct TSCERangeRef )baseHeaderRowsForCell:(struct TSCECellRef *)arg0 ;
-(struct TSCERangeRef )spanningRangeForHeaderCell:(struct TSCECellRef *)arg0 ;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSKUIDStruct )NRM_formulaOwnerUID;
-(struct TSKUIDStruct )formulaOwnerUID;
-(struct TSKUIDStruct )ownerUID;
-(struct TSTHeaderPerTable *)perTableEntryForTable:(struct TSKUIDStruct *)arg0 createIfMissing:(BOOL)arg1 ;
-(struct TSUCellCoord )getNextPrecedentCoord:(BOOL)arg0 ;
-(struct TSUCellCoord )reservePrecedent:(struct TSUCellCoord *)arg0 forNameFragment:(id)arg1 ;
-(struct TSUCellCoord )reservedPrecedentForNameFragment:(id)arg0 ;
-(struct vector<NSString *, std::allocator<NSString *>> )wordFragmentsFromString:(id)arg0 savePreserveFlags:(BOOL)arg1 ;
-(unsigned short)ownerKind;
-(void)addChangedTile:(id)arg0 ;
-(void)beginTrackingNamesInTable:(struct TSKUIDStruct *)arg0 ;
-(void)clearTextAtCellCoord:(struct TSKUIDStructCoord *)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)createFragmentEntryForString:(id)arg0 createIfMissingUsingPrecedentCoord:(struct TSUCellCoord *)arg1 ;
-(void)dealloc;
-(void)endTrackingNamesInTable:(struct TSKUIDStruct *)arg0 ;
-(void)handleFullTile:(id)arg0 ;
-(void)integrateReservedPrecedents;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_processWorkForTable:(struct TSKUIDStruct *)arg0 ;
-(void)p_updateText:(id)arg0 atCellCoord:(struct TSKUIDStructCoord *)arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(void)p_willApplyCell:(id)arg0 baseCellCoord:(struct TSUModelCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setEntry:(*void)arg0 forPrecedentCoord:(struct TSUCellCoord *)arg1 ;
-(void)setNRM_formulaOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(void)setup;
-(void)unpackEntryAfterUnarchive:(*void)arg0 ;
-(void)unregisterFromCalcEngine;
-(void)updateTableUIDFrom:(struct TSKUIDStruct *)arg0 toTableUID:(struct TSKUIDStruct *)arg1 ;
-(void)updateText:(id)arg0 atCellCoord:(struct TSKUIDStructCoord *)arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(void)updateTrackedHeaders:(struct TSKUIDStruct *)arg0 ;
-(void)updateTrackedHeadersForDocumentLocaleChange:(struct TSKUIDStruct *)arg0 ;
-(void)usedPrecedentCoord:(struct TSUCellCoord *)arg0 ;
-(void)waitForQueueToDrain;
-(void)willApplyBaseCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)willApplyCell:(id)arg0 baseCellCoord:(struct TSUModelCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(void)willApplyConcurrentCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)willClose;
-(void)willRemoveRows:(*void)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif