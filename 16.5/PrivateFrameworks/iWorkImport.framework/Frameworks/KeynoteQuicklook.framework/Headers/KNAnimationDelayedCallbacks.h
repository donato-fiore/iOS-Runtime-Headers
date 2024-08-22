// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNANIMATIONDELAYEDCALLBACKS_H
#define KNANIMATIONDELAYEDCALLBACKS_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface KNAnimationDelayedCallbacks : NSObject {
    NSMutableSet *_delayedCallbacks;
}




-(id)init;
// -(id)performBlock:(id)arg0 afterDelay:(unk)arg1  ;
-(id)performSelector:(SEL)arg0 onTarget:(id)arg1 withObject:(id)arg2 afterDelay:(CGFloat)arg3 ;
-(void)cancelAllCallbacks;
-(void)p_setupCallback:(id)arg0 ;
-(void)pauseAllCallbacks;
-(void)removeCallback:(id)arg0 ;
-(void)resumeAllCallbacks;


@end


#endif