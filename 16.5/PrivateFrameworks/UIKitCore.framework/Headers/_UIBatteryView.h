// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBATTERYVIEW_H
#define _UIBATTERYVIEW_H

@class CALayer, CAShapeLayer, NSString;
@protocol _UIStatusBarDisplayable;


#import "UIView.h"
#import "_UIBatteryViewAXHUDImageCacheInfo.h"
#import "UIAccessibilityHUDItem.h"
#import "UIColor.h"
#import "UILabel.h"

@interface _UIBatteryView : UIView <_UIStatusBarDisplayable>



@property (retain, nonatomic) _UIBatteryViewAXHUDImageCacheInfo *accessibilityHUDImageCacheInfo; // ivar: _accessibilityHUDImageCacheInfo
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (copy, nonatomic) UIColor *bodyColor; // ivar: _bodyColor
@property (nonatomic) CGFloat bodyColorAlpha; // ivar: _bodyColorAlpha
@property (retain, nonatomic) CALayer *bodyLayer; // ivar: _bodyLayer
@property (readonly, nonatomic) CAShapeLayer *bodyShapeLayer;
@property (copy, nonatomic) UIColor *boltColor; // ivar: _boltColor
@property (retain, nonatomic) CALayer *boltLayer; // ivar: _boltLayer
@property (retain, nonatomic) CALayer *boltMaskLayer; // ivar: _boltMaskLayer
@property (readonly, nonatomic) CAShapeLayer *boltMaskShapeLayer;
@property (readonly, nonatomic) CAShapeLayer *boltShapeLayer;
@property (nonatomic) CGFloat chargePercent; // ivar: _chargePercent
@property (nonatomic) NSInteger chargingState; // ivar: _chargingState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (retain, nonatomic) CALayer *fillLayer; // ivar: _fillLayer
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger iconSize; // ivar: _iconSize
@property (copy, nonatomic) UIColor *inactiveColor; // ivar: _inactiveColor
@property (nonatomic) NSInteger internalSizeCategory; // ivar: _internalSizeCategory
@property (readonly, nonatomic, getter=isLowBattery) BOOL lowBattery;
@property (nonatomic) CGFloat lowBatteryChargePercentThreshold; // ivar: _lowBatteryChargePercentThreshold
@property (nonatomic) NSInteger lowBatteryMode; // ivar: _lowBatteryMode
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (retain, nonatomic) CALayer *percentFillLayer; // ivar: _percentFillLayer
@property (readonly, nonatomic) CAShapeLayer *percentFillShapeLayer;
@property (retain, nonatomic) UILabel *percentageLabel; // ivar: _percentageLabel
@property (copy, nonatomic) UIColor *pinColor; // ivar: _pinColor
@property (nonatomic) CGFloat pinColorAlpha; // ivar: _pinColorAlpha
@property (retain, nonatomic) CALayer *pinLayer; // ivar: _pinLayer
@property (readonly, nonatomic) CAShapeLayer *pinShapeLayer;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (nonatomic) BOOL rounded; // ivar: _rounded
@property (nonatomic) BOOL saverModeActive; // ivar: _saverModeActive
@property (nonatomic) BOOL showsInlineChargingIndicator; // ivar: _showsInlineChargingIndicator
@property (nonatomic) BOOL showsPercentage; // ivar: _showsPercentage
@property (nonatomic) NSInteger sizeCategory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


+(CGFloat)_lineWidthAndInterspaceForIconSize:(NSInteger)arg0 ;
+(id)_boltBezierPathForSize:(struct CGSize )arg0 ;
+(id)_boltMaskBezierPath;
+(id)_pinBezierPathForSize:(struct CGSize )arg0 isComplex:(BOOL)arg1 ;
+(struct CGSize )_batterySizeForIconSize:(NSInteger)arg0 ;
+(struct CGSize )_pinSizeForIconSize:(NSInteger)arg0 ;
+(struct CGSize )_statusBarIntrinsicContentSizeForIconSize:(NSInteger)arg0 ;
-(BOOL)_batteryTextIsCutout;
-(BOOL)_percentageFontCondensedWhenChargingForTraitCollection:(id)arg0 ;
-(BOOL)_shouldShowBolt;
-(CGFloat)_batteryBoltLargeScaleFactor;
-(CGFloat)_batteryBoltPositionOffsetForTraitCollection:(id)arg0 ;
-(CGFloat)_batteryBoltScaleFactorMultiplier;
-(CGFloat)_batteryBoltSmallScaleFactor;
-(CGFloat)_insideCornerRadiusForTraitCollection:(id)arg0 ;
-(CGFloat)_lineWidthAndInterspaceForTraitCollection:(id)arg0 ;
-(CGFloat)_outsideCornerRadiusForTraitCollection:(id)arg0 ;
-(CGFloat)_percentTextVerticalAdjustmentForTraitCollection:(id)arg0 ;
-(CGFloat)_percentageBatteryBoltScaleFactorMultiplier;
-(CGFloat)_percentageFontSizeForTraitCollection:(id)arg0 ;
-(id)_batteryFillColor;
-(id)_batteryTextColor;
-(id)_batteryUnfilledColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSizeCategory:(NSInteger)arg0 ;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGRect )_bodyRectForTraitCollection:(id)arg0 ;
-(struct CGRect )_updateBodyLayers;
-(struct CGSize )_batterySizeForTraitCollection:(id)arg0 ;
-(struct CGSize )_pinSizeForTraitCollection:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)__updateFillLayer;
-(void)_commonInit;
-(void)_createBodyLayers;
-(void)_createBoltLayersWithSize:(struct CGSize )arg0 ;
-(void)_createFillLayer;
-(void)_didFinishAnimatingBoltToVisible:(BOOL)arg0 ;
-(void)_fillLayerFrame:(struct CGRect *)arg0 cornerRadius:(*CGFloat)arg1 ;
-(void)_notifyDidFinishAnimatingBoltToVisible:(BOOL)arg0 ;
-(void)_notifyWillBeginAnimatingBoltToVisible:(BOOL)arg0 ;
-(void)_unflipBoltIfNecessary;
-(void)_updateBatteryFillColor;
-(void)_updateBodyColors;
-(void)_updateBolt;
-(void)_updateFillColor;
-(void)_updateFillLayer;
-(void)_updateLightningBoltAndPercentagePosition;
-(void)_updatePercentage;
-(void)_updatePercentageFont;
-(void)_updateTransform;
-(void)_willBeginAnimatingBoltToVisible:(BOOL)arg0 ;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif