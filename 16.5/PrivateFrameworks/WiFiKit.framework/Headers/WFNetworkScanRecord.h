// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFNETWORKSCANRECORD_H
#define WFNETWORKSCANRECORD_H

@class NSDictionary, NSString, NSNumber, CWFNetworkProfile, CWFScanResult;
@protocol WFNetworkListRecord, NSCopying;

#import <Foundation/Foundation.h>

#import "WFPrivateAddressConfig.h"

@interface WFNetworkScanRecord : NSObject <WFNetworkListRecord, NSCopying>



@property (nonatomic, getter=isAdhoc) BOOL adhoc; // ivar: _adhoc
@property (nonatomic, getter=isAirPortBaseStation) BOOL airPortBaseStation; // ivar: _airPortBaseStation
@property (nonatomic, getter=isAmbiguousSSID) BOOL ambiguousSSID; // ivar: _ambiguousSSID
@property (retain) NSDictionary *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *bssid; // ivar: _bssid
@property (nonatomic, getter=isCarPlay) BOOL carPlay; // ivar: _carPlay
@property (nonatomic) NSInteger carPlayType; // ivar: _carPlayType
@property (retain, nonatomic) NSNumber *channel; // ivar: _channel
@property (readonly, nonatomic) NSNumber *channelWidth; // ivar: _channelWidth
@property (copy, nonatomic) NSString *crowdsourceDescription; // ivar: _crowdsourceDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *eapProfile; // ivar: _eapProfile
@property (nonatomic, getter=isEnterprise) BOOL enterprise; // ivar: _enterprise
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic, getter=isHotspot20) BOOL hotspot20; // ivar: _hotspot20
@property (copy, nonatomic) NSString *hotspot20Name; // ivar: _hotspot20Name
@property (nonatomic, getter=isHotspot20Provisioned) BOOL hotspot20Provisioned; // ivar: _hotspot20Provisioned
@property (copy, nonatomic) NSString *hotspotPluginLabel; // ivar: _hotspotPluginLabel
@property (nonatomic) BOOL iOSHotspot; // ivar: _iOSHotspot
@property (nonatomic) BOOL instantHotspot; // ivar: _instantHotspot
@property (nonatomic, getter=isKnown) BOOL known; // ivar: _known
@property (copy, nonatomic) CWFNetworkProfile *matchingKnownNetworkProfile; // ivar: _matchingKnownNetworkProfile
@property (readonly, nonatomic) NSUInteger obsoleteNetworkCipherType; // ivar: _obsoleteNetworkCipherType
@property (nonatomic) unsigned int phyMode; // ivar: _phyMode
@property (nonatomic, getter=isPopular) BOOL popular; // ivar: _popular
@property (retain, nonatomic) WFPrivateAddressConfig *privateAddressConfig; // ivar: _privateAddressConfig
@property (readonly, nonatomic, getter=isPrivateMACDisabledByProfile) BOOL privateMACDisabledByProfile; // ivar: _privateMACDisabledByProfile
@property (nonatomic) BOOL prominentDisplay; // ivar: _prominentDisplay
@property (retain, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (nonatomic, getter=isRandomMACAddressEnabled) BOOL randomMACAddressEnabled; // ivar: _randomMACAddressEnabled
@property (nonatomic) BOOL requiresPassword; // ivar: _requiresPassword
@property (nonatomic) BOOL requiresUsername; // ivar: _requiresUsername
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (nonatomic) float scaledRSSI; // ivar: _scaledRSSI
@property (copy, nonatomic) CWFScanResult *scanResult; // ivar: _scanResult
@property (nonatomic, getter=isSecure) BOOL secure; // ivar: _secure
@property (nonatomic) NSInteger securityMode; // ivar: _securityMode
@property (nonatomic) NSInteger securityModeExt; // ivar: _securityModeExt
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSupervised) BOOL supervised; // ivar: _supervised
@property (readonly, nonatomic) NSInteger type;
@property (nonatomic, getter=isUnconfiguredAccessory) BOOL unconfiguredAccessory; // ivar: _unconfiguredAccessory
@property (nonatomic, getter=isUnconfiguredAccessorySTAOnly) BOOL unconfiguredAccessorySTAOnly; // ivar: _unconfiguredAccessorySTAOnly
@property (nonatomic) NSInteger unconfiguredAccessoryType; // ivar: _unconfiguredAccessoryType
@property (copy) NSString *unconfiguredDeviceID; // ivar: _unconfiguredDeviceID
@property (copy, nonatomic) NSString *unconfiguredDeviceName; // ivar: _unconfiguredDeviceName


-(BOOL)_isEqualToHotspotDevice:(id)arg0 ;
-(BOOL)_isEqualToNetwork:(id)arg0 ;
-(BOOL)canBeDisplayedAsCurrent;
-(BOOL)isCloudSyncable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentRecord:(id)arg0 ;
-(BOOL)isInstantHotspot;
-(BOOL)isNetworkSecurityModeMatch:(NSInteger)arg0 ;
-(BOOL)shouldShowInKnownNetworkList;
-(BOOL)shouldShowInMyNetworkList;
-(BOOL)supportsJoinFailureDiagnostics;
-(BOOL)supportsWiFiHealth;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)signalBars;
-(NSUInteger)uniqueIdentifier;
-(id)configurationIssues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hotspotBatteryLife;
-(id)hotspotCellularProtocol;
-(id)hotspotSignalStrength;
-(id)init;
-(id)initWithCoreWiFiProfile:(id)arg0 ;
-(id)initWithNetworkRef:(struct __WiFiNetwork *)arg0 ;
-(id)initWithScanResults:(id)arg0 ;
-(id)lastJoinedDate;
-(id)securityIssue;
-(id)subtitle;
-(id)title;
-(void)populatePrivateAddressConfig:(id)arg0 ;


@end


#endif