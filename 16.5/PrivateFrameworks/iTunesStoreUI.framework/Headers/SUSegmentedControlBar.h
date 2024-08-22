// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSEGMENTEDCONTROLBAR_H
#define SUSEGMENTEDCONTROLBAR_H

@class UIView, UIControl, _UIBackdropView;



@interface SUSegmentedControlBar : UIView {
    UIControl *_control;
    _UIBackdropView *_backdropView;
    UIView *_separatorView;
}




-(id)initWithSegmentedControl:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif