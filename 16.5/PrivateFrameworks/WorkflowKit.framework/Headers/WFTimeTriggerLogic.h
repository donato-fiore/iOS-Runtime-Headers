// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTIMETRIGGERLOGIC_H
#define WFTIMETRIGGERLOGIC_H


#import <Foundation/Foundation.h>


@interface WFTimeTriggerLogic : NSObject



+(NSInteger)nextWeekdayFromDaysOfWeek:(id)arg0 timeComponents:(id)arg1 currentDate:(id)arg2 calendar:(id)arg3 ;
+(id)adjustedTime:(id)arg0 byOffset:(NSUInteger)arg1 ;
+(id)nextFireDateForTrigger:(id)arg0 currentDate:(id)arg1 currentSunriseTime:(id)arg2 currentSunsetTime:(id)arg3 ;
+(id)nextFireDateFromNowWithTrigger:(id)arg0 currentSunriseTime:(id)arg1 currentSunsetTime:(id)arg2 ;
-(id)nextFireDateForTrigger:(id)arg0 ;


@end


#endif