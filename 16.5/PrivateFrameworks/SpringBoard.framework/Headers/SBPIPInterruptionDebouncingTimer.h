// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPINTERRUPTIONDEBOUNCINGTIMER_H
#define SBPIPINTERRUPTIONDEBOUNCINGTIMER_H

@class BSAbsoluteMachTimer;


#import "SBPIPInterruptionAssertion.h"

@interface SBPIPInterruptionDebouncingTimer : BSAbsoluteMachTimer

@property (weak, nonatomic) SBPIPInterruptionAssertion *debouncedAssertion; // ivar: _debouncedAssertion




@end


#endif