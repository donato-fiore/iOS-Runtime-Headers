// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIWINDOWSYSTEMOVERLAYWINDOW_H
#define _UIWINDOWSYSTEMOVERLAYWINDOW_H



#import "UIWindow.h"

@interface _UIWindowSystemOverlayWindow : UIWindow



+(BOOL)_isSecure;
+(BOOL)_isSystemWindow;
+(BOOL)_needsPassthroughInteraction;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg0 ;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_isSettingFirstResponder;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(BOOL)canBecomeKeyWindow;
-(BOOL)isInternalWindow;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif