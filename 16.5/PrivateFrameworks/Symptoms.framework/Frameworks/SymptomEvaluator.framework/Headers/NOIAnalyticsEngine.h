// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOIANALYTICSENGINE_H
#define NOIANALYTICSENGINE_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_os_transaction;


#import "AnalyticsEngineCore.h"
#import "NetworkAnalyticsStateRelay.h"
#import "AWDSymptomsNetworkAnalyticsRRCConnectedPeriod.h"

@interface NOIAnalyticsEngine : AnalyticsEngineCore {
    NSMutableDictionary *liveClients;
    NSMutableSet *managedNOIs;
    id *_cellEpochObserver;
    id *_wifiEpochObserver;
    id *_wiredEpochObserver;
    id *_companionEpochObserver;
    id *_modelTurndownObserver;
    id *_cellStateChangeObserver;
    id *_cellStateCapabilityObserver;
    id *_cellFallbackObserver;
    id *_considerAlternateUpdateObserver;
    id *_primaryObserver;
    int notifyToken;
    BOOL xpcShutdown;
    NSMutableSet *_predictionQueryClients;
    NSUInteger _predictionQueryCount;
    NSUInteger _startConnectionTimestamp;
    NSUInteger _startBackgroundConnectionTimestamp;
    NSUInteger _lastDisconnectTimestamp;
    unsigned int _ingressLQM;
    NSUInteger _ingressUlThroughput;
    NSUInteger _ingressDlThroughput;
    NSUInteger _ingressBytesIn;
    NSUInteger _ingressBytesOut;
    NSUInteger _ingressPacketsIn;
    NSUInteger _ingressPacketsOut;
    NSUInteger _lastDisconnectedSecs;
    BOOL _ingressMetricAvailable;
    NetworkAnalyticsStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    NetworkAnalyticsStateRelay *_wiredRelay;
    NetworkAnalyticsStateRelay *_companionLinkRelay;
    AWDSymptomsNetworkAnalyticsRRCConnectedPeriod *_rrcConnectionMetric;
    NSObject<OS_os_transaction> *_noiLiveClientTransaction;
}




+(id)queue;
+(void)getQueryStatistics:(struct ? *)arg0 ;
+(void)resetQueryStatistics;
-(BOOL)_initializeAllManagedNOIs;
-(id)_clientNOIEvent:(id)arg0 forNOIs:(id)arg1 isAddEvent:(BOOL)arg2 ;
-(id)_validatedNOIs:(id)arg0 orPredicate:(id)arg1 ;
-(id)initWithWorkspace:(id)arg0 params:(id)arg1 queue:(id)arg2 ;
-(void)_bottomUpNOIEvent:(id)arg0 withInfo:(id)arg1 ;
-(void)_coreNOIMembershipChangeOn:(id)arg0 forNOIs:(id)arg1 isAddEvent:(BOOL)arg2 ;
-(void)_dumpClientStructure;
-(void)_evalPostingNotificationForNOI:(id)arg0 forEvent:(id)arg1 withInfo:(id)arg2 ;
-(void)_getQueryStatistics:(struct ? *)arg0 ;
-(void)_observeStateRelays;
-(void)_resetQueryStatistics;
-(void)_resetRRCMetricCounters;
-(void)_updateRrcStateChangeTimestamp:(NSInteger)arg0 forRrcState:(int)arg1 ;
-(void)auditableLinkQuality:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)canUseOnAlternate:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)clientEvent:(id)arg0 isAddEvent:(BOOL)arg1 ;
-(void)clientTransactionsRelease;
-(void)dealloc;
-(void)estTransferTime:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)inquireNOIFor:(id)arg0 orPredicate:(id)arg1 requestedKeys:(id)arg2 options:(id)arg3 connection:(id)arg4 reply:(id)arg5 ;
-(void)l2ThroughputMetrics:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)networkAttachmentInfo:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)subscribeToNOIsFor:(id)arg0 orPredicate:(id)arg1 options:(id)arg2 connection:(id)arg3 ;
-(void)unsubscribeToNOIs:(id)arg0 connection:(id)arg1 ;


@end


#endif