// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEEKLYMAINTENANCEACTIVITY_H
#define WEEKLYMAINTENANCEACTIVITY_H



#import "PeriodicMaintenanceActivity.h"

@interface WeeklyMaintenanceActivity : PeriodicMaintenanceActivity



+(NSInteger)periodicActivityInterval;
+(char *)periodicActivityID;
+(id)sharedInstance;


@end


#endif