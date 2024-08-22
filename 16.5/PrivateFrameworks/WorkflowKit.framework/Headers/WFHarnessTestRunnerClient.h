// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSTESTRUNNERCLIENT_H
#define WFHARNESSTESTRUNNERCLIENT_H

@class WFWorkflowRunnerClient;
@protocol WFHarnessTestRunnerClientDelegate;



@interface WFHarnessTestRunnerClient : WFWorkflowRunnerClient

@property (nonatomic) NSObject<WFHarnessTestRunnerClientDelegate> *testDelegate; // ivar: _testDelegate


-(id)initWithRunRequest:(id)arg0 ;
-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;


@end


#endif