// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPERSISTEDEXPERIMENTFACTORSSTATE_H
#define TRIPERSISTEDEXPERIMENTFACTORSSTATE_H

@class TRIPBMessage, NSString;



@interface TRIPersistedExperimentFactorsState : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif