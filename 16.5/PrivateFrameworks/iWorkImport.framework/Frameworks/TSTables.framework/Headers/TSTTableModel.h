// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEMODEL_H
#define TSTTABLEMODEL_H

@class TSPObject, TSDStroke, TSWPParagraphStyle, NSArray, NSMapTable, NSString, TSWPStorage, NSUUID, TSWPShapeStyle;
@protocol TSCEReferenceResolving, TSCEColumnRowUIDMapping, TSCECalculationEngineRegistration, TSCEFormulaOwning, TSDMixing, TSTCompatibilityVersionProviding, TSTCustomStrokeProviding, TSTStyleProviding, TSTTableStrokeProviding, TSTTableTileCreating;


#import "TSTHiddenStateFormulaOwner.h"
#import "TSTStrokeSidecar.h"
#import "TSTCellStyle.h"
#import "TSCECalculationEngine.h"
#import "TSTCategoryOwner.h"
#import "TSTCellWillChangeDistributor.h"
#import "TSTCellDictionary.h"
#import "TSTConcurrentMutableCellUIDSet.h"
#import "TSTColumnRowUIDMap.h"
#import "TSTConditionalStyleFormulaOwner.h"
#import "TSTTableDataStore.h"
#import "TSCEHauntedOwner.h"
#import "TSTHiddenStatesOwner.h"
#import "TSTOwnerUidMapper.h"
#import "TSTTableTranslator.h"
#import "TSTMergeOwner.h"
#import "TSTPencilAnnotationOwner.h"
#import "TSTPivotOwner.h"
#import "TSTTableFilterSet.h"
#import "TSTTableSortOrder.h"
#import "TSTSortRuleReferenceTracker.h"
#import "TSTTableInfo.h"
#import "TSTTableStyle.h"
#import "TSTTableStylePreset.h"
#import "TSTStructuredTextImportRecord.h"

@interface TSTTableModel : TSPObject <TSCEReferenceResolving, TSCEColumnRowUIDMapping, TSCECalculationEngineRegistration, TSCEFormulaOwning, TSDMixing, TSTCompatibilityVersionProviding, TSTCustomStrokeProviding, TSTStyleProviding, TSTTableStrokeProviding, TSTTableTileCreating>

 {
    TSTHiddenStateFormulaOwner *_hiddenStateFormulaOwnerForRows;
    TSTHiddenStateFormulaOwner *_hiddenStateFormulaOwnerForColumns;
    TSTStrokeSidecar *_strokeSidecar;
    TSCECellRefSet _clearErrorCells;
    os_unfair_lock_s _clearErrorLock;
    BOOL _isRegisteredWithCalcEngine;
}


@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion; // ivar: _archivingCompatibilityVersion
@property (retain, nonatomic) TSTCellStyle *bodyCellStyle; // ivar: _bodyCellStyle
@property (readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotDeEmphasisHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotEmphasisVerticalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotGroupHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property (retain, nonatomic) TSWPParagraphStyle *bodyTextStyle; // ivar: _bodyTextStyle
@property (nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (readonly, nonatomic) TSDStroke *categoryLevel1BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel1CellStyle; // ivar: _categoryLevel1CellStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel1InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel1TextStyle; // ivar: _categoryLevel1TextStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel1TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel2CellStyle; // ivar: _categoryLevel2CellStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel2InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel2TextStyle; // ivar: _categoryLevel2TextStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel2TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel3CellStyle; // ivar: _categoryLevel3CellStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel3InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel3TextStyle; // ivar: _categoryLevel3TextStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel3TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel4CellStyle; // ivar: _categoryLevel4CellStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel4InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel4TextStyle; // ivar: _categoryLevel4TextStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel4TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5BottomStroke;
@property (retain, nonatomic) TSTCellStyle *categoryLevel5CellStyle; // ivar: _categoryLevel5CellStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel5InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5LabelSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *categoryLevel5TextStyle; // ivar: _categoryLevel5TextStyle
@property (readonly, nonatomic) TSDStroke *categoryLevel5TopStroke;
@property (readonly, nonatomic) TSTCategoryOwner *categoryOwner; // ivar: _categoryOwner
@property (readonly, nonatomic) TSTCellWillChangeDistributor *cellWillChangeDistributor; // ivar: _cellWillChangeDistributor
@property (readonly, nonatomic) TSTCellDictionary *cellsPendingWrite; // ivar: _cellsPendingWrite
@property (readonly, nonatomic) TSTConcurrentMutableCellUIDSet *cellsToInvalidateAfterRecalc; // ivar: _cellsToInvalidateAfterRecalc
@property (readonly, nonatomic) TSTConcurrentMutableCellUIDSet *cellsToInvalidateNonoverflowingAfterRecalc; // ivar: _cellsToInvalidateNonoverflowingAfterRecalc
@property (retain, nonatomic) TSTColumnRowUIDMap *columnRowUIDMap; // ivar: _columnRowUIDMap
@property (readonly, nonatomic) NSArray *columnWidths;
@property (readonly, nonatomic) NSMapTable *commentHostingMap; // ivar: _commentHostingMap
@property (readonly, nonatomic) NSMapTable *commentStorageMap; // ivar: _commentStorageMap
@property (retain, nonatomic) TSTConditionalStyleFormulaOwner *conditionalStyleFormulaOwner; // ivar: _conditionalStyleFormulaOwner
@property (readonly, nonatomic) TSKUIDStruct conditionalStyleFormulaOwnerUID;
@property (retain, nonatomic) TSTTableDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultColumnWidth; // ivar: _defaultColumnWidth
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (nonatomic) CGFloat defaultRowHeight; // ivar: _defaultRowHeight
@property (readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property (retain, nonatomic) TSWPStorage *deprecatedProvider; // ivar: _deprecatedProvider
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property (retain, nonatomic) TSTCellStyle *footerRowCellStyle; // ivar: _footerRowCellStyle
@property (readonly, nonatomic) TSDStroke *footerRowPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *footerRowTextStyle; // ivar: _footerRowTextStyle
@property (nonatomic) TSKUIDStruct fromGroupByUID; // ivar: _fromGroupByUID
@property (nonatomic) TSKUIDStruct fromTableUID; // ivar: _fromTableUID
@property (readonly, nonatomic) BOOL hasAlternatingRows;
@property (readonly, nonatomic) BOOL hasMigratableStylesInCells;
@property (readonly, nonatomic) BOOL hasTableBorder;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSCEHauntedOwner *hauntedOwner; // ivar: _hauntedOwner
@property (readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property (retain, nonatomic) TSTCellStyle *headerColumnCellStyle; // ivar: _headerColumnCellStyle
@property (readonly, nonatomic) TSDStroke *headerColumnPivotGroupDeEmphasisStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnPivotGroupHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnPivotSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *headerColumnTextStyle; // ivar: _headerColumnTextStyle
@property (nonatomic) BOOL headerColumnsFrozen; // ivar: _headerColumnsFrozen
@property (readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property (retain, nonatomic) TSTCellStyle *headerRowCellStyle; // ivar: _headerRowCellStyle
@property (readonly, nonatomic) TSDStroke *headerRowPivotGroupDeEmphasisStroke;
@property (readonly, nonatomic) TSDStroke *headerRowPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSDStroke *headerRowPivotTitleStroke;
@property (readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property (retain, nonatomic) TSWPParagraphStyle *headerRowTextStyle; // ivar: _headerRowTextStyle
@property (nonatomic) BOOL headerRowsFrozen; // ivar: _headerRowsFrozen
@property (readonly, nonatomic) TSTHiddenStatesOwner *hiddenStatesOwner; // ivar: _hiddenStatesOwner
@property (readonly, nonatomic) TSTOwnerUidMapper *identityOwnerUIDMapper;
@property (readonly, nonatomic) TSTTableTranslator *identityTranslator; // ivar: _identityTranslator
@property (nonatomic) BOOL isAPivotDataModel; // ivar: _isAPivotDataModel
@property (readonly, nonatomic) BOOL isRegisteredWithCalcEngine;
@property (retain, nonatomic) TSTCellStyle *labelLevel1CellStyle; // ivar: _labelLevel1CellStyle
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel1TextStyle; // ivar: _labelLevel1TextStyle
@property (retain, nonatomic) TSTCellStyle *labelLevel2CellStyle; // ivar: _labelLevel2CellStyle
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel2TextStyle; // ivar: _labelLevel2TextStyle
@property (retain, nonatomic) TSTCellStyle *labelLevel3CellStyle; // ivar: _labelLevel3CellStyle
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel3TextStyle; // ivar: _labelLevel3TextStyle
@property (retain, nonatomic) TSTCellStyle *labelLevel4CellStyle; // ivar: _labelLevel4CellStyle
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel4TextStyle; // ivar: _labelLevel4TextStyle
@property (retain, nonatomic) TSTCellStyle *labelLevel5CellStyle; // ivar: _labelLevel5CellStyle
@property (retain, nonatomic) TSWPParagraphStyle *labelLevel5TextStyle; // ivar: _labelLevel5TextStyle
@property (readonly, nonatomic) NSUInteger lastArchivedAppVersion; // ivar: _lastArchivedAppVersion
@property (nonatomic) unsigned short localOwnerID; // ivar: _localOwnerID
@property (readonly, nonatomic) TSTMergeOwner *mergeOwner; // ivar: _mergeOwner
@property (readonly, nonatomic) NSUUID *nsTableUID;
@property (readonly, nonatomic) TSUModelColumnIndex numberOfColumns;
@property (nonatomic) TSUModelRowIndex numberOfFooterRows; // ivar: _numberOfFooterRows
@property (nonatomic) TSUModelColumnIndex numberOfHeaderColumns; // ivar: _numberOfHeaderColumns
@property (nonatomic) TSUModelRowIndex numberOfHeaderRows; // ivar: _numberOfHeaderRows
@property (readonly, nonatomic) TSUModelRowIndex numberOfRows;
@property (readonly, nonatomic) TSTOwnerUidMapper *ownerUIDMapper;
@property (readonly, nonatomic) TSTPencilAnnotationOwner *pencilAnnotationOwner; // ivar: _pencilAnnotationOwner
@property (retain, nonatomic) TSTCellStyle *pivotBodySummaryColumnCellStyle; // ivar: _pivotBodySummaryColumnCellStyle
@property (retain, nonatomic) TSTCellStyle *pivotBodySummaryRowCellStyle; // ivar: _pivotBodySummaryRowCellStyle
@property (readonly, nonatomic) *void pivotDateGroupingTypesByColumn; // ivar: _pivotDateGroupingTypesByColumn
@property (retain, nonatomic) TSTCellStyle *pivotHeaderColumnSummaryCellStyle; // ivar: _pivotHeaderColumnSummaryCellStyle
@property (readonly, nonatomic) TSTPivotOwner *pivotOwner; // ivar: _pivotOwner
@property (readonly, nonatomic) *void pivotValueTypesByColumn; // ivar: _pivotValueTypesByColumn
@property (retain, nonatomic) TSTTableFilterSet *prePivotRowFilterSet; // ivar: _prePivotRowFilterSet
@property (nonatomic) NSUInteger presetIDForUpgrade; // ivar: _presetIDForUpgrade
@property (nonatomic) BOOL presetNeedsStrongOwnership; // ivar: _presetNeedsStrongOwnership
@property (nonatomic) BOOL repeatingHeaderColumnsEnabled; // ivar: _repeatingHeaderColumnsEnabled
@property (nonatomic) BOOL repeatingHeaderRowsEnabled; // ivar: _repeatingHeaderRowsEnabled
@property (readonly, nonatomic) NSArray *rowHeights;
@property (nonatomic) BOOL shouldUseWideRows;
@property (copy, nonatomic) TSTTableSortOrder *sortOrder; // ivar: _sortOrder
@property (readonly, nonatomic) TSTSortRuleReferenceTracker *sortRuleReferenceTracker; // ivar: _sortRuleReferenceTracker
@property (retain, nonatomic) TSTStrokeSidecar *strokeSidecar;
@property (nonatomic) BOOL styleApplyClearsAll; // ivar: _styleApplyClearsAll
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (retain, nonatomic) NSString *tableName; // ivar: _tableName
@property (nonatomic) BOOL tableNameBorderEnabled; // ivar: _tableNameBorderEnabled
@property (readonly, nonatomic) TSDStroke *tableNameBorderStroke;
@property (nonatomic) BOOL tableNameEnabled; // ivar: _tableNameEnabled
@property (nonatomic) CGFloat tableNameHeight; // ivar: _tableNameHeight
@property (retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle; // ivar: _tableNameShapeStyle
@property (retain, nonatomic) TSWPParagraphStyle *tableNameStyle; // ivar: _tableNameStyle
@property (readonly, nonatomic) NSUInteger tableSizeClass;
@property (retain, nonatomic) TSTTableStyle *tableStyle; // ivar: _tableStyle
@property (retain, nonatomic) TSTTableStylePreset *tableStylePreset; // ivar: _tableStylePreset
@property (nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID
@property (readonly, nonatomic) int tableWritingDirection;
@property (retain, nonatomic) TSTStructuredTextImportRecord *textImportRecord; // ivar: _textImportRecord
@property (readonly, nonatomic) TSKUIDStruct upgradeHiddenFormulaOwnerForColumnsUID;
@property (readonly, nonatomic) TSKUIDStruct upgradeHiddenFormulaOwnerForRowsUID;
@property (readonly, nonatomic) BOOL upgradeNeedsToUpdateFilterSetForImport;
@property (readonly, nonatomic) TSTOwnerUidMapper *upgradeToSubOwnerUIDMapper;
@property (nonatomic) BOOL wasCut; // ivar: _wasCut
@property (nonatomic) BOOL wasUnarchivedFromAProvidedTable; // ivar: _wasUnarchivedFromAProvidedTable


+(BOOL)needsObjectUUID;
+(NSInteger)dateGroupingTypeForMinMaxDatePair:(id)arg0 ;
+(id)tableModelForTableUID:(struct TSKUIDStruct *)arg0 withCalcEngine:(id)arg1 ;
-(?)UIDsForIndexesisRows;
-(?)UIDsForRangeisRows;
-(?)columnUIDsForColumnIndexes;
-(?)columnUIDsForColumnRange;
-(?)orderedColumnUidsFromUids;
-(?)orderedRowUidsFromUids;
-(?)prunedColumnUIDsFromColumnUIDs;
-(?)prunedRowUIDsFromRowUIDs;
-(?)rowUIDsForRowIndexes;
-(?)rowUIDsForRowRange;
-(BOOL)auditColumnRowCellCountsReturningResult:(*id)arg0 hasUndercounts:(*BOOL)arg1 ;
-(BOOL)auditDatalistDuplicationReturningResult:(*id)arg0 ;
-(BOOL)auditRowInfoCellCountsReturningResult:(*id)arg0 ;
-(BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord )arg0 result:(*id)arg1 ;
-(BOOL)cellExistsAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(BOOL)cellModifiedInCurrentRecalcCycle:(struct TSUCellCoord *)arg0 ;
-(BOOL)confirmRefCountsReturningResult:(*id)arg0 ;
-(BOOL)hasCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)hasCommentAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(BOOL)hasCommentStorageAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(BOOL)hasControls;
-(BOOL)hasFormulaAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(BOOL)hasFormulas;
-(BOOL)hasImportWarnings;
-(BOOL)hasNamesInHeaders;
-(BOOL)hasPastableFormulas;
-(BOOL)hasUsefulPivotDataInSourceBodyTract:(id)arg0 ;
-(BOOL)isRegisteredWithCalcEngine:(id)arg0 ;
-(BOOL)p_auditTableHealthUpgradingFromVersion:(NSUInteger)arg0 ;
-(BOOL)p_auditTilesForRowOverlapAndExtensionPastTableBoundsWithVersion:(NSUInteger)arg0 ;
-(BOOL)registerLast;
-(BOOL)verifySubOwnerUIDsUsed;
-(CGFloat)computeDefaultFontHeightForTableStyleArea:(NSUInteger)arg0 ;
-(CGFloat)heightOfRowAtIndex:(struct TSUModelRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(CGFloat)widthOfColumnAtIndex:(struct TSUModelColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(NSInteger)evaluationMode;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)numberOfComments;
-(NSUInteger)numberOfPopulatedCells;
-(NSUInteger)tableAreaForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(NSUInteger)tableAreaForColumn:(struct TSUModelColumnIndex )arg0 ;
-(NSUInteger)tableAreaForRow:(struct TSUModelRowIndex )arg0 ;
-(NSUInteger)tableStyleAreaForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(NSUInteger)tableStyleAreaForRow:(struct TSUModelRowIndex )arg0 ;
-(id)UIDSetForIndexes:(id)arg0 isRows:(BOOL)arg1 ;
-(id)UIDSetForRange:(struct _NSRange )arg0 isRows:(BOOL)arg1 ;
-(id)allDataAsString;
-(id)allRichTextStorages;
-(id)cachedCommentHostingForAnnotationUUID:(id)arg0 ;
-(id)cellAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)cellBorderAtCellID:(struct TSUCellCoord )arg0 ;
-(id)cellStyleAtModelCellCoord:(struct TSUModelCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleForCellWithEmptyStyleAtBaseCellCoord:(struct TSUModelCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfColumnAtIndex:(struct TSUModelColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellStyleOfRowAtIndex:(struct TSUModelRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)cellValueAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)cellValueFromCell:(id)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 ;
-(id)columnIndexesForUIDs:(*void)arg0 ;
-(id)columnNameForCellID:(struct TSUCellCoord )arg0 restrictToBodyRange:(BOOL)arg1 ;
-(id)columnUuids;
-(id)commentHostingAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)commentHostingAtBaseCellCoord:(struct TSUModelCellCoord )arg0 forCommentStorage:(id)arg1 ;
-(id)commentHostingAtBaseCellCoord:(struct TSUModelCellCoord )arg0 forCommentStorage:(id)arg1 updateCommentMaps:(BOOL)arg2 ;
-(id)conditionalStyleSetAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)createPivotOwner;
-(id)defaultCellStyleForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)defaultCellStyleForBaseCellCoord:(struct TSUModelCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)defaultCellStyleForTableStyleArea:(NSUInteger)arg0 ;
-(id)defaultTextStyleForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)defaultTextStyleForBaseCellCoord:(struct TSUModelCellCoord )arg0 useSoftDefault:(BOOL)arg1 outSource:(*NSUInteger)arg2 ;
-(id)defaultTextStyleForTableStyleArea:(NSUInteger)arg0 ;
-(id)displayNameForColumnAtIndex:(unsigned short)arg0 ;
-(id)displayNameForColumnAtIndex:(unsigned short)arg0 derivation:(*NSInteger)arg1 ;
-(id)documentLocalizedDisplayNameForColumnAtIndex:(unsigned short)arg0 ;
-(id)drawableInfo;
-(id)fillForRow:(struct TSUModelRowIndex )arg0 ;
-(id)formatForCalcEngineAtBaseCellCoord:(struct TSUModelCellCoord )arg0 formatIsExplicitOut:(*BOOL)arg1 ;
-(id)formulaAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)formulaOwner;
-(id)formulaSpecAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)formulaSyntaxErrorAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(id)hiddenStateFormulaOwnerForColumns;
-(id)hiddenStateFormulaOwnerForRows;
-(id)initAsPivotDataWithContext:(id)arg0 tableInfo:(id)arg1 sourceModel:(id)arg2 sourceBody:(id)arg3 sourceHeader:(id)arg4 ;
-(id)initWithContext:(id)arg0 fromSourceModel:(id)arg1 region:(id)arg2 tableInfo:(id)arg3 waitForCalcEngine:(BOOL)arg4 ;
-(id)initWithContext:(id)arg0 fromSourceModel:(id)arg1 region:(id)arg2 tableInfo:(id)arg3 waitForCalcEngine:(BOOL)arg4 formulaCoordSpace:(NSInteger)arg5 ;
-(id)initWithContext:(id)arg0 rowUids:(*void)arg1 columnUids:(*void)arg2 styles:(id)arg3 stylePreset:(id)arg4 tableInfo:(id)arg5 ;
-(id)initWithContext:(id)arg0 rows:(unsigned int)arg1 columns:(unsigned int)arg2 styles:(id)arg3 stylePreset:(id)arg4 tableInfo:(id)arg5 ;
-(id)initWithContext:(id)arg0 tableUID:(struct TSKUIDStruct )arg1 columnRowUIDMap:(id)arg2 styles:(id)arg3 stylePreset:(id)arg4 tableInfo:(id)arg5 ;
-(id)linkedResolver;
-(id)mapReassigningPasteboardCustomFormatKeys:(id)arg0 ;
-(id)metadataForColumnIndex:(struct TSUModelColumnIndex )arg0 hidingAction:(unsigned char)arg1 ;
-(id)metadataForRowIndex:(struct TSUModelRowIndex )arg0 hidingAction:(unsigned char)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableColumnIndexesForUIDs:(*void)arg0 ;
-(id)mutableIndexesForUIDSet:(id)arg0 isRows:(BOOL)arg1 ;
-(id)mutableIndexesForUIDSet:(id)arg0 isRows:(BOOL)arg1 notFoundUIDs:(id)arg2 ;
-(id)mutableIndexesForUIDs:(*void)arg0 isRows:(BOOL)arg1 ;
-(id)mutableRowIndexesForUIDs:(*void)arg0 ;
-(id)newCell;
-(id)newCellWithLocale:(id)arg0 ;
-(id)objectToArchiveInDependencyTracker;
-(id)p_displayNameForColumnAtIndex:(unsigned short)arg0 documentLocalized:(BOOL)arg1 derivation:(*NSInteger)arg2 ;
-(id)regionForValueOrCommentCellsInBaseCellRect:(struct TSUModelCellRect )arg0 ;
-(id)rowIndexesForUIDs:(*void)arg0 ;
-(id)rowUuids;
-(id)sheetName;
-(id)stringAtBaseCellCoord:(struct TSUModelCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)strokeLayerForBottomOfRow:(unsigned int)arg0 ;
-(id)strokeLayerForLeftSideOfColumn:(unsigned short)arg0 ;
-(id)strokeLayerForRightSideOfColumn:(unsigned short)arg0 ;
-(id)strokeLayerForTopOfRow:(unsigned int)arg0 ;
-(id)tableAreasForBaseCellRect:(struct TSUModelCellRect )arg0 ;
-(id)textStyleAtModelCellCoord:(struct TSUModelCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleForCalcEngineAtBaseCellCoord:(struct TSUModelCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleForCellWithEmptyStyleAtBaseCellCoord:(struct TSUModelCellCoord )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleOfColumnAtIndex:(struct TSUModelColumnIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)textStyleOfRowAtIndex:(struct TSUModelRowIndex )arg0 isDefault:(*BOOL)arg1 ;
-(id)unnamedTableString;
-(int)getCell:(id)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 ;
-(int)getCell:(id)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 suppressCellBorder:(BOOL)arg2 ;
-(int)getDefaultCell:(id)arg0 forBaseCellCoord:(struct TSUModelCellCoord )arg1 ;
-(int)getDefaultCell:(id)arg0 forTableStyleArea:(NSUInteger)arg1 ;
-(int)getValue:(struct TSCEValue *)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 ;
-(int)getValue:(struct TSCEValue *)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 fetchRichTextAttributesIfPlainText:(BOOL)arg2 skipPendingWrites:(BOOL)arg3 ;
-(int)insertColumnsAtIndex:(struct TSUModelColumnIndex )arg0 uids:(*void)arg1 metadatas:(id)arg2 tableArea:(NSUInteger)arg3 ;
-(int)insertRowsAtIndex:(struct TSUModelRowIndex )arg0 uids:(*void)arg1 metadatas:(id)arg2 tableArea:(NSUInteger)arg3 unsetFilterHidingAction:(BOOL)arg4 ;
-(int)insertRowsInBaseRange:(struct _NSRange )arg0 uids:(*void)arg1 metadata:(id)arg2 unsetFilterHidingAction:(BOOL)arg3 ;
-(int)linkToCalcEngine:(id)arg0 ownerKind:(unsigned short)arg1 ;
-(int)maxStrokeOrder;
-(int)p_shouldAllowApplyBaseCellMap:(id)arg0 ;
-(int)p_shouldAllowSetCell:(id)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 ;
-(int)registerWithCalcEngine:(id)arg0 ownerKind:(unsigned short)arg1 ;
-(int)registerWithCalcEngine:(id)arg0 ownerKind:(unsigned short)arg1 linkOnly:(BOOL)arg2 ;
-(int)removeCommentStorageAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(int)setCell:(id)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 ignoreFormula:(BOOL)arg2 clearImportWarnings:(BOOL)arg3 ;
-(int)setCell:(id)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 ignoreFormula:(BOOL)arg2 clearImportWarnings:(BOOL)arg3 calcEngine:(id)arg4 ;
-(int)setCellStyle:(id)arg0 ofColumnAtIndex:(struct TSUModelColumnIndex )arg1 ;
-(int)setCellStyle:(id)arg0 ofRowAtIndex:(struct TSUModelRowIndex )arg1 ;
-(int)setCellsWithBaseCellMap:(id)arg0 ignoreFormulas:(BOOL)arg1 skipDirtyingNonFormulaCells:(BOOL)arg2 ;
-(int)setCommentStorage:(id)arg0 atBaseCellCoord:(struct TSUModelCellCoord )arg1 ;
-(int)setTextStyle:(id)arg0 ofColumnAtIndex:(struct TSUModelColumnIndex )arg1 ;
-(int)setTextStyle:(id)arg0 ofRowAtIndex:(struct TSUModelRowIndex )arg1 ;
-(int)shouldAllowApplyConcurrentCellMap:(id)arg0 ;
-(struct ? )p_tableSize;
-(struct TSCECellCoordSet )cellsModifiedInCurrentRecalcCycle;
-(struct TSCERangeCoordinate )tableRangeCoordinate;
-(struct TSCERecalculationState )evaluateFormulaAt:(struct TSUCellCoord )arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSKUIDStruct )UIDForIndex:(unsigned int)arg0 isRows:(BOOL)arg1 ;
-(struct TSKUIDStruct )columnUIDForColumnIndex:(unsigned short)arg0 ;
-(struct TSKUIDStruct )firstUidFromUIDSet:(id)arg0 isRows:(BOOL)arg1 ;
-(struct TSKUIDStruct )formulaOwnerUID;
-(struct TSKUIDStruct )groupByUID;
-(struct TSKUIDStruct )ownerUID;
-(struct TSKUIDStruct )resolverUID;
-(struct TSKUIDStruct )rowUIDForRowIndex:(unsigned int)arg0 ;
-(struct TSKUIDStructTract )cellUIDRangeForCellRange:(struct TSUCellRect )arg0 ;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )columnUIDs;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )rowUIDs;
-(struct TSUCellRect )cellRangeForUIDRange:(*void)arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForCellContainingRichTextStorage:(id)arg0 ;
-(struct TSUModelCellRect )actualHeaderColumnRange;
-(struct TSUModelCellRect )bodyColumnRange;
-(struct TSUModelCellRect )bodyRange;
-(struct TSUModelCellRect )bodyRowRange;
-(struct TSUModelCellRect )bottomCornerRange;
-(struct TSUModelCellRect )cellRangeForTableArea:(NSUInteger)arg0 ;
-(struct TSUModelCellRect )footerRowRange;
-(struct TSUModelCellRect )headerColumnRange;
-(struct TSUModelCellRect )headerRowRange;
-(struct TSUModelCellRect )mergedRangeForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUModelCellRect )range;
-(struct TSUModelCellRect )topCornerRange;
-(struct _NSRange )columnRangeForUIDs:(*void)arg0 ;
-(struct _NSRange )rowRangeForUIDs:(*void)arg0 ;
-(unsigned char)cellValueTypeAtBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(unsigned char)headerInfo_hidingActionForColumnAtIndex:(struct TSUModelColumnIndex )arg0 ;
-(unsigned char)headerInfo_hidingActionForRowAtIndex:(struct TSUModelRowIndex )arg0 ;
-(unsigned char)pivotDataCellValueTypeForColumn:(struct TSUModelColumnIndex )arg0 ;
-(unsigned int)rowIndexForRowUID:(struct TSKUIDStruct )arg0 ;
-(unsigned int)rowIndexForUUIDBytes:(unsigned char)arg0 ;
-(unsigned short)columnIndexForColumnUID:(struct TSKUIDStruct )arg0 ;
-(unsigned short)columnIndexForUUIDBytes:(unsigned char)arg0 ;
-(unsigned short)ownerKind;
-(void)_removeAnnotationsFromDeleteRange:(struct TSUModelCellRect )arg0 ;
-(void)accumulateCurrentCellsConcurrently:(id)arg0 ;
-(void)addCellRefToClearError:(struct TSCECellRef *)arg0 ;
-(void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
-(void)addReferencedStylesToSet:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)assertCollaborationConvergence;
-(void)assertListTilesAndRows;
-(void)clearCommentHostingMapForCommentStorage:(id)arg0 ;
-(void)clearErrors;
-(void)clearFromGroupByUID;
-(void)clearFromTableUID;
-(void)clearPivotOwner;
-(void)computeDefaultRowHeight;
-(void)copyPivotDetailDataFromSourceModel:(id)arg0 inSourceRegion:(id)arg1 columnMapping:(id)arg2 rowMapping:(id)arg3 ;
-(void)dealloc;
-(void)defaultStyleHandlesAtBaseCellCoord:(struct TSUModelCellCoord )arg0 useSoftDefault:(BOOL)arg1 styleDefaultsCache:(id)arg2 outCellStyleHandle:(*id)arg3 outTextStyleHandle:(*id)arg4 ;
-(void)defaultStylesForTableStyleArea:(NSUInteger)arg0 outCellStyle:(*id)arg1 outTextStyle:(*id)arg2 ;
-(void)didApplyConcurrentCellMap:(id)arg0 ;
-(void)documentLocaleDidChange;
-(void)enumerateCellsForSOSSerializationWithBlock:(id)arg0 ;
-(void)getUUIDBytes:(unsigned char)arg0 forColumnIndex:(unsigned short)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg0 forRowIndex:(unsigned int)arg1 ;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)loadAllLazyReferences;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)logTableTileAuditStatus:(BOOL)arg0 withVersion:(NSUInteger)arg1 ;
-(void)mapTableStylesToStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)moveBaseColumnRange:(struct _NSRange )arg0 toColumnIndex:(struct TSUModelColumnIndex )arg1 ;
-(void)moveBaseRowRange:(struct _NSRange )arg0 toRowIndex:(struct TSUModelRowIndex )arg1 ;
-(void)notifyTableOfNewResults;
-(void)p_clearDefaultStyles;
-(void)p_createCommentMapsIfNeeded;
-(void)p_iterateDataStoreCellsInRegion:(id)arg0 searchFlags:(NSUInteger)arg1 usingBlock:(id)arg2 ;
// -(void)p_modifyAllCellsConcurrentlyWithSearchFlags:(NSUInteger)arg0 affectsCellBorders:(BOOL)arg1 ignoreFormulas:(BOOL)arg2 clearImportWarnings:(BOOL)arg3 formulaReplacer:(id)arg4 modificationBlock:(id)arg5 preApplyBlock:(unk)arg6  ;
-(void)p_rebuildTheTable;
-(void)p_updateMergesAndCellsAsPivotDataWithSourceModel:(id)arg0 sourceRegion:(id)arg1 sourceBodyRegion:(id)arg2 ;
-(void)p_upgradeDefaultCellStylesForStrokeSidecar;
-(void)p_upgradeMerges;
-(void)performReadForOneOffFormulaEvaluation:(id)arg0 forCellCoord:(struct TSUCellCoord )arg1 ;
-(void)postCommentNotificationForStorage:(id)arg0 baseCellCoord:(struct TSUModelCellCoord )arg1 notificationKey:(id)arg2 ;
-(void)prepareForPasteWithCalculationEngine:(id)arg0 sourceOffset:(struct TSUColumnRowOffset )arg1 bakeFormulas:(BOOL)arg2 ;
-(void)prepareToApplyConcurrentCellMap:(id)arg0 ;
-(void)registerAllFormulasWithCalculationEngine:(id)arg0 wasCrossDocumentPaste:(BOOL)arg1 infoIsCategorized:(BOOL)arg2 wasUndo:(BOOL)arg3 ;
-(void)registerWithCalcEngineForDocumentLoad:(id)arg0 ownerKind:(unsigned short)arg1 ;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 bakeForBadRefs:(BOOL)arg2 ;
-(void)removeAnnotationsFromColumnsAtBaseIndexes:(id)arg0 ;
-(void)removeAnnotationsFromRowsAtBaseIndexes:(id)arg0 ;
-(void)removeColumnsAtBaseIndexes:(id)arg0 ;
-(void)removeColumnsAtIndex:(struct TSUModelColumnIndex )arg0 count:(struct TSUModelColumnIndex )arg1 ;
-(void)removeRowsAtBaseIndexes:(id)arg0 ;
-(void)removeRowsAtIndex:(struct TSUModelRowIndex )arg0 count:(struct TSUModelRowIndex )arg1 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)resetDependenciesForCell:(struct TSUCellCoord )arg0 ;
-(void)resetForPivotingWithRowUids:(*void)arg0 columnUids:(*void)arg1 numberOfHeaderRows:(struct TSUModelRowIndex )arg2 numberOfHeaderColumns:(struct TSUModelColumnIndex )arg3 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setCellsConcurrently:(id)arg0 ignoreFormula:(BOOL)arg1 clearImportWarnings:(BOOL)arg2 formulaReplacer:(id)arg3 ;
-(void)setFormulaOwnerUIDsWithMap:(id)arg0 shouldStealReferences:(BOOL)arg1 ;
-(void)setHeight:(CGFloat)arg0 ofRow:(struct TSUModelRowIndex )arg1 ;
-(void)setHeight:(CGFloat)arg0 ofRowAtIndex:(struct TSUModelRowIndex )arg1 ;
-(void)setHidingState:(unsigned char)arg0 atColumnIndex:(struct TSUModelColumnIndex *)arg1 ;
-(void)setHidingState:(unsigned char)arg0 atRowIndex:(struct TSUModelRowIndex *)arg1 ;
-(void)setStorageParentToInfo:(id)arg0 ;
-(void)setStroke:(id)arg0 forBottomOfRow:(unsigned int)arg1 order:(int)arg2 ;
-(void)setStroke:(id)arg0 forBottomOfRow:(unsigned int)arg1 order:(int)arg2 columnRange:(struct TSTSimpleRange )arg3 ;
-(void)setStroke:(id)arg0 forLeftOfColumn:(unsigned short)arg1 order:(int)arg2 ;
-(void)setStroke:(id)arg0 forLeftOfColumn:(unsigned short)arg1 order:(int)arg2 rowRange:(struct TSTSimpleRange )arg3 ;
-(void)setStroke:(id)arg0 forRightOfColumn:(unsigned short)arg1 order:(int)arg2 ;
-(void)setStroke:(id)arg0 forRightOfColumn:(unsigned short)arg1 order:(int)arg2 rowRange:(struct TSTSimpleRange )arg3 ;
-(void)setStroke:(id)arg0 forTopOfRow:(unsigned int)arg1 order:(int)arg2 ;
-(void)setStroke:(id)arg0 forTopOfRow:(unsigned int)arg1 order:(int)arg2 columnRange:(struct TSTSimpleRange )arg3 ;
-(void)setStyleNetwork:(id)arg0 ;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg0 ;
-(void)setWidth:(CGFloat)arg0 ofColumn:(struct TSUModelColumnIndex )arg1 ;
-(void)setWidth:(CGFloat)arg0 ofColumnAtIndex:(struct TSUModelColumnIndex )arg1 ;
-(void)setlabelLevel1CellStyle:(id)arg0 ;
-(void)setlabelLevel1TextStyle:(id)arg0 ;
-(void)setlabelLevel2CellStyle:(id)arg0 ;
-(void)setlabelLevel2TextStyle:(id)arg0 ;
-(void)setlabelLevel3CellStyle:(id)arg0 ;
-(void)setlabelLevel3TextStyle:(id)arg0 ;
-(void)setlabelLevel4CellStyle:(id)arg0 ;
-(void)setlabelLevel4TextStyle:(id)arg0 ;
-(void)setlabelLevel5CellStyle:(id)arg0 ;
-(void)setlabelLevel5TextStyle:(id)arg0 ;
-(void)swapRowAtIndex:(struct TSUModelRowIndex )arg0 withRowAtIndex:(struct TSUModelRowIndex )arg1 ;
-(void)unregisterFromCalcEngine:(id)arg0 ;
-(void)updateCalcEngineForTableSize;
-(void)updateCalculationEngineForFormula:(id)arg0 inBaseCellCoord:(struct TSUModelCellCoord )arg1 usingCalcEngine:(id)arg2 ;
-(void)updateCommentsWhenAddingTable;
-(void)updateCustomFormatsAtKey:(id)arg0 ;
-(void)updateMergesAndCellsAsPivotDataWithSourceModel:(id)arg0 ;
-(void)updateTableRowColumnStylesWithBlock:(id)arg0 ;
-(void)upgradeDuringDocumentUpgradeIfNeeded:(NSUInteger)arg0 ;
-(void)upgradeFormatsForCustomFormatListU2_0;
-(void)upgradeFromPreUFF;
-(void)upgradeHiddenStates;
-(void)validate;
-(void)validateTableStylesInSameStylesheetExpectingDocSS:(BOOL)arg0 ;
-(void)willBeAddedCellCleanup:(BOOL)arg0 ;
-(void)willClose;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif