// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURECONTAINERVIEW_H
#define SBSYSTEMAPERTURECONTAINERVIEW_H

@class UIView, _UILumaTrackingBackdropView, UIView<SAUILayoutObstructed>, UIColor, SAUILayoutObstruction, NSMutableDictionary, NSMutableSet, NSString, UIViewController<SAUIElementViewControlling>;
@protocol _UILumaTrackingBackdropViewDelegate, PTSettingsKeyObserver, SBSystemApertureElementViewControllingContaining, SBSystemApertureGainMapBackedRendering, SBSystemApertureElementOrientationObserving, SAUITransitionTracking, SBSystemApertureElementOrientationAuthority, SBSystemApertureContainerViewDelegate;


#import "SBSystemApertureSettings.h"
#import "_SBAdaptiveKeyLineBackdropView.h"
#import "_SBSystemApertureGainMapView.h"

@interface SBSystemApertureContainerView : UIView <_UILumaTrackingBackdropViewDelegate, PTSettingsKeyObserver, SBSystemApertureElementViewControllingContaining, SBSystemApertureGainMapBackedRendering, SBSystemApertureElementOrientationObserving, SAUITransitionTracking, SBSystemApertureElementOrientationAuthority>

 {
    SBSystemApertureSettings *_settings;
    UIView *_contentClippingView;
    _UILumaTrackingBackdropView *_backgroundLumaSamplingBackdrop;
    UIView *_darkBkgKeyLineView;
    _SBAdaptiveKeyLineBackdropView *_lightBkgKeyLineView;
    UIView *_shadowView;
    UIView *_blobEnablingBlackFillView;
    _SBSystemApertureGainMapView *_gainMapView;
    UIView *_backgroundGroupingView;
    UIView *_subBackgroundGroupingView;
    UIView *_hitTestView;
    UIView<SAUILayoutObstructed> *_contentView;
    NSInteger _shadowStyle;
    NSInteger _keyLineStyle;
    NSInteger _renderingBackgroundLuminanceLevel;
    UIColor *_keyLineTintColor;
    UIColor *_cachedValidatedKeyLineTintColor;
    SAUILayoutObstruction *_sensorRegionObstruction;
    NSMutableDictionary *_transitionIDsToReasons;
    UIEdgeInsets _gainMapLayerInsets;
    CGAffineTransform _previousContentTransform;
    CGAffineTransform _activeContentRotationTransform;
    CGSize _referenceSizeForContentScale;
    NSMutableSet *_contentScalingReasons;
    NSUInteger _rank;
    BOOL _needsKeyLineStyleUpdate;
    BOOL _needsShadowStyleUpdate;
}


@property (nonatomic) CGFloat contentAlpha;
@property (nonatomic, getter=isContentClippingEnabled) BOOL contentClippingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSystemApertureContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SBSystemApertureElementOrientationAuthority> *elementOrientationAuthority; // ivar: _elementOrientationAuthority
@property (weak, nonatomic) UIViewController<SAUIElementViewControlling> *elementViewController; // ivar: _elementViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect interSensorRegion;
@property (nonatomic) NSInteger keyLineStyle;
@property (copy, nonatomic) UIColor *keyLineTintColor;
@property (readonly, weak, nonatomic) UIViewController<SAUIElementViewControlling> *outgoingElementViewController; // ivar: _outgoingElementViewController
@property (nonatomic) NSUInteger rank;
@property (nonatomic) NSInteger renderingBackgroundLuminanceLevel;
@property (nonatomic) SBSystemApertureContainerRenderingConfiguration renderingConfiguration;
@property (readonly, nonatomic) NSInteger sampledBackgroundLuminanceLevel; // ivar: _sampledBackgroundLuminanceLevel
@property (readonly, nonatomic, getter=isScalingContent) BOOL scalingContent;
@property (nonatomic) NSInteger shadowStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTrackingTransition) BOOL trackingTransition;


+(CGFloat)_defaultCornerRadiusForBounds:(struct CGRect )arg0 inWindow:(id)arg1 ;
-(BOOL)_isInRotationTransition;
-(BOOL)isScalingContentForReason:(id)arg0 ;
-(BOOL)isTrackingTransitionWithReason:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_cornerRadiusForFrame:(struct CGRect )arg0 ;
-(NSInteger)activeElementInterfaceOrientationForSystemApertureElementOrientationObserver:(id)arg0 ;
-(id)_alphaDimmedTintColorForValidatedTintColor:(id)arg0 ;
-(id)_generateAccessibilityIdentifier;
-(id)_validatedKeyLineTintColor;
-(id)initIncludingSensorRegion:(BOOL)arg0 ;
-(void)_applySettingsValues;
-(void)_invertColorsChanged:(id)arg0 ;
-(void)_layoutContentWithBounds:(struct CGRect )arg0 referenceSize:(struct CGSize )arg1 ;
-(void)_layoutHitTestViewWithBounds:(struct CGRect )arg0 ;
-(void)_setContentViewTransform:(struct CGAffineTransform )arg0 elementViewControllerInterfaceOrientation:(NSInteger)arg1 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_updateContentViewTransformImmediately;
-(void)_updateKeyLineFilters;
-(void)_updateKeyLineStyle;
-(void)_updateShadowStyleIfNeeded;
-(void)addContentSubview:(id)arg0 ;
-(void)backgroundLumaView:(id)arg0 didTransitionToLevel:(NSUInteger)arg1 ;
-(void)beginTrackingTransitionWithUniqueIdentifier:(id)arg0 reason:(id)arg1 ;
-(void)elementOrientationDidChangeWithTransitionCoordinator:(id)arg0 ;
-(void)endTrackingTransitionWithUniqueIdentifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)sb_setID0CornerRadius:(CGFloat)arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)stopScalingContentUpdatingImmediately:(BOOL)arg0 ;
-(void)updateKeyLineStyleIfNeeded;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif