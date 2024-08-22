// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPOWERALERTELEMENT_H
#define SBPOWERALERTELEMENT_H

@class UIColor, NSString, UILabel, BSUICAPackageView, FBScene;
@protocol SBSystemApertureContextProviding;


#import "SBAlertProvidedContentElement.h"

@interface SBPowerAlertElement : SBAlertProvidedContentElement <SBSystemApertureContextProviding>

 {
    UIColor *_keyColor;
}


@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (nonatomic) CGFloat batteryPercentage; // ivar: _batteryPercentage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *keyColor;
@property (retain, nonatomic) UILabel *leadingLabel; // ivar: _leadingLabel
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (retain, nonatomic) BSUICAPackageView *minimalBatteryIconPackageView; // ivar: _minimalBatteryIconPackageView
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly, nonatomic) FBScene *scene;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) BSUICAPackageView *trailingBatteryIconPackageView; // ivar: _trailingBatteryIconPackageView
@property (retain, nonatomic) UILabel *trailingBatteryLabel; // ivar: _trailingBatteryLabel


-(BOOL)isProvidedViewConcentric:(id)arg0 inLayoutMode:(NSInteger)arg1 ;
-(CGFloat)_batteryFillWidthForBatteryPercentage:(CGFloat)arg0 ;
-(CGFloat)_trailingViewWidth;
-(CGFloat)preferredAlertingDuration:(CGFloat)arg0 ;
-(id)_leadingTextForStyle:(NSUInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 style:(NSUInteger)arg1 batteryPercentage:(CGFloat)arg2 lowPowerModeEnabled:(BOOL)arg3 action:(id)arg4 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(void)_updateBatteryContent;
-(void)_updateBatteryIconFillAreaForPackageView:(id)arg0 withBatteryPercentage:(CGFloat)arg1 ;
-(void)_updateMinimalViewToState:(id)arg0 withDelay:(BOOL)arg1 ;


@end


#endif