// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAINTERVISITMETRICPERDEVICE_H
#define TAINTERVISITMETRICPERDEVICE_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TASPAdvertisement.h"
#import "TAInterVisitMetricPerDeviceSettings.h"

@interface TAInterVisitMetricPerDevice : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDictionary *durationPerMotionState; // ivar: _durationPerMotionState
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (readonly, nonatomic) NSUInteger numOfAssociatedLocs; // ivar: _numOfAssociatedLocs
@property (readonly, nonatomic) NSArray *sampledObservedLocations; // ivar: _sampledObservedLocations
@property (nonatomic) BOOL segmentSpeedExceedsLimit; // ivar: _segmentSpeedExceedsLimit
@property (retain, nonatomic) TAInterVisitMetricPerDeviceSettings *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)accumulate:(id)arg0 ;
-(void)accumulateDistance:(CGFloat)arg0 ;
-(void)accumulateDuration:(CGFloat)arg0 ;
-(void)accumulateDurationPerMotionState:(id)arg0 ;
-(void)accumulateLatestAdvertisement:(id)arg0 ;
-(void)accumulateNumOfAssociatedLocs:(NSUInteger)arg0 ;
-(void)accumulateSampledObservedLocations:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif