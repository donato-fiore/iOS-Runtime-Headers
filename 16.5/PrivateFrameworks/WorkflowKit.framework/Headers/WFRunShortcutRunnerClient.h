// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRUNSHORTCUTRUNNERCLIENT_H
#define WFRUNSHORTCUTRUNNERCLIENT_H

@class WFWorkflowRunnerClient;
@protocol WFRunShortcutRunnerClientDelegate;



@interface WFRunShortcutRunnerClient : WFWorkflowRunnerClient

@property (weak, nonatomic) NSObject<WFRunShortcutRunnerClientDelegate> *delegate;


-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;


@end


#endif