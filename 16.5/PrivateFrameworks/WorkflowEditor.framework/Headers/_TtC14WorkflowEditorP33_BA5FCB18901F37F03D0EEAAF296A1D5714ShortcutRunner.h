// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITORP33_BA5FCB18901F37F03D0EEAAF296A1D5714SHORTCUTRUNNER_H
#define _TTC14WORKFLOWEDITORP33_BA5FCB18901F37F03D0EEAAF296A1D5714SHORTCUTRUNNER_H

@protocol WFWorkflowRunnerClientDelegate;

#import <Foundation/Foundation.h>


@interface _TtC14WorkflowEditorP33_BA5FCB18901F37F03D0EEAAF296A1D5714ShortcutRunner : NSObject <WFWorkflowRunnerClientDelegate>

 {
    ? workflow;
    ? onLifecycleEvent;
    ? _runningState;
    ? runnerClient;
    ? isRunning;
    ? progress;
    ? progressModeler;
    ? modelerStateObservation;
}




-(id)init;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif