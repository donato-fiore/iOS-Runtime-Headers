// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIEXPERIMENTROLLBACKPUSHNOTIFICATION_H
#define TRIEXPERIMENTROLLBACKPUSHNOTIFICATION_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRIExperimentRollbackPushNotification : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;


+(id)descriptor;


@end


#endif