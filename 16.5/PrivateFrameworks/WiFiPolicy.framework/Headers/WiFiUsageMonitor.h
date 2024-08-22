// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGEMONITOR_H
#define WIFIUSAGEMONITOR_H

@class NSMutableDictionary, NSDate, NSArray, NSDictionary, NSString, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WiFiUsageNetworkDetails.h"
#import "WiFiUsageInterfaceStats.h"
#import "WiFiUsageRangingSession.h"

@interface WiFiUsageMonitor : NSObject

@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property BOOL cellularFallbackEnabled; // ivar: _cellularFallbackEnabled
@property BOOL cellularOutrankingEnabled; // ivar: _cellularOutrankingEnabled
@property BOOL companionConnected; // ivar: _companionConnected
@property (nonatomic) BOOL compatibilityModeEnabled; // ivar: _compatibilityModeEnabled
@property *void completionContext; // ivar: _completionContext
@property (copy) id *completionHandler; // ivar: _completionHandler
@property BOOL controlCenterEnabled; // ivar: _controlCenterEnabled
@property (retain, nonatomic) WiFiUsageNetworkDetails *currentNetworkDetails; // ivar: _currentNetworkDetails
@property BOOL deviceCharging; // ivar: _deviceCharging
@property BOOL deviceLocked; // ivar: _deviceLocked
@property BOOL displayOn; // ivar: _displayOn
@property (copy, nonatomic) id *faultEventHandler; // ivar: _faultEventHandler
@property NSUInteger hidCount; // ivar: _hidCount
@property (retain) WiFiUsageInterfaceStats *ifStatsAtLastLqmUpdate; // ivar: _ifStatsAtLastLqmUpdate
@property BOOL inActiveA2dp; // ivar: _inActiveA2dp
@property BOOL inActiveAwdl; // ivar: _inActiveAwdl
@property BOOL inActiveCall; // ivar: _inActiveCall
@property BOOL inActiveRoam; // ivar: _inActiveRoam
@property BOOL inActiveScan; // ivar: _inActiveScan
@property BOOL inActiveSco; // ivar: _inActiveSco
@property BOOL inMediaPlayback; // ivar: _inMediaPlayback
@property (retain) NSMutableDictionary *interfaceLqmWindows; // ivar: _interfaceLqmWindows
@property (retain) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property BOOL isSystemAwake; // ivar: _isSystemAwake
@property (retain, nonatomic) NSDate *lastCallStarted; // ivar: _lastCallStarted
@property (retain, nonatomic) NSArray *lastChannelInfoList; // ivar: _lastChannelInfoList
@property (retain, nonatomic) NSDate *lastInCallAnalysis; // ivar: _lastInCallAnalysis
@property (retain) NSDate *lastLQMAnalysisForSlowWiFiDNSFailureTime; // ivar: _lastLQMAnalysisForSlowWiFiDNSFailureTime
@property (retain, nonatomic) NSDictionary *lastScanData; // ivar: _lastScanData
@property (copy, nonatomic) id *lqmAnalysisCompletionHandler; // ivar: _lqmAnalysisCompletionHandler
@property (retain, nonatomic) NSString *motionState; // ivar: _motionState
@property (retain) NSMutableArray *pendingLqmAnalysis; // ivar: _pendingLqmAnalysis
@property BOOL poweredOn; // ivar: _poweredOn
@property (nonatomic) BOOL privacyRestrictionDisabled; // ivar: _privacyRestrictionDisabled
@property (retain, nonatomic) NSDate *processInitTime; // ivar: _processInitTime
@property (retain) WiFiUsageRangingSession *rangingSession; // ivar: _rangingSession
@property (retain, nonatomic) NSString *secondaryInterfaceName; // ivar: _secondaryInterfaceName
@property (nonatomic) NSInteger tdLogic_badRssiThreshold; // ivar: _tdLogic_badRssiThreshold
@property (nonatomic) NSInteger tdLogic_goodRssiThreshold; // ivar: _tdLogic_goodRssiThreshold
@property (retain) NSMutableDictionary *usageSessions; // ivar: _usageSessions
@property BOOL xctest; // ivar: _xctest
@property BOOL xctest_disableSampling; // ivar: _xctest_disableSampling


+(id)LQMAnalysisReasonForFault:(NSUInteger)arg0 ;
+(id)sharedInstance;
+(void)appendChannelInfoToDict:(id)arg0 from:(id)arg1 ;
+(void)appendTDStateToDict:(id)arg0 from:(id)arg1 ;
-(BOOL)submitAnalytics:(id)arg0 ;
-(id)canStartLQMAnalysisforTrigger:(id)arg0 andReason:(id)arg1 onWindow:(id)arg2 ;
-(id)faultReasonCount:(NSUInteger)arg0 forInterface:(id)arg1 ;
-(id)getProperty:(id)arg0 forAllSessionsOfInterface:(id)arg1 ;
-(id)init;
-(id)lastBssSessionInfoForInterface:(id)arg0 ;
-(id)lastRangingSessionMetric;
-(id)summaryForInterface:(id)arg0 ;
-(void)addFaultEvent:(NSUInteger)arg0 forInterface:(id)arg1 ;
-(void)addRangingRttSampleWithRssi:(NSInteger)arg0 rtt:(NSInteger)arg1 snr:(NSUInteger)arg2 flags:(NSUInteger)arg3 channel:(NSUInteger)arg4 coreId:(NSUInteger)arg5 bitErrorRate:(NSUInteger)arg6 phyError:(NSUInteger)arg7 andPeerSnr:(NSUInteger)arg8 andPeerCoreId:(NSUInteger)arg9 andPeerBitErrorRate:(NSUInteger)arg10 andPeerPhyError:(NSUInteger)arg11 ;
-(void)addSoftApClientEvent:(BOOL)arg0 identifier:(id)arg1 isAppleClient:(BOOL)arg2 isInstantHotspot:(BOOL)arg3 isAutoHotspot:(BOOL)arg4 isHidden:(BOOL)arg5 ;
-(void)addSoftApCoexEvent:(NSUInteger)arg0 deniedUnii1ChannelMap:(NSUInteger)arg1 deniedUnii2aChannelMap:(NSUInteger)arg2 deniedUnii2cChannelMap:(NSUInteger)arg3 deniedUnii3ChannelMap:(NSUInteger)arg4 ;
-(void)addTriggerDisconnectEvent:(id)arg0 isAlerted:(BOOL)arg1 isConfirmed:(BOOL)arg2 isExecuted:(BOOL)arg3 ;
-(void)brokenLinkDetected:(id)arg0 ;
-(void)enableSubmitAnalyticsNoSampling:(BOOL)arg0 ;
-(void)enableXCTestNotifications;
-(void)faultEventDetected:(id)arg0 ;
-(void)initializeDeviceLockState:(BOOL)arg0 displayState:(BOOL)arg1 motionState:(id)arg2 callState:(BOOL)arg3 mediaState:(BOOL)arg4 chargingState:(BOOL)arg5 companionConnectionState:(BOOL)arg6 andSecondaryInterfaceName:(id)arg7 compatibilityMode:(BOOL)arg8 badLinkRssi:(NSInteger)arg9 goodLinkRssi:(NSInteger)arg10 ;
-(void)linkTestEvent:(id)arg0 withReason:(id)arg1 forInterface:(id)arg2 ;
-(void)notifyDHCPChanges:(id)arg0 ;
-(void)notifyDriverAvailability:(id)arg0 available:(NSUInteger)arg1 version:(NSUInteger)arg2 flags:(NSUInteger)arg3 eventID:(NSUInteger)arg4 reason:(NSUInteger)arg5 subReason:(NSUInteger)arg6 minorReason:(NSUInteger)arg7 reasonString:(id)arg8 ;
-(void)notifyIPv4Changes:(id)arg0 ;
-(void)notifyIPv6Changes:(id)arg0 ;
-(void)notifyInterfaceRankingState:(BOOL)arg0 ;
-(void)notifyIpConfigurationStateWithMethod:(BOOL)arg0 dhcpLeaseDuration:(CGFloat)arg1 hasRoutableIpV4:(BOOL)arg2 hasRoutableIpV6:(BOOL)arg3 ;
-(void)notifyNetworkQualityResults:(id)arg0 forInterface:(id)arg1 ;
-(void)rangingCompletedWithValidCount:(NSUInteger)arg0 resultStatus:(NSInteger)arg1 resultFlags:(NSUInteger)arg2 ;
-(void)rangingSessionRequestedWithSelfPreferredChannel:(NSUInteger)arg0 selfMainChannel:(NSUInteger)arg1 selfChannelFlags:(NSUInteger)arg2 peerPreferredChannel:(NSUInteger)arg3 peerMainChannel:(NSUInteger)arg4 peerChannelFlags:(NSUInteger)arg5 requester:(id)arg6 ;
-(void)rangingStartedWithNumMeasurements:(NSUInteger)arg0 ;
-(void)receiveKernelLQMRollingWindow:(id)arg0 ForInterface:(id)arg1 ;
-(void)receivedBssTransitionRequest:(id)arg0 candidateListIncluded:(BOOL)arg1 isAbridged:(BOOL)arg2 disassociationImminent:(BOOL)arg3 bssTerminationIncluded:(BOOL)arg4 essDisassociationImminent:(BOOL)arg5 ;
-(void)resetDeviceSessionforInterface:(id)arg0 ;
-(void)sentBssTransitionResponse:(id)arg0 status:(NSInteger)arg1 terminationDelayRequested:(BOOL)arg2 ;
-(void)setAwdlState:(BOOL)arg0 inMode:(NSInteger)arg1 ;
-(void)setBluetoothState:(BOOL)arg0 connectedDeviceCount:(NSUInteger)arg1 inA2dp:(BOOL)arg2 inSco:(BOOL)arg3 ;
-(void)setCallState:(BOOL)arg0 ;
-(void)setCellularFallbackState:(BOOL)arg0 forInterface:(id)arg1 ;
-(void)setCellularOutrankingState:(BOOL)arg0 forInterface:(id)arg1 ;
-(void)setCompanionConnectionState:(BOOL)arg0 ;
-(void)setControlCenterState:(BOOL)arg0 withKnownLocation:(BOOL)arg1 forInterface:(id)arg2 ;
-(void)setCurrentApplicationName:(id)arg0 withAttributes:(id)arg1 ;
-(void)setDeviceInitializationFailureReason:(id)arg0 timeSinceBoot:(CGFloat)arg1 ;
-(void)setDeviceLockState:(BOOL)arg0 ;
-(void)setDisplayState:(BOOL)arg0 ;
-(void)setJoinEvent:(BOOL)arg0 withReason:(NSUInteger)arg1 lastDisconnectReason:(NSUInteger)arg2 lastJoinFailure:(NSInteger)arg3 andNetworkDetails:(id)arg4 forInterface:(id)arg5 ;
-(void)setLinkEvent:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 forInterface:(id)arg5 ;
-(void)setMediaState:(BOOL)arg0 ;
-(void)setPowerBudget:(NSInteger)arg0 andThermalIndex:(NSInteger)arg1 forInterface:(id)arg2 ;
-(void)setPowerState:(BOOL)arg0 forInterface:(id)arg1 ;
-(void)setRoamingARCriteria:(struct ? )arg0 forInterface:(id)arg1 ;
-(void)setRoamingConfiguration:(NSInteger)arg0 withChannelList:(id)arg1 forInterface:(id)arg2 ;
-(void)setRoamingState:(BOOL)arg0 withReason:(NSUInteger)arg1 asString:(id)arg2 andStatus:(NSUInteger)arg3 asString:(id)arg4 andLatency:(NSUInteger)arg5 andRoamData:(id)arg6 andPingPongSequence:(id)arg7 forInterface:(id)arg8 ;
-(void)setScanningState:(BOOL)arg0 client:(NSUInteger)arg1 neighborBSS:(id)arg2 otherBSS:(id)arg3 withChannelInfoList:(id)arg4 forInterface:(id)arg5 ;
-(void)setSmartCoverState:(id)arg0 ;
-(void)setSoftApState:(BOOL)arg0 requester:(id)arg1 status:(id)arg2 changeReason:(id)arg3 channelNumber:(NSUInteger)arg4 countryCode:(NSUInteger)arg5 isHidden:(BOOL)arg6 isInfraConnected:(BOOL)arg7 isAwdlUp:(BOOL)arg8 lowPowerModeDuration:(CGFloat)arg9 compatibilityMode:(BOOL)arg10 requestToUpLatency:(CGFloat)arg11 ;
-(void)setSteeringRequest:(NSUInteger)arg0 preferredChannel:(NSUInteger)arg1 preferredBand:(int)arg2 preferredSSID:(id)arg3 targetSSIDDiffersFromCurrent:(BOOL)arg4 preferredBSS:(id)arg5 ssidIsSplit:(BOOL)arg6 transitionCandidates:(BOOL)arg7 ;
-(void)setSystemWakeState:(BOOL)arg0 wokenByWiFi:(BOOL)arg1 ;
-(void)setTdLogic_alertedBy:(int)arg0 forInterface:(id)arg1 ;
-(void)setTdLogic_decisionState:(struct ? )arg0 forInterface:(id)arg1 ;
-(void)setTdLogic_deferJoin:(CGFloat)arg0 perBSSID:(CGFloat)arg1 ;
-(void)setTdLogic_end:(int)arg0 evalTime:(CGFloat)arg1 rssi:(NSInteger)arg2 forInterface:(id)arg3 ;
-(void)setTdLogic_execState:(struct ? )arg0 forInterface:(id)arg1 ;
-(void)setTdLogic_fastTdState:(struct ? )arg0 forInterface:(id)arg1 ;
-(void)setTdLogic_waitForRoamTime:(CGFloat)arg0 forInterface:(id)arg1 ;
-(void)startLQMAnalysis:(id)arg0 ;
-(void)startMonitoringWiFiInterface:(id)arg0 ;
-(void)submitLqmToCA:(id)arg0 forInterface:(id)arg1 ;
-(void)updateBeaconCache:(id)arg0 afterRoamAttempt:(id)arg1 whileCurrentBSSID:(id)arg2 forInterface:(id)arg3 ;
-(void)updateBeaconInfo:(id)arg0 andParsedIE:(id)arg1 forInterface:(id)arg2 ;
-(void)updateBssPerChannelWith:(id)arg0 into:(id)arg1 and:(id)arg2 withChannelInfoList:(id)arg3 ;
-(void)updateCurrentNetworkDetails:(id)arg0 ;
-(void)updateKnownNetworksSupportingSeamless:(id)arg0 forBSS:(id)arg1 andSSID:(id)arg2 beaconCache:(id)arg3 ;
-(void)updateLQMWindowCriteria;
-(void)updateLinkQuality:(id)arg0 forInterface:(id)arg1 supportsLinkRecommendations:(BOOL)arg2 ;
-(void)updateLinkRecoveryDisabled:(BOOL)arg0 ;
-(void)updateRealTimeCoex:(BOOL)arg0 type:(NSUInteger)arg1 reasons:(id)arg2 ;
-(void)updateRealTimeCoexStatus:(BOOL)arg0 ;
-(void)updateRoamCache:(id)arg0 forInterface:(id)arg1 ;
-(void)updateSleepPowerStats:(CGFloat)arg0 unassociatedDuration:(CGFloat)arg1 associatedDuration:(CGFloat)arg2 roamingDuration:(CGFloat)arg3 ;
-(void)updateWPSInfo:(id)arg0 ;
-(void)updateWithChQualScore:(NSUInteger)arg0 txLatencyScore:(NSUInteger)arg1 rxLatencyScore:(NSUInteger)arg2 txLossScore:(NSUInteger)arg3 rxLossScore:(NSUInteger)arg4 txLatencyP95:(NSUInteger)arg5 linkRecommendationFlags:(NSUInteger)arg6 rtTrafficStatus:(NSUInteger)arg7 forInterface:(id)arg8 ;
-(void)updateWithCompatibilityMode:(unsigned char)arg0 ;
-(void)updateWithRoamingSuppression:(unsigned char)arg0 ;
-(void)updateWowState:(BOOL)arg0 lpasState:(BOOL)arg1 lowPowerState:(BOOL)arg2 batterySaverState:(BOOL)arg3 ;


@end


#endif