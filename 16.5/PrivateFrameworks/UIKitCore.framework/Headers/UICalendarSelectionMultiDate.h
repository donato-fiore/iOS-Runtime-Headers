// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICALENDARSELECTIONMULTIDATE_H
#define UICALENDARSELECTIONMULTIDATE_H

@class NSMutableArray, NSArray;
@protocol UICalendarSelectionMultiDateDelegate;


#import "UICalendarSelection.h"

@interface UICalendarSelectionMultiDate : UICalendarSelection {
    NSMutableArray *_selectedDates;
    ? _delegateImplements;
}


@property (readonly, weak, nonatomic) NSObject<UICalendarSelectionMultiDateDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *selectedDates;


-(BOOL)canSelectDate:(id)arg0 ;
-(BOOL)highlightsToday;
-(BOOL)shouldDeselectDate:(id)arg0 ;
-(id)_removeSelectedDatesSatisfyingPredicate:(id)arg0 ;
-(id)_sanitizeDateComponents:(id)arg0 calendar:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
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