// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERMODE_MONTHDAY_H
#define _UIDATEPICKERMODE_MONTHDAY_H

@class Date;



@interface _UIDatePickerMode_MonthDay : Date



+(NSInteger)datePickerMode;
+(NSUInteger)extractableCalendarUnits;
-(NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg0 ;


@end


#endif