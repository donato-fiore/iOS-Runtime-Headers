// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETWORKANALYTICSENGINE_H
#define NETWORKANALYTICSENGINE_H

@class NSMutableDictionary, NSDate, NSString, NSMutableData, NSMutableArray, NWPathEvaluator, NSData;
@protocol WiFiShimDelegate, ProxyAnalyticsDelegate, CoreTelephonyShimDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;


#import "AnalyticsEngineCore.h"
#import "ImpoExpoService.h"
#import "NetworkAnalyticsModel.h"
#import "WiFiShim.h"
#import "SystemSettingsRelay.h"
#import "NLCRunner.h"
#import "ProxyAnalytics.h"

@interface NetworkAnalyticsEngine : AnalyticsEngineCore <WiFiShimDelegate, ProxyAnalyticsDelegate, CoreTelephonyShimDelegate>

 {
    id *trafficObserver;
    id *dnsObserver;
    id *tdObserver;
    id *dataStallObserver;
    id *captivityRedirectsObserver;
    id *certErrorObserver;
    id *limObserver;
    NSMutableDictionary *activeEpochs;
    *__NStatManager routeManager;
    id *routeMetricsRefreshCompletionBlock;
    NSMutableDictionary *liveDefaultRoutes;
    int lastScoreExit;
    BOOL xpcShutdown;
    NSDate *lastEpochRemoved;
    NSDate *lastKnownGoodNotified;
    NSDate *pendedRssiEdge;
    NSUInteger pendedRssiEdgeTarget;
    int lastReportedRrcValue;
    NSString *lastReportedRrcInterface;
    int combinedCellDNSCounts;
    int combinedWifiDNSCounts;
    NSMutableDictionary *snapshots;
    NSMutableData *journalRecords;
    NSMutableArray *memoryJournalRecords;
    ImpoExpoService *ieService;
    NSDate *journalLastFlushed;
    NWPathEvaluator *cellPathEvaluator;
    NWPathEvaluator *wifiPathEvaluator;
    NWPathEvaluator *etherPathEvaluator;
    NWPathEvaluator *companionPathEvaluator;
    NWPathEvaluator *primaryPathEvaluator;
    *__CTServerConnection serverConnection;
    int cellInternetStatus;
    NSString *cellInternetPDPContext;
    NSObject<OS_dispatch_queue> *notificationQueueWithElevatedPriority;
    NSUInteger cellSPIType;
    NetworkAnalyticsModel *model;
    WiFiShim *_wifiShim;
    SystemSettingsRelay *systemSettingsRelay;
    BOOL _wifiShimFastLQMUpdates;
    BOOL _isABCEnabled;
    BOOL _isInternalBuild;
    NSData *_hashSalt;
    NSUInteger _wifiSingleDNSFailureCount;
    NSUInteger _wifiCompleteDNSFailureCount;
    NSUInteger _cellSingleDNSFailureCount;
    NSUInteger _cellCompleteDNSFailureCount;
    id *_rnfWiFiObserver;
    NSObject<OS_dispatch_source> *rnfTestTimeoutTimer;
    NLCRunner *rnfTestNLCRunner;
    BOOL nlcRuleScheduled;
    NSUInteger rnfRssiExtraDescentFactor;
    NSString *_currentICCID;
}


@property (retain, nonatomic) NSObject<OS_os_transaction> *activeEpochTransaction; // ivar: _activeEpochTransaction
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delegateToProxyAnalytics; // ivar: _delegateToProxyAnalytics
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ProxyAnalytics *proxyAnalytics; // ivar: _proxyAnalytics
@property (nonatomic) BOOL removeOldRecordsNow; // ivar: _removeOldRecordsNow
@property (readonly) Class superclass;


