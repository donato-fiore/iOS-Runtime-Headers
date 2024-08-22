// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSTEMSETTINGSRELAY_H
#define SYSTEMSETTINGSRELAY_H

@class NSDictionary, NSString;
@protocol CoreTelephonyShimDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SystemSettingsRelay : NSObject <CoreTelephonyShimDelegate>

 {
    BOOL _cellOutrankFeatureFlagEnabled;
    BOOL _cellOutrankEnabledOverride;
    BOOL _cellSupports5G;
    BOOL _cellSupportsPrivateNetwork;
    *__CTServerConnection _serverConnection;
}


@property (readonly) BOOL airplaneModeSwitchEnabled; // ivar: _airplaneModeSwitchEnabled
@property (readonly) BOOL autoBugCaptureAvailable; // ivar: _autoBugCaptureAvailable
@property (retain, nonatomic) NSDictionary *autoBugCaptureConfiguration; // ivar: _autoBugCaptureConfiguration
@property (readonly) BOOL autoBugCaptureEnabled; // ivar: _autoBugCaptureEnabled
@property (readonly) int autoBugCaptureEnhancedBetaFeedbackState;
@property (readonly) BOOL autoFeedbackAssistantEnable; // ivar: _autoFeedbackAssistantEnable
@property (nonatomic) BOOL autoFeedbackAssistantInitialized; // ivar: _autoFeedbackAssistantInitialized
@property (readonly) BOOL cellDataSwitchEnabled; // ivar: _cellDataSwitchEnabled
@property (readonly) BOOL cellOutrankEnabled; // ivar: _cellOutrankEnabled
@property (readonly) BOOL cellPrivateNetworkFeatureFlagEnabled; // ivar: _cellPrivateNetworkFeatureFlagEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL geoIPTrackingFeatureFlagEnabled; // ivar: _geoIPTrackingFeatureFlagEnabled
@property (readonly) NSUInteger hash;
@property (readonly) BOOL noBackhaulEnabled; // ivar: _noBackhaulEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL registeredForAutoBugCaptureChangeNotifications; // ivar: _registeredForAutoBugCaptureChangeNotifications
@property (readonly) BOOL rnfEnabled; // ivar: _rnfEnabled
@property (nonatomic) BOOL smartDataModeEnabled; // ivar: _smartDataModeEnabled
@property (readonly) Class superclass;
@property (readonly) BOOL wifiEnabled; // ivar: _wifiEnabled


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)defaultRelay;
-(id)init;
-(void)ctServerConnectionNotification:(struct __CFString *)arg0 notificationInfo:(struct __CFDictionary *)arg1 ;
-(void)dealloc;
-(void)getAutoBugCaptureConfiguration;
-(void)recalculateAndSetCellOutrankEnabled;
-(void)registerForAutoBugCaptureChangeNotifications;
-(void)rnfSettingChangedToFeatureEnabled:(BOOL)arg0 userEnabled:(BOOL)arg1 ;
-(void)smartDataModeChangedToUserEnabled:(BOOL)arg0 ;
-(void)supports5GChangedTo:(BOOL)arg0 ;
-(void)supportsPrivateNetworkChangedTo:(BOOL)arg0 ;


@end


#endif