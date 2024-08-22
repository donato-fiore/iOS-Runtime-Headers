// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTAUTOFILLSELECTION_H
#define TSTAUTOFILLSELECTION_H

@class TSKSelection;



@interface TSTAutofillSelection : TSKSelection

@property (nonatomic) TSUCellRect sourceCellRange; // ivar: _sourceCellRange
@property (nonatomic) TSUCellRect targetCellRange; // ivar: _targetCellRange


+(Class)archivedSelectionClass;
+(id)autofillSelectionWithSourceCellRange:(struct TSUCellRect )arg0 ;
+(id)autofillSelectionWithSourceCellRange:(struct TSUCellRect )arg0 targetCellRange:(struct TSUCellRect )arg1 ;
-(BOOL)isValidForCellSelection:(id)arg0 inTable:(id)arg1 ;
-(BOOL)isValidForRowVisibilityChangeInRegion:(id)arg0 table:(id)arg1 ;
-(id)initWithSourceCellRange:(struct TSUCellRect )arg0 ;
-(id)initWithSourceCellRange:(struct TSUCellRect )arg0 targetCellRange:(struct TSUCellRect )arg1 ;


@end


#endif