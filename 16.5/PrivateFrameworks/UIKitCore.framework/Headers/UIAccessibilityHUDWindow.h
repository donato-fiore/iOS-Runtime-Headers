// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYHUDWINDOW_H
#define UIACCESSIBILITYHUDWINDOW_H



#import "UIApplicationRotationFollowingWindow.h"

@interface UIAccessibilityHUDWindow : UIApplicationRotationFollowingWindow



+(id)sharedWindow;
+(void)createSharedWindowWithScene:(id)arg0 ;
+(void)removeSharedWindow;
-(CGFloat)_adjustedWindowLevelFromLevel:(CGFloat)arg0 ;


@end


#endif