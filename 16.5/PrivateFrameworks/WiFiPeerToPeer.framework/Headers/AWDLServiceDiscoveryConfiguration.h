// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDLSERVICEDISCOVERYCONFIGURATION_H
#define AWDLSERVICEDISCOVERYCONFIGURATION_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AWDLServiceDiscoveryConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL isResolve; // ivar: _isResolve
@property (readonly, nonatomic) NSData *serviceKey; // ivar: _serviceKey
@property (readonly, nonatomic) NSData *serviceValue; // ivar: _serviceValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 resolve:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif