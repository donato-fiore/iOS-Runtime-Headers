// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUIWALLPAPERPROGRESSHUD_H
#define SBSUIWALLPAPERPROGRESSHUD_H

@class UIView, _UIBackdropView, UIActivityIndicatorView, UILabel;



@interface SBSUIWallpaperProgressHUD : UIView {
    _UIBackdropView *_backdropView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)hide;
-(void)showMessage:(id)arg0 inView:(id)arg1 ;


@end


#endif