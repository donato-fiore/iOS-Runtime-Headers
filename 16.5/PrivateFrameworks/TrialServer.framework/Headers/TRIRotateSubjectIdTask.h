// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIROTATESUBJECTIDTASK_H
#define TRIROTATESUBJECTIDTASK_H

@class NSString, NSDate, NSArray;
@protocol TRITask, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIRotateSubjectIdTask : TRIBaseTask <TRITask>

 {
    BOOL _forceUpdate;
    NSString *_deviceId;
    NSDate *_nextRotationDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)task;
+(id)taskWithDeviceId:(id)arg0 nextRotationDate:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_asPersistedTask;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceId:(id)arg0 nextRotationDate:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(id)runTaskUsingContext:(id)arg0 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif