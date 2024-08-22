// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISUBSCRIBECHANNELTASK_H
#define TRISUBSCRIBECHANNELTASK_H

@class NSString, NSArray, NSDate;
@protocol TRITask, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRISubscribeChannelTask : TRIBaseTask <TRITask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startTime; // ivar: _startTime
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithExperimentId:(id)arg0 startTime:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExperiment:(id)arg0 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif