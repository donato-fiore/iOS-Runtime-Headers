// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMNOTESSETTINGS_H
#define SBSYSTEMNOTESSETTINGS_H

@class PTSettings;


#import "SBSystemNotesAppearanceSettings.h"
#import "SBSystemNotesSwipeMetricSettings.h"
#import "SBCornerFingerPanGestureSettings.h"
#import "SBSystemNotesInteractionSettings.h"
#import "SBSystemNotesLaunchSettings.h"
#import "SBCornerPencilPanGestureSettings.h"
#import "SBPIPShadowSettings.h"
#import "SBPIPStashVisualSettings.h"

@interface SBSystemNotesSettings : PTSettings

@property (retain, nonatomic) SBSystemNotesAppearanceSettings *appearanceSettings; // ivar: _appearanceSettings
@property (retain, nonatomic) SBSystemNotesSwipeMetricSettings *cornerSwipeMetricSettings; // ivar: _cornerSwipeMetricSettings
@property (retain, nonatomic) SBCornerFingerPanGestureSettings *fingerSwipeGestureTuningSettings; // ivar: _fingerSwipeGestureTuningSettings
@property (retain, nonatomic) SBSystemNotesInteractionSettings *interactionSettings; // ivar: _interactionSettings
@property (retain, nonatomic) SBSystemNotesLaunchSettings *launchSettings; // ivar: _launchSettings
@property (retain, nonatomic) SBCornerPencilPanGestureSettings *pencilSwipeGestureTuningSettings; // ivar: _pencilSwipeGestureTuningSettings
@property (retain, nonatomic) SBPIPShadowSettings *shadowSettings; // ivar: _shadowSettings
@property (retain, nonatomic) SBPIPStashVisualSettings *stashVisualSettings; // ivar: _stashVisualSettings


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif