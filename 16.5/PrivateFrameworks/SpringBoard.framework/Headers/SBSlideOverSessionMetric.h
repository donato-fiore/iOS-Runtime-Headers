// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSLIDEOVERSESSIONMETRIC_H
#define SBSLIDEOVERSESSIONMETRIC_H

@class NSString;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBSlideOverSessionMetric : SBAnalyticsStateMachineEventHandler

@property (copy, nonatomic) NSString *floatingBundleIdentifier; // ivar: _floatingBundleIdentifier
@property (copy, nonatomic) NSString *startReason; // ivar: _startReason
@property (nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp


-(BOOL)_sendCoreAnalyticsEventWithStartReason:(id)arg0 endReason:(id)arg1 duration:(CGFloat)arg2 floatingBundleIdentifier:(id)arg3 doNotDisturbActive:(BOOL)arg4 hardwareKeyboardAttached:(BOOL)arg5 ;
-(BOOL)sendCoreAnalyticsEventWithName:(id)arg0 payload:(id)arg1 ;
-(id)_bundleIdentifierForElementWithLayoutRole:(NSInteger)arg0 fromContext:(id)arg1 ;
-(id)initWithHeartbeatMetricPersistence:(id)arg0 ;


@end


#endif