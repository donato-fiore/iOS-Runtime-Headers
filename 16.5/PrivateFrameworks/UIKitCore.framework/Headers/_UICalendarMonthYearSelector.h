// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALENDARMONTHYEARSELECTOR_H
#define _UICALENDARMONTHYEARSELECTOR_H

@protocol _UICalendarMonthYearSelectorDelegate;


#import "UIView.h"
#import "UIDatePicker.h"
#import "_UICalendarDataModel.h"

@interface _UICalendarMonthYearSelector : UIView {
    UIDatePicker *_datePicker;
}


@property (retain, nonatomic) _UICalendarDataModel *dataModel; // ivar: _dataModel
@property (weak, nonatomic) NSObject<_UICalendarMonthYearSelectorDelegate> *delegate; // ivar: _delegate


-(id)initWithDataModel:(id)arg0 ;
-(void)_didSelectDate:(id)arg0 ;
-(void)_setupViewHierarchy;
-(void)didUpdateCalendar;
-(void)didUpdateLocale;
-(void)didUpdateTimeZone;
-(void)didUpdateVisibleMonth;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)setSelectedMonth:(id)arg0 ;
-(void)setSelectedMonth:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif