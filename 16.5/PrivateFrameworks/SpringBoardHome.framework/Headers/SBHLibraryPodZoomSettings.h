// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYPODZOOMSETTINGS_H
#define SBHLIBRARYPODZOOMSETTINGS_H

@class SBFAnimationSettings;


#import "SBHFolderZoomSettings.h"

@interface SBHLibraryPodZoomSettings : SBHFolderZoomSettings

@property (retain, nonatomic) SBFAnimationSettings *innerFolderCenterZoomSettings; // ivar: _innerFolderCenterZoomSettings
@property (retain, nonatomic) SBFAnimationSettings *innerFolderEdgeZoomSettings; // ivar: _innerFolderEdgeZoomSettings


+(CGFloat)_defaultInnerFolderZoomDelay;
+(id)_defaultCentralAnimationSettings;
+(id)_defaultCrossfadeSettings;
+(id)_defaultInnerFolderZoomAnimationSettings;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif