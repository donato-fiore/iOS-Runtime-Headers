// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPERSISTEDROLLOUTALLOCATIONSTATUS_H
#define TRIPERSISTEDROLLOUTALLOCATIONSTATUS_H

@class TRIPBMessage, NSMutableArray, NSString;



@interface TRIPersistedRolloutAllocationStatus : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasRampId;
@property (nonatomic) BOOL hasRolloutId;
@property (retain, nonatomic) NSMutableArray *namespaceFactorPackArray;
@property (readonly, nonatomic) NSUInteger namespaceFactorPackArray_Count;
@property (copy, nonatomic) NSString *rampId;
@property (copy, nonatomic) NSString *rolloutId;


+(id)descriptor;


@end


#endif