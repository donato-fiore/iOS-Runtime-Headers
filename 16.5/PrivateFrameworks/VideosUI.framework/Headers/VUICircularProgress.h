// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUICIRCULARPROGRESS_H
#define VUICIRCULARPROGRESS_H

@class CAShapeLayer, UIColor;


#import "VUIBaseView.h"

@interface VUICircularProgress : VUIBaseView

@property (retain, nonatomic) CAShapeLayer *centerLayer; // ivar: _centerLayer
@property (nonatomic) CGFloat centerSquareCornerRadius; // ivar: _centerSquareCornerRadius
@property (nonatomic) CGFloat centerSquareWidth; // ivar: _centerSquareWidth
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate; // ivar: _indeterminate
@property (retain, nonatomic) CAShapeLayer *indeterminateLayer; // ivar: _indeterminateLayer
@property (nonatomic) CGFloat indeterminateWidth; // ivar: _indeterminateWidth
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) CAShapeLayer *progressBackgroundLayer; // ivar: _progressBackgroundLayer
@property (retain, nonatomic) UIColor *progressBgColor; // ivar: _progressBgColor
@property (nonatomic) BOOL progressBgHidden; // ivar: _progressBgHidden
@property (retain, nonatomic) UIColor *progressFillColor; // ivar: _progressFillColor
@property (retain, nonatomic) CAShapeLayer *progressLayer; // ivar: _progressLayer
@property (nonatomic) CGFloat progressWidth; // ivar: _progressWidth


-(id)_indeterminatePath;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )vui_sizeThatFits:(struct CGSize )arg0 ;
-(void)_addIndeterminateLayer;
-(void)_addProgressLayer;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_configureProgress:(BOOL)arg0 ;
-(void)_removeIndeterminateLayer;
-(void)_removeProgressLayer;
-(void)_startIndeterminateAnimation;
-(void)_updateColors;
-(void)dealloc;
-(void)tintColorDidChange;
-(void)vui_didMoveToWindow;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif