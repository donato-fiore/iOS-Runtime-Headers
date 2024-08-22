// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPERSISTEDROLLOUTALLOCATIONSTATUS_NAMESPACEFACTORPACK_H
#define TRIPERSISTEDROLLOUTALLOCATIONSTATUS_NAMESPACEFACTORPACK_H

@class TRIPBMessage, NSString;



@interface TRIPersistedRolloutAllocationStatus_NamespaceFactorPack : TRIPBMessage

@property (copy, nonatomic) NSString *factorPack;
@property (nonatomic) BOOL hasFactorPack;
@property (nonatomic) BOOL hasNamespace_p;
@property (copy, nonatomic) NSString *namespace_p;


+(id)descriptor;


@end


#endif