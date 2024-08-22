// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICLIENT_H
#define TRICLIENT_H

@class _PASLock, NSString;
@protocol TRIFactorProviding, TRIPaths, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TRIDefaultFactorProvider.h"
#import "TRIFactorsState.h"
#import "TRILogger.h"
#import "TRITrackingId.h"

@interface TRIClient : NSObject <TRIFactorProviding>

 {
    id<TRIPaths> *_paths;
    TRIDefaultFactorProvider *_defaultFactorProvider;
    int _projectId;
    CGFloat _staleFactorsUsageGracePeriod;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    TRIFactorsState *_factorsState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TRILogger *logger; // ivar: _logger
@property (readonly) Class superclass;
@property (readonly, nonatomic) TRITrackingId *trackingId;


+(BOOL)isPlatformBinary;
+(BOOL)requiresLogging;
+(BOOL)requiresTrialDataVaultAccess;
+(id)activeExperimentInformation:(*id)arg0 ;
+(id)activeRolloutInformation:(*id)arg0 ;
+(id)clientWithIdentifier:(int)arg0 ;
+(id)clientWithIdentifier:(int)arg0 unit:(int)arg1 ;
+(id)clientWithProjectId:(int)arg0 factorsState:(id)arg1 ;
+(id)printedExperimentInformation:(*id)arg0 ;
+(id)printedNCVInformation;
+(id)printedRolloutInformation:(*id)arg0 ;
+(id)sysdiagnoseInfoWithError:(*id)arg0 ;
-(BOOL)_hasAppropriatePermissionsForNamespaceName:(id)arg0 ;
-(BOOL)deregisterNamespaceName:(id)arg0 error:(*id)arg1 ;
-(BOOL)evaluateBMLTTargetingExpression:(id)arg0 withParameters:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasDownloadedNamespaceWithName:(id)arg0 ;
-(BOOL)hasRegisteredNamespaceWithName:(id)arg0 ;
-(BOOL)immediateDownloadForNamespaceNames:(id)arg0 allowExpensiveNetworking:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)promoteFactorsForNamespace:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerNamespaceName:(id)arg0 compatibilityVersion:(unsigned int)arg1 defaultsFileURL:(id)arg2 applicationGroup:(id)arg3 cloudKitContainerId:(int)arg4 error:(*id)arg5 ;
-(BOOL)setFactorsProvisionalForNamespace:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPurgeabilityLevelsForFactors:(id)arg0 withNamespaceName:(id)arg1 ;
-(BOOL)trialIdentifiersWithNamespaceName:(id)arg0 experimentId:(*id)arg1 deploymentId:(*int)arg2 treatmentId:(*id)arg3 ;
-(NSInteger)_appContainerType:(id)arg0 ;
// -(NSUInteger)statusOfDownloadForFactors:(id)arg0 withNamespace:(id)arg1 token:(*id)arg2 queue:(id)arg3 progress:(id)arg4 completion:(unk)arg5  ;
-(id)_rampIdForRolloutDeployment:(id)arg0 ;
-(id)_refresh:(BOOL)arg0 ;
-(id)addUpdateHandlerForNamespaceId:(unsigned int)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)addUpdateHandlerForNamespaceId:(unsigned int)arg0 usingBlock:(id)arg1 ;
-(id)addUpdateHandlerForNamespaceName:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)addUpdateHandlerForNamespaceName:(id)arg0 usingBlock:(id)arg1 ;
-(id)backgroundMLTaskIdentifiersWithNamespaceName:(id)arg0 ;
-(id)experimentIdWithNamespace:(unsigned int)arg0 ;
-(id)experimentIdWithNamespaceName:(id)arg0 ;
-(id)experimentIdentifiersWithNamespaceName:(id)arg0 ;
-(id)factorLevelsWithNamespace:(unsigned int)arg0 ;
-(id)factorLevelsWithNamespaceName:(id)arg0 ;
-(id)initWithClientIdentifier:(int)arg0 paths:(id)arg1 unit:(int)arg2 factorsState:(id)arg3 staleFactorsUsageGracePeriod:(CGFloat)arg4 logger:(id)arg5 ;
-(id)initWithClientIdentifier:(int)arg0 paths:(id)arg1 unit:(int)arg2 staleFactorsUsageGracePeriod:(CGFloat)arg3 logger:(id)arg4 ;
-(id)initWithNonLoggingClientIdentifier:(int)arg0 paths:(id)arg1 ;
-(id)levelForFactor:(id)arg0 withNamespace:(unsigned int)arg1 ;
-(id)levelForFactor:(id)arg0 withNamespaceName:(id)arg1 ;
-(id)newTrackingId;
-(id)newTrackingIdWithTreatmentRefresh:(BOOL)arg0 ;
-(id)purgeabilityLevelsForFactorsWithNamespaceName:(id)arg0 ;
-(id)rolloutIdWithNamespaceName:(id)arg0 ;
-(id)rolloutIdentifiersWithNamespaceName:(id)arg0 ;
-(id)sizesForFactors:(id)arg0 withNamespaceName:(id)arg1 forMetric:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)treatmentIdWithNamespace:(unsigned int)arg0 ;
-(id)treatmentIdWithNamespaceName:(id)arg0 ;
-(unsigned int)compatibilityVersionWithNamespaceName:(id)arg0 ;
-(void)_checkEntitlements;
-(void)_invalidateFactors;
-(void)_lazyInit;
-(void)_registerUpdateHandlerForNamespaceName:(id)arg0 notificationCallback:(id)arg1 clientMethodNameForLogging:(char *)arg2 callingFunctionReturnAddressForLogging:(*void)arg3 ;
-(void)_setupExcessiveStaleFactorsUsageTimerWithGuardedData:(id)arg0 namespace:(id)arg1 clientMethodNameForLogging:(char *)arg2 callingFunctionReturnAddressForLogging:(*void)arg3 ;
-(void)dealloc;
-(void)dispose;
// -(void)downloadLevelsForFactors:(id)arg0 withNamespace:(id)arg1 queue:(id)arg2 options:(id)arg3 progress:(id)arg4 completion:(unk)arg5  ;
-(void)downloadNamespaceWithName:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
// -(void)downloadNamespaceWithName:(id)arg0 options:(id)arg1 progress:(id)arg2 completion:(unk)arg3  ;
-(void)refresh;
-(void)removeDownloadStatusHandlersWithToken:(id)arg0 ;
-(void)removeLevelsForFactors:(id)arg0 withNamespace:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)removeLevelsForFactorsImmediately:(id)arg0 withNamespace:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)removeUpdateHandlerForToken:(id)arg0 ;


@end


#endif