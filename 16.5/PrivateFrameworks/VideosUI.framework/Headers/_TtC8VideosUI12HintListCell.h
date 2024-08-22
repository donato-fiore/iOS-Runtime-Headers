// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI12HINTLISTCELL_H
#define _TTC8VIDEOSUI12HINTLISTCELL_H



#import "VUIBaseCollectionViewCell.h"

@interface _TtC8VideosUI12HintListCell : VUIBaseCollectionViewCell {
    ? layout;
    ? shouldShowBottomSeparator;
    ? titleLabel;
    ? $__lazy_storage_$_accessoryImageView;
    ? $__lazy_storage_$_bottomSeparatorView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )vui_sizeThatFits:(struct CGSize )arg0 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)vui_setHighlighted:(BOOL)arg0 ;


@end


#endif