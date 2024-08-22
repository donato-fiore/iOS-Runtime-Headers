// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIAWAREDEVICECAPABILITIES_H
#define WIFIAWAREDEVICECAPABILITIES_H

@class NSString, NSNumber, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WiFiAwareDeviceCapabilities : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *discoveryInterfaceName; // ivar: _discoveryInterfaceName
@property (readonly, nonatomic) NSNumber *operatingChannel; // ivar: _operatingChannel
@property (readonly, nonatomic) NSNumber *operatingClass; // ivar: _operatingClass
@property (readonly, nonatomic) unsigned char supportedBands; // ivar: _supportedBands
@property (readonly, nonatomic) NSArray *supportedCipherSuites; // ivar: _supportedCipherSuites
@property (readonly, nonatomic) BOOL supportsDataTransfer; // ivar: _supportsDataTransfer


+(BOOL)supportsSecureCoding;
+(id)currentDeviceCapabilities;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperatingChannel:(id)arg0 operatingClass:(id)arg1 supportedCipherSuites:(id)arg2 supportsDataTransfer:(BOOL)arg3 supportedBands:(unsigned char)arg4 discoveryInterfaceName:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif