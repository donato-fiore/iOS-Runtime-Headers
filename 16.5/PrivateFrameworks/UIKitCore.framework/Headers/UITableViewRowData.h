// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWROWDATA_H
#define UITABLEVIEWROWDATA_H

@class NSIndexPath;
@protocol NSCopying, UITable_RowDataSource;

#import <Foundation/Foundation.h>

#import "UITableViewHeaderFooterView.h"

@interface UITableViewRowData : NSObject <NSCopying>

 {
    id<UITable_RowDataSource> *_tableView;
    UITableViewHeaderFooterView *_headerFooterViewUsedForMeasurements;
    CGFloat _tableViewWidth;
    UIEdgeInsets _sectionContentInset;
    NSInteger _numSections;
    BOOL _estimatesHeights;
    NSInteger _sectionRowDataCapacity;
    *id _sectionRowData;
    CGFloat _tableHeaderHeight;
    CGFloat _tableFooterHeight;
    CGFloat _heightForTableHeaderViewHiding;
    NSInteger _headerFooterPinningBehavior;
    ? _rowDataFlags;
    CGFloat _minimumRowHeight;
    CGFloat _rowSpacing;
    CGFloat _tableTopPadding;
    CGFloat _tableBottomPadding;
    CGFloat _tableSidePadding;
    NSIndexPath *_gapIndexPath;
    NSIndexPath *_reorderedIndexPath;
    NSIndexPath *_draggedIndexPath;
    CGFloat _defaultSectionHeaderHeight;
    CGFloat _defaultSectionFooterHeight;
    CGFloat _gapRowHeight;
    CGFloat _draggedRowHeight;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif