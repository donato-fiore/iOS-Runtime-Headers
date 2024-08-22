// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAUTOROTATINGWINDOW_H
#define UIAUTOROTATINGWINDOW_H



#import "UIApplicationRotationFollowingWindow.h"

@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {
    NSInteger _interfaceOrientation;
    BOOL _unknownOrientation;
}




-(id)_initWithFrame:(struct CGRect )arg0 attached:(BOOL)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 windowScene:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg0 ;
-(void)commonInit;
-(void)updateForOrientation:(NSInteger)arg0 ;


@end


#endif