// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPURGEABLEFACTORPACKSENUMERATOR_H
#define TRIPURGEABLEFACTORPACKSENUMERATOR_H

@class NSString;
@protocol TRIPurgeableFactorPacksEnumerating, TRIPaths, TRINamespaceResolving;

#import <Foundation/Foundation.h>


@interface TRIPurgeableFactorPacksEnumerator : NSObject <TRIPurgeableFactorPacksEnumerating>

 {
    id<TRIPaths> *_paths;
    id<TRINamespaceResolving> *_namespaceResolver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPaths:(id)arg0 namespaceResolver:(id)arg1 ;
-(void)_enumerateOnDemandFactorsWithIsRollout:(BOOL)arg0 namespaceName:(id)arg1 block:(id)arg2 ;
// -(void)enumerateExperimentFactorPackPurgeCandidatesFromNamespaceNames:(id)arg0 purgeableFactorFilterBlock:(id)arg1 block:(unk)arg2  ;
// -(void)enumerateRolloutFactorPackPurgeCandidatesFromNamespaceNames:(id)arg0 purgeableFactorFilterBlock:(id)arg1 block:(unk)arg2  ;


@end


#endif