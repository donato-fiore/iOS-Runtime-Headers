// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CELLOUTRANKCONTROLLER_H
#define CELLOUTRANKCONTROLLER_H

@class NSMutableDictionary, NEPathControllerNetworkAgent, NWNetworkAgentRegistration, NEPolicySession, NSSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FlowBasedIconAdviser.h"

@interface CellOutrankController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_foregroundAppObserver;
    NSMutableDictionary *_activeApps;
    NSMutableDictionary *_activeFallbackClients;
    NEPathControllerNetworkAgent *_neAgent;
    NWNetworkAgentRegistration *_neAgentRegistration;
    NEPolicySession *_nePolicySession;
    int _nePolicyCount;
    unsigned int _nePolicyOrderSeqno;
    int _outrankEffectiveToken;
    BOOL _cellIconSettingDampening;
    NSSet *_cellIconAlwaysSetApps;
    FlowBasedIconAdviser *_flowBasedIconAdviser;
    NSString *_cellInterfaceName;
    BOOL _cellOutranksWiFi;
    BOOL _cellOutrankEffective;
    BOOL _cellOutrankIcon;
    BOOL _graceTimerRunning;
    BOOL _evictionTimerRunning;
    CGFloat _cellIconChangeTime;
    CGFloat _cellOutrankChangeTime;
    CGFloat _cellIconAccumulatedDuration;
    CGFloat _cellOutrankAccumulatedDuration;
    CGFloat _cellOutrankFGExploitDuration;
    CGFloat _cellOutrankFGNonExploitDuration;
    CGFloat _cellCurrentUsageTimerStartTime;
    unsigned int _cellOutrankIconSetEvents;
    int _numAppsExploitingOutrank;
    int _numAppsNonExploitingOutrank;
    unsigned int _currentUsage;
    CGFloat _activeAppsCacheRetainPeriod;
    CGFloat _activeAppsCacheGracePeriod;
    CGFloat _cellIconOnDebounceInterval;
    CGFloat _cellIconOffDebounceInterval;
    CGFloat _outrankFlowMonitorMinSamplePeriod;
    CGFloat _outrankFlowMonitorSamplePeriodThroughputThreshold;
}


@property (retain, nonatomic) NSString *cellInterfaceName;
@property (nonatomic) BOOL cellOutrankEffective;
@property (readonly, nonatomic) CGFloat cellOutrankFGExploitDuration;
@property (readonly, nonatomic) CGFloat cellOutrankFGNonExploitDuration;
@property (readonly, nonatomic) BOOL cellOutrankIcon;
@property (readonly, nonatomic) CGFloat cellOutrankIconSetDuration;
@property (readonly, nonatomic) unsigned int cellOutrankIconSetEvents;
@property (readonly, nonatomic) CGFloat cellOutrankPossibleDuration;
@property (nonatomic) BOOL cellOutranksWiFi;
@property (nonatomic) unsigned int currentUsage;
@property (readonly, nonatomic) int neAgentInstanceNumber; // ivar: _neAgentInstanceNumber
@property (readonly, nonatomic) int numForegroundAppsExploitingOutrank;
@property (readonly, nonatomic) int numForegroundAppsNonExploitingOutrank;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)applyPolicyDelta;
-(BOOL)removeAllPolicies;
-(BOOL)updatePolicy;
-(id)getState:(BOOL)arg0 ;
-(id)init;
-(void)_foregroundAppActivity:(id)arg0 uuid:(id)arg1 isForeground:(BOOL)arg2 ;
-(void)_updateExploitNumbers;
-(void)assertFallbackForClient:(id)arg0 process:(id)arg1 ;
-(void)assessIconState;
-(void)checkInvariants:(id)arg0 ;
-(void)cleanupNEPolicy;
-(void)deleteAllAssertionTrackers;
-(void)deleteAssertionTracker:(id)arg0 ;
-(void)didSampleFlows;
-(void)ensureMaintenanceTimer;
-(void)reportABCCase:(id)arg0 ;
-(void)restoreDefaults;
-(void)setConfiguration:(id)arg0 ;
-(void)unassertFallbackForClient:(id)arg0 ;


@end


#endif