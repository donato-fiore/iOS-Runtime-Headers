// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI13SEPARATORVIEW_H
#define _TTC5TEAUI13SEPARATORVIEW_H

@class UIView, UIColor;



@interface _TtC5TeaUI13SeparatorView : UIView {
    ? layoutStyle;
    ? visibilityStyle;
    ? isHighlighted;
    ? isSelected;
    ? hidesOnSelection;
    ? _backgroundColor;
    ? thickness;
}


@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) BOOL hidden;


-(BOOL)isHidden;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif