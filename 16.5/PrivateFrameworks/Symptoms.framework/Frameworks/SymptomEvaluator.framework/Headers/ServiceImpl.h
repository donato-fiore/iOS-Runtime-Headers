// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SERVICEIMPL_H
#define SERVICEIMPL_H

@class NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, SFExtendedServiceInterface, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FlowAnalyticsEngine.h"
#import "NetworkAnalyticsEngine.h"
#import "NOIAnalyticsEngine.h"
#import "NetDomainsHandler.h"

@interface ServiceImpl : NSObject <NSXPCListenerDelegate, SFExtendedServiceInterface>

 {
    FlowAnalyticsEngine *f_engine;
    NetworkAnalyticsEngine *n_engine;
    NOIAnalyticsEngine *noi_engine;
    NetDomainsHandler *netDomainsHandler;
    NSObject<OS_dispatch_semaphore> *svc_sema;
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *lastAllowedRequests;
    id *featureReadyObserver;
    BOOL _isHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_checkRateLimitForConnection:(id)arg0 ;
-(BOOL)_serviceReady;
-(BOOL)assertEntitlement:(id)arg0 entitlement:(NSUInteger)arg1 orWaiveOnIntent:(id)arg2 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_cacheEntitlementValuesForConnection:(id)arg0 ;
-(void)_serviceReadyCheckPoint;
-(void)_serviceReadyCheckPointRelease;
-(void)abortRNFTestWithReply:(id)arg0 ;
-(void)assertFactString:(id)arg0 module:(id)arg1 asSymptom:(BOOL)arg2 reply:(id)arg3 ;
-(void)clientTransactionsRelease;
-(void)createSnapshotFor:(id)arg0 pred:(id)arg1 actions:(id)arg2 reply:(id)arg3 ;
-(void)dealloc;
-(void)getExpertSystemsStatus:(id)arg0 ;
-(void)getNetworkBitmapsWithNames:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 Reply:(id)arg3 ;
-(void)getOption:(id)arg0 inScopes:(id)arg1 reply:(id)arg2 ;
-(void)getPreferCellOverWiFiWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)identifierForUUID:(id)arg0 reply:(id)arg1 ;
-(void)inquireNOIFor:(id)arg0 orPredicate:(id)arg1 requestedKeys:(id)arg2 options:(id)arg3 reply:(id)arg4 ;
-(void)performActionWithOptions:(id)arg0 inScopes:(id)arg1 reply:(id)arg2 ;
-(void)performAppEndpointTrackingPeriodicTasksWithReply:(id)arg0 ;
-(void)performAppExperiencePeriodicTasksWithReply:(id)arg0 ;
-(void)performAppPeriodicTasksWithReply:(id)arg0 ;
-(void)performAppTrackingPeriodicTasksWithReply:(id)arg0 ;
-(void)performPersistentStoreHealthCheckWithReply:(id)arg0 ;
-(void)performQueryOnEntity:(id)arg0 fetchRequestProperties:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(id)arg5 ;
-(void)performQueryOnEntity:(id)arg0 pred:(id)arg1 sort:(id)arg2 actions:(id)arg3 reply:(id)arg4 ;
-(void)postAWDEvent:(id)arg0 reply:(id)arg1 ;
-(void)requestReverseGeocodeForLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 reply:(id)arg2 ;
-(void)resetDataFor:(id)arg0 nameKind:(id)arg1 inScopes:(id)arg2 reply:(id)arg3 ;
-(void)resetUsageFor:(id)arg0 nameKind:(id)arg1 reply:(id)arg2 ;
-(void)retrieveActivityMetrics:(id)arg0 reply:(id)arg1 ;
-(void)setOption:(id)arg0 inScopes:(id)arg1 reply:(id)arg2 ;
-(void)setPreferCellOverWiFiWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)setUsageOption:(id)arg0 reply:(id)arg1 ;
-(void)shutdown;
-(void)startRNFTestWithOptions:(id)arg0 scenarioName:(id)arg1 reply:(id)arg2 ;
-(void)subscribeToNOIsFor:(id)arg0 orPredicate:(id)arg1 options:(id)arg2 ;
-(void)trainModelAndScore:(BOOL)arg0 lastScoreDate:(id)arg1 reply:(id)arg2 ;
-(void)unsubscribeToNOIs:(id)arg0 ;
-(void)waitForOSLogErrorSymptomWithReply:(id)arg0 ;


@end


#endif