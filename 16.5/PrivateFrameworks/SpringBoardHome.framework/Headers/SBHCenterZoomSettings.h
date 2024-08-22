// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHCENTERZOOMSETTINGS_H
#define SBHCENTERZOOMSETTINGS_H



#import "SBHIconZoomSettings.h"

@interface SBHCenterZoomSettings : SBHIconZoomSettings

@property (nonatomic) CGFloat centerRowCoordinate; // ivar: _centerRowCoordinate
@property (nonatomic) NSInteger distanceEffect; // ivar: _distanceEffect
@property (nonatomic) CGFloat dockMass; // ivar: _dockMass
@property (nonatomic) CGFloat firstHopIncrement; // ivar: _firstHopIncrement
@property (nonatomic) CGFloat hopIncrementAcceleration; // ivar: _hopIncrementAcceleration
@property (nonatomic) BOOL preferCenterOfIconGrid; // ivar: _preferCenterOfIconGrid
@property (nonatomic) BOOL zoomViewBelowIcons; // ivar: _zoomViewBelowIcons


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif