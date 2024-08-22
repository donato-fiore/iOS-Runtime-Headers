// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIROLLOUTDEPLOYMENTPUSHNOTIFICATION_H
#define TRIROLLOUTDEPLOYMENTPUSHNOTIFICATION_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBTimestamp.h"
#import "TRINotificationProcessingPolicy.h"

@interface TRIRolloutDeploymentPushNotification : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentDate;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasNotificationProcessingPolicy;
@property (nonatomic) BOOL hasRolloutId;
@property (retain, nonatomic) TRINotificationProcessingPolicy *notificationProcessingPolicy;
@property (copy, nonatomic) NSString *rolloutId;


+(id)descriptor;


@end


#endif