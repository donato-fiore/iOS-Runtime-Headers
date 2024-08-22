// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALENDARDATAMODEL_H
#define _UICALENDARDATAMODEL_H

@class NSDateInterval, NSCalendar, NSLocale, NSTimeZone, NSString;

#import <Foundation/Foundation.h>

#import "_UIDatePickerCalendarMonth.h"

@interface _UICalendarDataModel : NSObject

@property (copy, nonatomic) NSDateInterval *availableDateRange; // ivar: _availableDateRange
@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSCalendar *effectiveCalendar; // ivar: _effectiveCalendar
@property (readonly, nonatomic) NSLocale *effectiveLocale; // ivar: _effectiveLocale
@property (readonly, nonatomic) NSTimeZone *effectiveTimeZone;
@property (retain, nonatomic) NSString *fontDesign; // ivar: _fontDesign
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth; // ivar: _visibleMonth


-(id)init;
-(void)_deriveEffectiveLocaleAndCalendarIfNeeded;


@end


#endif