// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUREPEATINGACTOR_H
#define TUREPEATINGACTOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TURepeatingAction.h"

@interface TURepeatingActor : NSObject

@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (copy, nonatomic) id *attemptNextIterationBlock; // ivar: _attemptNextIterationBlock
@property (retain, nonatomic) TURepeatingAction *currentRepeatingAction; // ivar: _currentRepeatingAction
@property (nonatomic, getter=isCurrentlyPerformingAction) BOOL currentlyPerformingAction; // ivar: _currentlyPerformingAction
@property (retain, nonatomic) TURepeatingAction *pendingRepeatingAction; // ivar: _pendingRepeatingAction
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isStopped) BOOL stopped; // ivar: _stopped


-(BOOL)_hasIterationsRemaining;
-(id)init;
-(void)_attemptNextIteration;
-(void)_beginRepeatingAction:(id)arg0 ;
-(void)_completeWithDidFinish:(BOOL)arg0 ;
-(void)_stopWithDidFinish:(BOOL)arg0 ;
// -(void)beginRepeatingAction:(id)arg0 iterations:(unk)arg1 completion:(NSUInteger)arg2  ;
// -(void)beginRepeatingAction:(id)arg0 iterations:(unk)arg1 pauseDurationBetweenIterations:(NSUInteger)arg2 completion:(CGFloat)arg3  ;
-(void)stop;


@end


#endif