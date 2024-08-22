// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIOFFERVIEW_H
#define VUIOFFERVIEW_H

@class UIView;


#import "VUIBaseView.h"
#import "VUILabel.h"
#import "VUISeparatorView.h"

@interface VUIOfferView : VUIBaseView

@property (retain, nonatomic) UIView *appIconView; // ivar: _appIconView
@property (retain, nonatomic) UIView *channelImageBackgroundView; // ivar: _channelImageBackgroundView
@property (retain, nonatomic) VUILabel *channelNameLabel; // ivar: _channelNameLabel
@property (retain, nonatomic) UIView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isEntitled; // ivar: _isEntitled
@property (retain, nonatomic) UIView *logoView; // ivar: _logoView
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) CGFloat secondLineBaselineMargin; // ivar: _secondLineBaselineMargin
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) VUILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat topPartAspectRatio; // ivar: _topPartAspectRatio
@property (retain, nonatomic) UIView *versionsButton; // ivar: _versionsButton


-(BOOL)_shouldDisplaySeparator;
-(CGFloat)_chinHeightForSize:(struct CGSize )arg0 ;
-(struct CGSize )computeSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)layoutOfferSubviewsWithSize:(struct CGSize )arg0 ;
-(void)prepareForCellReuse;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;


@end


#endif