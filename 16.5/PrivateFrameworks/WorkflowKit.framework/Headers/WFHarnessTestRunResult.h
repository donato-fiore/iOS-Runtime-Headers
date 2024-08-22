// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSTESTRUNRESULT_H
#define WFHARNESSTESTRUNRESULT_H

@class WFWorkflowRunResult;


#import "WFHarnessTestResult.h"

@interface WFHarnessTestRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) WFHarnessTestResult *testResult; // ivar: _testResult


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTestResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif