// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYEPISODEFOOTERCELL_H
#define VUILIBRARYEPISODEFOOTERCELL_H

@class UICollectionViewCell, NSNumber, NSString;
@protocol VUILibraryEpisodeFooterCellDelegate;


#import "VUISeparatorView.h"
#import "VUIButton.h"

@interface VUILibraryEpisodeFooterCell : UICollectionViewCell

@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (weak, nonatomic) NSObject<VUILibraryEpisodeFooterCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSNumber *storeID; // ivar: _storeID
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) VUIButton *titleButton; // ivar: _titleButton
@property (retain, nonatomic) VUISeparatorView *topSeparatorView; // ivar: _topSeparatorView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif