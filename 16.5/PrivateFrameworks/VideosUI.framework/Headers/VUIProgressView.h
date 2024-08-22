// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPROGRESSVIEW_H
#define VUIPROGRESSVIEW_H

@class UIView, UIColor, UIImageView;


#import "VUIProgressBarView.h"

@interface VUIProgressView : UIView {
    VUIProgressBarView *_progressBarView;
}


@property (retain, nonatomic) UIColor *completeTintColor; // ivar: _completeTintColor
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIColor *gradientEndColor; // ivar: _gradientEndColor
@property (retain, nonatomic) UIColor *gradientStartColor; // ivar: _gradientStartColor
@property (nonatomic) CGFloat height; // ivar: _height
@property (retain, nonatomic) UIView *materialView; // ivar: _materialView
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) UIColor *progressTintColor; // ivar: _progressTintColor
@property (retain, nonatomic) UIImageView *shadowImageView; // ivar: _shadowImageView
@property (nonatomic) BOOL shouldProgressBarUseRoundCorner; // ivar: _shouldProgressBarUseRoundCorner
@property (nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) BOOL useMaterial; // ivar: _useMaterial
@property (nonatomic) BOOL useVisualEffectForMaterial; // ivar: _useVisualEffectForMaterial


-(id)_maskImageForProgressBar;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutMaterialView;
-(void)_updateForStyleChange;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif