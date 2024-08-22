// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISYSTEMGESTUREWINDOW_H
#define _UISYSTEMGESTUREWINDOW_H

@class UIRootWindow;


#import "UISystemGestureView.h"

@interface _UISystemGestureWindow : UIRootWindow {
    UISystemGestureView *_systemGestureView;
}




+(BOOL)_isSecure;
-(BOOL)_appearsInLoupe;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_isSystemGestureWindow;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)canBecomeKeyWindow;
-(id)_focusResponder;
-(id)_systemGestureView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithDisplay:(id)arg0 ;
-(id)initWithDisplayConfiguration:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;


@end


#endif