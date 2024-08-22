// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPRODUCTUBERBACKGROUNDVIEW_H
#define VUIPRODUCTUBERBACKGROUNDVIEW_H

@class UIVisualEffectView, CAGradientLayer, UIView;


#import "VUIBaseView.h"

@interface VUIProductUberBackgroundView : VUIBaseView

@property (retain, nonatomic) UIVisualEffectView *blurEffectView; // ivar: _blurEffectView
@property (nonatomic) NSUInteger configuredBlurInterfaceStyle; // ivar: _configuredBlurInterfaceStyle
@property (nonatomic) CGFloat contentOffset; // ivar: _contentOffset
@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) UIView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isChannelBanner; // ivar: _isChannelBanner


-(CGFloat)_gradientHeightForSizeClass:(NSInteger)arg0 mainRect:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_configureGradientLayer:(id)arg0 currentSizeClass:(NSInteger)arg1 mainRect:(struct CGRect )arg2 ;
-(void)configureBlurEffectAndGradientWithInterfaceStyle:(NSUInteger)arg0 mainRect:(struct CGRect )arg1 ;
-(void)configureBlurWithInterfaceStyle:(NSUInteger)arg0 ;
-(void)configureBlurWithInterfaceStyle:(NSUInteger)arg0 mainRect:(struct CGRect )arg1 ;
-(void)resetBlurEffectAndGradient;
-(void)setImageOffset:(CGFloat)arg0 ;
-(void)setMasksBlur:(BOOL)arg0 ;


@end


#endif