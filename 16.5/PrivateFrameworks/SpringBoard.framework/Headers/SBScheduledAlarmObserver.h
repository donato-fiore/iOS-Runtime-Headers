// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCHEDULEDALARMOBSERVER_H
#define SBSCHEDULEDALARMOBSERVER_H

@class MTAlarmManager;

#import <Foundation/Foundation.h>


@interface SBScheduledAlarmObserver : NSObject {
    MTAlarmManager *_alarmManager;
}




+(id)sharedInstance;
-(id)init;
-(void)_nextAlarmChanged:(id)arg0 ;
-(void)_updateAlarmStatusBarItem;


@end


#endif