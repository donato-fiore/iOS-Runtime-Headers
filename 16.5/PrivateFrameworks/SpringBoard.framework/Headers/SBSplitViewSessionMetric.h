// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPLITVIEWSESSIONMETRIC_H
#define SBSPLITVIEWSESSIONMETRIC_H

@class NSUUID, NSString;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBSplitViewSessionMetric : SBAnalyticsStateMachineEventHandler

@property (copy, nonatomic) NSUUID *aggregateSessionIdentifier; // ivar: _aggregateSessionIdentifier
@property (copy, nonatomic) NSString *aggregateSessionStartReason; // ivar: _aggregateSessionStartReason
@property (nonatomic) CGFloat aggregateSessionStartTimestamp; // ivar: _aggregateSessionStartTimestamp
@property (copy, nonatomic) NSString *individualSessionPrimaryBundleIdentifier; // ivar: _individualSessionPrimaryBundleIdentifier
@property (copy, nonatomic) NSString *individualSessionSideBundleIdentifier; // ivar: _individualSessionSideBundleIdentifier
@property (copy, nonatomic) NSString *individualSessionStartReason; // ivar: _individualSessionStartReason
@property (nonatomic) CGFloat individualSessionStartTimestamp; // ivar: _individualSessionStartTimestamp


-(BOOL)_sendAggregateSessionCoreAnalyticsEventWithIdentifier:(id)arg0 startReason:(id)arg1 endReason:(id)arg2 duration:(CGFloat)arg3 doNotDisturbActive:(BOOL)arg4 hardwareKeyboardAttached:(BOOL)arg5 ;
-(BOOL)_sendIndividualSessionCoreAnalyticsEventWithAggregateIdentifier:(id)arg0 startReason:(id)arg1 endReason:(id)arg2 duration:(CGFloat)arg3 primaryBundleIdentifier:(id)arg4 sideBundleIdentifier:(id)arg5 doNotDisturbActive:(BOOL)arg6 hardwareKeyboardAttached:(BOOL)arg7 ;
-(BOOL)sendCoreAnalyticsEventWithName:(id)arg0 payload:(id)arg1 ;
-(id)_bundleIdentifierForElementWithLayoutRole:(NSInteger)arg0 fromContext:(id)arg1 ;
-(id)initWithHeartbeatMetricPersistence:(id)arg0 ;


@end


#endif