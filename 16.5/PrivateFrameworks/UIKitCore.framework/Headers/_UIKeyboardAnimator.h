// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDANIMATOR_H
#define _UIKEYBOARDANIMATOR_H


#import <Foundation/Foundation.h>

#import "_UIKeyboardAnimatorAnimationStyle.h"

@interface _UIKeyboardAnimator : NSObject {
    _UIKeyboardAnimatorAnimationStyle *_style;
}




-(id)init;
-(void)applyToKeyboardOperations:(id)arg0 ;
-(void)completeAnimationWithState:(id)arg0 ;
// -(void)performAnimation:(id)arg0 afterStarted:(unk)arg1 onCompletion:(id)arg2  ;
-(void)prepareForAnimationWithState:(id)arg0 ;
-(void)runAnimationWithState:(id)arg0 ;


@end


#endif