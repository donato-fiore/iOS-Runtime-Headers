// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIREMOTEASSETSTOREOPERATOR_H
#define TRIREMOTEASSETSTOREOPERATOR_H

@class _PASXPCClientHelper;
@protocol TRIAssetStoreOperations, TRIPaths;

#import <Foundation/Foundation.h>


@interface TRIRemoteAssetStoreOperator : NSObject <TRIAssetStoreOperations>

 {
    id<TRIPaths> *_paths;
    _PASXPCClientHelper *_internalHelper;
}




-(BOOL)addSymlinkFromAssetWithIdentifier:(id)arg0 toPath:(id)arg1 flockWitness:(struct TRIFlockWitness_ *)arg2 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 ignoreRecentlyCreatedAssets:(BOOL)arg2 dryRun:(BOOL)arg3 includedCacheDeletableAssetIds:(id)arg4 deletedAssetIds:(*id)arg5 ;
-(BOOL)fixFileProtectionForAssetStoreFiles;
-(BOOL)referenceMAAutoAssetWithId:(id)arg0 futurePath:(id)arg1 currentPath:(id)arg2 isFileFactor:(BOOL)arg3 ;
-(BOOL)removeAssetWithIdentifier:(id)arg0 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 sourcePath:(id)arg1 flockWitness:(struct TRIFlockWitness_ *)arg2 removeSourceOnFailure:(BOOL)arg3 ;
-(id)initWithPaths:(id)arg0 ;
-(id)requireAssetStoreTempDir;


@end


#endif