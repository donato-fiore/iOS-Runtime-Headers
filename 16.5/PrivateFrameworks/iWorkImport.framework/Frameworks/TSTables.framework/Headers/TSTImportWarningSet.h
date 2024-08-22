// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTIMPORTWARNINGSET_H
#define TSTIMPORTWARNINGSET_H

@class NSString;
@protocol TSSPropertyCommandSerializing;

#import <Foundation/Foundation.h>


@interface TSTImportWarningSet : NSObject <TSSPropertyCommandSerializing>

 {
    TSTImportWarningSetCellWarningFlags _cellWarning;
    NSString *_originalDataFormat;
    TSTImportFormulaWarning _formulaWarning;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cellDiffClearingAllWarningsWithContext:(id)arg0 ;
+(id)emptyWarningSet;
+(id)p_warningSetForFormulaWarningType:(NSInteger)arg0 originalFormula:(id)arg1 supplementaryText:(id)arg2 ;
+(id)warningSetFor3DReferenceFormula:(id)arg0 ;
+(id)warningSetForArrayedFormula:(id)arg0 ;
+(id)warningSetForCondFormatAboveAvgEqualAvg;
+(id)warningSetForCondFormatAboveAvgStdDev;
+(id)warningSetForCondFormatComplexFormula;
+(id)warningSetForCondFormatContainsErrors;
+(id)warningSetForCondFormatExpr;
+(id)warningSetForCondFormatNotContainsErrors;
+(id)warningSetForCondFormatParamatersNotAllTheSame;
+(id)warningSetForCondFormatStopIfTrue;
+(id)warningSetForCondFormatUnsupportedOperator;
+(id)warningSetForCondFormatUnsupportedStyling;
+(id)warningSetForCondFormatUnsupportedTimePeriod;
+(id)warningSetForDifferentBehaviorForFunctionFormula:(id)arg0 originalFormula:(id)arg1 ;
+(id)warningSetForDurationFormatRangeChanged;
+(id)warningSetForErrorTokenFormula:(id)arg0 ;
+(id)warningSetForExternalReferenceFormula:(id)arg0 ;
+(id)warningSetForFilteredColumnFormulaNotCopied;
+(id)warningSetForFormulaReplacedForExcelCompat:(id)arg0 originalFormula:(id)arg1 ;
+(id)warningSetForNaturalLanguageFormula:(id)arg0 ;
+(id)warningSetForReferenceOutOfBoundsFormula:(id)arg0 ;
+(id)warningSetForSharedFormulaBaseNotFoundFormula:(id)arg0 ;
+(id)warningSetForTransposeUnmodifiedWithIssues;
+(id)warningSetForTransposedWithIssues:(id)arg0 ;
+(id)warningSetForTransposedWithoutIssues:(id)arg0 ;
+(id)warningSetForUnknownName:(id)arg0 originalFormula:(id)arg1 ;
+(id)warningSetForUnsupportedCondFormat;
+(id)warningSetForUnsupportedDataFormat:(id)arg0 ;
+(id)warningSetForUnsupportedFormula:(id)arg0 ;
+(id)warningSetForUnsupportedFunction:(id)arg0 originalFormula:(id)arg1 ;
+(id)warningSetForUnsupportedNameFormula:(id)arg0 originalFormula:(id)arg1 ;
-(BOOL)areAnySet;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_isPersistedWithFormulaWarningTypeEnumeration;
-(BOOL)tst_dataObjectIsEqual:(id)arg0 ;
-(NSInteger)TSTImportFormulaWarningTypeFromArchive:(int)arg0 ;
-(NSUInteger)tst_dataObjectHash;
-(id)cellDiffClearingWarningsWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)individualWarnings;
-(id)init;
-(id)initFromArchive:(*void)arg0 ;
-(id)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(id)localizedWarningStrings;
-(id)warningSetByAddingWarningsFromSet:(id)arg0 ;
-(id)warningSetByRemovingWarningsFromSet:(id)arg0 ;
-(int)TSTImportFormulaWarningTypeToArchive;
-(void)saveToArchive:(*void)arg0 ;
-(void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(id)arg1 ;


@end


#endif