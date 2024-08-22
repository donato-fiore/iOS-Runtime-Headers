// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIINTERNALSYSTEMSERVICEREQUESTHANDLER_H
#define TRIINTERNALSYSTEMSERVICEREQUESTHANDLER_H

@protocol TRIXPCInternalSystemServiceProtocol, TRITrialInternalSystemEntitled, TRIAssetStoreOperations, TRIStorageManagementProtocol;

#import <Foundation/Foundation.h>

#import "TRIAssetStore.h"

@interface TRIInternalSystemServiceRequestHandler : NSObject <TRIXPCInternalSystemServiceProtocol>

 {
    id<TRITrialInternalSystemEntitled> *_entitlementWitness;
    TRIAssetStore *_store;
    id<TRIAssetStoreOperations> *_operator;
    id<TRIStorageManagementProtocol> *_storageManagement;
}




-(id)initWithEntitlementWitness:(id)arg0 ;
-(void)addSymlinkFromAssetWithIdentifier:(id)arg0 toPath:(id)arg1 flockWitness:(struct TRIFlockWitness_ *)arg2 completion:(id)arg3 ;
-(void)collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 ignoreRecentlyCreatedAssets:(BOOL)arg2 dryRun:(BOOL)arg3 includedCacheDeletableAssetIds:(id)arg4 completion:(id)arg5 ;
-(void)fixFileProtectionForAssetStoreWithCompletion:(id)arg0 ;
-(void)referenceMAAutoAssetWithId:(id)arg0 futurePath:(id)arg1 currentPath:(id)arg2 isFileFactor:(BOOL)arg3 completion:(id)arg4 ;
-(void)removeAssetWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requireAssetStoreTempDir:(id)arg0 ;
-(void)saveAssetWithIdentifier:(id)arg0 sourcePath:(id)arg1 flockWitness:(struct TRIFlockWitness_ *)arg2 removeSourceOnFailure:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif