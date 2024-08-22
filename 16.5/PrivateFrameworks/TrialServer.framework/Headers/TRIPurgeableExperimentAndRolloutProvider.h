// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPURGEABLEEXPERIMENTANDROLLOUTPROVIDER_H
#define TRIPURGEABLEEXPERIMENTANDROLLOUTPROVIDER_H

@class NSString;
@protocol TRIPurgeableExperimentAndRolloutProviding, TRIPaths;

#import <Foundation/Foundation.h>

#import "TRIExperimentDatabase.h"
#import "TRIRolloutDatabase.h"

@interface TRIPurgeableExperimentAndRolloutProvider : NSObject <TRIPurgeableExperimentAndRolloutProviding>

 {
    id<TRIPaths> *_paths;
    TRIExperimentDatabase *_experimentDatabase;
    TRIRolloutDatabase *_rolloutDatabase;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPaths:(id)arg0 experimentDatabase:(id)arg1 rolloutDatabase:(id)arg2 ;
-(id)purgeableExperimentAssetsFromNamespaces:(id)arg0 eagerFactors:(id)arg1 overriddenFactors:(id)arg2 ;
-(id)purgeableExperimentsFromNamespaces:(id)arg0 eagerFactors:(id)arg1 overriddenFactors:(id)arg2 ;
-(id)purgeableRolloutAssetsFromNamespaces:(id)arg0 eagerFactors:(id)arg1 overriddenFactors:(id)arg2 ;
-(id)purgeableRolloutsFromNamespaces:(id)arg0 eagerFactors:(id)arg1 overriddenFactors:(id)arg2 ;
-(void)_purgeablesForExperimentsFromNamespaces:(id)arg0 eagerFactors:(id)arg1 overriddenFactors:(id)arg2 shouldGenerateAssetPaths:(BOOL)arg3 purgeableExperiments:(*id)arg4 purgeableAssets:(*id)arg5 ;
-(void)_purgeablesForRolloutsFromNamespaces:(id)arg0 eagerFactors:(id)arg1 overriddenFactors:(id)arg2 shouldGenerateAssetPaths:(BOOL)arg3 purgeableExperiments:(*id)arg4 purgeableAssets:(*id)arg5 ;


@end


#endif