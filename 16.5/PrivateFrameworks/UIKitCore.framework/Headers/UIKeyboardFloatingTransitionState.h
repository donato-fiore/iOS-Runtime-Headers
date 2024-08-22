// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDFLOATINGTRANSITIONSTATE_H
#define UIKEYBOARDFLOATINGTRANSITIONSTATE_H


#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIView.h"

@interface UIKeyboardFloatingTransitionState : NSObject

@property (copy, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGAffineTransform finalInputViewTransform; // ivar: _finalInputViewTransform
@property (nonatomic) CGAffineTransform initialInputViewTransform; // ivar: _initialInputViewTransform
@property (retain, nonatomic) UIView *inputView; // ivar: _inputView
@property (nonatomic) CGRect inputViewFrame; // ivar: _inputViewFrame
@property (nonatomic) UIEdgeInsets platterInsets; // ivar: _platterInsets
@property (nonatomic) CGRect platterViewFrame; // ivar: _platterViewFrame
@property (nonatomic) CGPoint scale; // ivar: _scale




@end


#endif