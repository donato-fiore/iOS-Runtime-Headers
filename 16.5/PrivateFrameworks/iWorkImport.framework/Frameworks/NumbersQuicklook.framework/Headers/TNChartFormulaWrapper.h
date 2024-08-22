// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TNCHARTFORMULAWRAPPER_H
#define TNCHARTFORMULAWRAPPER_H

@class TSKSosBase, TSCEFormulaObject, TSCEValueGrid, NSArray;


#import "TNChartVectorWrapper.h"

@interface TNChartFormulaWrapper : TSKSosBase {
    TSCEFormulaObject *_formulaObject;
    NSInteger _cachedNumberOfValues;
    TNChartVectorWrapper *_cachedOutputValueVector;
    vector<TSUCellCoord, std::allocator<TSUCellCoord>> _cachedChromeCoords;
    TSCEValueGrid *_cachedValueGrid;
    NSArray *_cachedPlotwiseLabels;
    BOOL _cachedSkipHiddenData;
    BOOL _cachedLabelsByRow;
    BOOL _cachedChromeCoordsRealized;
}


@property (readonly, retain, nonatomic) TSCEFormulaObject *formulaObject;


+(id)chartFormulaForCategoryRef:(id)arg0 ;
+(id)chartFormulaForCellReference:(struct TSCECellRef )arg0 ;
+(id)chartFormulaForCellRegion:(id)arg0 inTable:(id)arg1 ;
+(id)chartFormulaForRangeReference:(struct TSCERangeRef )arg0 ;
+(id)chartFormulaForString:(id)arg0 ;
+(id)chartFormulaForTractAsRangeReferences:(id)arg0 ;
+(id)chartFormulaForTractReference:(id)arg0 ;
+(id)chartFormulaForViewTractRef:(id)arg0 ;
+(id)chartFormulaWithFormulaObject:(id)arg0 ;
+(id)emptyChartFormula;
-(BOOL)formulaIsEqualTo:(id)arg0 ;
-(BOOL)isAllStaticValuesWithCalcEngine:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfGridValuesWithCalcEngine:(id)arg0 inChart:(struct TSKUIDStruct *)arg1 byRow:(BOOL)arg2 shouldSkipHiddenData:(BOOL)arg3 ;
-(NSUInteger)numberOfTotalPlotwiseLabelValuesWithCalcEngine:(id)arg0 inChart:(struct TSKUIDStruct *)arg1 byRow:(BOOL)arg2 shouldSkipHiddenData:(BOOL)arg3 ;
-(NSUInteger)numberOfValuesWithCalcEngine:(id)arg0 inChart:(struct TSKUIDStruct *)arg1 shouldSkipHiddenData:(BOOL)arg2 ;
-(id)argumentCollectionWithCalcEngine:(id)arg0 inChart:(struct TSKUIDStruct *)arg1 ;
-(id)argumentCollectionWithCalcEngine:(id)arg0 inChart:(struct TSKUIDStruct *)arg1 storeBadRef:(BOOL)arg2 ;
-(id)description;
-(id)formulaByBakingValuesWithCalcEngine:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(id)formulaByProcessingArgumentsWithCalcEngine:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 usingBlock:(id)arg2 ;
-(id)formulaByRewriting:(BOOL)arg0 withCalcEngine:(id)arg1 andHostUID:(struct TSKUIDStruct *)arg2 ;
-(id)formulaByTrimmingCategoryLabels:(NSUInteger)arg0 plotByRow:(BOOL)arg1 calcEngine:(id)arg2 inChart:(struct TSKUIDStruct *)arg3 ;
-(id)gridLabelValueAtIndex:(NSUInteger)arg0 withEvaluationContext:(*void)arg1 byRow:(BOOL)arg2 shouldSkipHiddenData:(BOOL)arg3 ;
-(id)initWithFormulaObject:(id)arg0 ;
-(id)outputGrid:(*void)arg0 shouldSkipHiddenData:(BOOL)arg1 ;
-(id)outputGridVectorForSeries:(NSUInteger)arg0 withContext:(*void)arg1 byRow:(BOOL)arg2 shouldSkipHiddenData:(BOOL)arg3 ;
-(id)outputValue:(*void)arg0 shouldSkipHiddenData:(BOOL)arg1 ;
-(id)outputValue:(*void)arg0 shouldSkipHiddenData:(BOOL)arg1 requiresChromeCoords:(BOOL)arg2 ;
-(id)plotwiseLabelValuesWithEvaluationContext:(*void)arg0 byRow:(BOOL)arg1 shouldSkipHiddenData:(BOOL)arg2 ;
-(id)stringValueForFormulaWithCalcEngine:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(struct TSCERangeRef )rangeCircumscribingPrecedentsWithCalcEngine:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(struct vector<std::pair<TSCEValue, TSUCellCoord>, std::allocator<std::pair<TSCEValue, TSUCellCoord>>> )outputVectorValuesWithChromeCoords:(*void)arg0 shouldSkipHiddenData:(BOOL)arg1 ;
-(void)clearCacheForCalculationEngine:(id)arg0 ;
-(void)enumerateOutputGridForSeries:(NSUInteger)arg0 withContext:(*void)arg1 byRow:(BOOL)arg2 shouldSkipHiddenData:(BOOL)arg3 withBlock:(id)arg4 ;


@end


#endif