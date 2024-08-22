// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOUNTDOWNFLAPVIEW_H
#define SKUICOUNTDOWNFLAPVIEW_H

@class UIImageView, UIView, UILabel, UIColor, NSString;



@interface SKUICountdownFlapView : UIImageView {
    UIView *_backgroundViewBot;
    UIView *_backgroundViewTop;
    UIImageView *_backgroundViewTransitionBot;
    UIImageView *_backgroundViewTransitionTop;
    CGFloat _factor;
    UILabel *_labelBot;
    UILabel *_labelTop;
    UILabel *_labelTransitionBot;
    UILabel *_labelTransitionTop;
}


@property (readonly, nonatomic) UIColor *flapBottomColor; // ivar: _flapBottomColor
@property (readonly, nonatomic) UIColor *flapTopColor; // ivar: _flapTopColor
@property (readonly, nonatomic) NSInteger position; // ivar: _position
@property (retain, nonatomic) NSString *string; // ivar: _string
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)_newBackgroundImageForTop:(int)arg0 ;
-(id)_newLabel;
-(id)initWithPosition:(NSInteger)arg0 flapTopColor:(id)arg1 flapBottomColor:(id)arg2 ;
-(struct CATransform3D )_transformForAngle:(CGFloat)arg0 isTop:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif