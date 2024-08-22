// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSTESTRESULT_H
#define WFHARNESSTESTRESULT_H

@class NSString, WFWorkflowOutputRunResult;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFHarnessTestResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL failed; // ivar: _failed
@property (readonly, copy, nonatomic) NSString *failureFilePath; // ivar: _failureFilePath
@property (readonly, nonatomic) NSInteger failureLine; // ivar: _failureLine
@property (readonly, copy, nonatomic) NSString *failureReason; // ivar: _failureReason
@property (readonly, nonatomic) WFWorkflowOutputRunResult *output; // ivar: _output


+(BOOL)supportsSecureCoding;
+(id)failureWithReason:(id)arg0 ;
+(id)failureWithReason:(id)arg0 filePath:(id)arg1 line:(NSInteger)arg2 ;
+(id)successWithOutput:(id)arg0 ;
-(id)errorRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFailure:(BOOL)arg0 output:(id)arg1 reason:(id)arg2 failureFilePath:(id)arg3 failureLine:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif