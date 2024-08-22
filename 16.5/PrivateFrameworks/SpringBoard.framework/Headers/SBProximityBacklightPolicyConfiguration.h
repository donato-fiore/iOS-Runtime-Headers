// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPROXIMITYBACKLIGHTPOLICYCONFIGURATION_H
#define SBPROXIMITYBACKLIGHTPOLICYCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "SBBacklightController.h"
#import "SBProximitySettings.h"
#import "SBHIDUISensorModeController.h"
#import "SBSystemGestureManager.h"

@interface SBProximityBacklightPolicyConfiguration : NSObject

@property (retain, nonatomic) SBBacklightController *backlightController; // ivar: _backlightController
@property (retain, nonatomic) SBProximitySettings *proximitySettings; // ivar: _proximitySettings
@property (retain, nonatomic) SBHIDUISensorModeController *sensorModeController; // ivar: _sensorModeController
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager; // ivar: _systemGestureManager




@end


#endif