// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDBUTTON_H
#define UIKEYBOARDBUTTON_H



#import "UIButton.h"

@interface UIKeyboardButton : UIButton

@property (readonly, nonatomic) NSInteger keyboardButtonStyle; // ivar: _keyboardButtonStyle


-(id)initWithKeyboardButtonStyle:(NSInteger)arg0 ;


@end


#endif