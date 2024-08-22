// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERCHINESECALENDAR_H
#define _UIDATEPICKERCHINESECALENDAR_H

@class NSCalendar;



@interface _UIDatePickerChineseCalendar : NSCalendar

@property NSCalendar *realCalendar; // ivar: realCalendar


+(id)cyclicalFromRelated:(id)arg0 ;
+(id)relatedFromCyclical:(id)arg0 ;
-(id)calendarIdentifier;
-(id)components:(NSUInteger)arg0 fromDate:(id)arg1 ;
-(id)components:(NSUInteger)arg0 fromDate:(id)arg1 toDate:(id)arg2 options:(NSUInteger)arg3 ;
-(id)dateByAddingComponents:(id)arg0 toDate:(id)arg1 options:(NSUInteger)arg2 ;
-(id)dateFromComponents:(id)arg0 ;
-(id)initWithCalendar:(id)arg0 ;
-(struct _NSRange )maximumRangeOfUnit:(NSUInteger)arg0 ;
-(struct _NSRange )rangeOfUnit:(NSUInteger)arg0 inUnit:(NSUInteger)arg1 forDate:(id)arg2 ;
-(void)setTimeZone:(id)arg0 ;


@end


#endif