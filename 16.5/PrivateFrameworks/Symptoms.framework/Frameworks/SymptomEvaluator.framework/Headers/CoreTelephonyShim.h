// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORETELEPHONYSHIM_H
#define CORETELEPHONYSHIM_H

@class CoreTelephonyClient, CTXPCServiceSubscriptionContext, AnalyticsWorkspace, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ImpoExpoService.h"

@interface CoreTelephonyShim : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>

 {
    CoreTelephonyClient *coreTelephonyClient;
    CTXPCServiceSubscriptionContext *coreTelephonyClientContext;
    NSInteger currentSubscriberSlotID;
    os_unfair_lock_s coreTelephonyClientContextLock;
    ImpoExpoService *ieService;
    AnalyticsWorkspace *workspace;
    id *engineReadyObserver;
    BOOL initializationComplete;
    NSArray *lastCellInfo;
    timeval lastCellInfoTime;
    NSMutableArray *cellInfoCompletionHandlers;
    BOOL cellInfoInflight;
    os_unfair_lock_s cellInfoLock;
    BOOL _cellPrivateNetworkFeatureFlagEnabled;
    NSMutableDictionary *_carrierNameForSlot;
    NSMutableDictionary *_cachedELQMMetricsForSlot;
    unsigned int ctClientInitReadyFlag;
    NSUInteger _pendingCTNotificationRegistrationFlags;
    NSUInteger _currentCTNotificationRegistrationFlags;
    NSMutableSet *_ctRnfChangedDelegates;
    os_unfair_lock_s rnfChangedLock;
    NSMutableSet *_ctSignalStrengthChangedDelegates;
    os_unfair_lock_s signalStrengthChangedLock;
    NSMutableSet *delegates;
    NSObject<OS_dispatch_queue> *elevatedQueue;
}


@property (readonly, nonatomic) *__CTServerConnection ctServerConnection; // ivar: _ctServerConnection
@property (readonly, nonatomic) NSNumber *currentSubscriberTag; // ivar: _currentSubscriberTag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL requiresCoreTelephonyClient;
@property (readonly, nonatomic) NSMutableDictionary *subscribers; // ivar: _subscribers
@property (readonly, nonatomic) NSMutableDictionary *subscriptions; // ivar: _subscriptions
@property (readonly) Class superclass;


+(CGFloat)timestampFromCTDumpFolderPrefix:(id)arg0 ;
+(id)dateTimeStringFromCTDumpFolderPrefix:(id)arg0 ;
+(id)elevatedQueue;
+(id)sharedInstance;
-(BOOL)enableCoreTelephonyLoggingForCustomerSeed:(BOOL)arg0 ;
-(BOOL)findSubscriberBestMatchForICCID:(id)arg0 MDN:(id)arg1 slotID:(NSInteger)arg2 update:(BOOL)arg3 ;
-(BOOL)findSubscriberExactMatchForICCID:(id)arg0 MDN:(id)arg1 slotID:(NSInteger)arg2 ;
-(BOOL)getBasebandTraceEnabledState:(*BOOL)arg0 coreDumpEnabled:(*BOOL)arg1 ;
-(BOOL)getSmartDataModeSetting;
-(BOOL)subscriptionContextIsCurrentDataSubscription:(id)arg0 ;
-(id)_coreTelephonyClient;
-(id)cellCarrierNameForContext:(id)arg0 refresh:(BOOL)arg1 ;
-(id)dictionaryForSubscriptionContext:(id)arg0 ;
-(id)elevatedQueue;
-(id)extractCellInfo:(id)arg0 ;
-(id)getCachedContentsForEnhancedLinkQualityMetricType:(NSInteger)arg0 forSlot:(NSInteger)arg1 ;
-(id)getCurrentDataSubscriptionContext;
-(id)getSortedSubscriberKeys;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)internalVariables;
-(unsigned char)processEnhancedLinkQualityHighThroughputNotification:(id)arg0 ;
-(void)_completeInitialization;
-(void)_deliverRNFSettingAvailable:(BOOL)arg0 enabled:(BOOL)arg1 ;
-(void)_deliverRatSelectionChanged:(id)arg0 withSubscriptionDict:(id)arg1 ;
-(void)_deliverSignalStrengthChanged:(id)arg0 cellularRSRP:(id)arg1 cellularSNR:(id)arg2 ;
-(void)_deliverSmartDataModeSettingChanged:(BOOL)arg0 ;
-(void)_dispatchCellInfoResult:(id)arg0 error:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_processEngineReadyNotification:(id)arg0 ;
-(void)_processPendingCoreTelephonyNotificationRegistrations;
-(void)_registerForCoreTelephonyNotifications:(NSUInteger)arg0 ;
-(void)_setCurrentSubscriberSlotID:(NSInteger)arg0 ;
-(void)_setInitializationComplete:(BOOL)arg0 ;
-(void)_unregisterFromCoreTelephonyNotifications:(NSUInteger)arg0 ;
-(void)_updateSubscribers;
-(void)activeSubscriptionsDidChange;
-(void)addDelegate:(id)arg0 ;
-(void)addNewSubscriberForICCID:(id)arg0 MDN:(id)arg1 slotID:(NSInteger)arg2 ;
-(void)cacheEnhancedLinkQualityMetricType:(NSInteger)arg0 withContents:(id)arg1 forSlot:(NSInteger)arg2 ;
-(void)carrierSettingsDidChange;
-(void)cellMonitorUpdate:(id)arg0 info:(id)arg1 ;
-(void)commonInit;
-(void)copyCellInfoOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)countryCodeChanged:(id)arg0 forContext:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)dualSimStatusChangedTo:(unsigned char)arg0 ;
-(void)dualSimStatusInspection:(id)arg0 withSubscriptionsInUse:(id)arg1 ;
-(void)enhancedDataLinkQualityChanged:(id)arg0 metric:(id)arg1 ;
-(void)get5GSupportedForContext:(id)arg0 ;
-(void)getPrivateNetworkSupported:(BOOL)arg0 forContext:(id)arg1 ;
-(void)handleCTServerNotification:(struct __CFString *)arg0 notificationInfo:(struct __CFDictionary *)arg1 ;
-(void)initializeCoreTelephonyClientAsNecessary;
-(void)networkCodeChanged:(id)arg0 forContext:(id)arg1 ;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)processDataStatus:(id)arg0 forContext:(id)arg1 ;
-(void)ratSelectionChanged:(id)arg0 selection:(id)arg1 ;
-(void)registerForCTDumpNotifications;
-(void)registerRNFChangedWithDelegate:(id)arg0 ;
-(void)registerSignalStrengthChangedWithDelegate:(id)arg0 ;
-(void)reliableNetworkFallbackChanged:(BOOL)arg0 userEnabled:(BOOL)arg1 ;
-(void)removeCachedContentsForEnhancedLinkQualityMetricType:(NSInteger)arg0 forSlot:(NSInteger)arg1 ;
-(void)removeDelegate:(id)arg0 ;
-(void)set5GSupportChanged:(id)arg0 forContext:(id)arg1 ;
-(void)signalStrengthChanged:(id)arg0 info:(id)arg1 ;
-(void)simLessSubscriptionsDidChange;
-(void)smartDataModeChanged:(id)arg0 userEnabled:(BOOL)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)unregisterForCTDumpNotifications;
-(void)unregisterRNFChangedWithDelegate:(id)arg0 ;
-(void)unregisterSignalStrengthChangedWithDelegate:(id)arg0 ;
-(void)updateCurrentRatSelection;
-(void)updateCurrentSubscriberTag:(id)arg0 ;
-(void)updateSubscribers;


@end


#endif