// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIP2PAWDLSTATEMONITORCONFIGURATION_H
#define WIFIP2PAWDLSTATEMONITORCONFIGURATION_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiP2PAWDLStateMonitorConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSArray *servicesRequiringAvailabilityNotification; // ivar: _servicesRequiringAvailabilityNotification


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif