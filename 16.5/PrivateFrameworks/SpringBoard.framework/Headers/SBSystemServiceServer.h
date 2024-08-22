// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMSERVICESERVER_H
#define SBSYSTEMSERVICESERVER_H

@class FBSServiceFacility;
@protocol SBSystemServiceServerAppSwitcherDelegate, SBSystemServiceServerBiometricsDelegate, SBSystemServiceServerHardwareButtonDelegate, SBSystemServiceServerSoftwareUpdateDelegate, SBSystemServiceServerStateDumpDelegate, SBSystemServiceServerTestAutomationDelegate;



@interface SBSystemServiceServer : FBSServiceFacility

@property (weak, nonatomic) NSObject<SBSystemServiceServerAppSwitcherDelegate> *appSwitcherDelegate; // ivar: _appSwitcherDelegate
@property (weak, nonatomic) NSObject<SBSystemServiceServerBiometricsDelegate> *biometricsDelegate; // ivar: _biometricsDelegate
@property (weak, nonatomic) NSObject<SBSystemServiceServerHardwareButtonDelegate> *hardwareButtonDelegate; // ivar: _hardwareButtonDelegate
@property (weak, nonatomic) NSObject<SBSystemServiceServerSoftwareUpdateDelegate> *softwareUpdateDelegate; // ivar: _softwareUpdateDelegate
@property (weak, nonatomic) NSObject<SBSystemServiceServerStateDumpDelegate> *stateDumpDelegate; // ivar: _stateDumpDelegate
@property (weak, nonatomic) NSObject<SBSystemServiceServerTestAutomationDelegate> *testAutomationDelegate; // ivar: _testAutomationDelegate


+(id)sharedInstance;
-(id)_init;
-(void)_handleBiometricsFetchUnlockCredentialSetMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleHardwareButtonAcquireAssertionMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleHardwareButtonGetHapticType:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleHardwareButtonGetToggleButtonState:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleHardwareButtonSetHapticType:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleHardwareButtonSetPressEventMask:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleHardwareButtonSetRequestsHIDEvents:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleLoadStashedSwitcherModelFromPath:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleRequestAppSwitcherAppearanceForHiddenApp:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleSoftwareUpdateGetPasscodePolicy:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleSoftwareUpdateSetPasscodePolicy:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleStashSwitcherModelToPath:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleStateDumpServiceClientMessageTypeDisableRemoteStateDump:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleStateDumpServiceClientMessageTypeEnableRemoteStateDump:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleStateDumpServiceClientMessageTypeStateDump:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationAddSpecificWidgetStackToPageWithSize:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationAddSpecificWidgetToPageWithSize:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationAddWidgetsToEachPage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationBlockApplicationForScreenTime:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationClearAllUserNotifications:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationEnterLostMode:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationExitLostMode:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationGetChamoisPrefersDockHidden:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationGetChamoisPrefersStripHidden:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationGetChamoisWindowingUIEnabled:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationGetDeviceSupportsSystemAperture:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationGetScencesForBundleIdentifier:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationGetSystemApertureStateDump:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationGetWidgetControllerStateDump:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationRequestHUDHiddenAssertion:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationRequestReachabilityEnabledAssertion:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationResetToHomeScreen:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetAccessoryAttachedState:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetAlertState:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetChamoisPrefersDockHidden:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetChamoisPrefersStripHidden:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetChamoisWindowingUIEnabled:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetHiddenFeatureState:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetIdleTimerState:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetMallocStackLoggingState:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetOrientationLockState:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetReachabilityActiveState:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetTestRunnerRecoveryApplicationBundleIdentifier:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSetUserPresenceDetectedSinceWake:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTestAutomationSuspendAllDisplays:(id)arg0 fromClient:(id)arg1 ;
-(void)dealloc;
-(void)noteClientDidDisconnect:(id)arg0 ;
-(void)noteDidReceiveMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;


@end


#endif