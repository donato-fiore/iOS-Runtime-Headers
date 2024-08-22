// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETDOMAINSHANDLER_H
#define NETDOMAINSHANDLER_H

@class NSNotificationCenter, AnalyticsWorkspace, ObjectAnalytics, NSMutableSet, NSMutableDictionary, NSString;
@protocol UMUserSwitchStakeholder, ConfigurableObjectProtocol, SymptomAdditionalProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ImpoExpoService.h"
#import "SFCache.h"

@interface NetDomainsHandler : NSObject <UMUserSwitchStakeholder, ConfigurableObjectProtocol, SymptomAdditionalProtocol>

 {
    NSNotificationCenter *_notificationCenter;
    BOOL _observingSystemSettingsRelay;
    BOOL _observingConsoleUser;
    id *_engineReadyObserver;
    AnalyticsWorkspace *_workspace;
    ImpoExpoService *_ieService;
    ObjectAnalytics *trackerDomainSpace;
    NSUInteger _adminState;
    BOOL _okToTriggerAutoBugCapture;
    NSMutableSet *_previouslyAcceptedABCCases;
    BOOL _defaultSwitchState;
    BOOL _hasSomeUserEnabled;
    NSMutableDictionary *_userIDsSwitchStates;
    BOOL _defaultReconciliationSwitchState;
    BOOL _hasCurrentUserReconciliationEnabled;
    NSMutableDictionary *_userIDsReconciliationSwitchStates;
    SFCache *_bundleIdentifierCache;
    NSUInteger _symptomCombinationTypeCounts;
    NSUInteger _dnsSymptomWithDomainCount;
    BOOL _isUserSwitchStakeholder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_convertNSData:(id)arg0 toAuditToken:(struct ? *)arg1 ;
-(BOOL)_currentReconciliationSwitchStateForUser:(unsigned int)arg0 since:(*id)arg1 ;
-(BOOL)_currentSwitchStateForUser:(unsigned int)arg0 since:(*id)arg1 ;
-(BOOL)_hasSomeUserEnabled;
-(BOOL)bundleNameImplies1stOr2ndParty:(id)arg0 ;
-(BOOL)getReconciliationStateForUser:(unsigned int)arg0 ;
-(BOOL)hasCurrentUserReconciliationEnabled;
-(BOOL)noteSymptom:(id)arg0 ;
-(BOOL)triggerAutoBugCaptureCaseForType:(id)arg0 subType:(id)arg1 privateSubtypeContext:(id)arg2 detectedProcess:(id)arg3 events:(id)arg4 thresholdValuesString:(id)arg5 ;
-(id)_bundleNameFromAuditTokenData:(id)arg0 auditToken:(struct ? )arg1 orMachOUUID:(id)arg2 ;
-(id)_internalStateDictionary;
-(id)getNetworkDomainsOptions:(id)arg0 service:(id)arg1 connection:(id)arg2 ;
-(id)init;
-(id)initTestInstance;
-(id)retrievePreferencesDictionaryWithKey:(struct __CFString *)arg0 ;
-(id)setNetworkDomainsOptions:(id)arg0 service:(id)arg1 connection:(id)arg2 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_administrativeEnable;
-(void)_completeInitialization;
-(void)_firstUserEnabling;
-(void)_lastEnabledUserDisabling;
-(void)_postNotificationForResolutionBy:(unsigned int)arg0 bundleIdentifier:(id)arg1 forDomain:(id)arg2 endpoints:(id)arg3 ;
-(void)_postSwitchStateNotificationForName:(id)arg0 ;
-(void)_processEngineReadyNotification:(id)arg0 ;
-(void)_registerForUserSwitchStakeholder;
-(void)_resetSymptomCombinationBreakdown;
-(void)_resetSymptomDomainStatistics;
-(void)_sendInternalSymptomDNSResolvingEnable:(BOOL)arg0 ;
-(void)_submitAppTrackingEnabled;
-(void)_submitSymptomCombinationBreakdown;
-(void)_submitSymptomDomainStatistics;
-(void)_unregisterForUserSwitchStakeholder:(id)arg0 ;
-(void)checkForAutoBugCaptureWorthyCase:(id)arg0 domainName:(id)arg1 initiatedType:(unsigned int)arg2 ;
-(void)dealloc;
-(void)logSwitchStatesFromDictionary:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performPeriodicTasks;
-(void)privacyReset;
-(void)savePreferencesDictionary:(id)arg0 withKey:(struct __CFString *)arg1 ;
-(void)setReconciliationSwitchState:(BOOL)arg0 forUser:(unsigned int)arg1 ;
-(void)setSwitchState:(BOOL)arg0 forUser:(unsigned int)arg1 ;
-(void)updateReconciliationSwitchStatesForUser:(unsigned int)arg0 ;
-(void)willSwitchUser;


@end


#endif