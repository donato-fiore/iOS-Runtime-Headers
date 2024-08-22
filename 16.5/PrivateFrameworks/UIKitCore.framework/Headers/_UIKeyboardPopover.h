// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDPOPOVER_H
#define _UIKEYBOARDPOPOVER_H

@protocol UITextEffectsOrdering;


#import "UIView.h"
#import "_UIPopoverView.h"

@interface _UIKeyboardPopover : UIView <UITextEffectsOrdering>

 {
    _UIPopoverView *_popoverView;
}




-(id)initWithPopoverView:(id)arg0 ;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(void)_setRenderConfig:(id)arg0 ;


@end


#endif