// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIWINDOWSCENEACTIVATIONSETTINGS_H
#define _UIWINDOWSCENEACTIVATIONSETTINGS_H

@class PTSettings;


#import "_UISpringAnimationPrototypeSettings.h"

@interface _UIWindowSceneActivationSettings : PTSettings

@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *morph; // ivar: _morph
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *morphMenuDismissal; // ivar: _morphMenuDismissal
@property (nonatomic) CGFloat pinchActivationScaleThreshold; // ivar: _pinchActivationScaleThreshold
@property (nonatomic) CGFloat pinchEndPlatterVelocityMultiplier; // ivar: _pinchEndPlatterVelocityMultiplier
@property (nonatomic) CGFloat pinchEndingProjectionDuration; // ivar: _pinchEndingProjectionDuration
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchInteractiveScale; // ivar: _pinchInteractiveScale
@property (nonatomic) CGFloat pinchPlatterMaxShadowIntensity; // ivar: _pinchPlatterMaxShadowIntensity
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchSettle; // ivar: _pinchSettle
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchShadow; // ivar: _pinchShadow


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif