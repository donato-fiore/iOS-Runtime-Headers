// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNANIMATIONDELAYEDCALLBACK_H
#define KNANIMATIONDELAYEDCALLBACK_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface KNAnimationDelayedCallback : NSObject {
    CGFloat _delay;
    CGFloat _startTime;
    id *_target;
    SEL _selector;
    id *_object;
    id *_block;
    NSObject<OS_dispatch_source> *_sourceTimer;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


// -(id)initWithBlock:(id)arg0 delay:(unk)arg1  ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 delay:(CGFloat)arg3 ;
-(void)cancel;
-(void)p_performSelectorOnTarget;
-(void)pause;
-(void)resume;
-(void)run;


@end


#endif