// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKBIGGERBUTTON_H
#define TSKBIGGERBUTTON_H

@class UIButton;



@interface TSKBiggerButton : UIButton {
    BOOL mHitTestWithOutsets;
    UIEdgeInsets mOutsets;
}




+(id)tsdPlatformButtonWithFrame:(struct CGRect )arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)setHitBufferTop:(CGFloat)arg0 left:(CGFloat)arg1 bottom:(CGFloat)arg2 right:(CGFloat)arg3 ;


@end


#endif