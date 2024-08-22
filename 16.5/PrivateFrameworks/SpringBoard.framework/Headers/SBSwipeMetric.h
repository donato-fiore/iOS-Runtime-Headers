// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWIPEMETRIC_H
#define SBSWIPEMETRIC_H



#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBSwipeMetric : SBAnalyticsStateMachineEventHandler {
    CGPoint _initialLocation;
    NSInteger _interfaceOrientation;
    CGFloat _timestampDelta;
}




-(id)init;


@end


#endif