// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIVIEWRUNNINGANIMATIONENTRY_H
#define UIVIEWRUNNINGANIMATIONENTRY_H

@protocol UIIntervalAnimating, OS_dispatch_queue, UIViewAnimationComposing;

#import <Foundation/Foundation.h>

#import "UIViewAnimationState.h"

@interface UIViewRunningAnimationEntry : NSObject {
    id<UIIntervalAnimating> *_animation;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    id *_completionCallback;
    BOOL _invalidated;
}


@property (weak, nonatomic) UIViewAnimationState *animationState; // ivar: _animationState
@property (retain, nonatomic) NSObject<UIViewAnimationComposing> *composer; // ivar: _composer
@property (nonatomic) BOOL invalidated;
@property (nonatomic) BOOL running; // ivar: _running


// -(id)initWithAnimation:(id)arg0 completion:(id)arg1 composer:(unk)arg2  ;
-(void)performCompletionCallbackFinished:(BOOL)arg0 ;
-(void)performWithLock:(id)arg0 ;
-(void)performWithoutLock:(id)arg0 ;
-(void)setCompletionCallback:(id)arg0 ;


@end


#endif