// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPRODUCTPAGEHEADERLABEL_H
#define SKUIPRODUCTPAGEHEADERLABEL_H

@class UIView, UIImage, NSString, UIColor, NSArray;



@interface SKUIProductPageHeaderLabel : UIView {
    UIImage *_contentRatingImage;
}


@property (retain, nonatomic) NSString *contentRating; // ivar: _contentRating
@property (nonatomic) BOOL isPad; // ivar: _isPad
@property (retain, nonatomic) UIColor *ratingColor; // ivar: _ratingColor
@property (retain, nonatomic) NSArray *secondaryContentRatingImages; // ivar: _secondaryContentRatingImages
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(CGFloat)secondaryImageWidth;
-(id)_imageForContentRating:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct __CTFramesetter *)_newTextFramesetter;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif