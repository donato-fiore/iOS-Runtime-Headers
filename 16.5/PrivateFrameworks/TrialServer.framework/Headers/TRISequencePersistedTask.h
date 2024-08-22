// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISEQUENCEPERSISTEDTASK_H
#define TRISEQUENCEPERSISTEDTASK_H

@class TRIPBMessage;


#import "TRIAnyPersistedTask.h"

@interface TRISequencePersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIAnyPersistedTask *dependentTask;
@property (nonatomic) BOOL hasDependentTask;
@property (nonatomic) BOOL hasTask;
@property (retain, nonatomic) TRIAnyPersistedTask *task;


+(id)descriptor;


@end


#endif