// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSTATEMACHINE_H
#define WFSTATEMACHINE_H

@class NSMutableArray;
@protocol OS_os_activity, WFState, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFDispatchSourceTimer.h"

@interface WFStateMachine : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (nonatomic) BOOL blocksTransitionsOnInvalidation; // ivar: _blocksTransitionsOnInvalidation
@property (retain) NSObject<WFState> *currentState; // ivar: _currentState
@property (readonly, nonatomic) NSMutableArray *eventHistory; // ivar: _eventHistory
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (nonatomic) BOOL silentlyDropInvalidTransitions; // ivar: _silentlyDropInvalidTransitions
@property (retain, nonatomic) WFDispatchSourceTimer *timer; // ivar: _timer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // ivar: _timerQueue
@property (readonly, nonatomic) os_unfair_lock_s transitionLock; // ivar: _transitionLock


-(BOOL)lock_prepareForInvalidation;
-(BOOL)transitionToState:(id)arg0 withReason:(id)arg1 ;
-(id)init;
-(id)lock_printedEventHistory;
-(void)invalidate;
-(void)lock_addTransitionEventToHistoryWithState:(id)arg0 reason:(id)arg1 valid:(BOOL)arg2 ;
-(void)lock_cancelPendingTimers;


@end


#endif