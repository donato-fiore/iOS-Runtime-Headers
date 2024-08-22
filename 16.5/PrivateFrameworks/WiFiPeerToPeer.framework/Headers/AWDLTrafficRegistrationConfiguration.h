// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDLTRAFFICREGISTRATIONCONFIGURATION_H
#define AWDLTRAFFICREGISTRATIONCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WiFiMACAddress.h"

@interface AWDLTrafficRegistrationConfiguration : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_derivedLocalization;
}


@property (nonatomic) BOOL activeFlagOverride; // ivar: _activeFlagOverride
@property (readonly, nonatomic) NSString *localization;
@property (nonatomic) NSInteger options; // ivar: _options
@property (copy, nonatomic) WiFiMACAddress *peerAddress; // ivar: _peerAddress
@property (nonatomic) unsigned short preferredChannel; // ivar: _preferredChannel
@property (nonatomic) unsigned short secondaryPreferredChannel; // ivar: _secondaryPreferredChannel
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)localizedErrorForConflictBetweenExistingService:(id)arg0 withNewService:(id)arg1 localDeviceName:(id)arg2 localization:(id)arg3 ;
-(BOOL)hasSimilarOptionsTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(struct __CFDictionary *)arg0 isActive:(*BOOL)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg0 peerAddress:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg0 peerIPv6Address:(struct in6_addr )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif