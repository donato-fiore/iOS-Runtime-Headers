// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIMACADDRESS_H
#define WIFIMACADDRESS_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiMACAddress : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSData *data; // ivar: _data
@property (readonly) NSData *ipv6LinkLocalAddress; // ivar: _ipv6LinkLocalAddress


+(BOOL)supportsSecureCoding;
+(id)zeroAddress;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAddress:(struct ether_addr )arg0 ;
-(id)initWithAddress:(struct ether_addr )arg0 ipv6Address:(struct in6_addr )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLinkLocalIPv6Address:(struct in6_addr )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif