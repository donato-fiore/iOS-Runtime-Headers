// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDDICTATIONMENU_H
#define UIKEYBOARDDICTATIONMENU_H



#import "UIKeyboardMenuView.h"

@interface UIKeyboardDictationMenu : UIKeyboardMenuView



+(id)activeInstance;
+(id)sharedInstance;
-(BOOL)centerPopUpOverKey;
-(BOOL)usesDimmingView;
-(BOOL)usesTable;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )preferredSize;
-(void)cleanupForFadeOrHide;
-(void)fade;
-(void)fadeWithDelay:(CGFloat)arg0 ;
-(void)hide;
-(void)performShowAnimation;
-(void)willShow;


@end


#endif