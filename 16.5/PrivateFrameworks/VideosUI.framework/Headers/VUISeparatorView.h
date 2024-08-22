// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISEPARATORVIEW_H
#define VUISEPARATORVIEW_H

@class UIColor, UIView;


#import "VUIBaseView.h"

@interface VUISeparatorView : VUIBaseView

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UIColor *darkColor; // ivar: _darkColor
@property (retain, nonatomic) UIView *line; // ivar: _line
@property (nonatomic) CGFloat lineHeight; // ivar: _lineHeight


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_updateLineColor;
-(void)initializeVUISeparatorView;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif