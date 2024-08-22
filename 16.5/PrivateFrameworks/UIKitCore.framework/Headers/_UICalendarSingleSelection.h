// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALENDARSINGLESELECTION_H
#define _UICALENDARSINGLESELECTION_H

@class NSDateComponents;
@protocol _UICalendarSingleSelectionDelegate;


#import "UICalendarSelection.h"

@interface _UICalendarSingleSelection : UICalendarSelection {
    ? _delegateImplements;
}


@property (readonly, nonatomic) BOOL allowsNoDate; // ivar: _allowsNoDate
@property (readonly, weak, nonatomic) NSObject<_UICalendarSingleSelectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDateComponents *selectedDate; // ivar: _selectedDate
@property (nonatomic) BOOL selectionFollowsMonthSelection; // ivar: _selectionFollowsMonthSelection


-(BOOL)canSelectDate:(id)arg0 ;
-(BOOL)shouldDeselectDate:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 allowsNoDate:(BOOL)arg1 ;
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