+(BOOL)getDNSCountsOn:(unsigned char)arg0 total:(*NSInteger)arg1 impacted:(*NSInteger)arg2 ;
+(BOOL)hasAnyNetworkAttachmenOnLOI:(NSInteger)arg0 ;
+(BOOL)performNetAttachmentQueryOn:(unsigned char)arg0 reply:(id)arg1 ;
+(BOOL)trainModelAndScore:(BOOL)arg0 lastScoreDate:(id)arg1 output:(*id)arg2 ;
+(NSInteger)mapLinkQuality:(int)arg0 ;
+(NSInteger)mapPowerCost:(unsigned char)arg0 ;
+(NSInteger)mapRadioTechnology:(unsigned char)arg0 ;
+(id)concurrentEpochs;
+(id)fetchHashSaltFromJournalUsingImpoExpoService:(id)arg0 ;
+(id)getStateRelayFor:(unsigned char)arg0 ;
+(id)hashPrimaryKey:(id)arg0 ;
+(id)hashPrimaryKey:(id)arg0 withSalt:(id)arg1 ;
+(id)mapNrFrequencyBandToString:(char)arg0 ;
+(id)mapRadioTechnologyTypeToString:(unsigned char)arg0 ;
+(id)queue;
+(id)sharedInstance;
+(id)skimMemoryJournalFor:(unsigned char)arg0 ;
+(int)getLoadedLQMOn:(unsigned char)arg0 ;
+(unsigned int)_constructRxSignalExemptionsBitmapFromHint:(BOOL)arg0 reasons:(id)arg1 ;
+(void)awdCaptureIn:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
+(void)estimatedTransferTimeOn:(unsigned char)arg0 forPayloadInfo:(id)arg1 queue:(id)arg2 reply:(id)arg3 ;
+(void)getAuditableLoadedLQMOn:(unsigned char)arg0 queue:(id)arg1 reply:(id)arg2 ;
+(void)hasNetworkAttachmentOn:(unsigned char)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 hasCustomSignature:(id)arg4 queue:(id)arg5 reply:(id)arg6 ;
+(void)layer2MetricsOn:(unsigned char)arg0 queue:(id)arg1 reply:(id)arg2 ;
+(void)performPersistentStoreHealthCheckWithReply:(id)arg0 ;
+(void)refreshLOIForInterfaceType:(unsigned char)arg0 ;
+(void)relayAudioVideoStatus:(unsigned int)arg0 rxThroughput:(CGFloat)arg1 txThroughput:(CGFloat)arg2 reset:(BOOL)arg3 ;
+(void)relayCellThroughputAdvice:(unsigned int)arg0 ;
+(void)relayDataStallState:(unsigned int)arg0 dnsFailureState:(unsigned int)arg1 ;
+(void)relayRebufferState:(unsigned int)arg0 ;
+(void)relayWiFiViability:(unsigned int)arg0 ;
+(void)sendTrafficInfoFlags:(unsigned int)arg0 changeFlags:(unsigned int)arg1 foreground:(BOOL)arg2 ;
+(void)setupCoreTelephonyAndBasebandNotificationsOnElevatedPriorityQueue;
+(void)updateLOI:(NSInteger)arg0 forInterfaceType:(unsigned char)arg1 ;
+(void)usageToLOICorrelationFor:(unsigned char)arg0 scopedToLOI:(NSInteger)arg1 queue:(id)arg2 reply:(id)arg3 ;
-(BOOL)_appendJournalRecord:(id)arg0 withPreamble:(struct ? *)arg1 ;
-(BOOL)_determineIfThisIsWiFiFirstAttachment:(id)arg0 ;
-(BOOL)_flushAllJournalRecords;
-(BOOL)_getDNSCountsOn:(unsigned char)arg0 total:(*NSInteger)arg1 impacted:(*NSInteger)arg2 ;
-(BOOL)_hashPrimaryKeyInPlace:(char *)arg0 withSalt:(id)arg1 ;
-(BOOL)_isKnowableSporadicForType:(unsigned char)arg0 ;
-(BOOL)_newCellTransferTimeEstimateRequired;
-(BOOL)_performNetAttachmentQueryOn:(unsigned char)arg0 reply:(id)arg1 ;
-(BOOL)_populateInterfaceTimelineJournalRecord:(struct ? *)arg0 forInterface:(NSInteger)arg1 fromDict:(id)arg2 ;
-(BOOL)_populateLIMJournalRecord:(struct ? *)arg0 fromKernelDict:(id)arg1 ;
-(BOOL)_populateLQMJournalRecord:(struct ? *)arg0 fromCellFingerprint:(BOOL)arg1 key:(char *)arg2 atLOI:(NSInteger)arg3 ofInterfaceType:(NSInteger)arg4 lqm:(int)arg5 isFaulty:(unsigned int)arg6 ;
-(BOOL)_primaryKeyChange:(id)arg0 interfaceName:(id)arg1 interfaceType:(unsigned char)arg2 roamingEvent:(BOOL)arg3 ;
-(BOOL)_radioTechnologyTypeIsNonLTECellular:(unsigned char)arg0 ;
-(BOOL)_recordOfActiveFatalSuspector:(NSInteger)arg0 ;
-(BOOL)_shouldAcceptRouteSource:(struct __NStatSource *)arg0 ;
-(BOOL)getCellEstTransferTimeSupportedStatus;
-(BOOL)handlesEntity:(id)arg0 ;
-(BOOL)processIsAuthorizedForHistoricalSweeps:(id)arg0 ;
-(NSInteger)_processCTCellInfo:(id)arg0 ;
-(NSInteger)_retrieveCellId;
-(char)getCellLqmState;
-(id)_adviceToNSString:(int)arg0 ;
-(id)_concurrentEpochs;
-(id)_createNetworkAttachmentIdentifierExclusionList;
-(id)_determineSporadicForType:(int)arg0 withRetCode:(*int)arg1 ;
-(id)_epochForInterfaceType:(unsigned char)arg0 ;
-(id)_getCellInternetPDPContext;
-(id)_hashPrimaryKey:(id)arg0 ;
-(id)_hashPrimaryKey:(id)arg0 withSalt:(id)arg1 ;
-(id)_model;
-(id)_naIdentifierToMajor:(id)arg0 ;
-(id)_retrieveCellCarrierName;
-(id)_scoringDuty:(id)arg0 forType:(int)arg1 withRetCode:(*int)arg2 oldestTime:(*id)arg3 ;
-(id)_skimMemoryJournalFor:(unsigned char)arg0 ;
-(id)_tcsInfoDescription;
-(id)getCurrCellFpTimeStamp;
-(id)getOption:(id)arg0 ;
-(id)getPrevCellFpTimeStamp;
-(id)initWithWorkspace:(id)arg0 params:(id)arg1 queue:(id)arg2 ;
-(id)lastScoreDate;
-(id)lastScoreExits;
-(id)setOption:(id)arg0 ;
-(id)timeOfDayPrecise;
-(id)wifiShim;
-(int)_combinedDNSCountForEpoch:(id)arg0 ;
-(int)_generateAdviceForEpoch:(id)arg0 relativeTo:(id)arg1 ;
-(int)_getCellInternetStatus;
-(int)performQueryOnEntityFromCache:(id)arg0 pred:(id)arg1 altpred:(*id)arg2 actions:(id)arg3 found:(*id)arg4 ;
-(struct __NStatSource *)_newDefRouteForInterface:(id)arg0 saFamily:(unsigned char)arg1 ;
-(unsigned char)getCellInterfaceState;
-(unsigned char)getCellRrcState;
-(unsigned char)getCellTrafficClassState;
-(unsigned int)_getCellSPIType;
-(void)_actUponCellRrcChangeTo:(int)arg0 ;
-(void)_actUponLoadedLqmChangeFrom:(int)arg0 to:(int)arg1 onInterfaceType:(unsigned char)arg2 ;
-(void)_applyCalculatedScoringMetrics:(id)arg0 entries:(id)arg1 ;
-(void)_armDOASuspector:(id)arg0 ;
-(void)_armFatalSuspector:(id)arg0 isActive:(BOOL)arg1 ;
-(void)_armLowQDisconnectSuspector:(id)arg0 ;
-(void)_awaitEstimatedDataTransferTimeWithCallbackOnQueue:(id)arg0 completionBlock:(id)arg1 ;
-(void)_awdCaptureHistorical:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
-(void)_awdCaptureIn:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
-(void)_awdCaptureInstant:(id)arg0 replyQueue:(id)arg1 reply:(id)arg2 ;
-(void)_captivityRedirects:(id)arg0 ;
-(void)_cellNetworkChangeForInterface:(id)arg0 roamingEvent:(BOOL)arg1 ;
-(void)_cellNetworkChangeForInterface:(id)arg0 roamingEvent:(BOOL)arg1 subscription:(id)arg2 ;
-(void)_certError:(id)arg0 ;
-(void)_computeAndApplyLoadedLqmFrom:(int)arg0 oldLqm:(int)arg1 onInterfaceType:(unsigned char)arg2 ;
-(void)_computeAndApplyLoadedLqmFrom:(int)arg0 oldLqm:(int)arg1 onInterfaceType:(unsigned char)arg2 loadedLqmAuditRecords:(id)arg3 ;
-(void)_createJournalRecordOfType:(unsigned char)arg0 forInterface:(NSInteger)arg1 fromDict:(id)arg2 ;
-(void)_dataStall:(id)arg0 ;
-(void)_delayedKnownGoodNetworkAlert;
-(void)_disarmDOASuspector:(id)arg0 ;
-(void)_disarmFatalSuspector:(id)arg0 withEventAt:(id)arg1 by:(id)arg2 ;
-(void)_disarmLowQDisconnectSuspector:(id)arg0 ;
-(void)_dnsWithSymptoms:(id)arg0 ;
-(void)_dumpStats;
-(void)_establishLqmBaselineOn:(BOOL)arg0 interfaceName:(id)arg1 lqmPtr:(*int)arg2 ;
-(void)_estimatedTransferTimeOn:(unsigned char)arg0 forPayloadInfo:(id)arg1 queue:(id)arg2 reply:(id)arg3 ;
-(void)_extractCellLinkFingerprintFrom:(struct __CFData *)arg0 ;
-(void)_fetchHashSaltFromJournal;
-(void)_flowCompleted:(id)arg0 ;
-(void)_getAuditableLoadedLQMOn:(unsigned char)arg0 queue:(id)arg1 reply:(id)arg2 ;
-(void)_handleRouteClosing:(struct __NStatSource *)arg0 ;
-(void)_handleRouteData:(struct __NStatSource *)arg0 ;
-(void)_hasNetworkAttachmentOn:(unsigned char)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 hasCustomSignature:(id)arg4 queue:(id)arg5 reply:(id)arg6 ;
-(void)_idleExitTransactionCheck;
-(void)_informKernelOfCellRrc:(int)arg0 forInterface:(id)arg1 ;
-(void)_informKernelOfLIMUplink:(BOOL)arg0 downlink:(BOOL)arg1 forInterface:(char *)arg2 ;
-(void)_insertEpoch:(id)arg0 forInterfaceType:(unsigned char)arg1 ;
-(void)_layer2MetricsOn:(unsigned char)arg0 queue:(id)arg1 reply:(id)arg2 ;
-(void)_observeNetworkFramework;
-(void)_performPeriodicTasks:(BOOL)arg0 ;
-(void)_processLIM:(id)arg0 ;
-(void)_processNWActivityMetrics;
-(void)_recoverFromSystemCriticalErrors;
-(void)_refreshLOIForInterfaceType:(unsigned char)arg0 ;
-(void)_refreshRouteMetrics;
-(void)_refreshRouteMetricsComplete;
-(void)_refreshRouteMetricsWithCallbackOnQueue:(id)arg0 completionBlock:(id)arg1 ;
-(void)_registerForCellChangedNotification:(id)arg0 ;
-(void)_registerForEnhancedLinkQualityNotifications;
-(void)_registerForLinkQualityNotifications:(id)arg0 ;
-(void)_registerForSIMStatusChangeNotification:(id)arg0 ;
-(void)_relayAudioVideoStatus:(unsigned int)arg0 rxThroughput:(CGFloat)arg1 txThroughput:(CGFloat)arg2 reset:(BOOL)arg3 ;
-(void)_relayCellThroughputAdvice:(unsigned int)arg0 ;
-(void)_relayDataStallState:(unsigned int)arg0 dnsFailureState:(unsigned int)arg1 ;
-(void)_relayRebufferState:(unsigned int)arg0 ;
-(void)_relayWiFiViability:(unsigned int)arg0 ;
-(void)_removeEpochForInterfaceType:(unsigned char)arg0 ;
-(void)_removeOldRouteRecords;
-(void)_retrieveCellId:(id)arg0 ;
-(void)_retrieveDNSServersForEpoch:(id)arg0 ;
-(void)_retrieveICCID;
-(void)_scoringTrampoline;
-(void)_sendTrafficClassAndExtendedReportToBaseband;
-(void)_sendTrafficInfoFlags:(unsigned int)arg0 changeFlags:(unsigned int)arg1 foreground:(BOOL)arg2 ;
-(void)_setDefrouteMonitoring:(unsigned int)arg0 ofInterfaceType:(unsigned char)arg1 roamingEvent:(BOOL)arg2 family:(unsigned char)arg3 retries:(int)arg4 ;
-(void)_setLastScoreDate:(id)arg0 ;
-(void)_setRadioTechnology:(unsigned char)arg0 forInterfaceType:(unsigned char)arg1 ;
-(void)_setScalarValueInNetworkAttachments:(id)arg0 targetKeyPath:(id)arg1 basedOn:(id)arg2 matchingKeyPath:(id)arg3 matchValue:(id)arg4 noMatchValue:(id)arg5 ;
-(void)_setupCoreTelephonyAndBasebandNotificationsOnElevatedPriorityQueue;
-(void)_trackRealTimeLqmLastUpdatedOnInterfaceType:(unsigned char)arg0 ;
-(void)_trainModelAndScore:(BOOL)arg0 ;
-(void)_triggerDisconnectEdge:(id)arg0 ;
-(void)_updateAdviceForEpoch:(id)arg0 ;
-(void)_updateAdviceForInterfaceType:(unsigned char)arg0 ;
-(void)_updateCellInternetStatus:(int)arg0 pdpContext:(int)arg1 ;
-(void)_updateCombinedDNSCounts;
-(void)_updateICCID:(id)arg0 ;
-(void)_usageToLOICorrelationFor:(unsigned char)arg0 scopedToLOI:(NSInteger)arg1 queue:(id)arg2 reply:(id)arg3 ;
-(void)_wifiKnownNetworksDeleted:(id)arg0 ;
-(void)_wifiNetworkChange:(id)arg0 ;
-(void)abortRNFTestWithReply:(id)arg0 ;
-(void)cellInfoChangedForSubscription:(id)arg0 ;
-(void)cellularDualSimStatusChangedTo:(NSInteger)arg0 ;
-(void)clientTransactionsRelease;
-(void)countryCodeChangedForSubscription:(id)arg0 ;
-(void)createSnapshotFor:(id)arg0 pred:(id)arg1 actions:(id)arg2 reply:(id)arg3 ;
-(void)ctDataStatusChangedForSubscription:(id)arg0 ;
-(void)ctServerConnectionNotification:(struct __CFString *)arg0 notificationInfo:(struct __CFDictionary *)arg1 ;
-(void)currentDataSIMIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)handleLQMChange;
-(void)handleRRCChange;
-(void)infoDataStallChangedForSubscription:(id)arg0 ;
-(void)infoDataTransferTimeChangedForSubscription:(id)arg0 ;
-(void)infoDataTransferTimeEnabledChangedForSubscription:(id)arg0 ;
-(void)infoHighThroughputStateChanged:(id)arg0 ;
-(void)infoLinkPowerCostChangedForSubscription:(id)arg0 ;
-(void)infoLinkQualityFingeprintChangedForSubscription:(id)arg0 ;
-(void)infoLinkStateChangedForSubscription:(id)arg0 ;
-(void)infoNRServingCellTypeChangedForSubscription:(id)arg0 ;
-(void)infoTrafficClassChangedForSubscription:(id)arg0 ;
-(void)networkCodeChangedForSubscription:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performPersistentStoreHealthCheckComplete:(id)arg0 error:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg0 fetchRequestProperties:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(id)arg7 ;
-(void)performQueryPostProcessing:(id)arg0 actions:(id)arg1 processOutcome:(id)arg2 ;
-(void)processCellDataStallNotification:(id)arg0 ;
-(void)processCellDataTransferTimeEnabledNotification:(id)arg0 ;
-(void)processCellDataTransferTimeNotification:(id)arg0 ;
-(void)processCellHighThroughputState:(id)arg0 ;
-(void)processCellLinkFingerprintNotification:(id)arg0 ;
-(void)processCellLinkPowerCostNotification:(id)arg0 ;
-(void)processCellLinkStateNotification:(id)arg0 ;
-(void)processCellNRServingCellTypeNotification:(id)arg0 ;
-(void)processCellTrafficClassNotification:(id)arg0 ;
-(void)proxyAnalyticsTrainAndScoreComplete:(id)arg0 error:(id)arg1 ;
-(void)ratSelectionChangedForSubscription:(id)arg0 ;
-(void)resetCellStatesForXCTests;
-(void)resetDataFor:(id)arg0 nameKind:(id)arg1 ;
-(void)setCellEstTransferTimeSupportedStatus:(BOOL)arg0 ;
-(void)setProhibitNetworkAgentsForNWParameters:(id)arg0 ;
-(void)shutdown;
-(void)signalStrengthChanged:(id)arg0 cellularRSRP:(id)arg1 cellularSNR:(id)arg2 ;
-(void)startRNFTestWithConnection:(id)arg0 options:(id)arg1 scenarioName:(id)arg2 reply:(id)arg3 ;
-(void)stopRunningRNFTestWithReply:(id)arg0 ;
-(void)wifiNetworkChangedForInterface:(id)arg0 roaming:(BOOL)arg1 ;
-(void)wifiShim_BSSIDChangedForInterface:(id)arg0 ;
-(void)wifiShim_HintForFallback:(BOOL)arg0 reasons:(id)arg1 ;
-(void)wifiShim_InfraAdminDisable:(id)arg0 bssid:(id)arg1 ;
-(void)wifiShim_L2NewMetrics:(id)arg0 forInterface:(id)arg1 ;
-(void)wifiShim_L2TriggerDisconnectEdge:(BOOL)arg0 forInterface:(id)arg1 ;
-(void)wifiShim_LQMAsystoleDetected:(CGFloat)arg0 ;
-(void)wifiShim_PreferredNetworksChanged:(id)arg0 ;
-(void)wifiShim_WiFiManagerHasRestarted;


@end


#endif