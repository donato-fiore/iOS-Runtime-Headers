// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPUSHNOTIFICATIONHANDLER_H
#define TRIPUSHNOTIFICATIONHANDLER_H

@protocol TRIPushServiceConnectionDelegate, TRIHotfixRolloutTargetingSchedulerProtocol, TRINotificationReactionCheckerProtocol, TRIUrgentRollbackSchedulerProtocol;

#import <Foundation/Foundation.h>


@interface TRIPushNotificationHandler : NSObject <TRIPushServiceConnectionDelegate>



@property (readonly, nonatomic) NSObject<TRIHotfixRolloutTargetingSchedulerProtocol> *hotfixScheduler; // ivar: _hotfixScheduler
@property (readonly, nonatomic) NSObject<TRINotificationReactionCheckerProtocol> *notificationChecker; // ivar: _notificationChecker
@property (readonly, nonatomic) NSObject<TRIUrgentRollbackSchedulerProtocol> *rollbackScheduler; // ivar: _rollbackScheduler


-(BOOL)_isMissingNotificationFields:(id)arg0 ;
-(id)initWithNotificationChecker:(id)arg0 hotfixScheduler:(id)arg1 rollbackScheduler:(id)arg2 ;
-(void)_handleDeploymentNotification:(id)arg0 ;
-(void)_handleRollbackNotification:(id)arg0 ;
-(void)didReceivePushNotification:(id)arg0 ;


@end


#endif