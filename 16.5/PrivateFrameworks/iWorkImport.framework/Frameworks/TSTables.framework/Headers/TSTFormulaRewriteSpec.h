// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTFORMULAREWRITESPEC_H
#define TSTFORMULAREWRITESPEC_H



#import "TSCEFormulaRewriteSpec.h"
#import "TSTFormulaRewrite_PivotInfo.h"

@interface TSTFormulaRewriteSpec : TSCEFormulaRewriteSpec

@property (retain, nonatomic) TSTFormulaRewrite_PivotInfo *pivotInfo; // ivar: _pivotInfo


-(id)initForCategorizedTableBaseToChromeRewriterWithSrcTableUID:(struct TSKUIDStruct *)arg0 srcTract:(*void)arg1 dstTableUID:(struct TSKUIDStruct *)arg2 destTract:(*void)arg3 coordMapper:(id)arg4 ;
-(id)initForCategorizedTableChromeToBaseRewriterWithSrcTableUID:(struct TSKUIDStruct *)arg0 srcTract:(*void)arg1 dstTableUID:(struct TSKUIDStruct *)arg2 destTract:(*void)arg3 coordMapper:(id)arg4 srcCoordMapper:(id)arg5 fromTableUID:(struct TSKUIDStruct *)arg6 ;
-(id)initForGroupBy:(struct TSKUIDStruct *)arg0 groupNodeUIDReassignment:(*void)arg1 ;
-(id)initForGroupBy:(struct TSKUIDStruct *)arg0 withGroupByChange:(id)arg1 ;
-(id)initForInsertingRowsOrColumnsIntoTable:(struct TSKUIDStruct *)arg0 rowColumnUuids:(*void)arg1 areRows:(BOOL)arg2 ;
-(id)initForMergeCellsWithTableUID:(struct TSKUIDStruct *)arg0 columnUids:(*void)arg1 rowUids:(*void)arg2 mergeSource:(struct TSUCellCoord )arg3 ;
-(id)initForMergeOriginsMovedWithMap:(*void)arg0 reverseMap:(*void)arg1 inTableUID:(struct TSKUIDStruct *)arg2 ;
-(id)initForMovingRegionWithSrcTableUID:(struct TSKUIDStruct *)arg0 srcTract:(*void)arg1 dstTableUID:(struct TSKUIDStruct *)arg2 destTract:(*void)arg3 ;
-(id)initForMovingRowsOrColumnsInTable:(struct TSKUIDStruct *)arg0 rowColumnUuids:(*void)arg1 shuffleMap:(id)arg2 areRows:(BOOL)arg3 srcTract:(*void)arg4 destTract:(*void)arg5 ;
-(id)initForPastingCellsWithTableUID:(struct TSKUIDStruct *)arg0 columnUids:(*void)arg1 rowUids:(*void)arg2 ;
-(id)initForRemoveRowsOrColumnsFromTable:(struct TSKUIDStruct *)arg0 rowColumnUuids:(*void)arg1 areRows:(BOOL)arg2 ;
-(id)initForReorderRowsWithTableUID:(struct TSKUIDStruct *)arg0 rowUids:(*void)arg1 shuffleMap:(id)arg2 ;
-(id)initForSortWithTableUID:(struct TSKUIDStruct *)arg0 rowUids:(*void)arg1 shuffleMap:(id)arg2 ;
-(id)initForTableUIDReassignment:(*void)arg0 ;
-(id)initForUndoMergeCellsWithTableUID:(struct TSKUIDStruct *)arg0 columnUids:(*void)arg1 rowUids:(*void)arg2 mergeSource:(struct TSUCellCoord )arg3 ;
-(id)initFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithOwnerDeletion:(struct TSKUIDStruct *)arg0 ;
-(id)initWithOwnerInsertion:(struct TSKUIDStruct *)arg0 fromOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(id)initWithPivotRuleChange:(struct TSKUIDStruct *)arg0 ;
-(id)initWithTransposeTable:(struct TSKUIDStruct *)arg0 transposedBodyRange:(struct TSCERangeCoordinate )arg1 numberOfFooterRows:(unsigned int)arg2 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif