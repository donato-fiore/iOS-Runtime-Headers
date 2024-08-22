// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAFILTERLEAVINGLOISETTINGS_H
#define TAFILTERLEAVINGLOISETTINGS_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "TAFilterVisitsSettings.h"

@interface TAFilterLeavingLOISettings : NSObject

@property (readonly, nonatomic) NSSet *enabledLoiTypes; // ivar: _enabledLoiTypes
@property (readonly, nonatomic) NSUInteger leavingHomeImmediacyType; // ivar: _leavingHomeImmediacyType
@property (readonly, nonatomic) NSUInteger leavingWorkImmediacyType; // ivar: _leavingWorkImmediacyType
@property (readonly, nonatomic) CGFloat thresholdOfSignificantDistance; // ivar: _thresholdOfSignificantDistance
@property (readonly, nonatomic) CGFloat thresholdOfSignificantDuration; // ivar: _thresholdOfSignificantDuration
@property (readonly, nonatomic) TAFilterVisitsSettings *visitsSettings; // ivar: _visitsSettings


+(id)defaultLeavingLOIEnabledLoiTypes;
-(id)initWithDefaults;
-(id)initWithThresholdOfSignificantDuration:(CGFloat)arg0 thresholdOfSignificantDistance:(CGFloat)arg1 filterVisitsSettings:(id)arg2 enabledLoiTypes:(id)arg3 leavingHomeImmediacyType:(NSUInteger)arg4 leavingWorkImmediacyType:(NSUInteger)arg5 ;
-(id)initWithThresholdOfSignificantDurationOrDefault:(id)arg0 thresholdOfSignificantDistanceOrDefault:(id)arg1 filterVisitsSettingsOrDefault:(id)arg2 enabledLoiTypesOrDefault:(id)arg3 leavingHomeImmediacyTypeOrDefault:(id)arg4 leavingWorkImmediacyTypeOrDefault:(id)arg5 ;


@end


#endif