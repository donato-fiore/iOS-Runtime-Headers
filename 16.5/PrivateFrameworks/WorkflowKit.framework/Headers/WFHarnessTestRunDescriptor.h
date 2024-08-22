// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSTESTRUNDESCRIPTOR_H
#define WFHARNESSTESTRUNDESCRIPTOR_H

@class WFWorkflowRunDescriptor, NSURL, NSString;


#import "WFHarnessTestCase.h"

@interface WFHarnessTestRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) BOOL holdingSecurityScopedAccess; // ivar: _holdingSecurityScopedAccess
@property (readonly, nonatomic) NSURL *testBundleURL; // ivar: _testBundleURL
@property (retain, nonatomic) WFHarnessTestCase *testCase; // ivar: _testCase
@property (readonly, copy, nonatomic) NSString *testIdentifier; // ivar: _testIdentifier
@property (readonly, nonatomic) NSURL *testRunnerURL; // ivar: _testRunnerURL
@property (readonly, copy, nonatomic) NSString *xcTestClass; // ivar: _xcTestClass


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTestBundleURL:(id)arg0 testRunnerURL:(id)arg1 xcTestClass:(id)arg2 testIdentifier:(id)arg3 ;
-(id)initWithTestBundleURL:(id)arg0 xcTestClass:(id)arg1 testIdentifier:(id)arg2 ;
-(id)loadTestCaseWithError:(*id)arg0 ;
-(void)createWorkflowWithEnvironment:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif