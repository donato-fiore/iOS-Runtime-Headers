// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTEXTUALACTIONRUNREQUEST_H
#define WFCONTEXTUALACTIONRUNREQUEST_H

@class WFContentCollection;
@protocol NSSecureCoding;


#import "WFWorkflowRunRequest.h"
#import "WFContextualAction.h"
#import "WFContextualActionContext.h"

@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding>



@property (readonly, nonatomic) WFContextualAction *action; // ivar: _action
@property (readonly, nonatomic) WFContextualActionContext *actionContext; // ivar: _actionContext
@property (retain, nonatomic) WFContentCollection *input; // ivar: _input


+(BOOL)supportsSecureCoding;
-(id)initWithAction:(id)arg0 actionContext:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)queueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getInputWithCompletionHandler:(id)arg0 ;


@end


#endif