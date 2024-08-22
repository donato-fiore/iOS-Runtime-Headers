// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDETAILCONTEXTPRIVATEADDRESSCONFIG_H
#define WFDETAILCONTEXTPRIVATEADDRESSCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFDetailContextPrivateAddressConfig : NSObject

@property (readonly, nonatomic, getter=isAlwaysDisplayRandomAddress) BOOL alwaysDisplayRandomAddress; // ivar: _alwaysDisplayRandomAddress
@property (nonatomic, getter=isConnectedWithHardwareAddress) BOOL connectedWithHardwareAddress; // ivar: _connectedWithHardwareAddress
@property (copy, nonatomic) NSString *hardwareMACAddress; // ivar: _hardwareMACAddress
@property (copy, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (nonatomic, getter=isRandomMACAddressDisabled) BOOL randomMACAddressDisabled; // ivar: _randomMACAddressDisabled
@property (nonatomic, getter=isRandomMACSwitchOn) BOOL randomMACSwitchOn; // ivar: _randomMACSwitchOn


-(id)initWithRandomMACAddress:(id)arg0 hardwareMACAddress:(id)arg1 randomMACSwitchOn:(BOOL)arg2 randomMACAddressDisabled:(BOOL)arg3 connectedWithHardwareAddress:(BOOL)arg4 ;


@end


#endif