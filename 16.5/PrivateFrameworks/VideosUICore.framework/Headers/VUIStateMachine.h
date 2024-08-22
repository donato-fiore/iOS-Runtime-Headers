// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISTATEMACHINE_H
#define VUISTATEMACHINE_H

@class NSMutableArray, NSMutableDictionary, NSString, NSArray;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface VUIStateMachine : NSObject {
    id *_stateChangeHandler;
    NSMutableArray *_events;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_defaultHandlers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_blocksToExecuteAfterStateTransition;
    BOOL _handlingEvent;
}


@property (nonatomic) BOOL callsStateChangeHandlerSynchronously; // ivar: _callsStateChangeHandlerSynchronously
@property (copy) NSString *currentState; // ivar: _currentState
@property (copy) NSArray *ignorableEvents; // ivar: _ignorableEvents
@property (retain, nonatomic) NSObject<OS_os_log> *logObject; // ivar: _logObject
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property BOOL shouldAcceptEvents; // ivar: _shouldAcceptEvents


+(id)stateMachineWithName:(id)arg0 ;
+(id)stateMachinesOfType:(Class)arg0 ;
+(void)deregisterStateMachine:(id)arg0 ;
+(void)initialize;
+(void)registerStateMachine:(id)arg0 ;
-(id)_eventHandlerForEvent:(SEL)arg0 ;
-(id)initWithName:(id)arg0 initialState:(id)arg1 mode:(NSInteger)arg2 ;
-(id)initWithName:(id)arg0 initialState:(id)arg1 mode:(NSInteger)arg2 stateChangeHandler:(id)arg3 ;
-(void)_dispatchEvent:(id)arg0 ;
-(void)_executePostTransitionBlocks;
-(void)_processEvent:(id)arg0 ;
-(void)_processNextEvent;
-(void)_transitionToState:(id)arg0 withEvent:(id)arg1 context:(id)arg2 userInfo:(id)arg3 ;
-(void)deregisterHandlers;
-(void)executeBlockAfterCurrentStateTransition:(id)arg0 ;
-(void)logUnhandledEvents;
-(void)postEvent:(id)arg0 ;
-(void)postEvent:(id)arg0 withContext:(id)arg1 ;
-(void)postEvent:(id)arg0 withContext:(id)arg1 userInfo:(id)arg2 ;
-(void)purgeEventQueue;
-(void)registerDefaultHandlerForEvent:(id)arg0 withBlock:(id)arg1 ;
-(void)registerHandlerForEvent:(id)arg0 onState:(id)arg1 withBlock:(id)arg2 ;
-(void)registerHandlerForEvent:(id)arg0 onStates:(id)arg1 withBlock:(id)arg2 ;
-(void)registerHandlerForEvents:(id)arg0 onStates:(id)arg1 withBlock:(id)arg2 ;
-(void)registerStateTransitionFromState:(id)arg0 onEvent:(id)arg1 toState:(id)arg2 ;


@end


#endif