// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFLOATINGCONTENTVIEW_H
#define _UIFLOATINGCONTENTVIEW_H

@class NSMutableArray, NSString;
@protocol _UIFloatingContentViewDelegate;


#import "UIView.h"
#import "_UIFloatingContentTransformView.h"
#import "_UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView.h"
#import "_UIFloatingContentCornerRadiusAnimatingView.h"
#import "_UIFloatingMotionConfiguration.h"
#import "_UIFocusAnimationConfiguration.h"
#import "UIImage.h"

@interface _UIFloatingContentView : UIView {
    id<_UIFloatingContentViewDelegate> *_floatingContentViewDelegate;
    _UIFloatingContentTransformView *_transformView;
    _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView *_containerView;
    _UIFloatingContentCornerRadiusAnimatingView *_highlightView;
    _UIFloatingContentCornerRadiusAnimatingView *_visualEffectContainerView;
    UIView *_shadowView;
    UIView *_contentView;
    UIView *_highContrastFocusIndicatorView;
    *__CFDictionary _backgroundColorsByState;
    NSMutableArray *_contentMotionEffects;
    CGFloat _shadowOpacityLight;
    CGFloat _shadowOpacityDark;
    CGPoint _focusDirection;
    CGPoint _contentRotation;
    CGPoint _contentTranslation;
    BOOL _customScale;
    BOOL _symmetricScale;
    BOOL _stretchableShadowImage;
}


@property (nonatomic) BOOL _disableOutsetShadowPath; // ivar: __disableOutsetShadowPath
@property (nonatomic) CGSize asymmetricFocusedSizeIncrease; // ivar: _asymmetricFocusedSizeIncrease
@property (nonatomic) CGSize asymmetricScaleFactor; // ivar: _asymmetricScaleFactor
@property (nonatomic) BOOL clipsContentToBounds;
@property (retain, nonatomic) _UIFloatingMotionConfiguration *contentMotion; // ivar: _contentMotion
@property (nonatomic, getter=isContentOpaque) BOOL contentOpaque; // ivar: _contentOpaque
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic, getter=isContinuousCornerEnabled) BOOL continuousCornerEnabled;
@property (nonatomic) NSUInteger controlState; // ivar: _controlState
@property (nonatomic) NSString *cornerCurve; // ivar: _cornerCurve
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (weak, nonatomic) NSObject<_UIFloatingContentViewDelegate> *floatingContentDelegate;
@property (copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration; // ivar: _focusAnimationConfiguration
@property (copy, nonatomic) id *focusAnimationConfigurationHandler; // ivar: _focusAnimationConfigurationHandler
@property (nonatomic) CGPoint focusScaleAnchorPoint; // ivar: _focusScaleAnchorPoint
@property (nonatomic) CGFloat focusedSizeIncrease;
@property (nonatomic) BOOL forwardsSubviewIntrinsicContentSizeInvalidationsToSuperview; // ivar: _forwardsSubviewIntrinsicContentSizeInvalidationsToSuperview
@property (nonatomic) CGFloat highContrastFocusIndicatorCornerRadius; // ivar: _highContrastFocusIndicatorCornerRadius
@property (nonatomic) CGPoint highContrastFocusIndicatorOutset; // ivar: _highContrastFocusIndicatorOutset
@property (nonatomic) NSInteger highlightStyle; // ivar: _highlightStyle
@property (readonly, nonatomic) UIView *highlightView;
@property (nonatomic) BOOL roundContentWhenDeselected; // ivar: _roundContentWhenDeselected
@property (nonatomic) CGFloat scaleFactor;
@property (nonatomic) BOOL scalesBackwards; // ivar: _scalesBackwards
@property (nonatomic) CGRect shadowContentsCenter; // ivar: _shadowContentsCenter
@property (nonatomic, getter=isShadowEnabled) BOOL shadowEnabled; // ivar: _shadowEnabled
@property (nonatomic) CGSize shadowExpansion; // ivar: _shadowExpansion
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage
@property (nonatomic) CGFloat shadowOpacity;
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (nonatomic) CGSize shadowSize; // ivar: _shadowSize
@property (nonatomic) CGFloat shadowVerticalOffset; // ivar: _shadowVerticalOffset
@property (nonatomic) BOOL showsHighContrastFocusIndicator; // ivar: _showsHighContrastFocusIndicator
@property (readonly, nonatomic) UIView *transformView;
@property (nonatomic) CGSize unfocusedShadowExpansion; // ivar: _unfocusedShadowExpansion
@property (nonatomic) CGFloat unfocusedShadowOpacity; // ivar: _unfocusedShadowOpacity
@property (nonatomic) CGFloat unfocusedShadowRadius; // ivar: _unfocusedShadowRadius
@property (nonatomic) CGFloat unfocusedShadowVerticalOffset; // ivar: _unfocusedShadowVerticalOffset
@property (nonatomic) BOOL useShadowImage; // ivar: _useShadowImage
@property (readonly, nonatomic) UIView *visualEffectContainerView;
@property (nonatomic) CGFloat visualEffectContainerViewScaleFactor; // ivar: _visualEffectContainerViewScaleFactor


+(id)_defaultFocusAnimationConfiguration;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg0 forMotionEffect:(id)arg1 ;
-(BOOL)_shouldAppearToFloatForPrimaryState:(NSUInteger)arg0 ;
-(BOOL)_shouldApplyCornerRadiusForPrimaryState:(NSUInteger)arg0 ;
-(CGFloat)_currentShadowOpacity;
-(CGFloat)_effectiveShadowOpacity;
-(CGFloat)_effectiveShadowRadius;
-(CGFloat)shadowOpacityForUserInterfaceStyle:(NSInteger)arg0 ;
-(NSUInteger)_primaryStateForState:(NSUInteger)arg0 ;
-(id)_focusedFrameGuide;
-(id)_focusedFrameGuideCreateIfNecessary:(BOOL)arg0 ;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)backgroundColorForState:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)_shadowPathForSize:(struct CGSize )arg0 radius:(CGFloat)arg1 ;
-(void)_installContentMotionEffects;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_layoutContentView;
-(void)_layoutHighContrastFocusIndicator;
-(void)_layoutShadow;
-(void)_uninstallContentMotionEffects;
-(void)_updateContainerLayerQualityForPrimaryState:(NSUInteger)arg0 ;
-(void)_updateCornerRadiusLayers;
-(void)_updateFocusedFrameGuideConstraintsIfApplicable;
-(void)_updateHighContrastFocusIndicatorForPrimaryState:(NSUInteger)arg0 ;
-(void)_updateHighContrastFocusIndicatorView;
-(void)_updateHighlightViewForPrimaryState:(NSUInteger)arg0 ;
-(void)_updateScaleFactor;
-(void)_updateShadowContentsScaleForPrimaryState:(NSUInteger)arg0 ;
-(void)_updateShadowLayer;
-(void)_updateShadowOpacityForPrimaryState:(NSUInteger)arg0 ;
-(void)_updateTransformForPrimaryState:(NSUInteger)arg0 ;
-(void)addContentMotionEffect:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)removeContentMotionEffect:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif