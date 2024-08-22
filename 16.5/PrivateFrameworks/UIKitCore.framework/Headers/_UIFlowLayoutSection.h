// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFLOWLAYOUTSECTION_H
#define _UIFLOWLAYOUTSECTION_H

@class NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIFlowLayoutInfo.h"

@interface _UIFlowLayoutSection : NSObject {
    BOOL _isValid;
    CGRect _validRect;
    CGRect _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
    BOOL _fixedItemSize;
    BOOL _lastRowIncomplete;
    NSMutableArray *_items;
    NSMutableArray *_rows;
    CGFloat _verticalInterstice;
    CGFloat _horizontalInterstice;
    CGFloat _headerDimension;
    CGFloat _footerDimension;
    _UIFlowLayoutInfo *_layoutInfo;
    CGFloat _otherMargin;
    CGFloat _beginMargin;
    CGFloat _endMargin;
    CGFloat _actualGap;
    CGFloat _lastRowBeginMargin;
    CGFloat _lastRowEndMargin;
    CGFloat _lastRowActualGap;
    NSInteger _itemsCount;
    NSInteger _itemsByRowCount;
    NSInteger _indexOfIncompleteRow;
    ? _rowAlignmentOptions;
    CGSize _itemSize;
    _NSRange _validItemRange;
    UIEdgeInsets _sectionMargins;
    CGRect _frame;
    CGRect _headerFrame;
    CGRect _footerFrame;
}




-(id)init;


@end


#endif