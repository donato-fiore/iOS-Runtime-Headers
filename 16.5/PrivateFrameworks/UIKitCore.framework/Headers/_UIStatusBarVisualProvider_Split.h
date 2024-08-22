// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT_H

@class Phone, NSTimer, NSString, UIFont, NSLayoutConstraint, NSDictionary;
@protocol _UIStatusBarCellularItemTypeStringProvider;


#import "_UIStatusBarDisplayItemPlacement.h"
#import "UILayoutGuide.h"
#import "_UIStatusBarDisplayItemPlacementGroup.h"

@interface _UIStatusBarVisualProvider_Split : Phone <_UIStatusBarCellularItemTypeStringProvider>



@property (retain, nonatomic) NSTimer *airplaneModeIgnoreChangesTimer; // ivar: _airplaneModeIgnoreChangesTimer
@property (readonly) CGFloat animatedTypeDisplayItemSpacingFactor; // ivar: _animatedTypeDisplayItemSpacingFactor
@property (readonly) CGFloat baselineBottomInset;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement; // ivar: _batteryChargingPlacement
@property (retain, nonatomic) NSTimer *batteryExpansionTimer; // ivar: _batteryExpansionTimer
@property (readonly) CGFloat bottomLeadingSpace;
@property (readonly) CGFloat bottomLeadingTopOffset;
@property (readonly) CGFloat cornerRadius;
@property (retain, nonatomic) UILayoutGuide *cutoutLayoutGuide; // ivar: _cutoutLayoutGuide
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayedSystemUpdateData; // ivar: _delayedSystemUpdateData
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualServiceNamePlacement; // ivar: _dualServiceNamePlacement
@property (readonly) UIFont *emphasizedFont;
@property (readonly) NSDirectionalEdgeInsets expandedEdgeInsets;
@property (readonly) UIFont *expandedFont;
@property (readonly) CGFloat expandedIconScale;
@property (readonly) NSInteger expandedIconSize;
@property (retain, nonatomic) NSLayoutConstraint *expandedLeadingLowerTopConstraint; // ivar: _expandedLeadingLowerTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint; // ivar: _expandedTrailingBottomConstraint
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lowerExpandedBaselineOffset;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup; // ivar: _lowerWifiGroup
@property (retain, nonatomic) UILayoutGuide *mainRegionsLayoutGuide; // ivar: _mainRegionsLayoutGuide
@property (readonly) UIFont *normalFont;
@property (readonly) CGFloat normalIconScale;
@property (readonly) NSInteger normalIconSize;
@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // ivar: _orderedDisplayItemPlacements
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *serviceNamePlacement; // ivar: _serviceNamePlacement
@property (readonly) UIFont *smallFont;
@property (readonly) CGSize smallPillSize;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsAnimatedCellularNetworkType;
@property (readonly) BOOL supportsCondensedBatteryPercentage;
@property (readonly) UIFont *systemUpdateFont;
@property (retain, nonatomic) NSTimer *systemUpdatesTimer; // ivar: _systemUpdatesTimer
@property (readonly) UIFont *voiceControlFont;


+(BOOL)scalesWithScreenNativeScale;
+(BOOL)showsLargeBatteryChargingAnimation;
+(BOOL)shrinksSingleCharacterTypes;
+(CGFloat)LTEAPlusFontSize;
+(CGFloat)baseFontSize;
+(CGFloat)expandedEdgeInset;
+(CGFloat)height;
+(Class)visualProviderSubclassForScreen:(id)arg0 visualProviderInfo:(id)arg1 ;
+(struct CGSize )intrinsicContentSizeForOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg0 ;
-(BOOL)_updateLowerRegionsWithData:(id)arg0 ;
-(BOOL)canFixupDisplayItemAttributes;
-(BOOL)hasCustomAnimationForDisplayItemWithIdentifier:(id)arg0 removal:(BOOL)arg1 ;
-(CGFloat)airplaneObstacleFadeOutDuration;
-(CGFloat)airplaneShouldFadeForAnimationType:(NSInteger)arg0 ;
-(CGFloat)airplaneSpeedForAnimationType:(NSInteger)arg0 ;
-(CGFloat)airplaneTravelOffsetInProposedPartWithIdentifier:(*id)arg0 animationType:(NSInteger)arg1 ;
-(CGFloat)animatedTypeDisplayItemSpacingFactorForCellularType:(NSInteger)arg0 ;
-(CGFloat)condensedPointSizeForCellularType:(NSInteger)arg0 defaultPointSize:(CGFloat)arg1 baselineOffset:(*CGFloat)arg2 ;
-(CGFloat)itemSpacing;
-(id)_additionAnimationForBatteryCharging;
-(id)_removalAnimationForBatteryCharging;
-(id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)_systemUpdateDelayedDataIdentifiers;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)animationForAirplaneMode;
-(id)animationForProminentLocation;
-(id)clockFont;
-(id)condensedFontForCellularType:(NSInteger)arg0 defaultFont:(id)arg1 baselineOffset:(*CGFloat)arg2 ;
-(id)defaultAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg0 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)stringForCellularType:(NSInteger)arg0 condensed:(BOOL)arg1 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;
-(id)willUpdateWithData:(id)arg0 ;
-(struct CGAffineTransform )_collapseChargingBoltTransformForDisplayItem:(id)arg0 ;
-(struct CGAffineTransform )_expandedChargingBoltTransformForDisplayItem:(id)arg0 ;
-(void)_collapseBattery;
-(void)_delaySystemUpdateData;
-(void)_disableSystemUpdates;
-(void)_resetBattery;
-(void)_resumeSystemUpdateData;
-(void)_setupExpandedRegionsInContainerView:(id)arg0 sensorHeight:(CGFloat)arg1 constraints:(*id)arg2 regions:(*id)arg3 ;
-(void)_stopBatteryCollapseTimer;
-(void)_updateDataForBatteryCharging:(id)arg0 ;
-(void)_updateDataForSystemUpdates:(id)arg0 ;
-(void)_updateExpandedTrailingRegion;
-(void)dealloc;
-(void)itemCreated:(id)arg0 ;
-(void)setExpanded:(BOOL)arg0 ;
-(void)statusBarRegionsUpdated;
-(void)styleUpdatedFromStyle:(NSInteger)arg0 ;
-(void)updateDataForService:(id)arg0 ;


@end


#endif