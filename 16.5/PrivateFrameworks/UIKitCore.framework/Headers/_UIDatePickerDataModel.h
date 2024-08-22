// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERDATAMODEL_H
#define _UIDATEPICKERDATAMODEL_H

@class NSLocale, NSCalendar, NSString, NSDate, NSDateComponents, NSTimeZone;

#import <Foundation/Foundation.h>

#import "_UIDatePickerChineseCalendar.h"
#import "_UIDatePickerDateRange.h"

@interface _UIDatePickerDataModel : NSObject {
    NSLocale *_effectiveLocale;
    NSCalendar *_effectiveCalendar;
    BOOL _usingLocaleCalendar;
    _UIDatePickerChineseCalendar *_chineseWrapperCalendar;
}


@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSString *customFontDesign; // ivar: _customFontDesign
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSInteger datePickerMode; // ivar: _datePickerMode
@property (nonatomic) NSInteger datePickerStyle; // ivar: _datePickerStyle
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange; // ivar: _dateRange
@property (readonly, nonatomic) NSCalendar *effectiveCalendar;
@property (readonly, nonatomic) NSDate *effectiveDate;
@property (readonly, copy, nonatomic) NSDateComponents *effectiveDateComponents;
@property (readonly, nonatomic) NSLocale *effectiveLocale;
@property (readonly, nonatomic) NSCalendar *formattingCalendar;
@property (retain, nonatomic) NSDateComponents *lastSelectedDateComponents; // ivar: _lastSelectedDateComponents
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSDate *maximumDate;
@property (retain, nonatomic) NSDate *minimumDate;
@property (nonatomic) NSInteger minuteInterval; // ivar: _minuteInterval
@property (nonatomic) BOOL roundsToMinuteInterval; // ivar: _roundsToMinuteInterval
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)_dateForRoundingDateToMinuteInterval:(id)arg0 ;
-(id)createDatePickerRepresentingDataModel;
-(id)createDatePickerRepresentingDataModelForMode:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(id)init;
-(void)_setupDerivedLocaleAndCalendars;
-(void)resetForCurrentLocaleOrCalendarChange;


@end


#endif