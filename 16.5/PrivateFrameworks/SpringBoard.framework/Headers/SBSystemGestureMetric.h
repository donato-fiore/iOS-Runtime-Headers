// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMGESTUREMETRIC_H
#define SBSYSTEMGESTUREMETRIC_H

@class PETGoalConversionEventTracker;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBSystemGestureMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_goalTracker;
    NSUInteger _beganLocation;
}




-(id)initForType:(NSUInteger)arg0 parentMetric:(id)arg1 ;


@end


#endif