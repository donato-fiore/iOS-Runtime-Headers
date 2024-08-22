// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAUNKNOWNBEACON_H
#define TAUNKNOWNBEACON_H

@class NSData, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TAAccessoryInformation.h"

@interface TAUnknownBeacon : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) TAAccessoryInformation *accessoryInfo; // ivar: _accessoryInfo
@property (readonly, copy, nonatomic) NSData *address; // ivar: _address
@property (readonly, nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)initWithBeaconUUID:(id)arg0 address:(id)arg1 deviceType:(NSUInteger)arg2 withAccessoryInfo:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif