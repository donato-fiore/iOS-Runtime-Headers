// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTPAGEPLACEHOLDERVIEW_H
#define SKUIPRODUCTPAGEPLACEHOLDERVIEW_H

@class UIView, UIImageView, UILabel, UIColor;



@interface SKUIProductPagePlaceholderView : UIView {
    UIImageView *_imageView;
    UILabel *_label;
}


@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithPlaceholderString:(id)arg0 isPad:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif