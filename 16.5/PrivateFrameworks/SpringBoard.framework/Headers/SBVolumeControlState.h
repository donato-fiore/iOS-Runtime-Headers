// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBVOLUMECONTROLSTATE_H
#define SBVOLUMECONTROLSTATE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBVolumeControlState : NSObject <NSCopying>



@property (copy, nonatomic) NSString *activeVolumeCategoryName; // ivar: _activeVolumeCategoryName
@property (nonatomic, setter=setCurrentRouteHasVolumeControl:) BOOL currentRouteHasVolumeControl; // ivar: _currentRouteHasVolumeControl
@property (nonatomic, setter=setAudioPlayingSomewhere:) BOOL isAudioPlayingSomewhere; // ivar: _isAudioPlayingSomewhere
@property (nonatomic, setter=setCallOrFaceTimeActive:) BOOL isCallOrFaceTimeActive; // ivar: _isCallOrFaceTimeActive
@property (nonatomic, setter=setFullyMuted:) BOOL isFullyMuted; // ivar: _isFullyMuted
@property (nonatomic, setter=setHostingAppOnLockScreen:) BOOL isHostingAppOnLockScreen; // ivar: _isHostingAppOnLockScreen
@property (nonatomic, setter=setLocked:) BOOL isLocked; // ivar: _isLocked
@property (nonatomic, setter=setRingerMuted:) BOOL isRingerMuted; // ivar: _isRingerMuted
@property (nonatomic, setter=setShowingLockScreenMediaControls:) BOOL isShowingLockScreenMediaControls; // ivar: _isShowingLockScreenMediaControls


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif