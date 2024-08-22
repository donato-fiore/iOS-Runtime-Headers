// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGENETWORKIPV6DETAILS_H
#define WIFIUSAGENETWORKIPV6DETAILS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WiFiUsageNetworkIPv6Details : NSObject

@property (retain, nonatomic) NSArray *ipv6Addresses; // ivar: _ipv6Addresses
@property (nonatomic) BOOL isValid; // ivar: _isValid


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif