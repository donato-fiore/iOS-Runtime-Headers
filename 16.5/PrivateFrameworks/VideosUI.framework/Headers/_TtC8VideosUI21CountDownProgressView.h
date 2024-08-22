// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI21COUNTDOWNPROGRESSVIEW_H
#define _TTC8VIDEOSUI21COUNTDOWNPROGRESSVIEW_H

@class UIView;



@interface _TtC8VideosUI21CountDownProgressView : UIView {
    ? duration;
    ? lineWidth;
    ? lineColor;
    ? image;
    ? imageTintColor;
    ? imageSymbolConfig;
    ? action;
    ? circle;
    ? $__lazy_storage_$_imageView;
    ? isAnimating;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;


@end


#endif