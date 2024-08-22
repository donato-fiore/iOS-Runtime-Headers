// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIHOTFIXROLLOUTTARGETINGSCHEDULER_H
#define TRIHOTFIXROLLOUTTARGETINGSCHEDULER_H

@class NSString;
@protocol TRIHotfixRolloutTargetingSchedulerProtocol, TRITaskQueuing;

#import <Foundation/Foundation.h>


@interface TRIHotfixRolloutTargetingScheduler : NSObject <TRIHotfixRolloutTargetingSchedulerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TRITaskQueuing> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithTaskQueue:(id)arg0 ;
-(void)_scheduleTaskQueueActivityWithDelay:(CGFloat)arg0 allowingAnyNetworkingAndBatteryUsage:(BOOL)arg1 ;
-(void)scheduleHotfixForDeployment:(id)arg0 allowingAnyNetworkingAndBatteryUsage:(BOOL)arg1 runDelay:(CGFloat)arg2 ;


@end


#endif