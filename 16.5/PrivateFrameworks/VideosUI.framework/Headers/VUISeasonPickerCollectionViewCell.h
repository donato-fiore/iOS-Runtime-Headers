// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISEASONPICKERCOLLECTIONVIEWCELL_H
#define VUISEASONPICKERCOLLECTIONVIEWCELL_H

@class VUIImageView;


#import "VUIListCollectionViewCell.h"
#import "VUISeparatorView.h"
#import "VUILabel.h"

@interface VUISeasonPickerCollectionViewCell : VUIListCollectionViewCell

@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (retain, nonatomic) VUIImageView *seasonImageView; // ivar: _seasonImageView
@property (retain, nonatomic) VUILabel *secondSubtitleLabel; // ivar: _secondSubtitleLabel
@property (retain, nonatomic) VUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) VUISeparatorView *topSeparatorView; // ivar: _topSeparatorView


+(void)configureSeasonPickerCell:(id)arg0 withMedia:(id)arg1 traitCollection:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif