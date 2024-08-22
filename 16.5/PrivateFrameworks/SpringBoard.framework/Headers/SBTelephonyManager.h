// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTELEPHONYMANAGER_H
#define SBTELEPHONYMANAGER_H

@class SBAlertItem, NWSystemPathMonitor, TUCall, NSString, CoreTelephonyClient, STTelephonyStateProvider, STWifiStatusDomain;
@protocol STTelephonyStateObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBBluetoothController.h"

@interface SBTelephonyManager : NSObject <STTelephonyStateObserver>

 {
    *__CTServerConnection _serverConnection;
    BOOL _containsCellularRadio;
    BOOL _hasCellularTelephony;
    BOOL _hasCellularData;
    BOOL _usingVPN;
    NSObject<OS_dispatch_queue> *_wirelessModemDynamicStoreQueue;
    *__SCDynamicStore _queue_wirelessModemDynamicStore;
    *__CFString _queue_wirelessModemDynamicStoreSharingKey;
    BOOL _isNetworkTethering;
    int _numberOfNetworkTetheredDevices;
    BOOL _hasShownWaitingAlert;
    SBAlertItem *_activationAlertItem;
    int _numActivationFailures;
    int _inEmergencyCallbackMode;
    BOOL _loggingCallAudio;
    *void _queue_fastDormancySuspendAssertion;
    NWSystemPathMonitor *_systemPathMonitor;
}


@property (retain, nonatomic) TUCall *activeCall; // ivar: _activeCall
@property (readonly, nonatomic) SBBluetoothController *bluetoothController; // ivar: _bluetoothController
@property (copy, nonatomic) NSString *cachedSlot1CountryCode; // ivar: _cachedSlot1CountryCode
@property (copy, nonatomic) NSString *cachedSlot1SIMStatus; // ivar: _cachedSlot1SIMStatus
@property (copy, nonatomic) NSString *cachedSlot2CountryCode; // ivar: _cachedSlot2CountryCode
@property (copy, nonatomic) NSString *cachedSlot2SIMStatus; // ivar: _cachedSlot2SIMStatus
@property (nonatomic, getter=isCellDataSwitchingEnabled) BOOL cellDataSwitchingEnabled;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, nonatomic) NSUInteger dataConnectionAvailabilityWithCurrentCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TUCall *heldCall; // ivar: _heldCall
@property (retain, nonatomic) TUCall *incomingCall; // ivar: _incomingCall
@property (retain, nonatomic) TUCall *outgoingCall; // ivar: _outgoingCall
@property (readonly) Class superclass;
@property (readonly, nonatomic) STTelephonyStateProvider *telephonyStateProvider; // ivar: _telephonyStateProvider
@property (readonly, nonatomic) STWifiStatusDomain *wifiDomain; // ivar: _wifiDomain


+(id)sharedTelephonyManager;
+(id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)arg0 ;
+(struct __CTServerConnection *)defaultTelephonyCenter;
-(BOOL)containsCellularRadio;
-(BOOL)emergencyCallSupported;
-(BOOL)hasCellularData;
-(BOOL)hasCellularTelephony;
-(BOOL)hasNonCellularNetworkConnection;
-(BOOL)inBargeCall;
-(BOOL)inCall;
-(BOOL)inCallUsingSpeakerOrReceiver;
-(BOOL)isEmergencyCallActive;
-(BOOL)isEndpointOnCurrentDevice;
-(BOOL)isInEmergencyCallbackMode;
-(BOOL)isNetworkRegistrationEnabled;
-(BOOL)isNetworkTethering;
-(BOOL)isTTYEnabled;
-(BOOL)isUsingSlowDataConnection;
-(BOOL)isUsingVPNConnection;
-(BOOL)multipleCallsExist;
-(BOOL)toggleBargeCallState;
-(BOOL)updateLocale;
-(CGFloat)inCallDuration;
-(NSInteger)_anySubscriptionSlotWithSIMPresent;
-(NSInteger)_dataConnectedSubscriptionSlot;
-(NSInteger)_dataPreferredSubscriptionSlotIfSIMPresent;
-(NSInteger)_otherSubscriptionSlotIfSIMPresent:(NSInteger)arg0 ;
-(NSInteger)_primarySubscriptionSlot;
-(NSInteger)_secondarySubscriptionSlot;
-(NSInteger)_subscriptionSlotIfSIMPresent:(NSInteger)arg0 ;
-(NSUInteger)_callCountForService:(int)arg0 ;
-(NSUInteger)callCount;
-(NSUInteger)faceTimeAudioCallCount;
-(NSUInteger)telephonyCallCount;
-(id)_backgroundQueryQueue;
-(id)_callsForService:(int)arg0 ;
-(id)_phoneApp;
-(id)_primaryCarrierBundleInfo;
-(id)_primaryMobileEquipmentInfo;
-(id)_primarySubscriptionInfo;
-(id)_secondaryCarrierBundleInfo;
-(id)_secondaryMobileEquipmentInfo;
-(id)_secondarySubscriptionInfo;
-(id)_subscriptionInfoForCall:(id)arg0 ;
-(id)carrierDisabledApplicationIDs;
-(id)displayedCall;
-(id)init;
-(id)initWithStateProvider:(id)arg0 wifiDomain:(id)arg1 bluetoothController:(id)arg2 ;
-(int)numberOfNetworkTetheredDevices;
-(struct __CTServerConnection *)_serverConnection;
-(void)_avSystemControllerDidError:(id)arg0 ;
-(void)_handleTelephonyDaemonRestart;
// -(void)_performQueryInBackground:(id)arg0 withMainQueueResultHandler:(unk)arg1  ;
-(void)_provisioningUpdateWithStatus:(int)arg0 slot:(NSInteger)arg1 ;
-(void)_queue_noteWirelessModemDynamicStoreChanged;
-(void)_serverConnectionDidError:(struct ? )arg0 ;
-(void)_setCurrentActivationAlertItem:(id)arg0 ;
-(void)_setIsInEmergencyCallbackMode:(unsigned char)arg0 ;
-(void)_setIsNetworkTethering:(BOOL)arg0 withNumberOfDevices:(int)arg1 ;
-(void)_updateNetworkLocale;
-(void)_updateState;
-(void)callEventHandler:(id)arg0 ;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)disconnectAllCalls;
-(void)disconnectCallAndActivateHeld;
-(void)disconnectDisplayedCall;
-(void)disconnectIncomingCall;
-(void)dumpBasebandState:(id)arg0 ;
-(void)handleCallControlFailure:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)preHeatDataLinkForDomains:(id)arg0 ;
-(void)queue_setFastDormancySuspended:(BOOL)arg0 withConnection:(struct __CTServerConnection *)arg1 ;
-(void)setFastDormancySuspended:(BOOL)arg0 ;
-(void)setNetworkRegistrationEnabled:(BOOL)arg0 ;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)swapCalls;
-(void)telephonyAudioChangeHandler;
-(void)updateCalls;
-(void)updateSpringBoard;


@end


#endif