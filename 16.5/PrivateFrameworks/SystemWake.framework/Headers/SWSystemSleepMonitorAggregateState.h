// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWSYSTEMSLEEPMONITORAGGREGATESTATE_H
#define SWSYSTEMSLEEPMONITORAGGREGATESTATE_H


#import <Foundation/Foundation.h>


@interface SWSystemSleepMonitorAggregateState : NSObject {
    NSUInteger _stateTimestamp;
    NSUInteger _phaseTimestamp;
    NSUInteger _state;
    NSUInteger _phase;
}


@property (readonly) NSUInteger powerManagementPhase; // ivar: _powerManagementPhase
@property (readonly) NSUInteger powerManagementPhaseTimestamp; // ivar: _powerManagementPhaseTimestamp
@property (readonly) NSUInteger sleepMonitorState; // ivar: _sleepMonitorState
@property (readonly) NSUInteger sleepMonitorStateTimestamp; // ivar: _sleepMonitorStateTimestamp


-(id)description;
-(id)initWithSleepMonitorState:(NSUInteger)arg0 stateTimestamp:(NSUInteger)arg1 powerManagementPhase:(NSUInteger)arg2 phaseTimestamp:(NSUInteger)arg3 ;


@end


#endif