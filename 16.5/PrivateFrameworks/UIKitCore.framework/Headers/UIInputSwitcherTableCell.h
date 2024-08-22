// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTSWITCHERTABLECELL_H
#define UIINPUTSWITCHERTABLECELL_H



#import "UITableViewCell.h"
#import "UIInputSwitcherTableCellBackgroundView.h"

@interface UIInputSwitcherTableCell : UITableViewCell

@property (retain, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView;
@property (nonatomic, getter=isFirst) BOOL first; // ivar: _first
@property (nonatomic) UIEdgeInsets interactiveInsets; // ivar: _interactiveInsets
@property (nonatomic, getter=isLast) BOOL last; // ivar: _last
@property (nonatomic) BOOL usesDarkTheme; // ivar: _usesDarkTheme
@property (nonatomic) BOOL usesStraightLeftEdge; // ivar: _usesStraightLeftEdge


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateRoundedCorners;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateSelectionWithPoint:(struct CGPoint )arg0 ;


@end


#endif