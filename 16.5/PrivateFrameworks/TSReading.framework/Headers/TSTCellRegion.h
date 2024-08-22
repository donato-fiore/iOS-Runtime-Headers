// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLREGION_H
#define TSTCELLREGION_H

@class NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTCellRegion : NSObject <NSCopying>

 {
    NSUInteger mCellRangesCount;
    *? mCellRanges;
    ? mBoundingCellRange;
    NSUInteger mCellCount;
    NSIndexSet *mIntersectingColumnsIndexSet;
    NSIndexSet *mIntersectingRowsIndexSet;
    ? mUpperLeftCellID;
    ? mBottomRightCellID;
}


@property (readonly, nonatomic) ? bottomRightCellID;
@property (readonly, nonatomic) ? boundingCellRange;
@property (readonly, nonatomic) NSUInteger cellCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isRectangle;
@property (readonly, nonatomic) unsigned short numberOfIntersectingColumns;
@property (readonly, nonatomic) unsigned short numberOfIntersectingRows;
@property (readonly, nonatomic) ? upperLeftCellID;


+(id)invalidRegion;
+(id)region:(id)arg0 addingRange:(struct ? )arg1 ;
+(id)region:(id)arg0 addingRegion:(id)arg1 ;
+(id)region:(id)arg0 intersectingRange:(struct ? )arg1 ;
+(id)region:(id)arg0 subtractingRange:(struct ? )arg1 ;
+(id)region:(id)arg0 subtractingRegion:(id)arg1 ;
+(id)regionFillingColumnsFromRegion:(id)arg0 ;
+(id)regionFillingRowsFromRegion:(id)arg0 ;
+(id)regionFromCellMap:(id)arg0 ;
+(id)regionFromColumnIndices:(id)arg0 ;
+(id)regionFromRange:(struct ? )arg0 ;
+(id)regionFromRowIndices:(id)arg0 ;
+(id)unionEveryRangeInRegion:(id)arg0 withRange:(struct ? )arg1 ;
-(BOOL)containsCellID:(struct ? )arg0 ;
-(BOOL)containsCellRange:(struct ? )arg0 ;
-(BOOL)containsCellRegion:(id)arg0 ;
-(BOOL)equalsCellRange:(struct ? )arg0 ;
-(BOOL)equalsCellRegion:(id)arg0 ;
-(BOOL)intersectsCellRange:(struct ? )arg0 ;
-(BOOL)intersectsColumn:(unsigned char)arg0 ;
-(BOOL)intersectsRow:(unsigned short)arg0 ;
-(BOOL)isValid;
-(BOOL)partiallyIntersectsCellRange:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)intersectingColumnsIndexSet;
-(id)intersectingRowsIndexSet;
-(id)iterator;
-(id)regionByAddingColumns:(id)arg0 ;
-(id)regionByAddingRange:(struct ? )arg0 ;
-(id)regionByAddingRegion:(id)arg0 ;
-(id)regionByAddingRows:(id)arg0 ;
-(id)regionByApplyingRowMapping:(id)arg0 ;
-(id)regionByIntersectingColumnIndices:(id)arg0 ;
-(id)regionByIntersectingRange:(struct ? )arg0 ;
-(id)regionByIntersectingRowIndices:(id)arg0 ;
-(id)regionByRemovingColumns:(id)arg0 ;
-(id)regionByRemovingRows:(id)arg0 ;
-(id)regionBySubtractingRange:(struct ? )arg0 ;
-(id)regionBySubtractingRegion:(id)arg0 ;
-(id)regionByUnioningEveryRangeInRegionWithRange:(struct ? )arg0 ;
-(id)regionOffsetBy:(struct ? )arg0 ;
-(id)rightToLeftIterator;
-(id)topToBottomIterator;
-(struct ? )suitableAnchor;
-(struct ? )suitableCursor;
-(void)dealloc;
-(void)enumerateCellIDsUsingBlock:(id)arg0 ;
-(void)enumerateCellRangesUsingBlock:(id)arg0 ;
-(void)enumerateColumnRangesUsingBlock:(id)arg0 ;
-(void)enumerateColumnsUsingBlock:(id)arg0 ;
-(void)enumerateInDirection:(int)arg0 usingBlock:(id)arg1 ;
-(void)enumerateRowRangesUsingBlock:(id)arg0 ;
-(void)enumerateRowsUsingBlock:(id)arg0 ;
-(void)fillCellRangeColMajorSet:(*void)arg0 leftToRight:(BOOL)arg1 ;
-(void)fillCellRangeRowMajorSet:(*void)arg0 leftToRight:(BOOL)arg1 ;
-(void)p_calculateAncillaryInformation;
-(void)p_calculateIntersectingColumns;
-(void)p_calculateIntersectingRows;
-(void)p_calculateUpperLeftAndBottomRightCellID;
-(void)p_insertRangeIntoRegion:(struct ? )arg0 ;


@end


#endif