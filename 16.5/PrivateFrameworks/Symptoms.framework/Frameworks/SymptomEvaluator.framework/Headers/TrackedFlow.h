// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRACKEDFLOW_H
#define TRACKEDFLOW_H

@class NSString, NSDate;


#import "TrackedFlowCounts.h"
#import "FlowClassification.h"
#import "AppTracker.h"

@interface TrackedFlow : TrackedFlowCounts {
    NSUInteger _snapshotRxWiFiBytes;
    NSUInteger _snapshotTxWiFiBytes;
    NSUInteger _snapshotRxPkts;
    NSUInteger _snapshotTxPkts;
    NSUInteger _snapshotRxDupeBytes;
    NSUInteger _snapshotRxOOOBytes;
    NSUInteger _snapshotTxReTxBytes;
    int _snapshotTxUnacked;
}


@property (nonatomic) NSUInteger backgroundCellFlowTrackingSeqNo; // ivar: _backgroundCellFlowTrackingSeqNo
@property (nonatomic) CGFloat cellDownlRate; // ivar: _cellDownlRate
@property (retain, nonatomic) FlowClassification *classification; // ivar: _classification
@property (nonatomic) NSUInteger classificationChangeTimer; // ivar: _classificationChangeTimer
@property (nonatomic) BOOL closedOut; // ivar: _closedOut
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) NSUInteger flowId; // ivar: _flowId
@property (nonatomic) unsigned int ifIndex; // ivar: _ifIndex
@property (nonatomic) NSInteger ifType; // ivar: _ifType
@property (retain, nonatomic) AppTracker *immediateUser; // ivar: _immediateUser
@property (nonatomic) BOOL isForcedNonRNF; // ivar: _isForcedNonRNF
@property (nonatomic) BOOL isNiced; // ivar: _isNiced
@property (nonatomic) BOOL isRNF; // ivar: _isRNF
@property (retain, nonatomic) NSString *ownerKey; // ivar: _ownerKey
@property (nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) NSDate *startingTimestamp; // ivar: _startingTimestamp
@property (nonatomic) BOOL trackedAsForeground; // ivar: _trackedAsForeground
@property (retain, nonatomic) AppTracker *trackerForStatistics; // ivar: _trackerForStatistics
@property (nonatomic) unsigned int trafficClassFlags; // ivar: _trafficClassFlags
@property (nonatomic) unsigned int trafficMgtFlags; // ivar: _trafficMgtFlags
@property (nonatomic) unsigned int txUnacked; // ivar: _txUnacked
@property (retain, nonatomic) AppTracker *ultimateUser; // ivar: _ultimateUser
@property (nonatomic) CGFloat wifiDownlRate; // ivar: _wifiDownlRate


+(NSUInteger)activeFlowsCountForType:(NSInteger)arg0 ;
+(NSUInteger)allActiveFlowsCount;
+(NSUInteger)cellExpensiveUsageGrandTallyAfterAdding:(NSUInteger)arg0 ;
+(NSUInteger)cellUsageGrandTallyAfterAdding:(NSUInteger)arg0 ;
+(NSUInteger)cellUsageGrandTallyAfterSetting:(NSUInteger)arg0 ;
+(NSUInteger)countFlowsPassingTest:(id)arg0 ;
+(NSUInteger)foregroundNonLocalUsageGrandTallyAfterAdding:(NSUInteger)arg0 ;
+(NSUInteger)reverseRnfUsageGrandTallyAfterAdding:(NSUInteger)arg0 ;
+(NSUInteger)rnfExpensiveUsageGrandTallyAfterAdding:(NSUInteger)arg0 ;
+(NSUInteger)rnfUsageGrandTallyAfterAdding:(NSUInteger)arg0 ;
+(NSUInteger)rnfUsageGrandTallyAfterSetting:(NSUInteger)arg0 ;
+(NSUInteger)wifiNonLocalUsageGrandTallyAfterAdding:(NSUInteger)arg0 ;
+(id)currentCellUsers;
+(id)flowForKey:(id)arg0 ;
+(id)getPolledFlowInfo;
+(id)ownersOfFlowsPassingTest:(id)arg0 ;
+(id)startTrackingForKey:(id)arg0 ;
+(void)_dumpStateOfType:(NSInteger)arg0 ;
+(void)_notifyPollingEnd;
+(void)_wifiStallCheck;
+(void)_wifiStallCheckStarted;
+(void)dumpState;
+(void)initialize;
+(void)removeTrackingForKey:(id)arg0 ;
+(void)setPolledFlowQueue:(id)arg0 ;
+(void)startPollingWifiFlows:(unsigned int)arg0 ;
+(void)stopPollingWifiFlows;
-(BOOL)inheritEarlyProperties:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_decrementCounters;
-(void)_takeSnapshot;
-(void)_updateScoreholder:(struct scoreHolder *)arg0 ;
-(void)inheritLateProperties:(id)arg0 ;


@end


#endif