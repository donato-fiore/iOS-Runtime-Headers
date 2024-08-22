// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISTACKVIEWITEMVIEW_H
#define SKUISTACKVIEWITEMVIEW_H

@class UIView, UIColor, UIImage;



@interface SKUIStackViewItemView : UIView

@property (copy, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL shouldFlipImageHorizontal; // ivar: _shouldFlipImageHorizontal
@property (nonatomic) BOOL shouldFlipImageVertical; // ivar: _shouldFlipImageVertical


-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif