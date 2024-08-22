// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWCONTEXTUALACTIONOUTPUTRUNRESULT_H
#define WFWORKFLOWCONTEXTUALACTIONOUTPUTRUNRESULT_H

@class NSArray, NSData;


#import "WFWorkflowRunResult.h"

@interface WFWorkflowContextualActionOutputRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) NSArray *files; // ivar: _files
@property (readonly, nonatomic) NSData *reversalState; // ivar: _reversalState


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFiles:(id)arg0 runError:(id)arg1 reversalState:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif