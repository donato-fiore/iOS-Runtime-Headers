// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLEVIEWCELLBADGE_H
#define _UITABLEVIEWCELLBADGE_H

@class UIFont, NSString;


#import "UIView.h"
#import "UILabel.h"
#import "UIColor.h"

@interface _UITableViewCellBadge : UIView

@property (retain, nonatomic) UILabel *badgeTextLabel; // ivar: _badgeTextLabel
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (copy, nonatomic) NSString *text;


-(BOOL)isHighlighted;
-(CGFloat)minHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_sizeToFit;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif