// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBUTTONBARITEMLAYOUT_H
#define _UIBUTTONBARITEMLAYOUT_H

@class UIButtonBarLayout, NSLayoutConstraint;


#import "UIBarButtonItem.h"
#import "UIView.h"
#import "_UITAMICAdaptorView.h"

@interface _UIButtonBarItemLayout : UIButtonBarLayout {
    UIBarButtonItem *_item;
    UIView *_itemView;
    _UITAMICAdaptorView *_itemViewWrapper;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_maximumAlignmentSize;
    NSLayoutConstraint *_groupSameSize;
    NSLayoutConstraint *_popoverGuideLeading;
    NSLayoutConstraint *_popoverGuideTrailing;
    NSLayoutConstraint *_popoverGuideTop;
    NSLayoutConstraint *_popoverGuideHeight;
}


@property (copy, nonatomic) id *itemViewGenerator; // ivar: _itemViewGenerator
@property (nonatomic) BOOL suppressSpacing; // ivar: _suppressSpacing
@property (nonatomic) BOOL useGroupSizing; // ivar: _useGroupSizing


-(BOOL)_shouldBeDirty;
-(BOOL)shouldHorizontallyCenterView:(id)arg0 ;
-(CGFloat)minimumLayoutWidthGivenMinimumSpaceWidth:(CGFloat)arg0 ;
-(id)barButtonItem;
-(id)description;
-(id)initWithLayoutMetrics:(id)arg0 ;
-(id)initWithLayoutMetrics:(id)arg0 barButtonItem:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg0 toDeactivate:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg0 ;
-(void)_addLayoutViews:(id)arg0 ;
-(void)_configure;
-(void)_updateCustomView;
-(void)_updateItemView;
-(void)_updateItemViewSizing;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg0 doneAppearanceChanged:(BOOL)arg1 ;


@end


#endif