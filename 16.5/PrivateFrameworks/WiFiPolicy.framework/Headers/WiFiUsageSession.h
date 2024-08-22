// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGESESSION_H
#define WIFIUSAGESESSION_H

@class NSDate, NSMutableSet, NSString, NSMutableArray, NSNumber, NSMutableDictionary;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WiFiUsageSessionCAConfig.h"
#import "WiFiUsageBssSession.h"
#import "WiFiUsageInterfaceStats.h"
#import "WiFiUsageNetworkIPv4Details.h"
#import "WiFiUsageNetworkIPv6Details.h"
#import "WiFiUsageSessionLQM.h"
#import "WiFiUsageNetworkDetails.h"

@interface WiFiUsageSession : NSObject <NSCopying>

 {
    NSUInteger _perClientScanCount;
    NSUInteger _faultReasonCount;
    NSUInteger _joinReasonCount;
    NSUInteger _savedJoinReasonCount;
}


@property (retain, nonatomic) NSDate *a2dpActiveTime; // ivar: _a2dpActiveTime
@property (retain, nonatomic) NSMutableSet *activeApplications; // ivar: _activeApplications
@property (nonatomic) NSUInteger applicationStateChangedCount; // ivar: _applicationStateChangedCount
@property (nonatomic) CGFloat associatedDuration; // ivar: _associatedDuration
@property (nonatomic) CGFloat associatedSleepDuration; // ivar: _associatedSleepDuration
@property (retain, nonatomic) NSDate *awdlActiveTime; // ivar: _awdlActiveTime
@property (nonatomic) int bandAtSessionStart; // ivar: _bandAtSessionStart
@property (nonatomic) ? bandUsageDuration; // ivar: _bandUsageDuration
@property (nonatomic) NSUInteger batterySaverStateChangedCount; // ivar: _batterySaverStateChangedCount
@property (retain, nonatomic) NSDate *batterySaverStateEntryTime; // ivar: _batterySaverStateEntryTime
@property (retain, nonatomic) WiFiUsageSessionCAConfig *ca_config; // ivar: _ca_config
@property (retain, nonatomic) NSDate *callStartedTime; // ivar: _callStartedTime
@property (nonatomic) BOOL cellularFallbackEnabled; // ivar: _cellularFallbackEnabled
@property (nonatomic) NSUInteger cellularFallbackStateChangedCount; // ivar: _cellularFallbackStateChangedCount
@property (nonatomic) BOOL cellularOutrankingEnabled; // ivar: _cellularOutrankingEnabled
@property (nonatomic) NSUInteger cellularOutrankingStateChangedCount; // ivar: _cellularOutrankingStateChangedCount
@property (nonatomic) CGFloat chargingDuration; // ivar: _chargingDuration
@property (nonatomic) NSUInteger chargingEventCount; // ivar: _chargingEventCount
@property (retain, nonatomic) NSDate *chargingStartedTime; // ivar: _chargingStartedTime
@property (nonatomic) CGFloat companionConnectedDuration; // ivar: _companionConnectedDuration
@property (nonatomic) NSUInteger companionConnectionStateChangedCount; // ivar: _companionConnectionStateChangedCount
@property (retain, nonatomic) NSDate *companionConnectionTime; // ivar: _companionConnectionTime
@property (nonatomic) NSUInteger compatibilityModeChangeCount; // ivar: _compatibilityModeChangeCount
@property (retain, nonatomic) id *completionContext; // ivar: _completionContext
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (nonatomic) BOOL controlCenterEnabled; // ivar: _controlCenterEnabled
@property (nonatomic) NSUInteger controlCenterStateChangedCount; // ivar: _controlCenterStateChangedCount
@property (nonatomic) NSUInteger controlCenterToggleEventCount; // ivar: _controlCenterToggleEventCount
@property (nonatomic) NSUInteger countRoamScan; // ivar: _countRoamScan
@property (nonatomic) NSUInteger countRoamScanThatFoundSSIDTransitionPotentialCandidate; // ivar: _countRoamScanThatFoundSSIDTransitionPotentialCandidate
@property (nonatomic) NSUInteger countRoamScanThatFoundSSIDTransitionTarget; // ivar: _countRoamScanThatFoundSSIDTransitionTarget
@property (nonatomic) NSUInteger countSSIDTransitionPotentialCandidatesInLastRoamScan; // ivar: _countSSIDTransitionPotentialCandidatesInLastRoamScan
@property (nonatomic) NSUInteger countSSIDTransitionPotentialCandidatesInLastRoamScanNotInTransitionableSet; // ivar: _countSSIDTransitionPotentialCandidatesInLastRoamScanNotInTransitionableSet
@property (nonatomic) NSUInteger countSSIDTransitionTargetInLastRoamScan; // ivar: _countSSIDTransitionTargetInLastRoamScan
@property (nonatomic) int currentBand; // ivar: _currentBand
@property (retain, nonatomic) WiFiUsageBssSession *currentBssSession; // ivar: _currentBssSession
@property (nonatomic) NSUInteger currentRSSIStrongestCount; // ivar: _currentRSSIStrongestCount
@property (nonatomic) NSUInteger displayStateChangedCount; // ivar: _displayStateChangedCount
@property (nonatomic) CGFloat driverAvailabilityLatencyFromChipReset; // ivar: _driverAvailabilityLatencyFromChipReset
@property (nonatomic) CGFloat driverAvailabilityLatencyFromTermination; // ivar: _driverAvailabilityLatencyFromTermination
@property (nonatomic) CGFloat driverAvailabilityLifespan; // ivar: _driverAvailabilityLifespan
@property (nonatomic) CGFloat driverProcessLifespan; // ivar: _driverProcessLifespan
@property (nonatomic) NSUInteger driverUnavailabilityCount; // ivar: _driverUnavailabilityCount
@property (nonatomic) BOOL hasDifferentIpv4DetailsThanPrevSession; // ivar: _hasDifferentIpv4DetailsThanPrevSession
@property (nonatomic) BOOL hasDifferentIpv6DetailsThanPrevSession; // ivar: _hasDifferentIpv6DetailsThanPrevSession
@property (retain, nonatomic) NSDate *hidPresentTime; // ivar: _hidPresentTime
@property (retain, nonatomic) WiFiUsageInterfaceStats *ifStatsAtStart; // ivar: _ifStatsAtStart
@property (nonatomic) CGFloat inA2dpDuration; // ivar: _inA2dpDuration
@property (nonatomic) NSUInteger inA2dpEventCount; // ivar: _inA2dpEventCount
@property (nonatomic) CGFloat inAwdlDuration; // ivar: _inAwdlDuration
@property (nonatomic) NSUInteger inAwdlEventCount; // ivar: _inAwdlEventCount
@property (nonatomic) CGFloat inBatterySaverStateDuration; // ivar: _inBatterySaverStateDuration
@property (nonatomic) CGFloat inCallDuration; // ivar: _inCallDuration
@property (nonatomic) NSUInteger inCallEventCount; // ivar: _inCallEventCount
@property (nonatomic) CGFloat inCellularFallbackDuration; // ivar: _inCellularFallbackDuration
@property (nonatomic) CGFloat inCellularOutrankingDuration; // ivar: _inCellularOutrankingDuration
@property (nonatomic) BOOL inCoexRealTime; // ivar: _inCoexRealTime
@property (nonatomic) BOOL inCoexRealTimeAtLastJoin; // ivar: _inCoexRealTimeAtLastJoin
@property (nonatomic) BOOL inCoexRealTimeAtSessionStart; // ivar: _inCoexRealTimeAtSessionStart
@property (nonatomic) CGFloat inCompatibilityModeEnabledDuration; // ivar: _inCompatibilityModeEnabledDuration
@property (nonatomic) CGFloat inControlCenterAutoJoinDisabledDuration; // ivar: _inControlCenterAutoJoinDisabledDuration
@property (nonatomic) NSUInteger inHidPresentCount; // ivar: _inHidPresentCount
@property (nonatomic) CGFloat inHidPresentDuration; // ivar: _inHidPresentDuration
@property (nonatomic) CGFloat inLowPowerStateDuration; // ivar: _inLowPowerStateDuration
@property (nonatomic) CGFloat inLpasStateDuration; // ivar: _inLpasStateDuration
@property (nonatomic) CGFloat inMotionDuration; // ivar: _inMotionDuration
@property (nonatomic) NSUInteger inMotionEventCount; // ivar: _inMotionEventCount
@property (retain, nonatomic) NSDate *inMotionStartedTime; // ivar: _inMotionStartedTime
@property (nonatomic) CGFloat inNetwork6eModeOffDuration; // ivar: _inNetwork6eModeOffDuration
@property (nonatomic) NSUInteger inPoorLinkSessionCount; // ivar: _inPoorLinkSessionCount
@property (nonatomic) CGFloat inPoorLinkSessionDuration; // ivar: _inPoorLinkSessionDuration
@property (nonatomic) CGFloat inRoamDuration; // ivar: _inRoamDuration
@property (nonatomic) NSUInteger inRoamEventCount; // ivar: _inRoamEventCount
@property (nonatomic) CGFloat inRoamSuppressionEnabled; // ivar: _inRoamSuppressionEnabled
@property (nonatomic) NSUInteger inRoamSuppressionEnabledCount; // ivar: _inRoamSuppressionEnabledCount
@property (nonatomic) CGFloat inRoamSuppressionWaitForRoamEnd; // ivar: _inRoamSuppressionWaitForRoamEnd
@property (nonatomic) CGFloat inRoamSuppressionWaitForRoamStart; // ivar: _inRoamSuppressionWaitForRoamStart
@property (nonatomic) CGFloat inScanDuration; // ivar: _inScanDuration
@property (nonatomic) NSUInteger inScanEventCount; // ivar: _inScanEventCount
@property (nonatomic) CGFloat inScoDuration; // ivar: _inScoDuration
@property (nonatomic) NSUInteger inScoEventCount; // ivar: _inScoEventCount
@property (nonatomic) CGFloat inSoftApDuration; // ivar: _inSoftApDuration
@property (nonatomic) NSUInteger inSoftApEventCount; // ivar: _inSoftApEventCount
@property (nonatomic) CGFloat inVehicleDuration; // ivar: _inVehicleDuration
@property (retain, nonatomic) NSDate *inVehicleEntryTime; // ivar: _inVehicleEntryTime
@property (nonatomic) NSUInteger inVehicleEventCount; // ivar: _inVehicleEventCount
@property (nonatomic) CGFloat inWalkingDuration; // ivar: _inWalkingDuration
@property (retain, nonatomic) NSDate *inWalkingEntryTime; // ivar: _inWalkingEntryTime
@property (nonatomic) NSUInteger inWalkingEventCount; // ivar: _inWalkingEventCount
@property (nonatomic) CGFloat inWowStateDuration; // ivar: _inWowStateDuration
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (retain, nonatomic) WiFiUsageNetworkIPv4Details *ipV4Details; // ivar: _ipV4Details
@property (retain, nonatomic) WiFiUsageNetworkIPv4Details *ipV4DetailsPrevSession; // ivar: _ipV4DetailsPrevSession
@property (retain, nonatomic) WiFiUsageNetworkIPv6Details *ipV6Details; // ivar: _ipV6Details
@property (retain, nonatomic) WiFiUsageNetworkIPv6Details *ipV6DetailsPrevSession; // ivar: _ipV6DetailsPrevSession
@property (readonly, nonatomic) BOOL isAssociated; // ivar: _isAssociated
@property (nonatomic) BOOL isAssociatedAtSessionStart; // ivar: _isAssociatedAtSessionStart
@property (nonatomic) BOOL isCompatibilityModeEnabled; // ivar: _isCompatibilityModeEnabled
@property (nonatomic) BOOL isCompatibilityModeEnabledAtStart; // ivar: _isCompatibilityModeEnabledAtStart
@property (nonatomic) BOOL isDisplayOn; // ivar: _isDisplayOn
@property (nonatomic) BOOL isDriverAvailable; // ivar: _isDriverAvailable
@property (nonatomic) BOOL isInHomeScreen; // ivar: _isInHomeScreen
@property (nonatomic) BOOL isRoamSuppressionEnabled; // ivar: _isRoamSuppressionEnabled
@property (nonatomic) BOOL isSessionActive; // ivar: _isSessionActive
@property (nonatomic) BOOL isUnlocked; // ivar: _isUnlocked
@property (nonatomic) CGFloat joinInterfaceRankingLatencyFromDriverAvailability; // ivar: _joinInterfaceRankingLatencyFromDriverAvailability
@property (nonatomic) CGFloat joinIpConfigurationLatencyFromDriverAvailability; // ivar: _joinIpConfigurationLatencyFromDriverAvailability
@property (nonatomic) CGFloat joinLinkUpLatencyFromDriverAvailability; // ivar: _joinLinkUpLatencyFromDriverAvailability
@property (nonatomic) CGFloat joinScanLatencyFromDriverAvailability; // ivar: _joinScanLatencyFromDriverAvailability
@property (nonatomic) CGFloat joinStartedLatencyFromDriverAvailability; // ivar: _joinStartedLatencyFromDriverAvailability
@property (nonatomic) NSUInteger joinStateChangedCount; // ivar: _joinStateChangedCount
@property (retain, nonatomic) NSDate *lastBssChangedTime; // ivar: _lastBssChangedTime
@property (retain, nonatomic) NSDate *lastCellularFallbackStateChangedTime; // ivar: _lastCellularFallbackStateChangedTime
@property (retain, nonatomic) NSDate *lastCellularOutrankingStateChangedTime; // ivar: _lastCellularOutrankingStateChangedTime
@property (retain, nonatomic) NSDate *lastChipResetTime; // ivar: _lastChipResetTime
@property (retain, nonatomic) NSDate *lastCoexRealTimeOff; // ivar: _lastCoexRealTimeOff
@property (retain, nonatomic) NSDate *lastCoexRealTimeOn; // ivar: _lastCoexRealTimeOn
@property (retain, nonatomic) NSDate *lastCompatibilityModeChangedTime; // ivar: _lastCompatibilityModeChangedTime
@property (retain, nonatomic) NSDate *lastControlCenterStateChangedTime; // ivar: _lastControlCenterStateChangedTime
@property (nonatomic) NSInteger lastDisconnectReason; // ivar: _lastDisconnectReason
@property (nonatomic) NSInteger lastDisconnectSubreason; // ivar: _lastDisconnectSubreason
@property (retain, nonatomic) NSDate *lastDriverAvailableTime; // ivar: _lastDriverAvailableTime
@property (retain, nonatomic) NSDate *lastDriverTerminationTime; // ivar: _lastDriverTerminationTime
@property (retain, nonatomic) NSString *lastDriverUnavailableReason; // ivar: _lastDriverUnavailableReason
@property (nonatomic) BOOL lastInterfacePrimaryState; // ivar: _lastInterfacePrimaryState
@property (nonatomic) NSInteger lastJoinFailure; // ivar: _lastJoinFailure
@property (nonatomic) NSUInteger lastJoinReason; // ivar: _lastJoinReason
@property (retain, nonatomic) NSDate *lastJoinTime; // ivar: _lastJoinTime
@property (retain, nonatomic) NSDate *lastLinkStateChangedTime; // ivar: _lastLinkStateChangedTime
@property (retain, nonatomic) NSDate *lastNetwork6eDisableModeChangedTime; // ivar: _lastNetwork6eDisableModeChangedTime
@property (nonatomic) NSInteger lastPowerBudget; // ivar: _lastPowerBudget
@property (retain, nonatomic) NSDate *lastPowerBudgetChangedTime; // ivar: _lastPowerBudgetChangedTime
@property (retain, nonatomic) NSDate *lastPowerStateChangedTime; // ivar: _lastPowerStateChangedTime
@property (nonatomic) BOOL lastRoamScanContainsRoamCandidateCount; // ivar: _lastRoamScanContainsRoamCandidateCount
@property (nonatomic) BOOL lastRoamScanFoundSSIDTransitionPotentialCandidate; // ivar: _lastRoamScanFoundSSIDTransitionPotentialCandidate
@property (nonatomic) BOOL lastRoamScanFoundSSIDTransitionTarget; // ivar: _lastRoamScanFoundSSIDTransitionTarget
@property (nonatomic) NSUInteger lastRoamScanUniqueBandsCount; // ivar: _lastRoamScanUniqueBandsCount
@property (nonatomic) NSUInteger lastRoamScanUniqueChannelsCount; // ivar: _lastRoamScanUniqueChannelsCount
@property (retain, nonatomic) NSDate *lastRoamSuppressionToggled; // ivar: _lastRoamSuppressionToggled
@property (nonatomic) CGFloat lastSSIDIn6eModeOffDuration; // ivar: _lastSSIDIn6eModeOffDuration
@property (retain, nonatomic) NSString *lastSSIDdisable6eModeAtStart; // ivar: _lastSSIDdisable6eModeAtStart
@property (nonatomic) NSUInteger lastSSIDdisabled6eModeChangeCount; // ivar: _lastSSIDdisabled6eModeChangeCount
@property (retain, nonatomic) NSString *lastSmartCoverState; // ivar: _lastSmartCoverState
@property (retain, nonatomic) NSDate *lastSystemSleepTime; // ivar: _lastSystemSleepTime
@property (retain, nonatomic) NSDate *lastSystemWakeTime; // ivar: _lastSystemWakeTime
@property (nonatomic) NSInteger lastThermalIndex; // ivar: _lastThermalIndex
@property (retain, nonatomic) NSDate *lastUnexpectedLinkDownTime; // ivar: _lastUnexpectedLinkDownTime
@property (nonatomic) BOOL linkRecoveryDisabled; // ivar: _linkRecoveryDisabled
@property (nonatomic) NSUInteger linkStateChangedCount; // ivar: _linkStateChangedCount
@property (nonatomic) NSUInteger lockStateChangedCount; // ivar: _lockStateChangedCount
@property (nonatomic) NSUInteger lowPowerStateChangedCount; // ivar: _lowPowerStateChangedCount
@property (retain, nonatomic) NSDate *lowPowerStateEntryTime; // ivar: _lowPowerStateEntryTime
@property (nonatomic) NSUInteger lpasStateChangedCount; // ivar: _lpasStateChangedCount
@property (retain, nonatomic) NSDate *lpasStateEntryTime; // ivar: _lpasStateEntryTime
@property (retain, nonatomic) WiFiUsageSessionLQM *lqm; // ivar: _lqm
@property (nonatomic) NSUInteger maxCandidatesCount; // ivar: _maxCandidatesCount
@property (nonatomic) CGFloat mediaPlaybackDuration; // ivar: _mediaPlaybackDuration
@property (nonatomic) NSUInteger mediaPlaybackEventCount; // ivar: _mediaPlaybackEventCount
@property (retain, nonatomic) NSDate *mediaStartedTime; // ivar: _mediaStartedTime
@property (nonatomic) NSUInteger minCandidatesCount; // ivar: _minCandidatesCount
@property (nonatomic) NSUInteger neighborBssCount; // ivar: _neighborBssCount
@property (nonatomic) NSUInteger netInterfaceRxBytes; // ivar: _netInterfaceRxBytes
@property (nonatomic) NSUInteger netInterfaceTxBytes; // ivar: _netInterfaceTxBytes
@property (nonatomic) NSUInteger network6eDisabledModeChangeCount; // ivar: _network6eDisabledModeChangeCount
@property (nonatomic) NSUInteger networkChangedCount; // ivar: _networkChangedCount
@property (retain, nonatomic) WiFiUsageNetworkDetails *networkDetails; // ivar: _networkDetails
@property (retain, nonatomic) WiFiUsageNetworkDetails *networkDetailsAtEnd; // ivar: _networkDetailsAtEnd
@property (retain, nonatomic) NSString *networkDisable6eModeAtStart; // ivar: _networkDisable6eModeAtStart
@property (nonatomic) NSUInteger otherBssCount; // ivar: _otherBssCount
@property (nonatomic) CGFloat powerBudget10Duration; // ivar: _powerBudget10Duration
@property (nonatomic) CGFloat powerBudget20Duration; // ivar: _powerBudget20Duration
@property (nonatomic) CGFloat powerBudget30Duration; // ivar: _powerBudget30Duration
@property (nonatomic) CGFloat powerBudget40Duration; // ivar: _powerBudget40Duration
@property (nonatomic) CGFloat powerBudget50Duration; // ivar: _powerBudget50Duration
@property (nonatomic) CGFloat powerBudget60Duration; // ivar: _powerBudget60Duration
@property (nonatomic) CGFloat powerBudget70Duration; // ivar: _powerBudget70Duration
@property (nonatomic) CGFloat powerBudget80Duration; // ivar: _powerBudget80Duration
@property (nonatomic) CGFloat powerBudget90Duration; // ivar: _powerBudget90Duration
@property (nonatomic) CGFloat powerBudgetMaxDuration; // ivar: _powerBudgetMaxDuration
@property (nonatomic) CGFloat powerBudgetMinDuration; // ivar: _powerBudgetMinDuration
@property (nonatomic) NSUInteger powerStateChangedCount; // ivar: _powerStateChangedCount
@property (nonatomic) NSUInteger powerToggleEventCount; // ivar: _powerToggleEventCount
@property (nonatomic) BOOL poweredOn; // ivar: _poweredOn
@property (nonatomic) CGFloat poweredOnDuration; // ivar: _poweredOnDuration
@property (nonatomic) NSUInteger prevJoinReason; // ivar: _prevJoinReason
@property (retain, nonatomic) NSMutableArray *prevNetworkNames; // ivar: _prevNetworkNames
@property (nonatomic) NSInteger previousDisconnectReason; // ivar: _previousDisconnectReason
@property (nonatomic) NSUInteger primaryInterfaceStateChangeCount; // ivar: _primaryInterfaceStateChangeCount
@property (nonatomic) BOOL privacyRestrictionDisabled; // ivar: _privacyRestrictionDisabled
@property (retain, nonatomic) NSDate *processInitTime; // ivar: _processInitTime
@property (nonatomic) NSUInteger rangingEventCount; // ivar: _rangingEventCount
@property (nonatomic) NSUInteger rapidLinkTransitionCount; // ivar: _rapidLinkTransitionCount
@property (nonatomic) NSNumber *responsivenessScore; // ivar: _responsivenessScore
@property (retain, nonatomic) NSMutableDictionary *roamCandidatesPerBandWhenSuccessful; // ivar: _roamCandidatesPerBandWhenSuccessful
@property (retain, nonatomic) NSMutableDictionary *roamCandidatesPerBandWhenUnSuccessful; // ivar: _roamCandidatesPerBandWhenUnSuccessful
@property (nonatomic) NSUInteger roamIsWNMScoreUsedCount; // ivar: _roamIsWNMScoreUsedCount
@property (retain, nonatomic) NSMutableDictionary *roamNeighborsByBand; // ivar: _roamNeighborsByBand
@property (nonatomic) ? roamNeighsLrgstCurrentToBestRssiByBandTransition; // ivar: _roamNeighsLrgstCurrentToBestRssiByBandTransition
@property (nonatomic) ? roamNeighsLrgstCurrentToNextBestRssiByBandTransition; // ivar: _roamNeighsLrgstCurrentToNextBestRssiByBandTransition
@property (nonatomic) ? roamNeighsSmllstCurrentToBestRssiByBandTransition; // ivar: _roamNeighsSmllstCurrentToBestRssiByBandTransition
@property (nonatomic) ? roamNeighsSmllstCurrentToNextBestRssiByBandTransition; // ivar: _roamNeighsSmllstCurrentToNextBestRssiByBandTransition
@property (nonatomic) NSUInteger roamPingPongAboveThresholdCount; // ivar: _roamPingPongAboveThresholdCount
@property (nonatomic) NSUInteger roamPingPongAboveThresholdCountLowRssiOnly; // ivar: _roamPingPongAboveThresholdCountLowRssiOnly
@property (nonatomic) NSUInteger roamPingPongLowRssiAndReassocOnly; // ivar: _roamPingPongLowRssiAndReassocOnly
@property (nonatomic) NSUInteger roamPingPongReassocOnly; // ivar: _roamPingPongReassocOnly
@property (nonatomic) NSUInteger roamReasonBeaconLostCount; // ivar: _roamReasonBeaconLostCount
@property (nonatomic) NSUInteger roamReasonBetterCandidateCount; // ivar: _roamReasonBetterCandidateCount
@property (nonatomic) NSUInteger roamReasonBetterConditionCount; // ivar: _roamReasonBetterConditionCount
@property (nonatomic) NSUInteger roamReasonDeauthDisassocCount; // ivar: _roamReasonDeauthDisassocCount
@property (nonatomic) NSUInteger roamReasonHostTriggeredCount; // ivar: _roamReasonHostTriggeredCount
@property (nonatomic) NSUInteger roamReasonInitialAssociationCount; // ivar: _roamReasonInitialAssociationCount
@property (nonatomic) NSUInteger roamReasonLowRssiCount; // ivar: _roamReasonLowRssiCount
@property (nonatomic) NSUInteger roamReasonMiscCount; // ivar: _roamReasonMiscCount
@property (nonatomic) NSUInteger roamReasonReassocRequestedCount; // ivar: _roamReasonReassocRequestedCount
@property (nonatomic) NSUInteger roamReasonSteeredByApCount; // ivar: _roamReasonSteeredByApCount
@property (nonatomic) NSUInteger roamReasonSteeredByBtmCount; // ivar: _roamReasonSteeredByBtmCount
@property (nonatomic) NSUInteger roamReasonSteeredByCsaCount; // ivar: _roamReasonSteeredByCsaCount
@property (nonatomic) NSUInteger roamStatusFailedCount; // ivar: _roamStatusFailedCount
@property (nonatomic) NSUInteger roamStatusFailedNoScan; // ivar: _roamStatusFailedNoScan
@property (nonatomic) NSUInteger roamStatusNoCandidateCount; // ivar: _roamStatusNoCandidateCount
@property (nonatomic) NSUInteger roamStatusNoQualifiedCandidateCount; // ivar: _roamStatusNoQualifiedCandidateCount
@property (nonatomic) NSUInteger roamStatusSucceededCount; // ivar: _roamStatusSucceededCount
@property (retain, nonatomic) NSDate *roamingActiveTime; // ivar: _roamingActiveTime
@property (nonatomic) NSUInteger roamsAfterSupprLifted; // ivar: _roamsAfterSupprLifted
@property (nonatomic) NSInteger rssiAtSessionStart; // ivar: _rssiAtSessionStart
@property (nonatomic) BOOL savedInCoexRealTimeAtLastJoin; // ivar: _savedInCoexRealTimeAtLastJoin
@property (nonatomic) NSUInteger savedJoinStateChangedCount; // ivar: _savedJoinStateChangedCount
@property (nonatomic) NSInteger savedLastDisconnectReason; // ivar: _savedLastDisconnectReason
@property (nonatomic) NSInteger savedLastDisconnectSubreason; // ivar: _savedLastDisconnectSubreason
@property (nonatomic) NSInteger savedLastJoinFailure; // ivar: _savedLastJoinFailure
@property (nonatomic) NSUInteger savedLastJoinReason; // ivar: _savedLastJoinReason
@property (retain, nonatomic) NSDate *savedLastJoinTime; // ivar: _savedLastJoinTime
@property (nonatomic) NSUInteger savedPrevJoinReason; // ivar: _savedPrevJoinReason
@property (nonatomic) NSInteger savedPreviousDisconnectReason; // ivar: _savedPreviousDisconnectReason
@property (nonatomic) CGFloat savedTimeSincePrevJoin; // ivar: _savedTimeSincePrevJoin
@property (retain, nonatomic) NSDate *scanningActiveTime; // ivar: _scanningActiveTime
@property (retain, nonatomic) NSDate *scoActiveTime; // ivar: _scoActiveTime
@property (retain, nonatomic) WiFiUsageInterfaceStats *secondaryIfStatsAtStart; // ivar: _secondaryIfStatsAtStart
@property (retain, nonatomic) NSString *secondaryInterfaceName; // ivar: _secondaryInterfaceName
@property (nonatomic) NSUInteger secondaryInterfaceRxBytes; // ivar: _secondaryInterfaceRxBytes
@property (nonatomic) NSUInteger secondaryInterfaceTxBytes; // ivar: _secondaryInterfaceTxBytes
@property (nonatomic) CGFloat sessionDuration; // ivar: _sessionDuration
@property (retain, nonatomic) NSDate *sessionEndTime; // ivar: _sessionEndTime
@property (retain, nonatomic) NSDate *sessionInitTime; // ivar: _sessionInitTime
@property (nonatomic) NSUInteger sessionPid; // ivar: _sessionPid
@property (retain, nonatomic) NSDate *sessionStartTime; // ivar: _sessionStartTime
@property (nonatomic) CGFloat sessionTimeSinceLastSession; // ivar: _sessionTimeSinceLastSession
@property (nonatomic) CGFloat sleepPowerStatsAssociatedDuration; // ivar: _sleepPowerStatsAssociatedDuration
@property (nonatomic) CGFloat sleepPowerStatsRoamingDuration; // ivar: _sleepPowerStatsRoamingDuration
@property (nonatomic) CGFloat sleepPowerStatsTotalDuration; // ivar: _sleepPowerStatsTotalDuration
@property (nonatomic) CGFloat sleepPowerStatsUnassociatedDuration; // ivar: _sleepPowerStatsUnassociatedDuration
@property (nonatomic) NSUInteger smartCoverStateChangedCount; // ivar: _smartCoverStateChangedCount
@property (retain, nonatomic) NSDate *softApActiveTime; // ivar: _softApActiveTime
@property (nonatomic) ? strongestRSSIByBand; // ivar: _strongestRSSIByBand
@property (nonatomic) ? strongestRSSICountByBand; // ivar: _strongestRSSICountByBand
@property (nonatomic) CGFloat systemAwakeDuration; // ivar: _systemAwakeDuration
@property (nonatomic) NSUInteger systemWakeStateChangedCount; // ivar: _systemWakeStateChangedCount
@property (nonatomic) NSUInteger systemWokenByWiFiCount; // ivar: _systemWokenByWiFiCount
@property (nonatomic) NSUInteger tdAfterJoinAfterTDCount; // ivar: _tdAfterJoinAfterTDCount
@property (nonatomic) NSUInteger tdEvalStartedByActiveProbingCount; // ivar: _tdEvalStartedByActiveProbingCount
@property (nonatomic) NSUInteger tdEvalStartedByBadRSSICount; // ivar: _tdEvalStartedByBadRSSICount
@property (nonatomic) NSUInteger tdEvalStartedByCheckReassocCount; // ivar: _tdEvalStartedByCheckReassocCount
@property (nonatomic) NSUInteger tdEvalStartedByFGNetwAppChangeCount; // ivar: _tdEvalStartedByFGNetwAppChangeCount
@property (nonatomic) NSUInteger tdEvalStartedBySymptomsARPFailureCount; // ivar: _tdEvalStartedBySymptomsARPFailureCount
@property (nonatomic) NSUInteger tdEvalStartedBySymptomsDNSFailCount; // ivar: _tdEvalStartedBySymptomsDNSFailCount
@property (nonatomic) NSUInteger tdEvalStartedBySymptomsDNSStallCount; // ivar: _tdEvalStartedBySymptomsDNSStallCount
@property (nonatomic) NSUInteger tdEvalStartedBySymptomsDataStallCount; // ivar: _tdEvalStartedBySymptomsDataStallCount
@property (nonatomic) NSUInteger tdEvalStartedBySymptomsRTTFailCount; // ivar: _tdEvalStartedBySymptomsRTTFailCount
@property (nonatomic) NSUInteger tdEvalStartedBySymptomsShortFlowCount; // ivar: _tdEvalStartedBySymptomsShortFlowCount
@property (nonatomic) NSUInteger tdEvalStartedByUserNotificationCount; // ivar: _tdEvalStartedByUserNotificationCount
@property (nonatomic) NSUInteger tdEvalStartedCount; // ivar: _tdEvalStartedCount
@property (nonatomic) NSUInteger tdSessionStartedByBadRSSICount; // ivar: _tdSessionStartedByBadRSSICount
@property (nonatomic) NSUInteger tdSessionStartedBySymptomDNSFailureCount; // ivar: _tdSessionStartedBySymptomDNSFailureCount
@property (nonatomic) NSUInteger tdSessionStartedByTDRecommendedCount; // ivar: _tdSessionStartedByTDRecommendedCount
@property (nonatomic) CGFloat thermalIndex10Duration; // ivar: _thermalIndex10Duration
@property (nonatomic) CGFloat thermalIndex20Duration; // ivar: _thermalIndex20Duration
@property (nonatomic) CGFloat thermalIndex30Duration; // ivar: _thermalIndex30Duration
@property (nonatomic) CGFloat thermalIndex40Duration; // ivar: _thermalIndex40Duration
@property (nonatomic) CGFloat thermalIndex50Duration; // ivar: _thermalIndex50Duration
@property (nonatomic) CGFloat thermalIndex60Duration; // ivar: _thermalIndex60Duration
@property (nonatomic) CGFloat thermalIndex70Duration; // ivar: _thermalIndex70Duration
@property (nonatomic) CGFloat thermalIndex80Duration; // ivar: _thermalIndex80Duration
@property (nonatomic) CGFloat thermalIndex90Duration; // ivar: _thermalIndex90Duration
@property (nonatomic) CGFloat thermalIndexMaxDuration; // ivar: _thermalIndexMaxDuration
@property (nonatomic) CGFloat thermalIndexMinDuration; // ivar: _thermalIndexMinDuration
@property (nonatomic) CGFloat timeSincePrevJoin; // ivar: _timeSincePrevJoin
@property (nonatomic) NSUInteger triggerDisconnectAlertedCount; // ivar: _triggerDisconnectAlertedCount
@property (nonatomic) NSUInteger triggerDisconnectConfirmedCount; // ivar: _triggerDisconnectConfirmedCount
@property (nonatomic) NSUInteger triggerDisconnectExecutedCount; // ivar: _triggerDisconnectExecutedCount
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) NSUInteger wowStateChangedCount; // ivar: _wowStateChangedCount
@property (retain, nonatomic) NSDate *wowStateEntryTime; // ivar: _wowStateEntryTime
@property BOOL xctest; // ivar: _xctest


+(id)disconnectReasonString:(NSUInteger)arg0 ;
+(id)joinReasonString:(NSUInteger)arg0 ;
-(BOOL)canSubmitToCA;
-(BOOL)expectsLQMUpdates;
-(BOOL)incrementCountWithPrefix:(id)arg0 name:(id)arg1 ;
-(BOOL)infraIsPartOfSplitSSID;
-(BOOL)useSavedJoinStats;
-(NSInteger)averageCca;
-(NSInteger)averageRssi;
-(NSInteger)averageSnr;
-(NSInteger)lastRssi;
-(NSUInteger)faultReasonCount:(NSUInteger)arg0 ;
-(NSUInteger)totalRxFrames;
-(NSUInteger)totalTxFrames;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)describeCAConfig;
-(id)description;
-(id)eventDictionary:(BOOL)arg0 ;
-(id)eventDictionaryByBand:(int)arg0 isFirst:(BOOL)arg1 ;
-(id)initWithSessionType:(NSUInteger)arg0 andInterfaceName:(id)arg1 ;
-(id)lastBssSessionInfo;
-(id)metricName;
-(id)redactedDescription;
-(id)sessionByBand:(int)arg0 isFirst:(BOOL)arg1 ;
-(id)sessionName;
-(id)sessionSummary:(BOOL)arg0 ;
-(void)applicationStateDidChange:(id)arg0 withAttributes:(id)arg1 ;
-(void)awdlStateDidChange:(BOOL)arg0 inMode:(NSInteger)arg1 ;
-(void)bluetoothStateDidChange:(BOOL)arg0 connectedDeviceCount:(NSUInteger)arg1 inA2dp:(BOOL)arg2 inSco:(BOOL)arg3 ;
-(void)callStateDidChange:(BOOL)arg0 ;
-(void)cellularFallbackStateDidChange:(BOOL)arg0 ;
-(void)cellularOutrankingStateDidChange:(BOOL)arg0 ;
-(void)chargingStateDidChange:(BOOL)arg0 ;
-(void)companionStateDidChange:(BOOL)arg0 ;
-(void)controlCenterStateDidChange:(BOOL)arg0 withKnownLocation:(BOOL)arg1 ;
-(void)displayStateDidChange:(BOOL)arg0 ;
-(void)enableXCTestNotifications;
-(void)faultEventDetected:(NSUInteger)arg0 ;
-(void)interfaceRankingDidChange:(BOOL)arg0 ;
-(void)ipConfigurationDidChangeWithMethod:(BOOL)arg0 dhcpLeaseDuration:(CGFloat)arg1 hasRoutableIpV4:(BOOL)arg2 hasRoutableIpV6:(BOOL)arg3 ;
-(void)joinStateDidChange:(id)arg0 withReason:(NSUInteger)arg1 lastDisconnectReason:(NSInteger)arg2 lastJoinFailure:(NSInteger)arg3 andNetworkDetails:(id)arg4 ;
-(void)linkQualityDidChange:(id)arg0 ;
-(void)linkStateDidChange:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 ;
-(void)lockStateDidChange:(BOOL)arg0 ;
-(void)mediaStateDidChange:(BOOL)arg0 ;
-(void)motionStateDidChange:(id)arg0 ;
-(void)poorLinkSessionStats:(id)arg0 ;
-(void)powerBudgetDidChange:(NSInteger)arg0 andThermalIndex:(NSInteger)arg1 ;
-(void)powerStateDidChange:(BOOL)arg0 ;
-(void)processDHCPChanges:(id)arg0 ;
-(void)processDriverAvailability:(id)arg0 available:(NSUInteger)arg1 version:(NSUInteger)arg2 flags:(NSUInteger)arg3 eventID:(NSUInteger)arg4 reason:(NSUInteger)arg5 subReason:(NSUInteger)arg6 minorReason:(NSUInteger)arg7 reasonString:(id)arg8 ;
-(void)processIPv4Changes:(id)arg0 ;
-(void)processIPv6Changes:(id)arg0 ;
-(void)rangingCompleted;
-(void)receivedBssTransitionRequestWithCandidateListIncluded:(BOOL)arg0 isAbridged:(BOOL)arg1 disassociationImminent:(BOOL)arg2 bssTerminationIncluded:(BOOL)arg3 essDisassociationImminent:(BOOL)arg4 ;
-(void)recordCAsubmission;
-(void)roamCacheDidUpdate:(id)arg0 ;
-(void)roamCandidatesStatsDidUpdate:(struct ? )arg0 ;
-(void)roamingARConfigurationDidChange:(struct ? )arg0 ;
-(void)roamingConfigurationDidChange:(NSInteger)arg0 withChannelList:(id)arg1 ;
-(void)roamingStateDidChange:(BOOL)arg0 reason:(NSUInteger)arg1 andStatus:(NSUInteger)arg2 andLatency:(NSUInteger)arg3 andRoamData:(id)arg4 andPingPongStats:(id)arg5 ;
-(void)scanningStateDidChange:(BOOL)arg0 client:(NSUInteger)arg1 neighborBSS:(id)arg2 otherBSS:(id)arg3 ;
-(void)secondaryInterfaceNameDidChange:(id)arg0 ;
-(void)sentBssTransitionResponseWithStatus:(NSInteger)arg0 terminationDelayRequested:(BOOL)arg1 ;
-(void)sessionDidEnd;
-(void)sessionDidStart;
-(void)setRealTimeCoexStatus:(BOOL)arg0 ;
-(void)setRealtimeCoexStarted:(BOOL)arg0 type:(NSUInteger)arg1 reasons:(id)arg2 ;
-(void)setSSIDTransitionCandidates:(id)arg0 SSIDTransitionPotentialCandidates:(id)arg1 potentialCandidatesMinusCandidates:(id)arg2 roamCandidates:(NSUInteger)arg3 uniqueChannels:(NSUInteger)arg4 uniqueBands:(NSUInteger)arg5 ;
-(void)setSteeringRequest:(NSUInteger)arg0 preferredChannel:(NSUInteger)arg1 preferredBand:(int)arg2 preferredSSID:(id)arg3 targetSSIDDiffersFromCurrent:(BOOL)arg4 preferredBSS:(id)arg5 ssidIsSplit:(BOOL)arg6 transitionCandidates:(BOOL)arg7 ;
-(void)smartCoverStateDidChange:(id)arg0 ;
-(void)softApStateDidChange:(BOOL)arg0 requester:(id)arg1 status:(id)arg2 changeReason:(id)arg3 channelNumber:(NSUInteger)arg4 countryCode:(NSUInteger)arg5 isHidden:(BOOL)arg6 isInfraConnected:(BOOL)arg7 isAwdlUp:(BOOL)arg8 lowPowerModeDuration:(CGFloat)arg9 compatibilityMode:(BOOL)arg10 requestToUpLatency:(CGFloat)arg11 ;
-(void)summarizeAndReset6eModeStats:(id)arg0 ;
-(void)summarizeBandUsage;
-(void)summarizeSession;
-(void)systemWakeStateDidChange:(BOOL)arg0 wokenByWiFi:(BOOL)arg1 ;
-(void)tdLogic_alertedBy:(int)arg0 ;
-(void)tdLogic_badRssi:(NSInteger)arg0 goodRSSI:(NSInteger)arg1 ;
-(void)tdLogic_decisionState:(struct ? )arg0 ;
-(void)tdLogic_deferJoin:(CGFloat)arg0 perBSSID:(CGFloat)arg1 ;
-(void)tdLogic_end:(int)arg0 evalTime:(CGFloat)arg1 rssi:(NSInteger)arg2 ;
-(void)tdLogic_execState:(struct ? )arg0 ;
-(void)tdLogic_fastTdState:(struct ? )arg0 ;
-(void)tdLogic_waitForRoamTime:(CGFloat)arg0 ;
-(void)trackEventLatencies;
-(void)triggerDisconnectAlerted:(BOOL)arg0 confirmed:(BOOL)arg1 executed:(BOOL)arg2 ;
-(void)update6eModeStats:(id)arg0 ;
-(void)updateApProfile:(id)arg0 ;
-(void)updateAssociatedNetworkDetails:(id)arg0 ;
-(void)updateBandUsageFor:(int)arg0 With:(id)arg1 ;
-(void)updateLinkRecoveryDisabled:(BOOL)arg0 ;
-(void)updateRssiDiffStats:(struct ? )arg0 For:(id)arg1 ;
-(void)updateSleepPowerStats:(CGFloat)arg0 unassociatedDuration:(CGFloat)arg1 associatedDuration:(CGFloat)arg2 roamingDuration:(CGFloat)arg3 ;
-(void)updateWithCompatibilityMode:(unsigned char)arg0 ;
-(void)updateWithRoamingSuppression:(unsigned char)arg0 ;
-(void)updateWowState:(BOOL)arg0 lpasState:(BOOL)arg1 lowPowerState:(BOOL)arg2 batterySaverState:(BOOL)arg3 ;


@end


#endif