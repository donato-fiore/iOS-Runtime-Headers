// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWIFIMANAGER_H
#define SBWIFIMANAGER_H

@class NSRecursiveLock, NSString, NWSystemPathMonitor;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SBWiFiManager : NSObject {
    NSRecursiveLock *_lock;
    *__CFRunLoop _callbackRunLoop;
    *__WiFiManagerClient _manager;
    *__WiFiDeviceClient _device;
    NSString *_deviceInterfaceName;
    BOOL _mainThread_devicePresent;
    *__WiFiNetwork _currentNetwork;
    *__WiFiNetwork _previousNetwork;
    BOOL _currentNetworkHasBeenSet;
    BOOL _currentNetworkIsIOSHotspot;
    BOOL _currentNetworkIsIOSHotspotHasBeenSet;
    BOOL _powered;
    BOOL _poweredHasBeenSet;
    int _mainThread_signalStrengthBars;
    int _mainThread_signalStrengthRSSI;
    BOOL _mainThread_signalStrengthHasBeenSet;
    NWSystemPathMonitor *_systemPathMonitor;
    NSObject<OS_dispatch_source> *_primaryInterfaceUpdateTimeoutSource;
    *__WiFiNetwork _primaryInterface;
    BOOL _primaryInterfaceHasBeenSet;
    BOOL _isPrimaryInterface;
    BOOL _isPrimaryInterfaceChanging;
}




+(id)sharedInstance;
-(BOOL)_cachedIsAssociated;
-(BOOL)isAssociated;
-(BOOL)isAssociatedToIOSHotspot;
-(BOOL)isPowered;
-(BOOL)isPrimaryInterface;
-(BOOL)wiFiEnabled;
-(id)_wifiInterface;
-(id)currentNetworkName;
-(id)init;
-(int)signalStrengthBars;
-(int)signalStrengthRSSI;
-(struct __CFRunLoop *)wifiRunLoopRef;
-(struct __WiFiManagerClient *)_lock_manager;
-(void)_linkDidChange;
-(void)_lock_setWiFiDevice:(struct __WiFiDeviceClient *)arg0 ;
-(void)_lock_spawnManagerCallbackThread;
-(void)_powerStateDidChange;
-(void)_primaryInterfaceChanged:(BOOL)arg0 ;
-(void)_runManagerCallbackThread;
-(void)_updateCurrentNetwork;
-(void)_updateDevicePresence;
-(void)_updateSignalStrength;
-(void)_updateSignalStrengthFromRawRSSI:(int)arg0 andScaledRSSI:(float)arg1 ;
-(void)_updateWiFiDevice;
-(void)_updateWiFiState;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPowered:(BOOL)arg0 ;
-(void)setWiFiEnabled:(BOOL)arg0 ;


@end


#endif