// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIROUNDEDRECTBUTTON_H
#define SKUIROUNDEDRECTBUTTON_H

@class UIButton, UIView, UILabel;



@interface SKUIRoundedRectButton : UIButton {
    UIView *_borderView;
    UILabel *_subtitleLabel;
}




-(id)_basicAnimationWithKeyPath:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadColors;
-(void)_reloadFonts;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSubtitleWithLabel:(id)arg0 ;
-(void)setTitleEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)tintColorDidChange;


@end


#endif