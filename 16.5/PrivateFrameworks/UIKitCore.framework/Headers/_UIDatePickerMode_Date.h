// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERMODE_DATE_H
#define _UIDATEPICKERMODE_DATE_H

@class UIDatePickerMode, NSString;



@interface _UIDatePickerMode_Date : UIDatePickerMode {
    CGFloat _dateYearWidth;
    CGFloat _dateMonthWidth;
    CGFloat _dateDayWidth;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_dayFormat;
}




+(NSInteger)datePickerMode;
+(NSUInteger)extractableCalendarUnits;
-(BOOL)_shouldEnableValueForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 calendarUnit:(NSUInteger)arg2 ;
-(CGFloat)widthForCalendarUnit:(NSUInteger)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(NSInteger)displayedCalendarUnits;
-(NSInteger)numberOfRowsForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)rowForDate:(id)arg0 dateComponents:(id)arg1 component:(NSInteger)arg2 currentRow:(NSInteger)arg3 ;
-(NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg0 ;
-(id)_dateForYearRow:(NSInteger)arg0 ;
-(id)dateFormatForCalendarUnit:(NSUInteger)arg0 ;
-(id)localizedFormatString;
-(void)_shouldReset:(id)arg0 ;
-(void)noteCalendarChanged;
-(void)resetComponentWidths;


@end


#endif