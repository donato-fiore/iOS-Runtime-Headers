// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIASSETPURGER_H
#define TRIASSETPURGER_H

@class TRIClient, NSString;
@protocol TRIAssetPurging, TRIPaths, TRIPurgeableNamespacesProviding, TRIPurgeableFactorPacksEnumerating, TRIPurgeableExperimentAndRolloutProviding, TRITaskQueuing;

#import <Foundation/Foundation.h>

#import "TRIAssetStore.h"

@interface TRIAssetPurger : NSObject <TRIAssetPurging>

 {
    id<TRIPaths> *_paths;
    id<TRIPurgeableNamespacesProviding> *_purgeableNamespacesProvider;
    id<TRIPurgeableFactorPacksEnumerating> *_purgeableFactorPacksEnumerator;
    id<TRIPurgeableExperimentAndRolloutProviding> *_purgeableExperimentAndRolloutProvider;
    id<TRITaskQueuing> *_taskQueue;
    TRIAssetStore *_assetStore;
    TRIClient *_loggingClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)purgeAssetsForPurgeabilityLevel:(int)arg0 requestedPurgeAmount:(NSInteger)arg1 ;
-(NSUInteger)purgeableAssetSizeForPurgeabilityLevel:(int)arg0 ;
-(id)initWithPaths:(id)arg0 assetStore:(id)arg1 purgeableNamespacesProvider:(id)arg2 purgeableFactorPacksEnumerator:(id)arg3 purgeableExperimentAndRolloutProvider:(id)arg4 taskQueue:(id)arg5 loggingClient:(id)arg6 ;
-(void)_enumeratePurgeCandidatesForPurgeableConstructs:(id)arg0 block:(id)arg1 ;
-(void)_logDeactivationsMetricWithConcludedInTime:(BOOL)arg0 ;
-(void)_logPurgedAssetWithFactorNames:(id)arg0 namespaceName:(id)arg1 purgeabilityLevel:(int)arg2 ;


@end


#endif