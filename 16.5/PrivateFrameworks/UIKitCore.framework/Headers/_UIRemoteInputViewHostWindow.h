// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIREMOTEINPUTVIEWHOSTWINDOW_H
#define _UIREMOTEINPUTVIEWHOSTWINDOW_H



#import "UIAutoRotatingWindow.h"

@interface _UIRemoteInputViewHostWindow : UIAutoRotatingWindow



+(BOOL)_isSecure;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_isHostedInAnotherProcess;
-(BOOL)_isRemoteInputHostWindow;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_wantsSceneAssociation;
-(BOOL)canBecomeKeyWindow;
-(BOOL)inhibitSetupOrientation;
-(BOOL)isInternalWindow;
-(CGFloat)_adjustedWindowLevelFromLevel:(CGFloat)arg0 ;
-(NSInteger)_orientationForRootTransform;
-(NSInteger)_orientationForSceneTransform;
-(NSInteger)_orientationForViewTransform;
-(id)initWithWindowScene:(id)arg0 ;


@end


#endif