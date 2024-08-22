// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALENDARHEADERVIEW_H
#define _UICALENDARHEADERVIEW_H

@class NSDateFormatter, NSString;
@protocol UIPointerInteractionDelegate, _UICalendarHeaderViewDelegate;


#import "UIView.h"
#import "_UIDatePickerLinkedLabel.h"
#import "UIImageView.h"
#import "UIButton.h"
#import "_UICalendarDataModel.h"

@interface _UICalendarHeaderView : UIView <UIPointerInteractionDelegate>

 {
    NSDateFormatter *_longFormatter;
    NSDateFormatter *_shortFormatter;
    UIView *_monthYearContainer;
    _UIDatePickerLinkedLabel *_monthYearLabel;
    UIImageView *_chevron;
    UIButton *_previousMonthButton;
    UIButton *_nextMonthButton;
}


@property (retain, nonatomic) _UICalendarDataModel *dataModel; // ivar: _dataModel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UICalendarHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDataModel:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustMonth:(id)arg0 ;
-(void)_didTap:(id)arg0 ;
-(void)_setupDateFormatter;
-(void)_setupViewHierarchy;
-(void)_updateFont;
-(void)_updateMonthButtonEnablement;
-(void)_updateMonthButtonVisibility;
-(void)_updateMonthYearLabel;
-(void)didMoveToWindow;
-(void)didUpdateCalendar;
-(void)didUpdateDateRange;
-(void)didUpdateFontDesign;
-(void)didUpdateLocale;
-(void)didUpdateTimeZone;
-(void)didUpdateVisibleMonth;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif