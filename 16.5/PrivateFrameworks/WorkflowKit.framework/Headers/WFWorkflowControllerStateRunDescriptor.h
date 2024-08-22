// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWCONTROLLERSTATERUNDESCRIPTOR_H
#define WFWORKFLOWCONTROLLERSTATERUNDESCRIPTOR_H

@class WFWorkflowRunDescriptor;


#import "WFWorkflowControllerState.h"

@interface WFWorkflowControllerStateRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFWorkflowControllerState *state; // ivar: _state


-(id)initWithState:(id)arg0 ;


@end


#endif