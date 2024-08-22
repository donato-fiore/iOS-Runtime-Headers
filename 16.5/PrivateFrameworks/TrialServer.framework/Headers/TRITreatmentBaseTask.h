// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRITREATMENTBASETASK_H
#define TRITREATMENTBASETASK_H

@class NSString;
@protocol TRITaskAttributing;


#import "TRIExperimentBaseTask.h"

@interface TRITreatmentBaseTask : TRIExperimentBaseTask

@property (readonly, nonatomic) NSObject<TRITaskAttributing> *taskAttributing; // ivar: _taskAttributing
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dimensions;
-(id)initWithExperiment:(id)arg0 treatmentId:(id)arg1 taskAttributing:(id)arg2 ;
-(id)metrics;
-(id)trialSystemTelemetry;


@end


#endif