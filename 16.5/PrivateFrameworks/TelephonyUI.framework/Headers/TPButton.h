// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPBUTTON_H
#define TPBUTTON_H

@class UIButton, _UIBackdropView;



@interface TPButton : UIButton {
    int _color;
    _UIBackdropView *_backdropView;
}


@property (nonatomic) BOOL blursBackground; // ivar: _blursBackground
@property (nonatomic) BOOL roundsCorners; // ivar: _roundsCorners
@property (nonatomic) BOOL usesOverlayBlendingForContents; // ivar: _usesOverlayBlendingForContents


+(CGFloat)defaultHeight;
+(CGFloat)defaultHeightForColor:(int)arg0 ;
+(CGFloat)defaultWidthForCenterButton;
+(CGFloat)defaultWidthForSideButton;
+(CGFloat)maxWidthForCenterButton;
+(id)defaultStandardFont;
-(id)initWithTitle:(id)arg0 icon:(id)arg1 color:(int)arg2 frame:(struct CGRect )arg3 ;
-(int)buttonColor;
-(struct CGSize )intrinsicContentSize;
-(void)_animationDidEnd;
-(void)_animationWillBegin;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setButtonColor:(int)arg0 ;
-(void)setDisabledButtonColor:(int)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setIconVerticalOffset:(CGFloat)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setMinimumTitleFontSize:(CGFloat)arg0 ;
-(void)setMinimumTitleFontSize:(CGFloat)arg0 maximumTitleFontSize:(CGFloat)arg1 ;
-(void)setPlusSeparatedTitle:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTitleImagePadding:(CGFloat)arg0 ;
-(void)setTitleVerticalOffset:(CGFloat)arg0 ;


@end


#endif