// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAINTERVISITMETRICPERDEVICESETTINGS_H
#define TAINTERVISITMETRICPERDEVICESETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TAInterVisitMetricPerDeviceSettings : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger sampledObservationLocationsBufferSize; // ivar: _sampledObservationLocationsBufferSize
@property (nonatomic) CGFloat sampledObservationLocationsInterval; // ivar: _sampledObservationLocationsInterval


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampledObservationLocationsInterval:(CGFloat)arg0 sampledObservationLocationsBufferSize:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif