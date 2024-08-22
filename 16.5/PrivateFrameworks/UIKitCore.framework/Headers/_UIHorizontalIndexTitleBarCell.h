// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIHORIZONTALINDEXTITLEBARCELL_H
#define _UIHORIZONTALINDEXTITLEBARCELL_H



#import "UICollectionViewCell.h"
#import "_UIFocusFastScrollingIndexBarEntry.h"
#import "UIView.h"
#import "UILabel.h"

@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell

@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry; // ivar: _entry
@property (retain, nonatomic) UIView *roundedCornersBackground; // ivar: _roundedCornersBackground
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)cellFont;
-(BOOL)_isAnotherIndexTitleCellFocused;
-(CGFloat)_maxCellWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_updateColors;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForEntry:(id)arg0 ;


@end


#endif