// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGEPOORLINKSESSION_H
#define WIFIUSAGEPOORLINKSESSION_H

@class NSString, NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;


#import "WiFiUsageSession.h"

@interface WiFiUsagePoorLinkSession : WiFiUsageSession {
    NSObject<OS_dispatch_source> *_endSessionTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_interface;
    NSInteger _badLinkRssi;
    NSInteger _goodLinkRssi;
    CGFloat _perSSID_deferJoin;
    CGFloat _perBSSID_deferJoin;
    BOOL _linkIsUp;
    NSDate *_lastJoinAt;
    BOOL _justJoined;
    NSDate *_lastLinkDownAt;
    BOOL _lastTdRecommended;
    BOOL _alerted;
    BOOL _executed;
    BOOL _toBeClosedAfterLQM;
    BOOL _toBeClosedAfterTdLogicEnd;
    BOOL _waitingOnLinkUp;
    NSString *_bssidAtTD;
    NSString *_ssidAtTD;
    NSDate *_lastDecisionAt;
    NSDate *_lastFastTDVotesAt;
    NSDate *_lastSuppressAt;
}


@property (nonatomic) CGFloat decision_ActiveProbe_Duration; // ivar: _decision_ActiveProbe_Duration
@property (nonatomic) CGFloat decision_AutoLeave_Duration; // ivar: _decision_AutoLeave_Duration
@property (nonatomic) CGFloat decision_BeaconPER_Duration; // ivar: _decision_BeaconPER_Duration
@property (nonatomic) CGFloat decision_FWTxPER_Duration; // ivar: _decision_FWTxPER_Duration
@property (nonatomic) CGFloat decision_FastTD_Duration; // ivar: _decision_FastTD_Duration
@property (nonatomic) CGFloat decision_GatewayARPFailure_Duration; // ivar: _decision_GatewayARPFailure_Duration
@property (nonatomic) CGFloat decision_SymptomsDNSError_Duration; // ivar: _decision_SymptomsDNSError_Duration
@property (nonatomic) CGFloat decision_TxPER_Duration; // ivar: _decision_TxPER_Duration
@property (nonatomic) BOOL isLastDecisionStateValid; // ivar: _isLastDecisionStateValid
@property (nonatomic) BOOL isLastFastTdVotesValid; // ivar: _isLastFastTdVotesValid
@property (nonatomic) BOOL isLastSuppressStateValid; // ivar: _isLastSuppressStateValid
@property (nonatomic) ? last_DecisionState; // ivar: _last_DecisionState
@property (nonatomic) ? last_FastTdVotes; // ivar: _last_FastTdVotes
@property (nonatomic) NSUInteger last_RSSIMode; // ivar: _last_RSSIMode
@property (nonatomic) ? last_SuppressState; // ivar: _last_SuppressState
@property (nonatomic) BOOL nextJoinIsSameSSID; // ivar: _nextJoinIsSameSSID
@property (retain, nonatomic) NSString *nextJoinReason; // ivar: _nextJoinReason
@property (nonatomic) BOOL nextJoinWhileDeferJoin; // ivar: _nextJoinWhileDeferJoin
@property (nonatomic) BOOL nextLinkUpIsSameBSSID; // ivar: _nextLinkUpIsSameBSSID
@property (nonatomic) CGFloat perCoreRSSI_Core0_Duration; // ivar: _perCoreRSSI_Core0_Duration
@property (nonatomic) CGFloat perCoreRSSI_Core1_Duration; // ivar: _perCoreRSSI_Core1_Duration
@property (nonatomic) CGFloat perCoreRSSI_NotUsed_Duration; // ivar: _perCoreRSSI_NotUsed_Duration
@property (nonatomic) NSUInteger roamStatus_FailedFilteredOut_Count_BeforeTDWait; // ivar: _roamStatus_FailedFilteredOut_Count_BeforeTDWait
@property (nonatomic) NSUInteger roamStatus_FailedFilteredOut_Count_WhileTDWait; // ivar: _roamStatus_FailedFilteredOut_Count_WhileTDWait
@property (nonatomic) NSUInteger roamStatus_FailedNotFound_Count_BeforeTDWait; // ivar: _roamStatus_FailedNotFound_Count_BeforeTDWait
@property (nonatomic) NSUInteger roamStatus_FailedNotFound_Count_WhileTDWait; // ivar: _roamStatus_FailedNotFound_Count_WhileTDWait
@property (nonatomic) NSUInteger roamStatus_Failed_Count_BeforeTDWait; // ivar: _roamStatus_Failed_Count_BeforeTDWait
@property (nonatomic) NSUInteger roamStatus_Failed_Count_WhileTDWait; // ivar: _roamStatus_Failed_Count_WhileTDWait
@property (nonatomic) NSUInteger roamStatus_Succeeded_Count_BeforeTDWait; // ivar: _roamStatus_Succeeded_Count_BeforeTDWait
@property (nonatomic) NSUInteger roamStatus_Succeeded_Count_WhileTDWait; // ivar: _roamStatus_Succeeded_Count_WhileTDWait
@property (nonatomic) NSInteger rssiAtJoin; // ivar: _rssiAtJoin
@property (nonatomic) NSInteger rssiAtNextLinkUp; // ivar: _rssiAtNextLinkUp
@property (nonatomic) NSInteger rssiAtTD; // ivar: _rssiAtTD
@property (nonatomic) int sessionEndedBy; // ivar: _sessionEndedBy
@property (nonatomic) int sessionStartedBy; // ivar: _sessionStartedBy
@property (nonatomic) CGFloat suppress_2dBGuard; // ivar: _suppress_2dBGuard
@property (nonatomic) CGFloat suppress_ActiveProbing; // ivar: _suppress_ActiveProbing
@property (nonatomic) CGFloat suppress_FastCheapCellular_Duration; // ivar: _suppress_FastCheapCellular_Duration
@property (nonatomic) CGFloat suppress_GoodAfterRoam_Duration; // ivar: _suppress_GoodAfterRoam_Duration
@property (nonatomic) CGFloat suppress_NoFgNetwApp_Duration; // ivar: _suppress_NoFgNetwApp_Duration
@property (nonatomic) CGFloat suppress_Roam_Duration; // ivar: _suppress_Roam_Duration
@property (nonatomic) CGFloat suppress_SymptomsAppPolicy_Duration; // ivar: _suppress_SymptomsAppPolicy_Duration
@property (nonatomic) CGFloat suppress_SymptomsNODataStall_Duration; // ivar: _suppress_SymptomsNODataStall_Duration
@property (nonatomic) CGFloat suppress_TTR_Duration; // ivar: _suppress_TTR_Duration
@property (nonatomic) CGFloat suppress_UserInput_Duration; // ivar: _suppress_UserInput_Duration
@property (retain, nonatomic) NSDate *tdAlertedAt; // ivar: _tdAlertedAt
@property (retain, nonatomic) NSDate *tdConfirmedAt; // ivar: _tdConfirmedAt
@property (nonatomic) CGFloat tdEvalDuration; // ivar: _tdEvalDuration
@property (retain, nonatomic) NSString *tdEvalEndedBy; // ivar: _tdEvalEndedBy
@property (retain, nonatomic) NSString *tdEvalStartedBy; // ivar: _tdEvalStartedBy
@property (retain, nonatomic) NSDate *tdExecutedAt; // ivar: _tdExecutedAt
@property (nonatomic) BOOL tdRecommendAtJoin; // ivar: _tdRecommendAtJoin
@property (nonatomic) BOOL tdRecommendAtNextLinkUp; // ivar: _tdRecommendAtNextLinkUp
@property (nonatomic) BOOL tdTriggered; // ivar: _tdTriggered
@property (nonatomic) CGFloat timeSinceJoinATStart; // ivar: _timeSinceJoinATStart
@property (nonatomic) CGFloat timeToNextJoin; // ivar: _timeToNextJoin
@property (nonatomic) CGFloat vote_FastTD_BeaconPER_Duration; // ivar: _vote_FastTD_BeaconPER_Duration
@property (nonatomic) CGFloat vote_FastTD_FWTxPER_Duration; // ivar: _vote_FastTD_FWTxPER_Duration
@property (nonatomic) CGFloat vote_FastTD_Recommendation_Duration; // ivar: _vote_FastTD_Recommendation_Duration
@property (nonatomic) CGFloat vote_FastTD_TXPER_Duration; // ivar: _vote_FastTD_TXPER_Duration
@property (nonatomic) NSUInteger waitOnRoamStatus; // ivar: _waitOnRoamStatus


