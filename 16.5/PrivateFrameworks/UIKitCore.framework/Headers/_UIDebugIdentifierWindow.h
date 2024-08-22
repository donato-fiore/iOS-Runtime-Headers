// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDEBUGIDENTIFIERWINDOW_H
#define _UIDEBUGIDENTIFIERWINDOW_H



#import "UIWindow.h"
#import "UILabel.h"

@interface _UIDebugIdentifierWindow : UIWindow {
    UILabel *_sceneIdentifierLabel;
}




-(BOOL)_ignoresHitTest;
-(BOOL)canBecomeKeyWindow;
-(id)initWithWindowScene:(id)arg0 ;
-(void)_updateSceneIdentifierLabel;


@end


#endif