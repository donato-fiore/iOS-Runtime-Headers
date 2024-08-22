// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKLABELCONTAINERVIEW_H
#define TKLABELCONTAINERVIEW_H

@class UIView, UILabel, UIFont, UIColor, NSString;



@interface TKLabelContainerView : UIView {
    UILabel *_label;
}


@property (retain, nonatomic) UIFont *labelFont;
@property (nonatomic) UIEdgeInsets labelPaddingInsets; // ivar: _labelPaddingInsets
@property (retain, nonatomic) UIColor *labelShadowColor;
@property (nonatomic) UIOffset labelShadowOffset;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIColor *labelTextColor;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif