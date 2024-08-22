// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIMLRUNTIMEEVALUATION_H
#define TRIMLRUNTIMEEVALUATION_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIMLRuntimeSchedulingPolicy.h"

@interface TRIMLRuntimeEvaluation : TRIPBMessage

@property (copy, nonatomic) NSString *evaluationId;
@property (nonatomic) BOOL hasEvaluationId;
@property (nonatomic) BOOL hasPluginId;
@property (nonatomic) BOOL hasPluginProjectId;
@property (nonatomic) BOOL hasSchedulingPolicy;
@property (copy, nonatomic) NSString *pluginId;
@property (nonatomic) int pluginProjectId;
@property (retain, nonatomic) TRIMLRuntimeSchedulingPolicy *schedulingPolicy;


+(id)descriptor;


@end


#endif