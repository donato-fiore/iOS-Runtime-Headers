// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDDATECOMPONENTSFORMATTER_H
#define CNVCARDDATECOMPONENTSFORMATTER_H

@class NSFormatter, NSCalendar, NSDateFormatter;



@interface CNVCardDateComponentsFormatter : NSFormatter {
    NSCalendar *_gregorianCalendar;
    NSDateFormatter *_compactYearMonthDayDateFormatter;
    NSDateFormatter *_compactYearMonthDayDateHourMinuteSecondZFormatter;
    NSDateFormatter *_monthDayDateFormatter;
    NSDateFormatter *_yearMonthDayDateFormatter;
    NSDateFormatter *_yearMonthDayDateHourMinuteSecondZFormatter;
}




+(id)dateComponentsFromALTBDAYString:(id)arg0 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)altBDAYStringFromDateComponents:(id)arg0 ;
-(id)compactYearMonthDayDateFormatter;
-(id)compactYearMonthDayDateHourMinuteSecondZFormatter;
-(id)dateComponentsFromALTBDAYString:(id)arg0 ;
-(id)dateComponentsFromString:(id)arg0 ;
-(id)gregorianCalendar;
-(id)monthDayDateFormatter;
-(id)monthDayStringFromDateComponents:(id)arg0 ;
-(id)stringForComponentValue:(NSInteger)arg0 format:(id)arg1 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromDateComponents:(id)arg0 ;
-(id)yearMonthDayDateFormatter;
-(id)yearMonthDayDateHourMinuteSecondZFormatter;
-(id)yearMonthDayStringFromDateComponents:(id)arg0 ;


@end


#endif