// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREACHABILITYSETTINGS_H
#define SBREACHABILITYSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBReachabilitySettings : PTSettings

@property (nonatomic) BOOL allowOnAllDevices; // ivar: _allowOnAllDevices
@property (retain, nonatomic) SBFFluidBehaviorSettings *animationSettings; // ivar: _animationSettings
@property (nonatomic) CGFloat homeGestureSwipeDownHeight; // ivar: _homeGestureSwipeDownHeight
@property (nonatomic) CGFloat homeGestureSwipeDownHysteresis; // ivar: _homeGestureSwipeDownHysteresis
@property (nonatomic) CGFloat reachabilityDefaultKeepAlive; // ivar: _reachabilityDefaultKeepAlive
@property (nonatomic) CGFloat reachabilityInteractiveKeepAlive; // ivar: _reachabilityInteractiveKeepAlive
@property (nonatomic) CGFloat systemWideSwipeDownHeight; // ivar: _systemWideSwipeDownHeight
@property (nonatomic) CGFloat yOffsetFactor; // ivar: _yOffsetFactor


+(id)settingsControllerModule;
-(CGFloat)yOffset;
-(void)setDefaultValues;


@end


#endif