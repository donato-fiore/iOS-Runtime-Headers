// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICROSSFADINGTABBARBUTTON_H
#define SKUICROSSFADINGTABBARBUTTON_H

@class UIControl, UILabel, UIImageView, UIImage, NSString;


#import "_Badge.h"

@interface SKUICrossFadingTabBarButton : UIControl {
    UILabel *_selectedTitleLabel;
    UIImageView *_selectedImageView;
    UILabel *_standardTitleLabel;
    UIImageView *_standardImageView;
    _Badge *_badge;
}


@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImage *selectedImage; // ivar: _selectedImage
@property (nonatomic) CGFloat selectionProgress; // ivar: _selectionProgress
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_positionBadge;
-(void)_setBadgeValue:(id)arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif