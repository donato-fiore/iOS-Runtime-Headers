// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTHIDDENSTATES_H
#define TSTHIDDENSTATES_H

@class NSString;
@protocol TSTTableHiddenRowColumnProviding, TSTAdditionalHiddenRowColumnProviding;

#import <Foundation/Foundation.h>

#import "TSTHiddenStateExtent.h"
#import "TSTTableFilterSet.h"
#import "TSTHiddenStatesOwner.h"

@interface TSTHiddenStates : NSObject <TSTTableHiddenRowColumnProviding, TSTAdditionalHiddenRowColumnProviding>



@property (readonly, nonatomic) TSTHiddenStateExtent *columnHiddenStateExtent; // ivar: _columnHiddenStateExtent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSTTableFilterSet *filterSetForColumns;
@property (retain, nonatomic) TSTTableFilterSet *filterSetForRows;
@property (readonly, nonatomic) BOOL hasCollapsedColumns;
@property (readonly, nonatomic) BOOL hasCollapsedRows;
@property (readonly, nonatomic) BOOL hasHiddenColumnsOrRows;
@property (readonly) NSUInteger hash;
@property (nonatomic) TSKUIDStruct hiddenStateOwnerForColumnsUID;
@property (nonatomic) TSKUIDStruct hiddenStateOwnerForRowsUID;
@property (weak, nonatomic) TSTHiddenStatesOwner *hiddenStatesOwner; // ivar: _hiddenStatesOwner
@property (readonly, nonatomic) BOOL loadedIndexesAfterUnarchive; // ivar: _loadedIndexesAfterUnarchive
@property (nonatomic) BOOL needsFilterFormulaRewriteForImport;
@property (nonatomic) BOOL needsToUpdateFilterSetForImport;
@property (readonly, nonatomic) unsigned int numberOfHiddenColumns;
@property (readonly, nonatomic) unsigned int numberOfHiddenRows;
@property (readonly, nonatomic) unsigned int numberOfUserHiddenColumns;
@property (readonly, nonatomic) unsigned int numberOfUserHiddenRows;
@property (readonly, nonatomic) TSTHiddenStateExtent *rowHiddenStateExtent; // ivar: _rowHiddenStateExtent
@property (readonly) Class superclass;


+(id)mutableIndexSetByIntersecting:(id)arg0 withRange:(struct _NSRange )arg1 ;
+(struct TSUCellCoord )filterFormulaContainingCell;
+(struct TSUCellCoord )filterFormulaCoordForViewColumnRow:(unsigned int)arg0 ;
+(struct TSUCellCoord )filterFormulaCoordinateForColumnOrRow:(unsigned int)arg0 ;
+(struct TSUCellCoord )filterFormulaCoordinateForType:(unsigned short)arg0 columnOrRowIndex:(unsigned int)arg1 ;
+(unsigned int)columnOrRowIndexForFilterCoordinate:(struct TSUCellCoord *)arg0 ;
+(unsigned short)filterCoordTypeForFilterCoordinate:(struct TSUCellCoord *)arg0 ;
+(void)invalidateForChangingIndexes:(id)arg0 isRow:(BOOL)arg1 forTable:(id)arg2 ;
-(BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hasActiveFilters;
-(BOOL)hasFilterRulesWithTable:(id)arg0 inBaseColumns:(id)arg1 ;
-(BOOL)hasHiddenColumnAtIndex:(unsigned short)arg0 ;
-(BOOL)hasHiddenColumnAtIndex:(unsigned short)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hasHiddenRowAtIndex:(unsigned int)arg0 ;
-(BOOL)hasHiddenRowAtIndex:(unsigned int)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hideBaseColumnAtIndex:(struct TSUModelColumnIndex )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hideBaseRowAtIndex:(struct TSUModelRowIndex )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hideColumnAtIndex:(unsigned short)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)hideRowAtIndex:(unsigned int)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)isColumnGroupUIDCollapsed:(struct TSKUIDStruct *)arg0 ;
-(BOOL)isGroupCollapsedAndVisible:(struct TSKUIDStruct *)arg0 dimension:(NSInteger)arg1 ;
-(BOOL)isGroupOrParentsCollapsed:(struct TSKUIDStruct *)arg0 dimension:(NSInteger)arg1 ;
-(BOOL)isRowGroupUIDCollapsed:(struct TSKUIDStruct *)arg0 ;
-(BOOL)showBaseColumnAtIndex:(struct TSUModelColumnIndex )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)showBaseRowAtIndex:(struct TSUModelRowIndex )arg0 forAction:(unsigned char)arg1 ;
-(BOOL)showColumnAtIndex:(unsigned short)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)showRowAtIndex:(unsigned int)arg0 forAction:(unsigned char)arg1 ;
-(BOOL)verifyConnectionsWithTableModel:(id)arg0 ;
-(id)applyCollapseExpandState:(id)arg0 outUndoState:(*id)arg1 ;
-(id)collapseSummaryColumnGroupUIDs:(id)arg0 ;
-(id)collapseSummaryRowGroupUIDs:(id)arg0 ;
-(id)collapsedColumnGroupUids;
-(id)collapsedRowGroupUids;
-(id)copyCollapsedStateToUpdatedRowGroupUids:(id)arg0 ;
-(id)duplicateFilterSet;
-(id)duplicateFilterSetInUidFormWithTable:(id)arg0 ;
-(id)expandSummaryColumnGroupUIDs:(id)arg0 ;
-(id)expandSummaryRowGroupUIDs:(id)arg0 ;
-(id)hiddenColumnIndexes;
-(id)hiddenRowIndexes;
-(id)indexesOfCollapsedColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfCollapsedRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfFilteredColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfFilteredRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfHiddenColumnsInBaseCellRange:(struct TSUModelCellRect )arg0 ;
-(id)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfHiddenRowsInBaseCellRange:(struct TSUModelCellRect )arg0 ;
-(id)indexesOfHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfVisibleColumnsInCellRegion:(id)arg0 ;
-(id)indexesOfVisibleColumnsInColumnRange:(id)arg0 ;
-(id)indexesOfVisibleRowsInCellRange:(struct TSUCellRect )arg0 ;
-(id)indexesOfVisibleRowsInCellRegion:(id)arg0 ;
-(id)indexesOfVisibleRowsInRowRange:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 forHiddenStatesOwner:(id)arg2 ;
-(id)initWithHiddenStatesOwner:(id)arg0 ;
-(id)initWithHiddenStatesOwner:(id)arg0 shouldRegister:(BOOL)arg1 ;
-(id)mutableFilteredColumnIndexes;
-(id)mutableFilteredRowIndexes;
-(id)mutablePivotHiddenColumnIndexes;
-(id)mutablePivotHiddenRowIndexes;
-(id)mutableUserHiddenColumnIndexes;
-(id)mutableUserHiddenRowIndexes;
-(id)pruneCollapsedColumnGroups;
-(id)pruneCollapsedRowGroups;
-(id)translator;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSCERangeRef )referenceToHiddenStateFromColumn:(unsigned short)arg0 toColumn:(unsigned short)arg1 ;
-(struct TSCERangeRef )referenceToHiddenStateFromRow:(unsigned int)arg0 toRow:(unsigned int)arg1 ;
-(struct TSUModelColumnIndex )numberOfHiddenColumnsInBaseCellRange:(struct TSUModelCellRect )arg0 ;
-(struct TSUModelRowIndex )numberOfHiddenRowsInBaseCellRange:(struct TSUModelCellRect )arg0 ;
-(struct TSUModelRowIndex )numberOfUserHiddenRowsInBaseCellRange:(struct TSUModelCellRect )arg0 ;
-(unsigned char)hidingActionForBaseColumnAtIndex:(struct TSUModelColumnIndex )arg0 ;
-(unsigned char)hidingActionForBaseRowAtIndex:(struct TSUModelRowIndex )arg0 ;
-(unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg0 ;
-(unsigned char)hidingActionForRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg0 ;
-(unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect )arg0 ;
-(unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg0 ;
-(unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg0 ;
-(void)clearAllFiltered;
-(void)clearAllPivotHiddenAndInvalidate:(BOOL)arg0 ;
-(void)copyFromHiddenStates:(id)arg0 forRange:(struct TSUCellRect )arg1 withContext:(id)arg2 isWholeTableCopy:(BOOL)arg3 ;
-(void)deleteColumnsFromBaseRange:(struct _NSRange )arg0 columnUids:(*void)arg1 ;
-(void)deleteRowsFromBaseRange:(struct _NSRange )arg0 rowUids:(*void)arg1 ;
-(void)dirtyFilterState;
-(void)dirtyFilterStateForFooters;
-(void)dirtyFilterStateForHeaders;
-(void)enableFilterSet:(BOOL)arg0 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)filterSetUpdated;
-(void)hideColumnsAtIndexes:(id)arg0 forAction:(unsigned char)arg1 invalidate:(BOOL)arg2 ;
-(void)hideRowsAtIndexes:(id)arg0 forAction:(unsigned char)arg1 invalidate:(BOOL)arg2 ;
-(void)insertNewColumnsInBaseRange:(struct _NSRange )arg0 ;
-(void)insertNewRowsInBaseRange:(struct _NSRange )arg0 ;
-(void)invalidateAllCollapsed;
-(void)invalidateViewGeometry;
-(void)loadIndexesFromTable:(id)arg0 ;
-(void)moveBaseColumnRange:(struct _NSRange )arg0 toColumnIndex:(struct TSUModelColumnIndex )arg1 ;
-(void)moveBaseRowRange:(struct _NSRange )arg0 toRowIndex:(struct TSUModelRowIndex )arg1 ;
-(void)moveViewColumnRange:(struct _NSRange )arg0 toColumnIndex:(struct TSUViewColumnIndex )arg1 ;
-(void)mutateFormulaFiltersWithTable:(id)arg0 usingBlock:(id)arg1 ;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 ;
-(void)setColumnGroupUID:(struct TSKUIDStruct *)arg0 asCollapsed:(BOOL)arg1 ;
-(void)setFilterSetType:(int)arg0 ;
-(void)setFormulaOwnerUIDsWithMap:(id)arg0 ;
-(void)setRowGroupUID:(struct TSKUIDStruct *)arg0 asCollapsed:(BOOL)arg1 ;
-(void)setTableModel:(id)arg0 ;
-(void)showColumnsAtIndexes:(id)arg0 forAction:(unsigned char)arg1 invalidate:(BOOL)arg2 ;
-(void)showRowsAtIndexes:(id)arg0 forAction:(unsigned char)arg1 invalidate:(BOOL)arg2 ;
-(void)swapBaseRowAtIndex:(struct TSUModelRowIndex )arg0 withRowAtIndex:(struct TSUModelRowIndex )arg1 ;
-(void)syncUpHiddenStateFormulaOwnerUIDs;
-(void)unregisterFromCalcEngine;
-(void)willChangeGroupByTo:(id)arg0 ;


@end


#endif