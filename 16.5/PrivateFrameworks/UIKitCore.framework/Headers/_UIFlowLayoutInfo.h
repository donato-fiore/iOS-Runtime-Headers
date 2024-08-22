// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFLOWLAYOUTINFO_H
#define _UIFLOWLAYOUTINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UICollectionViewFlowLayout.h"

@interface _UIFlowLayoutInfo : NSObject {
    BOOL _useFloatingHeaderFooter;
    CGRect _visibleBounds;
    CGSize _layoutSize;
    BOOL _isValid;
    CGSize _computedEstimatedSum;
    NSInteger _computedEstimatedCount;
    BOOL _usesFloatingHeaderFooter;
    BOOL _horizontal;
    BOOL _leftToRight;
    BOOL _estimatesSizes;
    NSMutableArray *_sections;
    CGFloat _dimension;
    UICollectionViewFlowLayout *_layout;
    ? _rowAlignmentOptions;
    CGSize _contentSize;
}




-(id)copy;
-(id)init;


@end


#endif