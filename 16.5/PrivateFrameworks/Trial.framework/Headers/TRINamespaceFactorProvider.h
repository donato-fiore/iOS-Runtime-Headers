// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRINAMESPACEFACTORPROVIDER_H
#define TRINAMESPACEFACTORPROVIDER_H

@class NSString;
@protocol TRINamespaceFactorProviding, TRIFactorLevelCaching, TRIPaths;

#import <Foundation/Foundation.h>

#import "TRIReferenceManagedDirReaderLock.h"

@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding>

 {
    NSString *_treatmentId;
    unsigned int _namespaceCompatibilityVersion;
    id<TRIFactorLevelCaching> *_factorLevels;
    TRIReferenceManagedDirReaderLock *_factorDirectoryLock;
    id<TRIPaths> *_paths;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int namespaceCompatibilityVersion;
@property (readonly, nonatomic) NSString *namespaceName; // ivar: _namespaceName
@property (readonly) Class superclass;


+(id)_assetFilenameForFactor:(id)arg0 ;
+(id)_maAutoAssetReferencedInDir:(id)arg0 byFactorName:(id)arg1 ;
+(id)factorLevelsWithTreatmentData:(id)arg0 referencePath:(id)arg1 filteredByNamespaceName:(id)arg2 outTreatmentId:(*id)arg3 error:(*id)arg4 ;
+(id)factorProviderWithNamespaceDescriptor:(id)arg0 paths:(id)arg1 faultOnMissingFactors:(BOOL)arg2 shouldLockFactorDirectory:(BOOL)arg3 ;
+(id)factorProviderWithNamespaceName:(id)arg0 paths:(id)arg1 treatmentLayer:(NSUInteger)arg2 faultOnMissingFactors:(BOOL)arg3 shouldLockFactorDirectory:(BOOL)arg4 ;
+(id)pathForFactor:(id)arg0 directory:(id)arg1 ;
+(id)populateMAPathsForFactorLevels:(id)arg0 loadedFromParentDir:(id)arg1 ;
-(BOOL)overwriteItemAtPath:(id)arg0 withItemAtPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveToPath:(id)arg0 copyAssets:(BOOL)arg1 ;
-(id)_copyAssetsToDirectory:(id)arg0 ;
-(id)experimentId;
-(id)factorLevels;
-(id)initWithNamespaceName:(id)arg0 namespaceCompatibilityVersion:(unsigned int)arg1 paths:(id)arg2 factorLevels:(id)arg3 treatmentId:(id)arg4 factorDirectoryLock:(id)arg5 ;
-(id)initWithNamespaceName:(id)arg0 treatmentData:(id)arg1 namespaceCompatibilityVersion:(unsigned int)arg2 paths:(id)arg3 referencePath:(id)arg4 factorDirectoryLock:(id)arg5 error:(*id)arg6 ;
-(id)levelForFactor:(id)arg0 ;
-(id)overlayLevelsFromFactorProvider:(id)arg0 ;
-(id)rolloutId;
-(id)treatmentId;
-(int)deploymentId;
-(unsigned int)namespaceId;
-(void)dispose;


@end


#endif