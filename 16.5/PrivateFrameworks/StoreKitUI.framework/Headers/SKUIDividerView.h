// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDIVIDERVIEW_H
#define SKUIDIVIDERVIEW_H

@class UIView, UIColor;



@interface SKUIDividerView : UIView

@property (retain, nonatomic) UIColor *dividerColor;
@property (nonatomic) NSInteger dividerOrientation; // ivar: _dividerOrientation
@property (nonatomic) CGFloat dividerSize; // ivar: _dividerSize


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif