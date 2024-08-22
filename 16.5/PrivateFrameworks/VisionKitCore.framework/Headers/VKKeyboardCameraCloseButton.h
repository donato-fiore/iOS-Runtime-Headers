// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKKEYBOARDCAMERACLOSEBUTTON_H
#define VKKEYBOARDCAMERACLOSEBUTTON_H

@class UIView, UIButton, UIVisualEffectView;



@interface VKKeyboardCameraCloseButton : UIView {
    UIButton *_button;
    UIVisualEffectView *_effectView;
}


@property (readonly, nonatomic) UIButton *uiButton;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif