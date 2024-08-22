// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUIMUTABLEINCALLSCENECLIENTSETTINGS_H
#define SBSUIMUTABLEINCALLSCENECLIENTSETTINGS_H

@class UIMutableApplicationSceneClientSettings;



@interface SBSUIMutableInCallSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic, getter=isCallConnected) BOOL callConnected; // ivar: _callConnected
@property (nonatomic) UIEdgeInsets expanseHUDDodgingInsets; // ivar: _expanseHUDDodgingInsets
@property (nonatomic) NSUInteger preferredHardwareButtonEventTypes; // ivar: _preferredHardwareButtonEventTypes
@property (nonatomic) NSUInteger preferredStatusBarStyleOverridesToSuppress; // ivar: _preferredStatusBarStyleOverridesToSuppress
@property (nonatomic) BOOL prefersBannersHiddenFromClonedDisplay; // ivar: _prefersBannersHiddenFromClonedDisplay
@property (nonatomic) BOOL prefersHiddenWhenDismissed; // ivar: _prefersHiddenWhenDismissed
@property (nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay; // ivar: _shouldBecomeVisibleWhenWakingDisplay
@property (nonatomic) BOOL shouldNeverBeShownWhenLaunchingFaceTime; // ivar: _shouldNeverBeShownWhenLaunchingFaceTime
@property (nonatomic) BOOL supportsDeviceLockActions; // ivar: _supportsDeviceLockActions
@property (nonatomic) BOOL transientOverlayHomeIndicatorAutoHidden; // ivar: _transientOverlayHomeIndicatorAutoHidden


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)setHomeIndicatorAutoHidden:(BOOL)arg0 ;


@end


#endif