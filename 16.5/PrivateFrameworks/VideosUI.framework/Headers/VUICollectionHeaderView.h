// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUICOLLECTIONHEADERVIEW_H
#define VUICOLLECTIONHEADERVIEW_H

@class UICollectionReusableView, UIButton, _TVImageView;


#import "VUICollectionHeaderViewLayout.h"
#import "VUISeparatorView.h"
#import "VUILabel.h"

@interface VUICollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIButton *headerButton; // ivar: _headerButton
@property (retain, nonatomic) _TVImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) VUICollectionHeaderViewLayout *layout; // ivar: _layout
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *subtitleTextView; // ivar: _subtitleTextView
@property (retain, nonatomic) VUILabel *titleTextView; // ivar: _titleTextView


+(id)configureCollectionHeaderViewWithTitle:(id)arg0 subtitle:(id)arg1 buttonString:(id)arg2 existingView:(id)arg3 ;
-(id)_buttonWithString:(id)arg0 existingButton:(id)arg1 ;
-(struct CGSize )_layoutWithSize:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_selectButtonAction:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif