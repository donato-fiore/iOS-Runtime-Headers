// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTLAYOUTDYNAMICRESIZEINFO_H
#define TSTLAYOUTDYNAMICRESIZEINFO_H

@class NSString;
@protocol TSTLayoutDynamicResizeInfoProtocol;

#import <Foundation/Foundation.h>

#import "TSTCellRegion.h"

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol>

 {
    BOOL mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned short mStartRowIndex;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfResizableRows;
    *CGFloat mCapturedRowHeights;
    *CGFloat mCurrentRowHeights;
    *CGFloat mMinimumRowHeights;
    CGFloat mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned char mStartColumnIndex;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfResizableColumns;
    *CGFloat mCapturedColumnWidths;
    *CGFloat mCurrentColumnWidths;
    *CGFloat mMinimumColumnWidths;
    CGFloat mCapturedColumnWidthTotal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasHeightForRow:(unsigned short)arg0 ;
-(BOOL)hasWidthForColumn:(unsigned char)arg0 ;
-(BOOL)valid;
-(CGFloat)applyColumnTotalWidth:(CGFloat)arg0 ;
-(CGFloat)applyResizeHeightFactor:(CGFloat)arg0 ;
-(CGFloat)applyResizeWidthFactor:(CGFloat)arg0 ;
-(CGFloat)applyRowTotalHeight:(CGFloat)arg0 ;
-(CGFloat)getColumnInitialWidth:(unsigned char)arg0 ;
-(CGFloat)getColumnWidth:(unsigned char)arg0 ;
-(CGFloat)getColumnWidthResize:(unsigned char)arg0 ;
-(CGFloat)getRowHeight:(unsigned short)arg0 ;
-(CGFloat)getRowHeightResize:(unsigned short)arg0 ;
-(CGFloat)getRowInitialHeight:(unsigned short)arg0 ;
-(id)columnWidths;
-(id)initWithDynamicResizeInfo:(id)arg0 ;
-(id)initWithMasterLayout:(id)arg0 ;
-(id)initWithMasterLayout:(id)arg0 columnRegion:(id)arg1 ;
-(id)initWithMasterLayout:(id)arg0 rowRegion:(id)arg1 ;
-(id)rowHeights;
-(struct CGSize )capturedTableSize;
-(void)captureNewMinimumRowHeights:(id)arg0 ;
-(void)dealloc;
-(void)enumerateColumnWidthsUsingBlock:(id)arg0 ;
-(void)enumerateRowHeightsUsingBlock:(id)arg0 ;
-(void)invalidate;
-(void)p_captureRowColumnInformation:(id)arg0 columnRegion:(id)arg1 rowRegion:(id)arg2 ;


@end


#endif