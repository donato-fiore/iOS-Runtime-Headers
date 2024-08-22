// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTFORMULAPREDARG_H
#define TSTFORMULAPREDARG_H

@class NSArray, NSMutableSet, NSDate, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCECategoryRef.h"
#import "TSCEViewTractRef.h"
#import "TSTFormulaPredArgData.h"
#import "TSTUIDRectRef.h"
#import "TSCEUndoTractList.h"

@interface TSTFormulaPredArg : NSObject <NSCopying>

 {
    TSCECategoryRef *_categoryRef;
    TSCEViewTractRef *_viewTractRef;
    RefTypeHolder<TSCECellRef, 0> _baseCellRef;
    NSArray *_dataList;
    TSCERelativeCellRef _relativeCellRef;
    TSUPreserveFlags _preserveFlags;
    NSMutableSet *_listItemsSet;
}


@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) TSCECategoryRef *categoryRef;
@property (readonly, nonatomic) TSTFormulaPredArgData *data; // ivar: _data
@property (readonly, nonatomic) NSArray *dataList;
@property (retain, nonatomic) NSDate *date;
@property (readonly) TSCENumberValue duration;
@property (nonatomic) unsigned char durationUnits;
@property (nonatomic) CGFloat durationValue;
@property (readonly, nonatomic) BOOL hasCategoryRef;
@property (readonly, nonatomic) BOOL hasRelativeCellRef; // ivar: _hasRelativeCellRef
@property (readonly, nonatomic) BOOL hasViewTractRef;
@property (nonatomic) TSUModelCellCoord hostCellCoord; // ivar: _hostCellCoord
@property (readonly, nonatomic) BOOL needsFormulaRewriting;
@property (retain, nonatomic) NSNumber *number;
@property (nonatomic) CGFloat numberValue;
@property (readonly, nonatomic) BOOL preserveColumn;
@property (nonatomic) TSUPreserveFlags preserveFlags;
@property (readonly, nonatomic) BOOL preserveRow;
@property (copy, nonatomic) NSString *string;
@property (readonly, nonatomic) unsigned char type; // ivar: _type
@property (readonly, nonatomic) TSTUIDRectRef *uidRectRef;
@property (retain, nonatomic) TSCEUndoTractList *uidTractList; // ivar: _uidTractList
@property (retain, nonatomic) TSCEViewTractRef *viewTractRef;


+(id)defaultPredicateArg;
-(*void)baseCellRef;
-(BOOL)isBoolValueInList:(BOOL)arg0 ;
-(BOOL)isCellValueInList:(id)arg0 ;
-(BOOL)isDateValueInListYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 ;
-(BOOL)isDurationValueInList:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 atHostCoord:(struct TSUModelCellCoord )arg1 ;
-(BOOL)isNumberValueInList:(struct TSUDecimal *)arg0 locale:(id)arg1 ;
-(BOOL)isStringValueInList:(id)arg0 ;
-(NSUInteger)hash;
-(id)cellReference;
-(id)convertToRelativeRefIfPossible;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initAsBadRefWithTableUID:(struct TSKUIDStruct *)arg0 uidTractList:(id)arg1 ;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithBaseCellRef:(*void)arg0 preserveFlags:(struct TSUPreserveFlags *)arg1 ;
-(id)initWithBaseCellReference:(id)arg0 preserveColumn:(BOOL)arg1 preserveRow:(BOOL)arg2 ;
-(id)initWithBool:(BOOL)arg0 ;
-(id)initWithCategoryRef:(id)arg0 ;
-(id)initWithCrossTableRef:(struct TSCECrossTableReference *)arg0 ;
-(id)initWithDataList:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDouble:(CGFloat)arg0 ;
-(id)initWithDuration:(CGFloat)arg0 units:(unsigned char)arg1 ;
-(id)initWithNumber:(id)arg0 ;
-(id)initWithRelativeCellRef:(struct TSCERelativeCellRef *)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 uidTractList:(id)arg1 ;
-(id)initWithViewTractRef:(id)arg0 ;
-(id)rewriteWithContext:(struct TSCEFormulaRewriteContext *)arg0 forArgAt:(NSInteger)arg1 usingLinkedRef:(BOOL)arg2 useColumnRef:(BOOL)arg3 hostCellRef:(struct TSCEUidCellRef *)arg4 rewriteBlock:(id)arg5 ;
-(struct TSCECellRef )cellRefForHostCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSCECrossTableReference )crossTableRef;
-(struct TSCEFormulaCreator )formulaCreatorForPredArg;
-(struct TSCEFormulaCreator )formulaCreatorForPredArg0UsingLinkedRef:(BOOL)arg0 useColumnRef:(BOOL)arg1 ;
-(struct TSCERelativeCellRef *)relativeCellRef;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setBaseCellRef:(*void)arg0 ;
-(void)setBaseCellRef:(*void)arg0 preserveColumn:(BOOL)arg1 preserveRow:(BOOL)arg2 ;
-(void)setBaseCellRef:(*void)arg0 preserveFlags:(struct TSUPreserveFlags *)arg1 ;
-(void)setBaseCellReference:(id)arg0 ;
-(void)setBaseCellReference:(id)arg0 preserveColumn:(BOOL)arg1 preserveRow:(BOOL)arg2 ;
-(void)setRelativeCellRef:(struct TSCERelativeCellRef *)arg0 ;


@end


#endif