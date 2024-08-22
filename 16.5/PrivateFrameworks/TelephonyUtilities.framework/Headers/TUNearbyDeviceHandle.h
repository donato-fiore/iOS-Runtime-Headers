// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUNEARBYDEVICEHANDLE_H
#define TUNEARBYDEVICEHANDLE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "TUNearbyDeviceHandleCapabilities.h"

@interface TUNearbyDeviceHandle : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) TUNearbyDeviceHandleCapabilities *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSInteger deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) NSDictionary *knownIdentifiersByHandleType; // ivar: _knownIdentifiersByHandleType
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *plistRepresentation;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeviceHandle:(id)arg0 ;
-(BOOL)isEquivalentToDeviceHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identifierDescription;
-(id)identifierWithType:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 knownIdentifiers:(id)arg1 ;
-(id)initWithName:(id)arg0 knownIdentifiers:(id)arg1 deviceModel:(NSInteger)arg2 ;
-(id)initWithName:(id)arg0 knownIdentifiers:(id)arg1 deviceModel:(NSInteger)arg2 capabilities:(id)arg3 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 name:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 name:(id)arg2 capabilities:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif