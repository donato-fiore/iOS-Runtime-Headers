// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBVOLUMECONTROL_H
#define SBVOLUMECONTROL_H

@class NSMutableSet, NSString;
@protocol SBElasticHUDViewControllerDelegate, SBElasticVolumeDataSource, PTSettingsKeyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBHUDController.h"
#import "SBElasticHUDSettings.h"
#import "SBRingerControl.h"
#import "SBTelephonyManager.h"
#import "SBConferenceManager.h"
#import "SBAVSystemControllerCache.h"

@interface SBVolumeControl : NSObject <SBElasticHUDViewControllerDelegate, SBElasticVolumeDataSource, PTSettingsKeyObserver>

 {
    SBHUDController *_hudController;
    SBElasticHUDSettings *_volumeHUDSettings;
    SBRingerControl *_ringerControl;
    SBTelephonyManager *_telephonyManager;
    SBConferenceManager *_conferenceManager;
    BOOL _debounce;
    NSUInteger _mode;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastEventCategory;
    BOOL _volumeDownButtonIsDown;
    BOOL _volumeUpButtonIsDown;
    BOOL _controlCenterIsPresented;
    os_unfair_lock_s _effectiveVolumeLock;
    float _effectiveVolume;
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
    SBAVSystemControllerCache *_avCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastDisplayedCategory; // ivar: _lastDisplayedCategory
@property (readonly) Class superclass;


+(BOOL)_isVolumeChangeAllowedForState:(id)arg0 error:(*id)arg1 ;
+(BOOL)_isVolumeManagedForCategory:(id)arg0 ;
-(BOOL)_isCategoryAlwaysHidden:(id)arg0 ;
-(BOOL)_isHUDDisplayableForCategory:(id)arg0 outReason:(*id)arg1 ;
-(BOOL)_isHUDDisplayableForLastEventCategoryWithReason:(*id)arg0 ;
-(BOOL)_isHUDDisplayableWithReason:(*id)arg0 ;
-(BOOL)_isVolumeHUDVisible;
-(BOOL)elasticValueViewController:(id)arg0 updateCurrentValue:(float)arg1 ;
-(float)_buttonRepeatDelay;
-(float)_effectiveVolume;
-(float)_getMediaVolumeForIAP;
-(float)elasticValueViewControllerCurrentValue:(id)arg0 ;
-(float)volumeStepDown;
-(float)volumeStepUp;
-(id)acquireVolumeHUDHiddenAssertionForReason:(id)arg0 ;
-(id)avSystemControllerDispatchQueue;
-(id)elasticHUDViewControllerRequestsLiveRendering:(id)arg0 forReason:(id)arg1 ;
-(id)elasticVolumeViewControllerActiveAudioCategory:(id)arg0 ;
-(id)existingVolumeHUDViewController;
-(id)initWithHUDController:(id)arg0 ringerControl:(id)arg1 telephonyManager:(id)arg2 conferenceManager:(id)arg3 ;
-(id)presentedVolumeHUDViewController;
-(void)_controlCenterDidDismiss:(id)arg0 ;
-(void)_controlCenterWillPresent:(id)arg0 ;
-(void)_dispatchAVSystemControllerAsync:(id)arg0 ;
-(void)_dispatchAVSystemControllerSync:(id)arg0 ;
-(void)_effectiveVolumeChanged:(id)arg0 ;
-(void)_presentVolumeHUDWithVolume:(float)arg0 ;
-(void)_resetMediaServerConnection;
-(void)_serverConnectionDied:(id)arg0 ;
-(void)_setMediaVolumeForIAP:(float)arg0 ;
-(void)_updateEffectiveVolume:(float)arg0 ;
-(void)addAlwaysHiddenCategory:(id)arg0 ;
-(void)cancelVolumeEvent;
-(void)changeVolumeByDelta:(float)arg0 ;
-(void)clearAlwaysHiddenCategories;
-(void)decreaseVolume;
-(void)elasticHUDViewControllerRequestsDismissal:(id)arg0 ;
-(void)handleVolumeButtonWithType:(NSInteger)arg0 down:(BOOL)arg1 ;
-(void)hideVolumeHUDIfVisible;
-(void)increaseVolume;
-(void)removeAlwaysHiddenCategory:(id)arg0 ;
-(void)setActiveCategoryVolume:(float)arg0 ;
-(void)setVolume:(float)arg0 forCategory:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)toggleMute;


@end


#endif