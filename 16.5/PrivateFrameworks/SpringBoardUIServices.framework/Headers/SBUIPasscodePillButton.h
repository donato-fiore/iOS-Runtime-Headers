// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPASSCODEPILLBUTTON_H
#define SBUIPASSCODEPILLBUTTON_H

@class UIControl, UILabel, UIView, CABackdropLayer, UIFont, NSString;



@interface SBUIPasscodePillButton : UIControl {
    UILabel *_titleLabel;
    UIView *_pillView;
    UIView *_backdropView;
    CABackdropLayer *_backdropLayer;
}


@property (copy, nonatomic) UIFont *font;
@property (nonatomic) CGFloat highlightedAlpha; // ivar: _highlightedAlpha
@property (copy, nonatomic) NSString *title;
@property (nonatomic) CGFloat unhighlightedAlpha; // ivar: _unhighlightedAlpha


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif