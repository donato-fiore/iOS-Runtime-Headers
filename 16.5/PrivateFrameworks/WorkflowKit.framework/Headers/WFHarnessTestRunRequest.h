// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSTESTRUNREQUEST_H
#define WFHARNESSTESTRUNREQUEST_H

@class WFWorkflowRunRequest;


#import "WFHarnessTestRunDescriptor.h"

@interface WFHarnessTestRunRequest : WFWorkflowRunRequest

@property (readonly, nonatomic) WFHarnessTestRunDescriptor *testRunDescriptor; // ivar: _testRunDescriptor


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTestBundleURL:(id)arg0 xcTestClass:(id)arg1 testIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getInputWithCompletionHandler:(id)arg0 ;


@end


#endif