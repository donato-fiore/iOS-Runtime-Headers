// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDTFFEEDBACKSUBMISSIONSERVICE_H
#define ASDTFFEEDBACKSUBMISSIONSERVICE_H

@class NSString;
@protocol TFFeedbackSubmissionService;

#import <Foundation/Foundation.h>


@interface ASDTFFeedbackSubmissionService : NSObject <TFFeedbackSubmissionService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxNumberOfCommentSymbolsAllowed;
@property (readonly, nonatomic) NSUInteger maxNumberOfScreenshotsAllowed;
@property (readonly) Class superclass;


-(BOOL)_verifyDataSourceIsReadyForSubmission:(id)arg0 error:(*id)arg1 ;
-(BOOL)_verifyEmailIsValid:(id)arg0 ;
-(id)_serializeFeedbackForBundleId:(id)arg0 withContentsOfDataSource:(id)arg1 error:(*id)arg2 ;
-(void)submitFeedbackForBundleId:(id)arg0 withContentsOfDataSource:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif