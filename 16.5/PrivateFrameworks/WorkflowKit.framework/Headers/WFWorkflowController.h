// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWCONTROLLER_H
#define WFWORKFLOWCONTROLLER_H

@class NSString, WFContentCollection, NSProgress, NSMapTable, NSDictionary, WFWorkflowRunningContext, NSDate, RBSAssertion;
@protocol WFActionRunningDelegate, WFWorkflowNoInputBehaviorDelegate, WFVariableDataSource, WFActionParameterInputProvider, WFDialogTransformerDelegate, WFWorkflowControllerDelegate, OS_dispatch_queue, OS_voucher;

#import <Foundation/Foundation.h>

#import "WFWorkflowController.h"
#import "WFContentItemCache.h"
#import "WFAction.h"
#import "WFWorkflowControllerState.h"
#import "WFSmartPromptsExfiltrationLogger.h"
#import "WFControlFlowAttributionTracker.h"
#import "WFOutOfProcessWorkflowController.h"
#import "WFWorkflow.h"

@interface WFWorkflowController : NSObject <WFActionRunningDelegate, WFWorkflowNoInputBehaviorDelegate, WFVariableDataSource, WFActionParameterInputProvider, WFDialogTransformerDelegate>

 {
    WFWorkflowController *_strongSelf;
}


@property (nonatomic) BOOL acquiresAssertionWhileRunning; // ivar: _acquiresAssertionWhileRunning
@property (nonatomic) BOOL actionDidRunRemotely; // ivar: _actionDidRunRemotely
@property (copy, nonatomic) NSString *automationTrialID; // ivar: _automationTrialID
@property (copy, nonatomic) NSString *automationType; // ivar: _automationType
@property (retain, nonatomic) WFContentCollection *capturedFiles; // ivar: _capturedFiles
@property (retain, nonatomic) WFContentItemCache *contentItemCache; // ivar: _contentItemCache
@property (readonly, nonatomic) WFAction *currentAction;
@property (retain, nonatomic) NSProgress *currentActionProgress; // ivar: _currentActionProgress
@property (nonatomic) NSUInteger currentIndex; // ivar: _currentIndex
@property (retain, nonatomic) WFWorkflowControllerState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFWorkflowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL donateInteraction; // ivar: _donateInteraction
@property (retain, nonatomic) NSMapTable *environmentValueTable; // ivar: _environmentValueTable
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (retain, nonatomic) NSObject<OS_voucher> *executionVoucher; // ivar: _executionVoucher
@property (retain, nonatomic) WFSmartPromptsExfiltrationLogger *exfiltrationLogger; // ivar: _exfiltrationLogger
@property (retain, nonatomic) WFControlFlowAttributionTracker *flowTracker; // ivar: _flowTracker
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFContentCollection *input; // ivar: _input
@property (nonatomic) BOOL isAutomationSuggestion; // ivar: _isAutomationSuggestion
@property (copy, nonatomic) NSDictionary *listenerEndpoints; // ivar: _listenerEndpoints
@property (retain, nonatomic) WFOutOfProcessWorkflowController *outOfProcessController; // ivar: _outOfProcessController
@property (retain, nonatomic) WFContentCollection *output; // ivar: _output
@property (nonatomic) NSUInteger outputBehavior; // ivar: _outputBehavior
@property (retain, nonatomic) WFContentCollection *pendingActionInput; // ivar: _pendingActionInput
@property (retain, nonatomic) NSDictionary *pendingProcessedParameters; // ivar: _pendingProcessedParameters
@property (retain, nonatomic) WFWorkflowControllerState *pendingState; // ivar: _pendingState
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (nonatomic) BOOL resumed; // ivar: _resumed
@property (copy, nonatomic) NSString *runSource; // ivar: _runSource
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (retain, nonatomic) WFWorkflowRunningContext *runningContext; // ivar: _runningContext
@property (nonatomic) BOOL shouldDisablePrivacyPrompts; // ivar: _shouldDisablePrivacyPrompts
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic, getter=isStepping) BOOL stepping; // ivar: _stepping
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *variableTable; // ivar: _variableTable
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (retain, nonatomic) RBSAssertion *workflowRunAssertion; // ivar: _workflowRunAssertion


+(void)initialize;
-(BOOL)action:(id)arg0 canProvideInputForParameter:(id)arg1 ;
-(BOOL)canRun;
-(BOOL)setContent:(id)arg0 forVariableWithName:(id)arg1 ;
-(id)actionReversalStateForAction:(id)arg0 ;
-(id)actionSandboxExtensionProviderForAction:(id)arg0 ;
-(id)contentForPrivateVariableKey:(id)arg0 ;
-(id)contentForVariableWithName:(id)arg0 ;
-(id)currentRunningContextForAction:(id)arg0 ;
-(id)currentStateWithContext:(id)arg0 ;
-(id)environmentValueForKey:(id)arg0 ;
-(id)errorByAddingActionIndex:(NSInteger)arg0 toError:(id)arg1 ;
-(id)init;
-(id)parameterInputProviderForAction:(id)arg0 ;
-(id)remoteDialogPresenterEndpointForRunWorkflowAction:(id)arg0 ;
-(id)stateWithActionIndex:(NSUInteger)arg0 input:(id)arg1 processedParameters:(id)arg2 ;
-(id)userInterface;
-(void)_finishStepWithError:(id)arg0 ;
-(void)_run;
-(void)_step;
-(void)acquireAssertionIfNeeded;
-(void)action:(id)arg0 didDecideRunningProgressIsAllowed:(BOOL)arg1 ;
-(void)action:(id)arg0 didGenerateReversalState:(id)arg1 ;
-(void)action:(id)arg0 handleTestingEvent:(id)arg1 completionHandler:(id)arg2 ;
-(void)action:(id)arg0 provideInputForParameters:(id)arg1 withDefaultStates:(id)arg2 prompts:(id)arg3 completionHandler:(id)arg4 ;
-(void)action:(id)arg0 wantsToToastSessionKitSessionWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)autoreleaseSelf;
-(void)captureFileRepresentation:(id)arg0 ;
-(void)dealloc;
-(void)dialogTransformer:(id)arg0 stopRunningWithError:(id)arg1 ;
-(void)dialogTransformerDidDisplayDialog:(id)arg0 ;
-(void)dialogTransformerWillDisplayDialog:(id)arg0 ;
-(void)didFinishRunningWithError:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)didRunAction:(id)arg0 withCompletion:(id)arg1 ;
-(void)handleActionCompletion:(id)arg0 actionGroupSkipped:(BOOL)arg1 ;
-(void)handleError:(id)arg0 fromAction:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidateAssertionIfNeeded;
-(void)logFinishActionEventWithAction:(id)arg0 completed:(BOOL)arg1 error:(id)arg2 ;
-(void)logFinishRunEvent:(BOOL)arg0 ;
-(void)logStartActionEventWithAction:(id)arg0 ;
-(void)logStartEvent;
-(void)noInputBehavior:(id)arg0 wantsToRunAction:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareToRunAction:(id)arg0 withInput:(id)arg1 completionHandler:(id)arg2 ;
-(void)publishActionProgress;
-(void)publishRunningState:(NSInteger)arg0 ;
-(void)queue_reset;
-(void)queue_stopWithError:(id)arg0 ;
-(void)requestAccessToFileAtLocations:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestAccessToFileAtURLs:(id)arg0 completionHandler:(id)arg1 ;
-(void)reset;
-(void)resetEvaluationCriteriaForControlFlowActions;
-(void)resolveWorkflowInputWithCompletion:(id)arg0 ;
-(void)restorePendingStateIfNecessary;
-(void)retainSelf;
-(void)run;
-(void)runAction:(id)arg0 withInput:(id)arg1 completionHandler:(id)arg2 ;
-(void)setContent:(id)arg0 forPrivateVariableKey:(id)arg1 ;
-(void)setEnvironmentValue:(id)arg0 forKey:(id)arg1 ;
-(void)setFinishedRunningWithSuccess:(BOOL)arg0 ;
-(void)setUpProgress;
-(void)setUpRunState;
-(void)stop;
-(void)stopWithError:(id)arg0 ;
-(void)trackRunActionEventWithKey:(id)arg0 action:(id)arg1 completed:(BOOL)arg2 error:(id)arg3 ;
-(void)trackRunShortcutEventWithKey:(id)arg0 completed:(BOOL)arg1 ;
-(void)workflowControllerWillRun:(id)arg0 ;


@end


#endif