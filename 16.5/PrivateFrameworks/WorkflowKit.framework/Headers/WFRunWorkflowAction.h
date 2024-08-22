// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRUNWORKFLOWACTION_H
#define WFRUNWORKFLOWACTION_H

@class NSString, WFWorkflowRunnerClient, NSProgress;
@protocol WFRunShortcutRunnerClientDelegate, WFWorkflowControllerDelegate;


#import "WFAction.h"
#import "WFShortcutRunnerSandboxExtensionManager.h"
#import "WFWorkflowController.h"

@interface WFRunWorkflowAction : WFAction <WFRunShortcutRunnerClientDelegate, WFWorkflowControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFShortcutRunnerSandboxExtensionManager *sandboxExtensionManager; // ivar: _sandboxExtensionManager
@property (readonly) Class superclass;
@property (weak, nonatomic) WFWorkflowController *workflowController; // ivar: _workflowController
@property (retain, nonatomic) WFWorkflowRunnerClient *workflowRunnerClient; // ivar: _workflowRunnerClient
@property (retain, nonatomic) NSProgress *workflowRunningProgress; // ivar: _workflowRunningProgress


-(BOOL)isProgressIndeterminate;
-(BOOL)isRunOutOfProcess;
-(BOOL)workflowController:(id)arg0 handleUnsupportedEnvironmentForAction:(id)arg1 currentState:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)workflowController:(id)arg0 handleUnsupportedUserInterfaceForAction:(id)arg1 currentState:(id)arg2 completionHandler:(id)arg3 ;
-(id)actionSandboxExtensionProviderForWorkflowController:(id)arg0 action:(id)arg1 ;
-(id)actionSandboxExtensionProviderForWorkflowRunnerClient:(id)arg0 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)getWorkflowWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)userInterfaceForWorkflowController:(id)arg0 ;
-(id)workflowController:(id)arg0 parameterInputProviderForAction:(id)arg1 ;
-(id)workflowNameFromParameter;
-(void)cancel;
-(void)dealloc;
-(void)finishRunningWithError:(id)arg0 ;
-(void)getHandoffWorkflowControllerState:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performWithSandboxExtensions:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setHandoffWorkflowControllerState:(id)arg0 ;
-(void)stop;
-(void)workflowController:(id)arg0 didFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)workflowController:(id)arg0 didRunAction:(id)arg1 ;
-(void)workflowController:(id)arg0 prepareToRunAction:(id)arg1 withInput:(id)arg2 completionHandler:(id)arg3 ;
-(void)workflowController:(id)arg0 wantsToToastSessionKitSessionWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif