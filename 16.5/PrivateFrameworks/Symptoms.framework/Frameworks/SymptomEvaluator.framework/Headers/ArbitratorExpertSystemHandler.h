// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARBITRATOREXPERTSYSTEMHANDLER_H
#define ARBITRATOREXPERTSYSTEMHANDLER_H

@class NSArray, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSDictionary;


#import "ExpertSystemHandlerCore.h"
#import "ArbitratorExpertSystemState.h"
#import "SystemSettingsRelay.h"

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id *flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    NSDictionary *processToLengthLogCollectionMap;
    BOOL _initializationComplete;
    BOOL _observingSetupAssistantFinished;
    id *_foregroundStateObserver;
}


@property NSUInteger externalStepper; // ivar: _externalStepper


+(BOOL)disableResourceNotifyDampening;
+(id)configureClass:(id)arg0 ;
+(id)internalStateDictionary;
+(id)sharedInstance;
+(void)resetAllForCustomerBuilds;
+(void)setInitializeAsHelper:(BOOL)arg0 ;
-(BOOL)_arbitratorReady;
-(BOOL)_initializeWorkspace;
-(BOOL)noteSymptom:(id)arg0 ;
-(BOOL)requireUserNotification;
-(BOOL)shouldGenerateReportForSignature:(id)arg0 trigger:(NSUInteger)arg1 ;
-(NSInteger)_removeAllDiagnosticCaseUsageFor:(id)arg0 ;
-(id)_reportRecordKeyForDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 process:(id)arg3 ;
-(id)_retrieveReportRecordForDomain:(id)arg0 type:(id)arg1 subType:(id)arg2 process:(id)arg3 ;
-(id)init;
-(id)internalStateDictionary;
-(id)setupParametersForDESysLogFilterProcess:(id)arg0 ;
-(id)setupProcessNameForDESysLogFilterProcess:(id)arg0 ;
-(void)_addReportRecordWithKey:(id)arg0 count:(NSInteger)arg1 lastSeen:(CGFloat)arg2 ;
-(void)_administrativeDisable;
-(void)_administrativeEnable;
-(void)_completeInitialization:(BOOL)arg0 ;
-(void)_dumpState;
-(void)_purgeDiagnosticCaseUsage;
-(void)_removeAllReportRecords;
-(void)_removeReportRecordForKey:(id)arg0 ;
-(void)_saveReportRecord:(id)arg0 ;
-(void)_scheduleMaintenanceActivity;
-(void)alertCarrierSeedUserAboutABC;
-(void)dealloc;
-(void)handleAssertionExceptionTriggerWithEvent:(id)arg0 signatureSubType:(id)arg1 ;
-(void)handleResourceNotifyOfType:(NSUInteger)arg0 event:(id)arg1 ;
-(void)observeSetupAssistantFinished;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)recordReportForSignature:(id)arg0 aggregateReport:(id)arg1 specificReport:(id)arg2 ;
-(void)removeSetupAssistantFinishedObserver;
-(void)resetAll;
-(void)resetDiagnosticCaseUsage;
-(void)scheduleABCNotificationForCarrierSeedUser;
-(void)setupAssistantFinished;
-(void)triggerABCSnapshotWithSignature:(id)arg0 events:(id)arg1 uuid:(id)arg2 parameters:(id)arg3 ;


@end


#endif