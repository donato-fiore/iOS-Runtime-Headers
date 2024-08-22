// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTATUSBARSTATEAGGREGATOR_H
#define SBSTATUSBARSTATEAGGREGATOR_H

@class SBStatusBarDefaults, NSHashTable, NSTimer, NSDateFormatter, NSString, NSMutableArray, CBCentralManager, SBSStatusBarStyleOverridesAssertion, NSMutableDictionary, STAirPlayStatusDomain, STBatteryStatusDomain, STCallingStatusDomain, STFocusStatusDomain, STPlaygroundsStatusDomain, STStewieStatusDomain, NSArray, STTelephonyStatusDomainDataProvider, STTelephonyStatusDomain, STVoiceControlStatusDomain, STWifiStatusDomain;
@protocol SBFDateTimeOverrideObserver, SBAVSystemControllerCacheObserver, SBDisplayReferenceModeStatusObserver, CBCentralManagerPrivateDelegate, SBFSensorActivityObserver, SAInvalidatable;

#import <Foundation/Foundation.h>

#import "SBDisplayReferenceModeMonitor.h"
#import "SBUserSessionController.h"
#import "SBSystemStatusBatteryDataProvider.h"
#import "SBWindowScene.h"
#import "SBTelephonyManager.h"
#import "SBSystemStatusWifiDataProvider.h"

@interface SBStatusBarStateAggregator : NSObject <SBFDateTimeOverrideObserver, SBAVSystemControllerCacheObserver, SBDisplayReferenceModeStatusObserver, CBCentralManagerPrivateDelegate, SBFSensorActivityObserver>

 {
    SBStatusBarDefaults *_statusBarDefaults;
    NSUInteger _coalescentBlockDepth;
    BOOL _hasPostedOnce;
    NSUInteger _itemPostState;
    BOOL _nonItemDataChanged;
    ? _data;
    int _actions;
    BOOL _performingAtomicUpdate;
    NSUInteger _atomicUpdateItemPostState;
    ? _atomicUpdateData;
    NSHashTable *_postObservers;
    BOOL _notifyingPostObservers;
    NSInteger _showsRecordingOverrides;
    NSTimer *_timeItemTimer;
    NSDateFormatter *_timeItemDateFormatter;
    NSDateFormatter *_shortTimeItemDateFormatter;
    NSDateFormatter *_dateItemDateFormatter;
    NSString *_timeItemTimeString;
    NSString *_shortTimeItemTimeString;
    NSString *_dateItemTimeString;
    NSString *_serviceString;
    NSString *_serviceCrossfadeString;
    NSString *_secondaryServiceString;
    NSString *_secondaryServiceCrossfadeString;
    NSString *_serviceBadgeString;
    NSString *_secondaryServiceBadgeString;
    NSUInteger _airplaneTransitionToken;
    BOOL _suppressCellServiceForAirplaneModeTransition;
    BOOL _cachedShowRSSI;
    BOOL _showsActivityIndicatorOnHomeScreen;
    NSInteger _activityIndicatorEverywhereCount;
    NSInteger _syncActivityIndicatorCount;
    NSString *_activityDisplayIdentifier;
    NSString *_batteryDetailString;
    NSMutableArray *_connectedClassicBluetoothDevices;
    NSMutableArray *_connectedLEBluetoothDevices;
    CBCentralManager *_coreBluetoothManager;
    BOOL _shouldShowBluetoothHeadphoneGlyph;
    BOOL _shouldShowBluetoothHeadphoneBatteryPercent;
    BOOL _alarmEnabled;
    BOOL _prominentLocationOverride;
    NSTimer *_prominentLocationTimer;
    SBDisplayReferenceModeMonitor *_displayReferenceModeMonitor;
    SBSStatusBarStyleOverridesAssertion *_airPlayStatusBarStyleOverrideAssertion;
    NSMutableDictionary *_callingStatusBarStyleOverrideAssertionsByStyleOverride;
    SBSStatusBarStyleOverridesAssertion *_mediaStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_playgroundsStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_stewieStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_tetheringStatusBarStyleOverrideAssertion;
    SBUserSessionController *_lazy_userSessionController;
    NSString *_personName;
    NSString *_overridePersonName;
}


@property (retain, nonatomic) STAirPlayStatusDomain *airPlayDomain; // ivar: _airPlayDomain
@property (nonatomic) NSUInteger batteryChargingState; // ivar: _batteryChargingState
@property (readonly, nonatomic) SBSystemStatusBatteryDataProvider *batteryDataProvider; // ivar: _batteryDataProvider
@property (retain, nonatomic) STBatteryStatusDomain *batteryDomain; // ivar: _batteryDomain
@property (retain, nonatomic) STCallingStatusDomain *callingDomain; // ivar: _callingDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) STFocusStatusDomain *focusDomain; // ivar: _focusDomain
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBWindowScene *mainDisplayWindowScene; // ivar: _mainDisplayWindowScene
@property (retain, nonatomic) STPlaygroundsStatusDomain *playgroundsDomain; // ivar: _playgroundsDomain
@property (retain, nonatomic) STStewieStatusDomain *stewieDomain; // ivar: _stewieDomain
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SAInvalidatable> *systemApertureChargingElementAssertion; // ivar: _systemApertureChargingElementAssertion
@property (retain, nonatomic) NSArray *systemApertureVisibleElementIdentifiers; // ivar: _systemApertureVisibleElementIdentifiers
@property (readonly, nonatomic) STTelephonyStatusDomainDataProvider *telephonyDataProvider; // ivar: _telephonyDataProvider
@property (retain, nonatomic) STTelephonyStatusDomain *telephonyDomain; // ivar: _telephonyDomain
@property (retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // ivar: _override_telephonyManager
@property (retain, nonatomic, getter=_userSessionController, setter=_setUserSessionController:) SBUserSessionController *userSessionController; // ivar: _override_userSessionController
@property (retain, nonatomic) STVoiceControlStatusDomain *voiceControlDomain; // ivar: _voiceControlDomain
@property (readonly, nonatomic) SBSystemStatusWifiDataProvider *wifiDataProvider; // ivar: _wifiDataProvider
@property (retain, nonatomic) STWifiStatusDomain *wifiDomain; // ivar: _wifiDomain


+(int)_thermalColorForLevel:(NSInteger)arg0 ;
-(BOOL)_setItem:(int)arg0 enabled:(BOOL)arg1 ;
-(BOOL)_setItem:(int)arg0 enabled:(BOOL)arg1 inList:(*BOOL)arg2 itemPostState:(*NSUInteger)arg3 ;
-(BOOL)_shouldShowEmergencyOnlyStatusForInfo:(id)arg0 ;
-(BOOL)_shouldShowPersonName;
-(BOOL)_systemApertureElementIsVisibleForStatusBarItem:(int)arg0 ;
-(id)_activeAudioRecordingAttributionsForSensorActivityAttributions:(id)arg0 ;
-(id)_locationAttributionsForSensorActivityAttributions:(id)arg0 includeRecent:(BOOL)arg1 ;
-(id)_statusBarStyleOverrideDescriptorsForCallDescriptors:(id)arg0 ;
-(id)_systemApertureElementIdentifierForStatusBarItem:(int)arg0 ;
-(id)initWithMainDisplayWindowScene:(id)arg0 ;
-(id)initWithMainDisplayWindowScene:(id)arg0 registerForNotifications:(BOOL)arg1 ;
-(int)_statusBarBatteryStateForSystemStatusChargingState:(NSUInteger)arg0 ;
-(struct ? *)_statusBarData;
-(void)_invalidateSystemApertureChargingElementAssertionForReason:(id)arg0 ;
-(void)_noteAirplaneModeChanged;
-(void)_notifyItemChanged:(int)arg0 ;
-(void)_notifyNonItemDataChanged;
-(void)_postItem:(int)arg0 withState:(NSUInteger)arg1 inList:(*NSUInteger)arg2 ;
-(void)_registerForNotifications;
-(void)_removeAirPlayStatusBarStyleOverrideAssertion;
-(void)_removePlaygroundsStatusBarStyleOverrideAssertion;
-(void)_removeStewieStatusBarStyleOverrideAssertion;
-(void)_removeTetheringStatusBarStyleOverrideAssertion;
-(void)_requestActions:(int)arg0 ;
-(void)_resetTimeItemFormatter;
-(void)_restartTimeItemTimer;
-(void)_stopTimeItemTimer;
-(void)_temporarilyOverrideLocationItemForProminentIndication;
-(void)_tickRefCount:(*NSInteger)arg0 up:(BOOL)arg1 withTransitionBlock:(id)arg2 ;
-(void)_updateActiveAudioRecordingStatusBarStyleOverrideAssertionsForActiveSensorActivityAttributions:(id)arg0 ;
-(void)_updateActivityItem;
-(void)_updateAirplaneMode;
-(void)_updateAirplayItem;
-(void)_updateAlarmItem;
-(void)_updateBatteryItems;
-(void)_updateBluetoothBatteryItem;
-(void)_updateBluetoothHeadphonesItem;
-(void)_updateBluetoothItem;
-(void)_updateCallForwardingItem;
-(void)_updateCallForwardingItem:(int)arg0 withInfo:(id)arg1 ;
-(void)_updateCallingStatusBarStyleOverrideAssertionsForCallDescriptors:(id)arg0 ;
-(void)_updateCarPlayItem;
-(void)_updateDataNetworkItem;
// -(void)_updateDataNetworkItem:(int)arg0 withData:(id)arg1 primary:(BOOL)arg2 dataNetworkTypeGetter:(id)arg3 dataNetworkTypeSetter:(unk)arg4  ;
-(void)_updateDisplayWarningItem;
-(void)_updateLiquidDetectionItem;
-(void)_updateLocationItem;
-(void)_updateLocationItemForLocationAttributions:(id)arg0 ;
-(void)_updateLockItem;
-(void)_updateOverrideDate;
-(void)_updatePersonNameItem;
-(void)_updateQuietModeItem;
-(void)_updateRotationLockItem;
-(void)_updateSecondaryCallForwardingItem;
-(void)_updateSecondaryDataNetworkItem;
-(void)_updateSecondaryServiceItem;
-(void)_updateSecondarySignalStrengthItem;
-(void)_updateSensorActivityItem;
-(void)_updateServiceItem;
// -(void)_updateServiceItem:(int)arg0 withData:(id)arg1 SIMInfo:(id)arg2 otherSIMInfo:(id)arg3 serviceStringGetter:(id)arg4 serviceStringSetter:(unk)arg5 serviceCrossfadeStringGetter:(id)arg6 serviceCrossfadeStringSetter:(unk)arg7 serviceContentTypeGetter:(id)arg8 serviceContentTypeSetter:(unk)arg9 serviceBadgeStringGetter:(id)arg10 serviceBadgeStringSetter:(unk)arg11  ;
-(void)_updateSignalStrengthItem;
// -(void)_updateSignalStrengthItem:(int)arg0 withData:(id)arg1 SIMInfo:(id)arg2 barsGetter:(id)arg3 barsSetter:(unk)arg4  ;
-(void)_updateStateAtomicallyWithoutAnimationUsingBlock:(id)arg0 ;
-(void)_updateStatusBarForSystemStatusDomainName:(NSUInteger)arg0 data:(id)arg1 ;
-(void)_updateStatusBarItemsWithRelatedSystemApertureElements;
-(void)_updateStatusBarStyleOverrideAssertionsForSystemStatusDomain:(NSUInteger)arg0 andData:(id)arg1 ;
-(void)_updateStewieItem;
-(void)_updateTTYItem;
-(void)_updateTetheringState;
-(void)_updateThermalColorItem;
-(void)_updateTimeItems;
-(void)_updateVPNItem;
-(void)_updateVoiceControlItem;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg0 ;
-(void)addPostingObserver:(id)arg0 ;
-(void)beginCoalescentBlock;
-(void)cache:(id)arg0 didUpdateActiveAudioRoute:(id)arg1 ;
-(void)cache:(id)arg0 didUpdatePickableRoutes:(id)arg1 ;
-(void)centralManager:(id)arg0 didUpdatePeripheralConnectionState:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)controller:(id)arg0 didChangeOverrideDateFromDate:(id)arg1 ;
-(void)dealloc;
-(void)displayReferenceModeStatusDidChangeForDisplayWithConfiguration:(id)arg0 newStatus:(NSInteger)arg1 ;
-(void)endCoalescentBlock;
-(void)removePostingObserver:(id)arg0 ;
-(void)sendStatusBarActions:(int)arg0 ;
-(void)setAlarmEnabled:(BOOL)arg0 ;
-(void)setShouldShowBluetoothHeadphoneGlyph:(BOOL)arg0 andShouldShowBluetoothHeadphoneBatteryPercent:(BOOL)arg1 ;
-(void)setShowsActivityIndicatorEverywhere:(BOOL)arg0 ;
-(void)setShowsActivityIndicatorOnHomeScreen:(BOOL)arg0 ;
-(void)setShowsOverridesForRecording:(BOOL)arg0 ;
-(void)setShowsSyncActivityIndicator:(BOOL)arg0 ;
-(void)setUserNameOverride:(id)arg0 ;
-(void)systemApertureLayoutDidChange:(id)arg0 ;
-(void)updateStatusBarItem:(int)arg0 ;


@end


#endif