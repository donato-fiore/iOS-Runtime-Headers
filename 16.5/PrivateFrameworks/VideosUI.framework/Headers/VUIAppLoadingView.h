// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIAPPLOADINGVIEW_H
#define VUIAPPLOADINGVIEW_H

@class UIView, UIWindow, UIImageView, UIVisualEffectView;


#import "VUIBaseView.h"
#import "VUIActivityIndicatorView.h"

@interface VUIAppLoadingView : VUIBaseView {
    UIView *_wallpaperView;
    UIWindow *_overlayWindow;
    BOOL _hiding;
    CGFloat _timeout;
    CGFloat _delay;
    UIImageView *_maskView;
    UIVisualEffectView *_visualEffectView;
}


@property (retain, nonatomic) VUIActivityIndicatorView *spinner; // ivar: _spinner


+(id)loadingScreen;
-(BOOL)isVisible;
-(CGFloat)hideAnimationDuration;
-(id)initWithFrame:(struct CGRect )arg0 templateImage:(id)arg1 ;
-(void)didRotate:(id)arg0 ;
-(void)hide;
-(void)setLoadingDelay:(CGFloat)arg0 ;
-(void)setTimeout:(CGFloat)arg0 ;
-(void)showOverKeyWindow;
-(void)showOverKeyWindowWithSpinnerOnly:(BOOL)arg0 ;
-(void)timeout;


@end


#endif