// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFETCHFACTORPACKSETTASK_H
#define TRIFETCHFACTORPACKSETTASK_H

@class NSDictionary, _PASLock, NSString, NSArray, TRIRolloutDeployment, NSString<TRIFactorPackSetId>, NSDate;
@protocol TRIRetryableTask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"
#import "TRIRolloutTaskSupport.h"
#import "TRITaskCapabilityModifier.h"

@interface TRIFetchFactorPackSetTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding>

 {
    id<TRITaskAttributing> *_taskAttribution;
    TRIRolloutTaskSupport *_support;
    TRITaskCapabilityModifier *_capabilityModifier;
    NSDictionary *_factorRecordsByAssetId;
    _PASLock *_guardedDownloadableRecord;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, nonatomic) TRIRolloutDeployment *deployment; // ivar: _deployment
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId; // ivar: _factorPackSetId
@property (readonly) NSUInteger hash;
@property (nonatomic) int retryCount; // ivar: retryCount
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;
@property BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithFactorPackSetId:(id)arg0 taskAttribution:(id)arg1 rolloutDeployment:(id)arg2 capabilityModifier:(id)arg3 ;
-(BOOL)_downloadAndSaveCKAssetsWithMetadata:(id)arg0 artifactProvider:(id)arg1 options:(id)arg2 downloadNotificationKey:(id)arg3 context:(id)arg4 assetsDownloadSize:(*NSUInteger)arg5 errorResult:(*id)arg6 fetchError:(*id)arg7 ;
-(BOOL)_downloadAndSaveMAAssets:(id)arg0 options:(id)arg1 downloadNotificationKey:(id)arg2 context:(id)arg3 assetsDownloadSize:(*NSUInteger)arg4 errorResult:(*id)arg5 fetchError:(*id)arg6 ;
-(BOOL)_saveFactorPackSet:(id)arg0 requiredAssetMap:(id)arg1 context:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)_downloadSetArtifactWithProvider:(id)arg0 downloadOptions:(id)arg1 downloadNotificationKey:(id)arg2 errorResult:(*id)arg3 setArtifactFetchError:(*id)arg4 ;
-(id)_requiredAssetsForFactorPackSet:(id)arg0 context:(id)arg1 ;
-(id)_subscribedOnDemandFactorsForAssets:(id)arg0 factorPackSet:(id)arg1 context:(id)arg2 ;
-(id)_uniqueUninstalledAssets:(id)arg0 ;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFactorPackSetId:(id)arg0 taskAttribution:(id)arg1 rolloutDeployment:(id)arg2 capabilityModifier:(id)arg3 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)_addMetricForFetchFactorPackSetTaskError:(int)arg0 ;
-(void)_logDirectoryTreeDeltaResult:(id)arg0 patchedAssetsCount:(NSUInteger)arg1 totalCandidateAssetsCount:(NSUInteger)arg2 diffableAssetsDownloadSize:(NSUInteger)arg3 client:(id)arg4 ;
-(void)_logOnDemandFactor:(id)arg0 metricName:(id)arg1 namespaceName:(id)arg2 client:(id)arg3 error:(id)arg4 ;
-(void)_removeDownloadableRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif