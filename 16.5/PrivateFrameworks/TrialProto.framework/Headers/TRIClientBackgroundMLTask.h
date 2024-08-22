// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICLIENTBACKGROUNDMLTASK_H
#define TRICLIENTBACKGROUNDMLTASK_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"
#import "TRIAssignment.h"
#import "TRIPBTimestamp.h"
#import "TRIPBStruct.h"
#import "TRIClientSelectedNamespace.h"

@interface TRIClientBackgroundMLTask : TRIPBMessage

@property (retain, nonatomic) TRIAssignment *assignment;
@property (retain, nonatomic) TRIAssignment *customTargeting;
@property (retain, nonatomic) NSMutableArray *customTargetingKeysArray;
@property (readonly, nonatomic) NSUInteger customTargetingKeysArray_Count;
@property (nonatomic) unsigned int deploymentId;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) BOOL hasAssignment;
@property (nonatomic) BOOL hasCustomTargeting;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasNamespaceId;
@property (nonatomic) BOOL hasPluginId;
@property (nonatomic) BOOL hasProjectId;
@property (nonatomic) BOOL hasSchedulingPolicy;
@property (nonatomic) BOOL hasSelectedNamespace;
@property (nonatomic) BOOL hasTaskId;
@property (copy, nonatomic) NSString *namespaceId;
@property (copy, nonatomic) NSString *pluginId;
@property (nonatomic) int projectId;
@property (retain, nonatomic) TRIPBStruct *schedulingPolicy;
@property (retain, nonatomic) TRIClientSelectedNamespace *selectedNamespace;
@property (copy, nonatomic) NSString *taskId;


+(id)descriptor;


@end


#endif