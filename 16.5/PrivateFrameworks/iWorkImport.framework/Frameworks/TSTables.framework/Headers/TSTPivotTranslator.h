// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTPIVOTTRANSLATOR_H
#define TSTPIVOTTRANSLATOR_H

@class NSIndexSet, NSMapTable;


#import "TSTCategoryTranslator.h"
#import "TSTPivotOwner.h"

@interface TSTPivotTranslator : TSTCategoryTranslator

@property (retain, nonatomic) NSIndexSet *cachedIndexesForLeadingColumns; // ivar: _cachedIndexesForLeadingColumns
@property (retain, nonatomic) NSIndexSet *cachedIndexesForSummaryColumns; // ivar: _cachedIndexesForSummaryColumns
@property (retain, nonatomic) NSMapTable *cachedLeadingColumnIndexesAtLevels; // ivar: _cachedLeadingColumnIndexesAtLevels
@property (retain, nonatomic) NSMapTable *cachedLeadingSummaryColumnIndexesAtLevels; // ivar: _cachedLeadingSummaryColumnIndexesAtLevels
@property (nonatomic) BOOL cachedPivotIndexSetsAreValid; // ivar: _cachedPivotIndexSetsAreValid
@property (retain, nonatomic) NSMapTable *cachedSummaryColumnIndexesAtLevels; // ivar: _cachedSummaryColumnIndexesAtLevels
@property (nonatomic) os_unfair_lock_s pivotCachedIndexesUnfairLock; // ivar: _pivotCachedIndexesUnfairLock
@property (readonly, nonatomic) TSTPivotOwner *pivotOwner;


-(BOOL)cellExistsAtCellID:(struct TSUViewCellCoord )arg0 ;
-(BOOL)isCategorized;
-(BOOL)isGroupedForColumns;
-(BOOL)isGroupedForRows;
-(CGFloat)heightOfRowAtIndex:(struct TSUViewRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(CGFloat)widthOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(Class)iteratorClass;
-(NSUInteger)aggregateIndexForColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(NSUInteger)aggregateIndexForRowIndex:(struct TSUViewRowIndex )arg0 ;
-(NSUInteger)numberOfColumnLevels;
-(NSUInteger)numberOfRowLevels;
-(NSUInteger)tableStyleAreaForCellID:(struct TSUViewCellCoord )arg0 ;
-(NSUInteger)tableStyleAreaForCellUID:(struct TSKUIDStructCoord )arg0 ;
-(NSUInteger)tableStyleAreaForRow:(struct TSUViewRowIndex )arg0 ;
-(id)aggregateFormulaOwner;
-(id)allColumnGroupUIDs;
-(id)allRowGroupUIDs;
-(id)cellRegionForTableStyleArea:(NSUInteger)arg0 ;
-(id)cellStyleAtCellID:(struct TSUViewCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfRowAtIndex:(struct TSUViewRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)coordinateMapper;
-(id)defaultCellStyleForCellID:(struct TSUViewCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)defaultTextStyleForCellID:(struct TSUViewCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)groupByForColumns;
-(id)groupByForRows;
-(id)groupBySet;
-(id)i_indexesForLeadingColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)i_indexesForLeadingSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)i_indexesForSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)i_indexesForSummaryRowsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForColumnsContainedByGroupUIDs:(id)arg0 ;
-(id)indexesForGrandTotalColumns;
-(id)indexesForGrandTotalRows;
-(id)indexesForLeadingColumns;
-(id)indexesForLeadingColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForLeadingSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)indexesForRowsContainedByGroupUIDs:(id)arg0 ;
-(id)indexesForSummaryColumns;
-(id)indexesForSummaryColumnsAtGroupLevel:(unsigned char)arg0 ;
-(id)initWithTableInfo:(id)arg0 ;
-(id)metadataForColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(id)peerCellRegionForCellRegion:(id)arg0 ;
-(id)summaryCellVendor;
-(id)summaryModel;
-(id)textStyleAtCellID:(struct TSUViewCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleOfColumnAtIndex:(struct TSUViewColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleOfRowAtIndex:(struct TSUViewRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(int)getCell:(id)arg0 atCellID:(struct TSUViewCellCoord )arg1 suppressCellBorder:(BOOL)arg2 ;
-(int)getDefaultCell:(id)arg0 forCellUID:(struct TSKUIDStructCoord *)arg1 ;
-(int)getValue:(struct TSCEValue *)arg0 atCellID:(struct TSUViewCellCoord )arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 ;
// -(int)p_applyViewCellCoord:(struct TSUViewCellCoord )arg0 toSummaryUsingBlock:(id)arg1 toBaseUsingBlock:(unk)arg2  ;
-(struct TSUViewColumnIndex )numberOfCategoryColumns;
-(struct TSUViewColumnIndex )numberOfGrandTotalColumns;
-(struct TSUViewColumnIndex )numberOfHeaderColumns;
-(struct TSUViewRowIndex )numberOfFooterOrGrandTotalRows;
-(unsigned char)cellValueTypeAtCellID:(struct TSUViewCellCoord )arg0 ;
-(unsigned char)columnGroupLevelAtColumn:(struct TSUViewColumnIndex )arg0 outAggregateIndex:(*NSUInteger)arg1 ;
-(unsigned char)groupLevelAtLabelRow:(struct TSUViewRowIndex )arg0 ;
-(unsigned char)groupLevelAtSummaryColumn:(struct TSUViewColumnIndex )arg0 ;
-(unsigned char)groupLevelAtSummaryRow:(struct TSUViewRowIndex )arg0 ;
-(unsigned char)maxColumnLevel;
-(unsigned char)maxRowLevel;
-(unsigned char)maxVisibleColumnLevel;
-(unsigned char)maxVisibleRowLevel;
-(unsigned char)minColumnLevel;
-(unsigned char)minRowLevel;
-(unsigned char)p_columnRowTypeForColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(unsigned char)p_columnRowTypeForRowIndex:(struct TSUViewRowIndex )arg0 ;
-(unsigned char)rowGroupLevelAtRow:(struct TSUViewRowIndex )arg0 outAggregateIndex:(*NSUInteger)arg1 ;
-(unsigned int)columnAggregateGroupSize;
-(unsigned int)maxNumberOfHeaderColumns;
-(unsigned int)minNumberOfHeaderColumns;
-(unsigned int)rowAggregateGroupSize;
-(void)defaultStyleHandlesForCellID:(struct TSUViewCellCoord )arg0 useSoftDefault:(BOOL)arg1 styleDefaultsCache:(id)arg2 outCellStyleHandle:(*id)arg3 outTextStyleHandle:(*id)arg4 ;
-(void)flushCachedIndexSets;
-(void)i_populateIndexesForLeadingColumns;
-(void)i_populateIndexesForLeadingSummaryColumns;
-(void)i_populateIndexesForSummaryColumns;
-(void)i_populatePivotCachedIndexSetsIfNeeded;
// -(void)p_applyViewColumnIndex:(struct TSUViewColumnIndex )arg0 toSummaryUsingBlock:(id)arg1 toBaseUsingBlock:(unk)arg2 toBeyondBoundsUsingBlock:(id)arg3  ;
// -(void)p_applyViewRowIndex:(struct TSUViewRowIndex )arg0 toSummaryUsingBlock:(id)arg1 toBaseUsingBlock:(unk)arg2 toBeyondBoundsUsingBlock:(id)arg3  ;
-(void)resetViewMap;
-(void)resetViewMapAndNotify;
-(void)setHeight:(CGFloat)arg0 ofRowAtIndex:(struct TSUViewRowIndex )arg1 ;
-(void)setWidth:(CGFloat)arg0 ofColumnAtIndex:(struct TSUViewColumnIndex )arg1 ;


@end


#endif