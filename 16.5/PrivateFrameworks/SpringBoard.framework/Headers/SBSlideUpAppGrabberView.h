// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSLIDEUPAPPGRABBERVIEW_H
#define SBSLIDEUPAPPGRABBERVIEW_H

@class UIView, SBUILegibilityView, UIImage, NSString, _UILegibilitySettings, _SBFVibrantSettings;
@protocol _SBFVibrantView, SBUILegibility;


#import "SBSaturatedIconView.h"

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView, SBUILegibility>

 {
    UIView *_tintView;
    UIView *_backgroundView;
    SBUILegibilityView *_legibilityView;
    SBSaturatedIconView *_saturatedIconView;
    UIImage *_grabberImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets hitTestEdgeInsets; // ivar: _hitTestEdgeInsets
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly) Class superclass;
@property (nonatomic, getter=isVibrancyAllowed) BOOL vibrancyAllowed; // ivar: _vibrancyAllowed
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // ivar: _vibrantSettings


-(BOOL)_shouldUseVibrancy;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_lazyLegibilityView;
-(id)initWithAdditionalTopPadding:(BOOL)arg0 invertVerticalInsets:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setAppStyleGrabberImage:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBackgroundView:(id)arg0 ;
-(void)setGrabberImageFromAppWithBundleIdentifier:(id)arg0 ;


@end


#endif