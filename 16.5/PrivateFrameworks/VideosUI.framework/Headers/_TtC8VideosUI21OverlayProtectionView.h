// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI21OVERLAYPROTECTIONVIEW_H
#define _TTC8VIDEOSUI21OVERLAYPROTECTIONVIEW_H



#import "VUIBaseView.h"

@interface _TtC8VideosUI21OverlayProtectionView : VUIBaseView {
    ? legibilityGradientLayer;
    ? legibilityBlurView;
    ? legibilityBlurMaskLayer;
    ? cornerBlurView;
    ? cornerBlurMaskLayer;
    ? $__lazy_storage_$_legibilityGradientLayerDelegate;
    ? $__lazy_storage_$_legibilityBlurMaskLayerDelegate;
    ? $__lazy_storage_$_cornerBlurMaskLayerDelegate;
    ? protectionHeight;
    ? cornerRadius;
}




-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;


@end


#endif