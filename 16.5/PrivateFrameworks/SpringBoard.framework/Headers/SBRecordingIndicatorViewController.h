// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBRECORDINGINDICATORVIEWCONTROLLER_H
#define SBRECORDINGINDICATORVIEWCONTROLLER_H

@class UIViewController, UIViewPropertyAnimator, CAContext, CALayer, UIColor, UIView;
@protocol SBRecordingIndicatorViewControllerDelegate;


#import "SBRecordingIndicatorView.h"

@interface SBRecordingIndicatorViewController : UIViewController {
    UIViewPropertyAnimator *_animatorScaleToOverscale;
    UIViewPropertyAnimator *_animatorScaleToNormal;
    UIViewPropertyAnimator *_animatorScaleToRest;
    UIViewPropertyAnimator *_animatorScaleToZero;
    UIViewPropertyAnimator *_animatorFastFade;
    UIViewPropertyAnimator *_animatorSpringToOn;
    UIViewPropertyAnimator *_animatorSpringToOff;
    CGFloat _size;
    CGFloat _sideOffset;
    CGFloat _topOffset;
    CGPoint _center;
    CAContext *_context;
    CALayer *_rootLayer;
    CALayer *_contentLayer;
}


@property (nonatomic) NSInteger activeInterfaceOrientation; // ivar: _activeInterfaceOrientation
@property (weak, nonatomic) NSObject<SBRecordingIndicatorViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIColor *indicatorColor; // ivar: _indicatorColor
@property (readonly, nonatomic) UIView *indicatorContainerView; // ivar: _indicatorContainerView
@property (readonly, nonatomic) NSUInteger indicatorState; // ivar: _indicatorState
@property (readonly, nonatomic) SBRecordingIndicatorView *indicatorView; // ivar: _indicatorView
@property (readonly, nonatomic) NSUInteger location; // ivar: _location


-(BOOL)_canShowWhileLocked;
-(BOOL)_interchangesViewAndLayer;
-(BOOL)_screenTypeForcesFastFadeAnimations;
-(BOOL)_shouldForceViewToShowForBacklightLuminance:(NSInteger)arg0 ;
-(BOOL)_shouldForceViewToShowForCurrentBacklightLuminance;
-(BOOL)_usesSpringAnimations;
-(CGFloat)_alphaForStateIdleOn;
-(CGFloat)_sizeForStateIdleOn;
-(NSInteger)_overrideWindowActiveInterfaceOrientation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_springAnimationForKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 duration:(CGFloat)arg3 ;
-(id)initForLocation:(NSUInteger)arg0 ;
-(void)_addBlurFilterToLayer:(id)arg0 withBlurRadius:(CGFloat)arg1 ;
-(void)_animateLayer:(id)arg0 forKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 persistingToValue:(BOOL)arg4 duration:(CGFloat)arg5 ;
-(void)_configureRootLayer;
-(void)_stopAllAnimations;
-(void)_updateIndicatorForBacklightLuminance:(NSInteger)arg0 previousBacklightLuminance:(NSInteger)arg1 ;
-(void)_updateIndicatorLayerSize:(CGFloat)arg0 opacity:(CGFloat)arg1 ;
-(void)_updateIndicatorLayerWithBounds:(struct CGRect )arg0 andCenter:(struct CGPoint )arg1 ;
-(void)_updateIndicatorViewSize:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(void)_updateIndicatorVisibilityWithSpringAnimation:(BOOL)arg0 ;
-(void)_updateToOrientation:(NSInteger)arg0 ;
-(void)calculateInitialIndicatorPositionAndSize;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateIndicatorShape:(NSUInteger)arg0 ;
-(void)updateIndicatorVisibility:(BOOL)arg0 ;
-(void)updateIndicatorVisibilityWithFastFadeAnimation:(BOOL)arg0 ;


@end


#endif