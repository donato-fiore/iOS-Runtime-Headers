// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOUNTERTIMEVIEW_H
#define SKUICOUNTERTIMEVIEW_H

@class UIView, NSDate, UIColor, UIFont;


#import "SKUIClientContext.h"
#import "_SKUICounterTimeFieldView.h"

@interface SKUICounterTimeView : UIView {
    SKUIClientContext *_clientContext;
    _SKUICounterTimeFieldView *_daysFieldView;
    _SKUICounterTimeFieldView *_hoursFieldView;
    NSInteger _lastTimeValue;
    _SKUICounterTimeFieldView *_minutesFieldView;
    _SKUICounterTimeFieldView *_secondsFieldView;
}


@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (nonatomic) NSUInteger visibleFields; // ivar: _visibleFields


-(CGFloat)_fieldSpacingForFieldCount:(NSInteger)arg0 fieldWidth:(CGFloat)arg1 totalWidth:(CGFloat)arg2 ;
-(id)_allFieldViews;
-(id)_visibleFieldViews;
-(id)initWithClientContext:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setValuesUsingTimestamp:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)reloadTimeValue;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif