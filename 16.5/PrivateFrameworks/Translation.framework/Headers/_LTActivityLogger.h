// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTACTIVITYLOGGER_H
#define _LTACTIVITYLOGGER_H

@class NSCalendar, NSString;
@protocol _LTActivityLoggerDelegate;

#import <Foundation/Foundation.h>


@interface _LTActivityLogger : NSObject <_LTActivityLoggerDelegate>

 {
    NSCalendar *_calendar;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_LTActivityLoggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_activityDatePreferenceKeyForTask:(NSInteger)arg0 ;
-(id)_featureNameForTask:(NSInteger)arg0 ;
-(id)activityLogger:(id)arg0 lastLoggedDateForTask:(NSInteger)arg1 ;
-(id)init;
-(id)lastAggregateLogDateForActivityLogger:(id)arg0 ;
-(void)_logActivityForTask:(NSInteger)arg0 interval:(NSUInteger)arg1 date:(id)arg2 ;
-(void)_logAllIntervalsForTask:(NSInteger)arg0 date:(id)arg1 ;
-(void)_registerActivity:(NSInteger)arg0 onDate:(id)arg1 ;
-(void)_sendDailyUsageForTask:(NSInteger)arg0 date:(id)arg1 ;
-(void)_sendMonthlyUsageForTask:(NSInteger)arg0 date:(id)arg1 ;
-(void)_sendWeeklyUsageForTask:(NSInteger)arg0 date:(id)arg1 ;
-(void)_updateLastLoggedDate:(id)arg0 forTask:(NSInteger)arg1 ;
-(void)activityLogger:(id)arg0 logAggregateUsageForInterval:(NSUInteger)arg1 date:(id)arg2 ;
-(void)activityLogger:(id)arg0 logUsageForTask:(NSInteger)arg1 interval:(NSUInteger)arg2 date:(id)arg3 ;
-(void)activityLogger:(id)arg0 updateLastAggregateLogDate:(id)arg1 ;
-(void)activityLogger:(id)arg0 updateLastLoggedDate:(id)arg1 forTask:(NSInteger)arg2 ;
-(void)registerActivity:(NSInteger)arg0 ;


@end


#endif