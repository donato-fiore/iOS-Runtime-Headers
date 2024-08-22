// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFPNAMESPACEFACTORPROVIDER_H
#define TRIFPNAMESPACEFACTORPROVIDER_H

@class NSString, NSSet, NSString<TRIFactorPackId>;
@protocol TRINamespaceFactorProviding, TRIFactorLevelCaching;

#import <Foundation/Foundation.h>

#import "TRIReferenceManagedDirReaderLock.h"

@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding>

 {
    NSString *_parentId;
    int _deploymentId;
    NSString *_namespaceName;
    NSSet *_namespaceCompatibilityVersions;
    NSString<TRIFactorPackId> *_factorPackId;
    id<TRIFactorLevelCaching> *_factorLevels;
    TRIReferenceManagedDirReaderLock *_dirLock;
    NSString *_lockingClientIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL promotable; // ivar: _promotable
@property (readonly) Class superclass;


-(id)_factorLevelsWithFactorPackData:(id)arg0 referencePath:(id)arg1 outFactorPackId:(*id)arg2 outNamespaceName:(*id)arg3 outNCVs:(*id)arg4 ;
-(id)experimentId;
-(id)factorLevels;
-(id)init;
-(id)initWithParentId:(id)arg0 deploymentId:(int)arg1 promotable:(BOOL)arg2 ;
-(id)initWithPath:(id)arg0 parentId:(id)arg1 deploymentId:(int)arg2 promotable:(BOOL)arg3 ;
-(id)levelForFactor:(id)arg0 ;
-(id)namespaceName;
-(id)rolloutId;
-(id)treatmentId;
-(int)deploymentId;
-(unsigned int)namespaceCompatibilityVersion;
-(unsigned int)namespaceId;
-(void)dealloc;
-(void)dispose;


@end


#endif