// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISCROLLINGSEGMENTEDCONTROLLERCOLLECTIONVIEW_H
#define SKUISCROLLINGSEGMENTEDCONTROLLERCOLLECTIONVIEW_H

@protocol SKUIScrollingSegmentedControllerCollectionViewDelegate;


#import "SKUIViewControllerContainerCollectionView.h"

@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView

@property (nonatomic) NSObject<SKUIScrollingSegmentedControllerCollectionViewDelegate> *delegate;
@property (readonly, nonatomic, getter=isPerformingLayout) BOOL performingLayout; // ivar: _performingLayout


-(void)layoutSubviews;


@end


#endif