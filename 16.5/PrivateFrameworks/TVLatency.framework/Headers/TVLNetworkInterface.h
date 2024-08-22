// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVLNETWORKINTERFACE_H
#define TVLNETWORKINTERFACE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVLNetworkInterface : NSObject

@property (readonly, copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, nonatomic) NSUInteger interfaceType; // ivar: _interfaceType
@property (readonly, copy, nonatomic) NSString *ipv4; // ivar: _ipv4
@property (readonly, copy, nonatomic) NSString *ipv6; // ivar: _ipv6


-(id)initWithInterfaceType:(NSUInteger)arg0 interfaceName:(id)arg1 ;


@end


#endif