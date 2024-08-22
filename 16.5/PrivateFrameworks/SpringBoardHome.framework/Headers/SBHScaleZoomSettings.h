// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSCALEZOOMSETTINGS_H
#define SBHSCALEZOOMSETTINGS_H

@class SBFAnimationSettings;


#import "SBHIconZoomSettings.h"

@interface SBHScaleZoomSettings : SBHIconZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *crossfadeSettings; // ivar: _crossfadeSettings
@property (nonatomic) BOOL crossfadeWithZoom; // ivar: _crossfadeWithZoom
@property (nonatomic) BOOL fadesIconGrid; // ivar: _fadesIconGrid
@property (retain, nonatomic) SBFAnimationSettings *iconGridFadeSettings; // ivar: _iconGridFadeSettings
@property (retain, nonatomic) SBFAnimationSettings *outerFolderFadeSettings; // ivar: _outerFolderFadeSettings


+(id)settingsControllerModule;
-(id)effectiveCrossfadeAnimationSettings;
-(void)setDefaultValues;


@end


#endif