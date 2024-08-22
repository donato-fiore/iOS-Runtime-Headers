// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLSTATEFORLAYOUT_H
#define TSTCELLSTATEFORLAYOUT_H

@class TSWPColumn;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTCell.h"
#import "TSTLayoutContentCachedKey.h"
#import "TSTTextStyleHandle.h"

@interface TSTCellStateForLayout : NSObject <NSCopying>



@property (copy, nonatomic) TSTCell *cell; // ivar: _cell
@property (retain, nonatomic) id *cellContents; // ivar: _cellContents
@property (nonatomic) BOOL cellPropsRowHeight; // ivar: _cellPropsRowHeight
@property (nonatomic) BOOL cellWraps; // ivar: _cellWraps
@property (nonatomic) BOOL forDrawing; // ivar: _forDrawing
@property (nonatomic) BOOL hasContent; // ivar: _hasContent
@property (nonatomic) BOOL hasContentIsCached; // ivar: _hasContentIsCached
@property (nonatomic) BOOL inDynamicLayout; // ivar: _inDynamicLayout
@property (retain, nonatomic) TSTLayoutContentCachedKey *keyVal; // ivar: _keyVal
@property (nonatomic) int layoutCacheFlags; // ivar: _layoutCacheFlags
@property (nonatomic) TSUCellRect layoutMergeRange; // ivar: _layoutMergeRange
@property (nonatomic) CGSize maxSize; // ivar: _maxSize
@property (nonatomic) CGFloat maxWidthForChildren; // ivar: _maxWidthForChildren
@property (nonatomic) CGSize minSize; // ivar: _minSize
@property (nonatomic) TSUCellCoord modelCellID; // ivar: _modelCellID
@property (nonatomic) BOOL needWPColumn; // ivar: _needWPColumn
@property (nonatomic) UIEdgeInsets paddingInsets; // ivar: _paddingInsets
@property (nonatomic) NSUInteger pageCount; // ivar: _pageCount
@property (nonatomic) NSUInteger pageNumber; // ivar: _pageNumber
@property (nonatomic) BOOL shouldFastPathMeasureFitWidth; // ivar: _shouldFastPathMeasureFitWidth
@property (nonatomic) CGSize sizeOfText; // ivar: _sizeOfText
@property (retain, nonatomic) TSTTextStyleHandle *textStyleHandle; // ivar: _textStyleHandle
@property (nonatomic) int verticalAlignment; // ivar: _verticalAlignment
@property (retain, nonatomic) TSWPColumn *wpColumn; // ivar: _wpColumn


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)p_generateCellContentsAndReturnContents:(BOOL)arg0 ;


@end


#endif