// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCETRACKEDREFERENCE_H
#define TSCETRACKEDREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCETrackedReference : NSObject <NSCopying>

 {
    *TSCEASTNodeArray _AST;
}


@property (nonatomic) TSUCellCoord formulaCoord; // ivar: _formulaCoord


-(BOOL)isEqualToTrackedReference:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getPrecedentsWithCalcEngine:(id)arg0 hostOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(id)initByCopyingASTNodeArray:(struct TSCEASTNodeArray *)arg0 atFormulaCoord:(struct TSUCellCoord *)arg1 ;
-(id)initFromArchive:(*void)arg0 ;
-(id)initFromExpandedArchive:(*void)arg0 ;
-(id)initWithCellRef:(struct TSCECellRef *)arg0 ;
-(id)initWithRangeRef:(struct TSCERangeRef *)arg0 ;
-(id)initWithSpanningRangeRef:(struct TSCESpanningRangeRef *)arg0 ;
-(id)initWithTrackedReferenceTSPObjectDeprecated:(id)arg0 ;
-(id)precedentsWithCalcEngine:(id)arg0 hostOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(id)referencesForCalcEngine:(id)arg0 referenceTrackerUID:(struct TSKUIDStruct *)arg1 ;
-(struct TSCEASTNodeArray *)ast;
-(struct TSCECellRef )refersToCellRefForCalculationEngine:(id)arg0 referenceTrackerUID:(struct TSKUIDStruct *)arg1 ;
-(void)dealloc;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)encodeToExpandedArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)registerWithCalcEngine:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(void)replaceContentsWithContentsOfTrackedReference:(id)arg0 ;


@end


#endif