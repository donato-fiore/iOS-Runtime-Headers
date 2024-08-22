// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SKUICOUNTERTIMEFIELDVIEW_H
#define _SKUICOUNTERTIMEFIELDVIEW_H

@class UIView, UILabel;



@interface _SKUICounterTimeFieldView : UIView

@property (readonly, nonatomic) UILabel *labelLabel; // ivar: _labelLabel
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel
@property (nonatomic) NSUInteger visibilityField; // ivar: _visibilityField


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif