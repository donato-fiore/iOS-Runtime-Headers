// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUICHEVRONVIEW_H
#define SBUICHEVRONVIEW_H

@class UIView, UIColor, NSString, _SBFVibrantSettings;
@protocol _SBFVibrantView;



@interface SBUIChevronView : UIView <_SBFVibrantView>

 {
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    CGFloat _animationDuration;
    CGFloat _alphaComponent;
    UIView *_tintView;
    UIView *_backgroundView;
    BOOL _unified;
    UIView *_alphaContainerView;
}


@property (nonatomic) CGFloat animationDuration;
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // ivar: _vibrantSettings


-(BOOL)_setUnified:(BOOL)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_transformForGrabberView:(id)arg0 forState:(NSInteger)arg1 ;
-(struct CGRect )_frameForGrabberView:(id)arg0 forState:(NSInteger)arg1 unified:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutGrabberView:(id)arg0 forState:(NSInteger)arg1 ;
-(void)configureForLightStyle;
-(void)layoutSubviews;
-(void)setBackgroundView:(id)arg0 ;


@end


#endif