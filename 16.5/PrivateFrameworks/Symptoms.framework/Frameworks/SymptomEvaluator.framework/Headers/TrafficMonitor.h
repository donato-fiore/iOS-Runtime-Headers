// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRAFFICMONITOR_H
#define TRAFFICMONITOR_H

@class NSMutableArray, NSString, NWUsageTargetSelector;
@protocol FlowScheduledRefreshDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TrafficMonitor : NSObject <FlowScheduledRefreshDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_samples;
    BOOL _userInitiatedFlowThreshold;
    BOOL _hasRunningTimer;
    BOOL _activePolling;
    id *_fetchBlock;
    CGFloat _samplePeriodThroughput;
    CGFloat _prevTrafficTimestamp;
    CGFloat _currentIdleStartTime;
    NSUInteger _prevTrafficCount;
    NSUInteger _numPollsHandled;
    NSUInteger _numPollsInitiated;
    NSUInteger _numPollsIgnored;
}


@property (nonatomic) BOOL activePolling;
@property (readonly, nonatomic) CGFloat currentIdleDuration;
@property (readonly, nonatomic) CGFloat currentIdleStartTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *fetchBlock;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minSamplePeriod; // ivar: _minSamplePeriod
@property (nonatomic) CGFloat minSamplePeriodThroughputThreshold; // ivar: _minSamplePeriodThroughputThreshold
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGFloat samplePeriodThroughput;
@property (readonly) Class superclass;
@property (retain, nonatomic) NWUsageTargetSelector *targetForPolling; // ivar: _targetForPolling
@property (readonly, nonatomic) BOOL trafficThreshold; // ivar: _trafficThreshold


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)userInitiatedFlowThreshold;
-(id)getState;
-(id)initWithQueue:(id)arg0 ;
-(int)didPollFlowsCallbackOrder;
-(void)_refreshValues;
-(void)_timerMaintenance;
-(void)didPollFlowsAt:(CGFloat)arg0 periodic:(BOOL)arg1 ;
-(void)setUserInitiatedFlowThreshold:(BOOL)arg0 ;


@end


#endif