// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEHAUNTEDOWNER_H
#define TSCEHAUNTEDOWNER_H

@class NSString;
@protocol TSCEFormulaOwning;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"

@interface TSCEHauntedOwner : NSObject <TSCEFormulaOwning>

 {
    TSCECalculationEngine *_calcEngine;
}


@property (nonatomic) TSKUIDStruct baseTableUID; // ivar: _baseTableUID
@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) TSKUIDStruct ownerUID; // ivar: _ownerUID
@property (readonly) Class superclass;


+(struct TSCECellRef )anyHeaderNameChangedPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )filteringChangedPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )formulaDefinitionPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )geometryPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )groupByChangedPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )localePrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )nowPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )pivotRulesChangedPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )pivotSortChangedPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )randomPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )sheetTableNamePrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )subtotalPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )summaryModelIsCleanForSortPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )summaryModelIsCleanPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )todayPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )uniqueDistinctPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
+(struct TSCECellRef )userHiddenChangedPrecedentForTableUID:(struct TSKUIDStruct *)arg0 ;
-(NSInteger)evaluationMode;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 forBaseTableUID:(struct TSKUIDStruct *)arg2 ;
-(id)initWithBaseTableUID:(struct TSKUIDStruct *)arg0 ;
-(id)initWithBaseTableUID:(struct TSKUIDStruct *)arg0 ownerUID:(struct TSKUIDStruct *)arg1 ;
-(id)linkedResolver;
-(int)registerWithCalcEngine:(id)arg0 ;
-(struct TSCERecalculationState )multiEvaluateFormulasAt:(*void)arg0 withCalcEngine:(id)arg1 recalcOptions:(struct TSCERecalculationState )arg2 ;
-(struct TSKUIDStruct )formulaOwnerUID;
-(unsigned short)ownerKind;
-(void)dirtyGeometryVolatileCells;
-(void)dirtyNowAndTodayVolatileCells;
-(void)dirtyNowVolatileCells;
-(void)dirtyRandomVolatileCells;
-(void)dirtySheetTableNameVolatileCells;
-(void)invalidateForCalcEngine:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)unregisterFromCalcEngine;
-(void)writeResultsForCalcEngine:(id)arg0 ;


@end


#endif