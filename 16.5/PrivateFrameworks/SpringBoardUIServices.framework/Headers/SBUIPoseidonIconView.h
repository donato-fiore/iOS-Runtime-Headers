// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPOSEIDONICONVIEW_H
#define SBUIPOSEIDONICONVIEW_H

@class UIView, _UILegibilityView, NSTimer, CAGradientLayer, NSString, _UILegibilitySettings;
@protocol CAAnimationDelegate, SBUIPoseidonIconViewDelegate;


#import "SBUILegibilityLabel.h"

@interface SBUIPoseidonIconView : UIView <CAAnimationDelegate>

 {
    _UILegibilityView *_coachingButton;
    SBUILegibilityLabel *_coachingLabel;
    SBUILegibilityLabel *_restToOpenLabel;
    UIView *_coachingLabelRotationView;
    UIView *_restToOpenLabelRotationView;
    NSTimer *_restToOpenIdleTimer;
    CAGradientLayer *_progressFillGradient;
    CGFloat _fullProgressFillDuration;
    CGFloat _startProgressFillTime;
    BOOL _isFilling;
    CAGradientLayer *_shimmerGradient;
    NSTimer *_idleUntilShimmerTimer;
    NSTimer *_reduceMotionShimmerTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBUIPoseidonIconViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGAffineTransform localTransform; // ivar: _localTransform
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(CGFloat)_fontSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_physicalButtonNormalizedFrame;
-(void)_cancelRestToOpenIdleTimer;
-(void)_cancelRestToOpenProgress;
-(void)_contentSizeCategoryDidChange;
-(void)_startReduceMotionShimmer;
-(void)_startRestToOpenIdleTimer;
-(void)_startShimmer;
-(void)_stopShimmer;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)fillRestToOpenWithDuration:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)resetRestToOpen;


@end


#endif