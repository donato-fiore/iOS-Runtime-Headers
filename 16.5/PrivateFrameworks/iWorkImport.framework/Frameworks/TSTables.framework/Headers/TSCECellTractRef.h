// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCECELLTRACTREF_H
#define TSCECELLTRACTREF_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCECellTractRef : NSObject <NSCopying>



@property (nonatomic) TSCECellTractRefCore cppCellTractRef; // ivar: _cppCellTractRef
@property (nonatomic) BOOL mixedColumnStartedWithPreserve;
@property (nonatomic) BOOL mixedRowStartedWithPreserve;
@property (nonatomic) TSUPreserveFlags preserveFlags;
@property (nonatomic) BOOL preserveRectangular;
@property (nonatomic) BOOL spansAllColumns;
@property (nonatomic) BOOL spansAllRows;
@property (nonatomic) TSKUIDStruct tableUID;


+(id)cellTractRefWithUidTractList:(id)arg0 onTable:(struct TSKUIDStruct *)arg1 preserveFlags:(struct TSUPreserveFlags )arg2 rewriteContext:(struct TSCEFormulaRewriteContext *)arg3 ;
-(?)addColumns;
-(?)addRows;
-(?)columns;
-(?)initWithColumns:(?)arg0 rowstableUID;
-(?)initWithCppCellTractRef;
-(?)removeColumns;
-(?)removeRows;
-(?)rows;
-(?)setColumns;
-(?)setRows;
-(?)uidTractWithCalcEnginehostTableUID;
-(BOOL)edgeExpandTractUsingIncludeUidTract:(id)arg0 resolver:(id)arg1 forRows:(BOOL)arg2 isInverse:(BOOL)arg3 ;
-(BOOL)edgeExpandUsingMovingUids:(id)arg0 tractList:(id)arg1 ;
-(BOOL)hasTableUID;
-(BOOL)insertColumnGapsAtIndexes:(id)arg0 ;
-(BOOL)insertRowGapsAtIndexes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPreservedColumn:(unsigned short)arg0 preferStart:(BOOL)arg1 ;
-(BOOL)isPreservedRow:(unsigned int)arg0 preferStart:(BOOL)arg1 ;
-(BOOL)isRectangularRange;
-(BOOL)isSingleCell;
-(BOOL)isSingleCellOrSpanningRange;
-(BOOL)isValid;
-(BOOL)transpose;
-(NSUInteger)hash;
-(id)collapseOutColumnIndexes:(id)arg0 ;
-(id)collapseOutRowIndexes:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)edgeExpandUsingIndexes:(id)arg0 forRows:(BOOL)arg1 ;
-(id)expandUsingIndexes:(id)arg0 forRows:(BOOL)arg1 ;
-(id)fillInColumnGapsUsingIndexes:(id)arg0 ;
-(id)fillInRowGapsUsingIndexes:(id)arg0 ;
-(id)initWithCellRefVector:(*void)arg0 ;
-(id)initWithRangeRef:(struct TSCERangeRef *)arg0 ;
-(id)initWithTopLeft:(struct TSUCellCoord *)arg0 bottomRight:(struct TSUCellCoord *)arg1 ;
-(id)initWithTopLeft:(struct TSUCellCoord *)arg0 bottomRight:(struct TSUCellCoord *)arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(id)initWithUidTract:(*void)arg0 calcEngine:(id)arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(struct TSCERangeCoordinate )boundingRange;
-(struct TSCERangeRef )boundingRangeRef;
-(struct TSUCellCoord )bottomRight;
-(struct TSUCellCoord )coordAtColumnOffset:(unsigned int)arg0 rowOffset:(unsigned int)arg1 ;
-(struct TSUCellCoord )topLeft;
-(struct TSUPreserveFlags )preserveFlagsForCoord:(struct TSUCellCoord *)arg0 preferStart:(BOOL)arg1 ;
-(unsigned int)numColumns;
-(unsigned int)numRows;
-(void)addColumn:(unsigned short)arg0 ;
-(void)addColumnRange:(struct TSUIndexRange *)arg0 ;
-(void)addRow:(unsigned int)arg0 ;
-(void)addRowRange:(struct TSUIndexRange *)arg0 ;
-(void)adjustIndexesBy:(struct TSUColumnRowOffset *)arg0 ;
-(void)foreachAnyRef:(id)arg0 ;
-(void)foreachCellRect:(id)arg0 ;
-(void)foreachRangeRef:(id)arg0 ;
-(void)intersectWithCellRect:(struct TSUCellRect *)arg0 ;
-(void)intersectWithCellRectIgnoringSpanning:(struct TSUCellRect *)arg0 ;
-(void)removeColumnRange:(struct TSUIndexRange *)arg0 ;
-(void)removeRowRange:(struct TSUIndexRange *)arg0 ;
-(void)setBottomRight:(struct TSUCellCoord *)arg0 ;
-(void)setTopLeft:(struct TSUCellCoord *)arg0 ;


@end


#endif