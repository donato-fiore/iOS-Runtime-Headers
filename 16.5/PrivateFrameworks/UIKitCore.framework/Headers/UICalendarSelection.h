// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICALENDARSELECTION_H
#define UICALENDARSELECTION_H

@class NSString;
@protocol _UICalendarSelection;

#import <Foundation/Foundation.h>

#import "UICalendarView.h"

@interface UICalendarSelection : NSObject <_UICalendarSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UICalendarView *view; // ivar: _view


-(BOOL)canSelectDate:(id)arg0 ;
-(BOOL)highlightsToday;
-(BOOL)shouldDeselectDate:(id)arg0 ;
-(id)_init;
-(void)didChangeAvailableDateRange:(id)arg0 ;
-(void)didChangeCalendar:(id)arg0 ;
-(void)didChangeVisibleMonth:(id)arg0 ;
-(void)didDeselectDate:(id)arg0 ;
-(void)didMoveToCalendarView;
-(void)didSelectDate:(id)arg0 ;
-(void)selectAllDatesAnimated:(BOOL)arg0 ;
-(void)updateSelectableDates;
-(void)willMoveToCalendarView:(id)arg0 ;


@end


#endif