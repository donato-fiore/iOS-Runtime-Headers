// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDWINDOWSCENE_H
#define _UIKEYBOARDWINDOWSCENE_H

@class UIScreenBasedWindowScene;



@interface _UIKeyboardWindowScene : UIScreenBasedWindowScene



+(BOOL)alwaysKeepContexts;
+(BOOL)autoInvalidates;
+(BOOL)shouldAllowComponents;
-(BOOL)_affectsScreenOrientation;
-(id)_fixupInheritedSettings:(id)arg0 ;
-(id)initWithScreen:(id)arg0 session:(id)arg1 lookupKey:(id)arg2 ;


@end


#endif