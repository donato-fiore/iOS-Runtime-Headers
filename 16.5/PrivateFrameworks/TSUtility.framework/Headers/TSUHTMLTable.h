// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUHTMLTABLE_H
#define TSUHTMLTABLE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSUHTMLTable : NSObject {
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSUInteger lastRowIndex;
@property (nonatomic) NSUInteger rowClassStride; // ivar: _rowClassStride


+(id)_attributesStringFromAttributes:(id)arg0 ;
+(id)_keyForCell:(NSUInteger)arg0 ;
+(id)htmlTable;
-(NSUInteger)indexOfColumnWithTitle:(id)arg0 ;
-(id)init;
-(id)markup;
-(void)addRowWithCellMarkup:(id)arg0 ;
-(void)addRowWithCellText:(id)arg0 ;
-(void)dealloc;
-(void)deleteColumnWithTitle:(id)arg0 ;
-(void)enumerateRowsUsingBlock:(id)arg0 ;
-(void)setCellAttributes:(id)arg0 rowIndex:(NSUInteger)arg1 columnIndex:(NSUInteger)arg2 ;
-(void)setCellMarkup:(id)arg0 atRowIndex:(NSUInteger)arg1 columnIndex:(NSUInteger)arg2 ;
-(void)setClass:(id)arg0 ofColumnIndex:(NSUInteger)arg1 ;
-(void)setColumnClasses:(id)arg0 ;
-(void)setColumnHeaders:(id)arg0 ;
-(void)setRowClass:(id)arg0 atRowIndex:(NSUInteger)arg1 ;


@end


#endif