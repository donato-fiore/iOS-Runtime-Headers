// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHANDOFFRUNNERCLIENT_H
#define WFHANDOFFRUNNERCLIENT_H

@class WFWorkflowRunnerClient;



@interface WFHandoffRunnerClient : WFWorkflowRunnerClient

@property (copy, nonatomic) id *runningDidStartHandler; // ivar: _runningDidStartHandler


-(id)initWithWorkflowControllerState:(id)arg0 runSource:(id)arg1 remoteDialogPresenterEndpoint:(id)arg2 ;
-(id)runWorkflowWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleWorkflowDidStart:(id)arg0 ;
-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;
-(void)notifyStartHandlerWithProgress:(id)arg0 ;
-(void)startWithHandler:(id)arg0 ;


@end


#endif