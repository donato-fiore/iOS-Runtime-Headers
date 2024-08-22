// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINPUTVIEWANIMATIONASSERTION_H
#define _UIINPUTVIEWANIMATIONASSERTION_H


#import <Foundation/Foundation.h>

#import "UIKeyboardSceneDelegate.h"
#import "UIInputViewAnimationStyle.h"

@interface _UIInputViewAnimationAssertion : NSObject

@property (nonatomic) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) int direction; // ivar: _direction
@property (weak, nonatomic) UIKeyboardSceneDelegate *sceneDelegate; // ivar: _sceneDelegate
@property (retain, nonatomic) UIInputViewAnimationStyle *style; // ivar: _style
@property (nonatomic) BOOL valid; // ivar: _valid


+(id)_assertionWithDirection:(int)arg0 animated:(BOOL)arg1 sceneDelegate:(id)arg2 ;


@end


#endif