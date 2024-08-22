// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCERELATIVETRACTREF_H
#define TSCERELATIVETRACTREF_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCECellTractRef.h"

@interface TSCERelativeTractRef : NSObject <NSCopying>

 {
    TSCECellTractRef *_absTractRef;
    ? _relativeColumns;
    ? _relativeRows;
}


@property (readonly, nonatomic) TSUPreserveFlags preserveFlags;
@property (nonatomic) BOOL preserveRectangular;
@property (nonatomic) BOOL spansAllColumns;
@property (nonatomic) BOOL spansAllRows;
@property (nonatomic) TSKUIDStruct tableUID;


-(?)columns;
-(?)preserveFlagsFixingInversionsForTract:(?)arg0 absFromRelColumnsabsFromRelRows;
-(?)relativeColumns;
-(?)relativeRows;
-(?)rows;
-(?)setColumns;
-(?)setRelativeColumns;
-(?)setRelativeRows;
-(?)setRows;
-(BOOL)hasTableUID;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangularRange;
-(BOOL)isSingleCellOrSpanningRange;
-(BOOL)verifySpanningSettings;
-(NSUInteger)hash;
-(id)absoluteCellTractRefForHostCell:(struct TSUCellCoord *)arg0 ;
-(id)absoluteCellTractRefForHostCell:(struct TSUCellCoord *)arg0 offTable:(*BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithAbsoluteTractRef:(id)arg0 hostCell:(struct TSUCellCoord *)arg1 ;
-(id)initWithRangeRef:(struct TSCERangeRef *)arg0 hostCell:(struct TSUCellCoord *)arg1 ;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 preserveFlags:(struct TSUPreserveFlags *)arg1 ;
-(struct ? )relativeBoundingRangeWithContainingCell:(struct TSUCellCoord *)arg0 ;
-(struct TSCERelativeCellCoordinate )relativeBottomRight;
-(struct TSCERelativeCellCoordinate )relativeTopLeft;
-(unsigned int)numColumns;
-(unsigned int)numRelativeColumns;
-(unsigned int)numRelativeRows;
-(unsigned int)numRows;
-(void)addColumn:(unsigned short)arg0 ;
-(void)addColumnRange:(struct TSUIndexRange *)arg0 ;
-(void)addRelativeColumn:(short)arg0 ;
-(void)addRelativeColumnRange:(struct TSUIndexRange *)arg0 ;
-(void)addRelativeRow:(int)arg0 ;
-(void)addRelativeRowRange:(struct TSUIndexRange *)arg0 ;
-(void)addRow:(unsigned int)arg0 ;
-(void)addRowRange:(struct TSUIndexRange *)arg0 ;
-(void)adjustRelativeIndexesBy:(struct TSUColumnRowOffset *)arg0 ;
-(void)removeColumnRange:(struct TSUIndexRange *)arg0 ;
-(void)removeRelativeColumnRange:(struct TSUIndexRange *)arg0 ;
-(void)removeRelativeRowRange:(struct TSUIndexRange *)arg0 ;
-(void)removeRowRange:(struct TSUIndexRange *)arg0 ;
-(void)repairSpanningColumnSetting;
-(void)repairSpanningRowSetting;


@end


#endif