// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUSERAGENT_H
#define SBUSERAGENT_H

@class NSMutableDictionary, NSString;
@protocol SBUIUserAgent_Internal, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBIdleTimerPolicyAggregator.h"

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal>

 {
    NSMutableDictionary *_idleTimerDisableAssertions;
    id<BSInvalidatable> *_bannerSuppressionAssertion;
}


@property (retain, nonatomic, setter=_setIdleTimerPolicyAggregator:) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator; // ivar: _idleTimerPolicyAggregator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_launchFromSource:(int)arg0 withURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4 ;
-(BOOL)_openApplication:(id)arg0 withURL:(id)arg1 fromSource:(int)arg2 animated:(BOOL)arg3 options:(id)arg4 ;
-(BOOL)applicationInstalledForDisplayID:(id)arg0 ;
-(BOOL)canLaunchFromSource:(int)arg0 withURL:(id)arg1 bundleID:(id)arg2 ;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsLocked;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(BOOL)deviceIsTethered;
-(BOOL)isApplicationForegroundObscured:(id)arg0 ;
-(BOOL)isApplicationRestrictedOrHidden:(id)arg0 ;
-(BOOL)isIdleTimerDisabledForReason:(id)arg0 ;
-(BOOL)isInternalInstall;
-(BOOL)isNamedRemoteAlertServiceActive:(id)arg0 controllerClassName:(id)arg1 ;
-(BOOL)isScreenOn;
-(BOOL)launchApplicationFromSource:(int)arg0 withDisplayID:(id)arg1 options:(id)arg2 ;
-(BOOL)launchApplicationFromSource:(int)arg0 withURL:(id)arg1 options:(id)arg2 ;
-(BOOL)launchFromSource:(int)arg0 withURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 ;
-(BOOL)lockScreenIsShowing;
-(BOOL)openURL:(id)arg0 allowUnlock:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)springBoardIsActive;
-(NSInteger)activeInterfaceOrientation;
-(id)_safeValue:(id)arg0 forKey:(id)arg1 ofType:(Class)arg2 ;
-(id)folderNameForDisplayID:(id)arg0 ;
-(id)foregroundApplicationDisplayID;
-(id)init;
-(id)localizedDisplayNameForDisplayID:(id)arg0 ;
-(id)topSuspendedEventsOnlyDisplayID;
-(int)networkUsageTypeForAppWithDisplayID:(id)arg0 ;
-(struct __CFRunLoop *)wifiRunLoopRef;
-(void)_cleanupFromBannerLaunch;
-(void)activateModalBulletinAlert:(id)arg0 ;
-(void)activateRemoteAlertService:(id)arg0 options:(id)arg1 ;
-(void)addActiveInterfaceOrientationObserver:(id)arg0 ;
-(void)disableLockScreenBundleNamed:(id)arg0 deactivationContext:(id)arg1 ;
-(void)enableLockScreenBundleNamed:(id)arg0 activationContext:(id)arg1 ;
-(void)lockAndDimDevice;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg0 ;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg0 andDimScreen:(BOOL)arg1 ;
-(void)notifyOnNextUserEvent;
-(void)removeActiveInterfaceOrientationObserver:(id)arg0 ;
-(void)setBadgeNumberOrString:(id)arg0 forApplicationWithID:(id)arg1 ;
-(void)setIdleText:(id)arg0 ;
-(void)setIdleTimerDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setMinimumBacklightLevel:(float)arg0 animated:(BOOL)arg1 ;
-(void)undimScreen;
-(void)updateInterfaceOrientationIfNecessary;


@end


#endif