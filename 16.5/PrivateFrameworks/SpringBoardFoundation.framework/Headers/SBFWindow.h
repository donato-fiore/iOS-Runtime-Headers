// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFWINDOW_H
#define SBFWINDOW_H

@class UIWindow, NSNumber;


#import "_SBFKeyWindowStack.h"

@interface SBFWindow : UIWindow {
    NSNumber *_isHiddenOverride;
}


@property (retain, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack; // ivar: _keyWindowStack


-(BOOL)_canBecomeKeyWindow;
-(BOOL)_isEffectivelyHiddenForKeyWindowStack;
-(BOOL)isContentHidden;
-(BOOL)isInterfaceAutorotationDisabled;
-(id)autorotationPreventionReasons;
-(id)hostedSceneIdentityTokens;
-(void)_makeKeyFromKeyWindowStack;
-(void)_resignKeyFromKeyWindowStack;
-(void)dealloc;
-(void)makeKeyWindow;
-(void)resignAsKeyWindow;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif