// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGENETWORKIPV4DETAILS_H
#define WIFIUSAGENETWORKIPV4DETAILS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WiFiUsageNetworkIPv4Details : NSObject

@property (retain, nonatomic) NSString *ipv4Address; // ivar: _ipv4Address
@property (retain, nonatomic) NSString *ipv4DefGwAddress; // ivar: _ipv4DefGwAddress
@property (retain, nonatomic) NSString *ipv4RouterAddress; // ivar: _ipv4RouterAddress
@property (retain, nonatomic) NSString *ipv4RouterMacAddress; // ivar: _ipv4RouterMacAddress
@property (retain, nonatomic) NSString *ipv4Subnet; // ivar: _ipv4Subnet
@property (nonatomic) BOOL isValid; // ivar: _isValid


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif