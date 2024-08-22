// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOUTOFPROCESSWORKFLOWCONTROLLERSTATEMACHINE_H
#define WFOUTOFPROCESSWORKFLOWCONTROLLERSTATEMACHINE_H

@protocol WFOutOfProcessWorkflowControllerStateMachineDelegate, OS_dispatch_queue;


#import "WFStateMachine.h"

@interface WFOutOfProcessWorkflowControllerStateMachine : WFStateMachine

@property (weak, nonatomic) NSObject<WFOutOfProcessWorkflowControllerStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue


-(BOOL)blocksTransitionsOnInvalidation;
-(BOOL)isFinishingShortcut;
-(BOOL)isRunningShortcut;
-(id)init;
-(void)acquiringRunnerWithReason:(id)arg0 ;
-(void)exitWithReason:(id)arg0 ;
-(void)finishRunningWithReason:(id)arg0 result:(id)arg1 ;
-(void)handleRunnerWillExit;
-(void)handleXPCErrorWithDescription:(id)arg0 currentDialogAttribution:(id)arg1 ;
-(void)handlingRequestWithReason:(id)arg0 ;
-(void)idleStateWithReason:(id)arg0 ;
-(void)invalidate;
-(void)notifyDelegateWithReason:(id)arg0 result:(id)arg1 currentDialogAttribution:(id)arg2 ;
-(void)pauseAndWriteShortcutToDiskState;
-(void)startRunningShortcutWithReason:(id)arg0 ;
-(void)stopShortcutWithError:(id)arg0 reason:(id)arg1 ;
-(void)tearDownRunnerWithReason:(id)arg0 ;


@end


#endif