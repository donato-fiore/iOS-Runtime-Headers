// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGIFTTABLESECTIONHEADERVIEW_H
#define SKUIGIFTTABLESECTIONHEADERVIEW_H

@class UIView, UILabel, NSString;



@interface SKUIGiftTableSectionHeaderView : UIView {
    UILabel *_label;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSString *label;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif