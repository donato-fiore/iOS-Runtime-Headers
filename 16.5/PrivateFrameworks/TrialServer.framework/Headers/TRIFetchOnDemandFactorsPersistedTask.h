// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFETCHONDEMANDFACTORSPERSISTEDTASK_H
#define TRIFETCHONDEMANDFACTORSPERSISTEDTASK_H

@class TRIPBMessage, NSString, NSMutableArray;


#import "TRIPersistedTaskCapabilityModifier.h"
#import "TRIPersistedTaskAttribution.h"

@interface TRIFetchOnDemandFactorsPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSMutableArray *factorPackAssetIdsArray;
@property (readonly, nonatomic) NSUInteger factorPackAssetIdsArray_Count;
@property (nonatomic) BOOL hasCapabilityModifier;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) BOOL hasNotificationKey;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) BOOL hasTaskAttribution;
@property (copy, nonatomic) NSString *namespaceName;
@property (copy, nonatomic) NSString *notificationKey;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) NSMutableArray *rolloutFactorNamesArray;
@property (readonly, nonatomic) NSUInteger rolloutFactorNamesArray_Count;
@property (copy, nonatomic) NSString *rolloutId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (retain, nonatomic) NSMutableArray *treatmentAssetIndexesArray;
@property (readonly, nonatomic) NSUInteger treatmentAssetIndexesArray_Count;


+(id)descriptor;


@end


#endif