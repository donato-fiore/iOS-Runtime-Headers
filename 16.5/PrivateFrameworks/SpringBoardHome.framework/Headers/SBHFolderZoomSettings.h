// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFOLDERZOOMSETTINGS_H
#define SBHFOLDERZOOMSETTINGS_H

@class SBFAnimationSettings;


#import "SBHScaleZoomSettings.h"

@interface SBHFolderZoomSettings : SBHScaleZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *innerFolderFadeSettings; // ivar: _innerFolderFadeSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif