// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICALENDARSELECTIONSINGLEDATE_H
#define UICALENDARSELECTIONSINGLEDATE_H

@class NSDateComponents;
@protocol UICalendarSelectionSingleDateDelegate;


#import "UICalendarSelection.h"

@interface UICalendarSelectionSingleDate : UICalendarSelection {
    ? _delegateImplements;
}


@property (nonatomic) BOOL _selectionFollowsMonthSelection; // ivar: __selectionFollowsMonthSelection
@property (readonly, weak, nonatomic) NSObject<UICalendarSelectionSingleDateDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDateComponents *selectedDate; // ivar: _selectedDate


-(BOOL)canSelectDate:(id)arg0 ;
-(BOOL)shouldDeselectDate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_sendDelegateForSelectedDateChange;
-(void)didChangeAvailableDateRange:(id)arg0 ;
-(void)didChangeCalendar:(id)arg0 ;
-(void)didChangeVisibleMonth:(id)arg0 ;
-(void)didDeselectDate:(id)arg0 ;
-(void)didMoveToCalendarView;
-(void)didSelectDate:(id)arg0 ;
-(void)selectAllDatesAnimated:(BOOL)arg0 ;
-(void)willMoveToCalendarView:(id)arg0 ;


@end


#endif