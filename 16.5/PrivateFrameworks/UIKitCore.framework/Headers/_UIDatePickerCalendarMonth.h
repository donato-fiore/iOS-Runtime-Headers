// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERCALENDARMONTH_H
#define _UIDATEPICKERCALENDARMONTH_H

@class UIDatePickerCalendarDateComponent;


#import "_UIDatePickerCalendarMonth.h"

@interface _UIDatePickerCalendarMonth : UIDatePickerCalendarDateComponent {
    _UIDatePickerCalendarMonth *_previousMonth;
    _UIDatePickerCalendarMonth *_nextMonth;
}


@property (readonly, nonatomic) _UIDatePickerCalendarMonth *nextMonth;
@property (readonly, nonatomic) _UIDatePickerCalendarMonth *previousMonth;


+(NSUInteger)representedCalendarUnits;
-(id)_monthWithOffset:(NSInteger)arg0 ;
-(id)dayMatchingOrdinalDay:(id)arg0 ;
-(id)dayWithDate:(id)arg0 assignedMonth:(id)arg1 ;


@end


#endif