+(id)describeWiFiUsageMonitor_tdDecisionState:(struct ? )arg0 ;
+(id)describeWiFiUsageMonitor_tdExecState:(struct ? )arg0 ;
+(id)describeWiFiUsageMonitor_tdFastTDState:(struct ? )arg0 ;
+(id)sessionEndedBy:(int)arg0 ;
+(id)sessionStartedBy:(int)arg0 ;
-(BOOL)expectsLQMUpdates;
-(BOOL)isBadRssi:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventDictionary:(BOOL)arg0 ;
-(id)initWithInterfaceName:(id)arg0 onQueue:(id)arg1 ;
-(id)metricName;
-(void)faultEventDetected:(NSUInteger)arg0 ;
-(void)joinStateDidChange:(id)arg0 withReason:(NSUInteger)arg1 lastDisconnectReason:(NSInteger)arg2 lastJoinFailure:(NSInteger)arg3 andNetworkDetails:(id)arg4 ;
-(void)linkQualityDidChange:(id)arg0 ;
-(void)linkStateDidChange:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 ;
-(void)roamingStateDidChange:(BOOL)arg0 reason:(NSUInteger)arg1 andStatus:(NSUInteger)arg2 andLatency:(NSUInteger)arg3 andRoamData:(id)arg4 andPingPongStats:(id)arg5 ;
-(void)sessionDidEnd:(int)arg0 ;
-(void)sessionDidStart:(int)arg0 ;
-(void)summarizeSession;
-(void)tdLogic_alertedBy:(int)arg0 ;
-(void)tdLogic_badRssi:(NSInteger)arg0 goodRSSI:(NSInteger)arg1 ;
-(void)tdLogic_decisionState:(struct ? )arg0 ;
-(void)tdLogic_deferJoin:(CGFloat)arg0 perBSSID:(CGFloat)arg1 ;
-(void)tdLogic_end:(int)arg0 evalTime:(CGFloat)arg1 rssi:(NSInteger)arg2 ;
-(void)tdLogic_execState:(struct ? )arg0 ;
-(void)tdLogic_fastTdState:(struct ? )arg0 ;
-(void)tdLogic_waitForRoamTime:(CGFloat)arg0 ;
-(void)triggerDisconnectAlerted:(BOOL)arg0 confirmed:(BOOL)arg1 executed:(BOOL)arg2 ;


@end


#endif