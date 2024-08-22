// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSUIORIENTEDIMAGEVIEW_H
#define _SBSUIORIENTEDIMAGEVIEW_H

@class SBFTouchPassThroughView, UIImageView, UIImage;



@interface _SBSUIOrientedImageView : SBFTouchPassThroughView {
    UIImageView *_imageView;
}


@property (retain, nonatomic) UIImage *landscapeImage; // ivar: _landscapeImage
@property (retain, nonatomic) UIImage *portraitImage; // ivar: _portraitImage


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif