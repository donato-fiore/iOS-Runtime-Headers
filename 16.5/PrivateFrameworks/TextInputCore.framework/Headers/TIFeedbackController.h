// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIFEEDBACKCONTROLLER_H
#define TIFEEDBACKCONTROLLER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TIFeedbackController : NSObject

@property (readonly, nonatomic) NSString *completionEventTimestampKey; // ivar: _completionEventTimestampKey
@property (readonly, nonatomic) NSString *countsRetainedKey; // ivar: _countsRetainedKey
@property (readonly, nonatomic) NSString *feedbackFeatureEnabledKey; // ivar: _feedbackFeatureEnabledKey
@property (readonly, nonatomic) NSString *finalInputModesKey; // ivar: _finalInputModesKey
@property (readonly, nonatomic) NSString *finalPreferenceValueKey; // ivar: _finalPreferenceValueKey
@property (readonly, nonatomic) NSString *finalTimestampKey; // ivar: _finalTimestampKey
@property (readonly, nonatomic) NSString *initialInputModesKey; // ivar: _initialInputModesKey
@property (readonly, nonatomic) NSString *initialPreferenceValueKey; // ivar: _initialPreferenceValueKey
@property (readonly, nonatomic) NSString *initialTimestampKey; // ivar: _initialTimestampKey
@property (readonly, nonatomic) NSString *initiationEventTimestampKey; // ivar: _initiationEventTimestampKey
@property (readonly, nonatomic) NSString *preferenceKey; // ivar: _preferenceKey
@property (readonly, nonatomic) NSString *stateKey; // ivar: _stateKey
@property (readonly, nonatomic) NSArray *supportedLanguages; // ivar: _supportedLanguages
@property (readonly, nonatomic) NSString *surveyOutcomeKey; // ivar: _surveyOutcomeKey


-(BOOL)countsRetained;
-(BOOL)currentPreferenceValue;
-(BOOL)feedbackFeatureEnabled;
-(BOOL)finalPreferenceValue;
-(BOOL)initialPreferenceValue;
-(BOOL)isEligibleDevice;
-(BOOL)wasSurveySubmitted;
-(NSInteger)currentState;
-(NSInteger)surveyOutcome;
-(id)completionEventTimestamp;
-(id)computeRandomizedTimeIntervalFromTimestamp:(id)arg0 ;
-(id)currentInputModes;
-(id)finalInputModes;
-(id)finalTimestamp;
-(id)initWithPreferenceKey:(id)arg0 supportedLanguages:(id)arg1 ;
-(id)initialInputModes;
-(id)initialTimestamp;
-(id)initiationEventTimestamp;
-(void)dispatchScheduledEventsWithDelegate:(id)arg0 ;
-(void)dispatchScheduledInitiationAndCompletionEventsImmediatelyWithDelegate:(id)arg0 ;
-(void)dispatchScheduledInitiationAndTerminationEventsImmediatelyWithDelegate:(id)arg0 ;
-(void)handleFeedbackActionsWithDelegate:(id)arg0 ;
-(void)scheduleCompletionEvent;
-(void)scheduleInitiationEvent;
-(void)setCompletionState;
-(void)setInitiationState;
-(void)setTerminationStateWithValue:(NSInteger)arg0 ;
-(void)updateStateWithValue:(NSInteger)arg0 ;


@end


#endif