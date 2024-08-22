// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFETCHTREATMENTPERSISTEDTASK_H
#define TRIFETCHTREATMENTPERSISTEDTASK_H

@class TRIPBMessage, NSString;


#import "TRIPersistedTaskCapabilityModifier.h"
#import "TRIPersistedTaskAttribution.h"

@interface TRIFetchTreatmentPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasCapabilityModifier;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif