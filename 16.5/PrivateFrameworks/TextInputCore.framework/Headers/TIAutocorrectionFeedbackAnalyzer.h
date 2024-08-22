// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIAUTOCORRECTIONFEEDBACKANALYZER_H
#define TIAUTOCORRECTIONFEEDBACKANALYZER_H

@class NSString, NSArray;
@protocol TITypingSessionAnalyzing, TIFeedbackControllerDelegate, TIUserModeling><TIMetricProviding;

#import <Foundation/Foundation.h>

#import "TITypingSession.h"
#import "TITypingSessionAligned.h"

@interface TIAutocorrectionFeedbackAnalyzer : NSObject <TITypingSessionAnalyzing, TIFeedbackControllerDelegate>

 {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedLanguages; // ivar: _supportedLanguages
@property (retain, nonatomic) NSObject<TIUserModeling><TIMetricProviding> *userModel; // ivar: _userModel


+(id)analyzerForUserModel:(id)arg0 ;
-(BOOL)analyzeSession:(id)arg0 alignedSession:(id)arg1 withConfidence:(NSUInteger)arg2 ;
-(NSInteger)studyStatusFromState:(NSInteger)arg0 ;
-(NSUInteger)evaluateConfidenceInSession:(id)arg0 alignedSession:(id)arg1 ;
-(id)initWithUserModel:(id)arg0 ;
-(id)installedInputModesStringFromInputModes:(id)arg0 ;
-(void)accumulateWordCounts;
-(void)registerEventSpec;
-(void)resetWordCounts;
-(void)sendCompletionEventUsingStudyDataFromFeedbackController:(id)arg0 ;
-(void)sendInitiationEventUsingStudyDataFromFeedbackController:(id)arg0 ;
-(void)sendTerminationEventUsingStudyDataFromFeedbackController:(id)arg0 ;


@end


#endif