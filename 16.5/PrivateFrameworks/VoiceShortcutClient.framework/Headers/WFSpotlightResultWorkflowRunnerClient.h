// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSPOTLIGHTRESULTWORKFLOWRUNNERCLIENT_H
#define WFSPOTLIGHTRESULTWORKFLOWRUNNERCLIENT_H

@protocol WFSpotlightResultRunnable;


#import "WFWorkflowRunnerClient.h"

@interface WFSpotlightResultWorkflowRunnerClient : WFWorkflowRunnerClient {
    id<WFSpotlightResultRunnable> *_runnable;
}




-(BOOL)runnableRequiresSpotlightRefresh:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(id)initWithIntent:(id)arg0 executionContext:(NSInteger)arg1 ;
-(id)initWithRunnable:(id)arg0 surface:(NSUInteger)arg1 ;
-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;


@end


#endif