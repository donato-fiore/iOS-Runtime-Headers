// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONEXTENSIONWORKFLOWRUNNERCLIENT_H
#define WFACTIONEXTENSIONWORKFLOWRUNNERCLIENT_H

@class NSDictionary;


#import "WFWorkflowRunnerClient.h"

@interface WFActionExtensionWorkflowRunnerClient : WFWorkflowRunnerClient

@property (copy, nonatomic) NSDictionary *javaScriptRunners; // ivar: _javaScriptRunners


-(id)initWithWorkflowIdentifier:(id)arg0 input:(id)arg1 javaScriptRunners:(id)arg2 ;


@end


#endif