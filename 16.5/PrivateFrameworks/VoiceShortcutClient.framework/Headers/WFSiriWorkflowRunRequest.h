// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIWORKFLOWRUNREQUEST_H
#define WFSIRIWORKFLOWRUNREQUEST_H



#import "WFWorkflowRunRequest.h"
#import "WFSiriWorkflowRunnerClientOptions.h"

@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest

@property (retain, nonatomic) WFSiriWorkflowRunnerClientOptions *options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif