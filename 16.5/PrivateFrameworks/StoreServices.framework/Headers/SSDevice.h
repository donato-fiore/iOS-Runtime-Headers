// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSDEVICE_H
#define SSDEVICE_H

@class NSString, NSSet;
@protocol SSRequestDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSKeyValueStore.h"
#import "SSURLBag.h"
#import "SSPromise.h"

@interface SSDevice : NSObject <SSRequestDelegate>

 {
    NSString *_appleTVProductVersion;
    NSSet *_automaticDownloadKinds;
    NSInteger _biometricStyle;
    id *_cloudMediaLibraryIdentifier;
    NSInteger _deviceType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSString *_legacyUserAgent;
    NSString *_localStoreFrontIdentifier;
    id *_mediaLibraryIdentifier;
    NSString *_phoneNumber;
    NSString *_productType;
    NSString *_productVersion;
    id *_softwareLibraryIdentifier;
    NSString *_udid;
    SSURLBag *_urlBag;
    NSString *_userAgent;
    NSString *_clientName;
    CGFloat _batteryLevel;
    unsigned int _batteryMonitorNotification;
    *IONotificationPort _batteryMonitorPort;
    BOOL _pluggedIn;
    int _pluggedInToken;
    NSInteger _powerMonitorCount;
}


@property (readonly) NSSet *automaticDownloadKinds;
@property (readonly) CGFloat batteryLevel;
@property (readonly) NSString *clientName;
@property (readonly) NSString *clientVersion;
@property (copy) NSString *cloudMediaLibraryIdentifier;
@property (readonly) NSString *compatibleProductType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger deviceType;
@property (readonly) unsigned int deviceTypeIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *legacyUserAgent;
@property (copy) NSString *mediaLibraryIdentifier;
@property (readonly) NSString *phoneNumber;
@property (readonly, getter=isPluggedIn) BOOL pluggedIn;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (readonly) float screenScale;
@property (readonly) NSString *serialNumber;
@property (copy) NSString *softwareLibraryIdentifier;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly, nonatomic) SSPromise *storeFrontIdentifierPromise;
@property (readonly) Class superclass;
@property (readonly) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) NSString *uniqueDeviceIdentifier;
@property (readonly) NSString *userAgent;


+(BOOL)deviceIsAppleTV;
+(BOOL)deviceIsAppleWatch;
+(BOOL)deviceIsAudioAccessory;
+(BOOL)deviceIsInternalBuild;
+(BOOL)deviceIsSeedBuild;
+(BOOL)deviceIsiPad;
+(BOOL)deviceIsiPhone;
+(BOOL)deviceIsiPod;
+(BOOL)promptNeedsDisplay:(id)arg0 ;
+(BOOL)setCachedAvailableItemKinds:(id)arg0 ;
+(id)copyCachedAvailableItemKinds;
+(id)currentDevice;
+(void)setLastPromptAttemptDate:(id)arg0 forPromptWithIdentifier:(id)arg1 ;
+(void)setPromptWithIdentifier:(id)arg0 needsDisplay:(BOOL)arg1 ;
-(BOOL)_getDeviceType:(*unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)_is1080pCapable;
-(BOOL)_is720pCapable;
-(BOOL)getMachineIdentifier:(*id)arg0 otp:(*id)arg1 forAccountIdentifier:(id)arg2 ;
-(BOOL)isStoreFrontIdentifierTransient;
-(BOOL)supportsDeviceCapability:(NSInteger)arg0 ;
-(NSInteger)_deviceTypeForProductType:(id)arg0 ;
-(NSInteger)_deviceTypeForUnknownAppleTV:(id)arg0 ;
-(NSInteger)_deviceTypeForUnknownIPad:(id)arg0 ;
-(NSInteger)_deviceTypeForUnknownIPhone:(id)arg0 ;
-(NSInteger)_deviceTypeForUnknownIPod:(id)arg0 ;
-(NSInteger)deviceBiometricStyle;
-(id)_appleTVProductVersion;
-(id)_copyCarrierBundleEligibilityWithStatus:(id)arg0 ;
-(id)_copyKeyValueStoreValueForDomain:(id)arg0 key:(id)arg1 ;
-(id)_copyProductType;
-(id)_diskCapacityString;
-(id)_fairPlayDeviceTypeString;
-(id)_newLegacyUserAgent:(*BOOL)arg0 ;
-(id)_newModernUserAgentWithClientName:(id)arg0 version:(id)arg1 isCachable:(*BOOL)arg2 ;
-(id)_userAgentClientNameForAppleTVBundleID:(id)arg0 ;
-(id)_userAgentClientNameForBundleID:(id)arg0 ;
-(id)_userAgentClientNameForInfoPlist:(id)arg0 ;
-(id)_userAgentClientVersionForInfoPlist:(id)arg0 clientName:(id)arg1 ;
-(id)carrierBundleStatusForService:(NSInteger)arg0 ;
-(id)copyStoreFrontRequestHeaders;
-(id)init;
-(id)synchedStoreFrontIdentifier;
-(id)userAgentWithBundleIdentifier:(id)arg0 version:(id)arg1 ;
-(id)userAgentWithBundleRef:(struct __CFBundle *)arg0 isCachable:(*BOOL)arg1 ;
-(id)userAgentWithClientName:(id)arg0 version:(id)arg1 ;
-(int)_deviceClass;
-(int)_screenClass;
-(void)_cacheKeyValueStoreValues;
-(void)_invalidateAutomaticDownloadKinds;
-(void)_invalidatePhoneNumber;
-(void)_invalidateSoftwareCUID;
-(void)_postStoreFrontDidChangeNotification;
-(void)_reloadPluggedInState;
-(void)_updateAutomaticDownloadKinds:(id)arg0 withValue:(id)arg1 completionBlock:(id)arg2 ;
-(void)_updateBatteryLevelFromService:(unsigned int)arg0 ;
-(void)dealloc;
-(void)enableAllAutomaticDownloadKindsWithCompletionBlock:(id)arg0 ;
-(void)getAvailableItemKindsWithBlock:(id)arg0 ;
-(void)getCarrierBundleStatusForService:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getCellularNetworkingAllowedWithBlock:(id)arg0 ;
-(void)loadStoreFrontWithCompletionHandler:(id)arg0 ;
-(void)minusAutomaticDownloadKinds:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)reloadStoreFrontIdentifier;
-(void)sdk_loadStoreFrontIdentifier:(id)arg0 ;
-(void)sdk_loadStorefrontCountryCode:(id)arg0 ;
-(void)setCellularNetworkingAllowed:(BOOL)arg0 ;
-(void)setStoreFrontWithResponseHeaders:(id)arg0 ;
-(void)showPromptWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)startPowerMonitoring;
-(void)stopPowerMonitoring;
-(void)synchronizeAutomaticDownloadKinds;
-(void)unionAutomaticDownloadKinds:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif