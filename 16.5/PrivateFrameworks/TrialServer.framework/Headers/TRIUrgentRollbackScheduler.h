// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIURGENTROLLBACKSCHEDULER_H
#define TRIURGENTROLLBACKSCHEDULER_H

@class NSString;
@protocol TRIUrgentRollbackSchedulerProtocol, TRITaskQueuing;

#import <Foundation/Foundation.h>


@interface TRIUrgentRollbackScheduler : NSObject <TRIUrgentRollbackSchedulerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TRITaskQueuing> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithTaskQueue:(id)arg0 ;
-(void)scheduleUrgentRollbackForExperiment:(id)arg0 ;


@end


#endif