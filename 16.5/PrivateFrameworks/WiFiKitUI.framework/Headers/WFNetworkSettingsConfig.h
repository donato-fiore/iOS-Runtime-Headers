// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFNETWORKSETTINGSCONFIG_H
#define WFNETWORKSETTINGSCONFIG_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface WFNetworkSettingsConfig : NSObject

@property BOOL autoJoinConfigurable; // ivar: _autoJoinConfigurable
@property BOOL autoJoinEnabled; // ivar: _autoJoinEnabled
@property BOOL autoLoginConfigurable; // ivar: _autoLoginConfigurable
@property BOOL autoLoginEnabled; // ivar: _autoLoginEnabled
@property BOOL canRenewLease; // ivar: _canRenewLease
@property BOOL cloudSyncable; // ivar: _cloudSyncable
@property BOOL current; // ivar: _current
@property (copy) NSString *dhcpClientID; // ivar: _dhcpClientID
@property (copy) NSDate *dhcpLeaseExpirationDate; // ivar: _dhcpLeaseExpirationDate
@property BOOL diagnosable; // ivar: _diagnosable
@property NSInteger dnsConfig; // ivar: _dnsConfig
@property (copy) NSArray *dnsSearchDomains; // ivar: _dnsSearchDomains
@property (retain) NSArray *dnsServerAddresses; // ivar: _dnsServerAddresses
@property (retain) NSArray *dnsSeverAddresses;
@property BOOL forgetable; // ivar: _forgetable
@property (retain) NSArray *healthRecommendations; // ivar: _healthRecommendations
@property BOOL httpProxyAuthenticationRequired; // ivar: _httpProxyAuthenticationRequired
@property NSInteger httpProxyConfig; // ivar: _httpProxyConfig
@property (copy) NSString *httpProxyConfigPAC; // ivar: _httpProxyConfigPAC
@property BOOL httpProxyConfigurable; // ivar: _httpProxyConfigurable
@property (copy) NSString *httpProxyPassword; // ivar: _httpProxyPassword
@property (copy) NSString *httpProxyServerAddress; // ivar: _httpProxyServerAddress
@property (copy) NSString *httpProxyServerPort; // ivar: _httpProxyServerPort
@property (copy) NSString *httpProxyUsername; // ivar: _httpProxyUsername
@property (copy) NSString *ipv4Address; // ivar: _ipv4Address
@property (copy) NSString *ipv4AddressManual; // ivar: _ipv4AddressManual
@property NSInteger ipv4Config; // ivar: _ipv4Config
@property (copy) NSString *ipv4RouterAddress; // ivar: _ipv4RouterAddress
@property (copy) NSString *ipv4RouterAddressManual; // ivar: _ipv4RouterAddressManual
@property (copy) NSString *ipv4SubnetMask; // ivar: _ipv4SubnetMask
@property (copy) NSString *ipv4SubnetMaskManual; // ivar: _ipv4SubnetMaskManual
@property (copy) NSString *ipv6AddressManual; // ivar: _ipv6AddressManual
@property (retain) NSArray *ipv6Addresses; // ivar: _ipv6Addresses
@property NSInteger ipv6Config; // ivar: _ipv6Config
@property (copy) NSString *ipv6PrefixLengthManual; // ivar: _ipv6PrefixLengthManual
@property (retain) NSArray *ipv6PrefixLengths; // ivar: _ipv6PrefixLengths
@property (copy) NSString *ipv6RouterAddress; // ivar: _ipv6RouterAddress
@property (copy) NSString *ipv6RouterAddressManual; // ivar: _ipv6RouterAddressManual
@property BOOL isInSaveDataMode; // ivar: _isInSaveDataMode
@property BOOL joinable; // ivar: _joinable
@property BOOL manageable; // ivar: _manageable
@property (copy) NSDate *networkQualityDate; // ivar: _networkQualityDate
@property CGFloat networkQualityResponsiveness; // ivar: _networkQualityResponsiveness
@property BOOL networkQualityVisible; // ivar: _networkQualityVisible
@property BOOL privacyProxyConfigurable; // ivar: _privacyProxyConfigurable
@property BOOL privacyProxyEnabled; // ivar: _privacyProxyEnabled
@property NSInteger privacyProxyTierStatus; // ivar: _privacyProxyTierStatus
@property BOOL saveDataModeConfigurable; // ivar: _saveDataModeConfigurable
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid
@property BOOL wifiOutrankEnabled; // ivar: _wifiOutrankEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNetworkSettingsConfig:(id)arg0 ;
-(BOOL)validIPv4Configuration;
-(BOOL)validIPv6Configuration;
-(BOOL)validProxyConfiguration;
-(id)changesBetweenConfig:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif