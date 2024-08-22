// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTINPUTSESSIONACTIONANALYTICS_H
#define UITEXTINPUTSESSIONACTIONANALYTICS_H

@class NSMutableOrderedSet, NSMutableSet, NSSet, NSUUID;
@protocol OS_dispatch_queue, UITextInputSessionActionAnalyticsDelegateSource;

#import <Foundation/Foundation.h>


@interface UITextInputSessionActionAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_recentActions;
    NSMutableSet *_accumulators;
    NSMutableSet *_efficacyAccumulators;
    NSMutableSet *_dynamicAccumulators;
    NSSet *_separateCycleAccumulatorNames;
    NSUInteger _maxDepth;
    BOOL _trackingDuration;
    NSUInteger _beginTimestamp;
}


@property (readonly, nonatomic) NSUInteger allowCursorMovementCounter; // ivar: _allowCursorMovementCounter
@property (weak, nonatomic) NSObject<UITextInputSessionActionAnalyticsDelegateSource> *delegateSource; // ivar: _delegateSource
@property (copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier


+(id)allowedValuesForTextInputSource;
+(id)sharedPunctuationCharacterSet;
+(id)stringValueForSource:(NSInteger)arg0 ;
+(void)addEndingObserver:(id)arg0 ;
+(void)addObserver:(id)arg0 ;
+(void)populateActionInputMode:(id)arg0 ;
+(void)populateActionInputMode:(id)arg0 withLanguage:(id)arg1 ;
+(void)q_notifyEndingObserversWithSessionAnalytics:(id)arg0 ;
+(void)q_notifyStartingObservers;
+(void)removeEndingObserver:(id)arg0 ;
+(void)removeObserver:(id)arg0 ;
-(NSUInteger)_emojiCountForText:(id)arg0 ;
-(NSUInteger)_normalizedTextLength:(id)arg0 ;
-(NSUInteger)_optionsForText:(id)arg0 ;
-(NSUInteger)_punctuationCountForText:(id)arg0 ;
-(id)_instanceOfActionClass:(Class)arg0 ;
-(id)_textInsertionActionForText:(id)arg0 relativeRangeBefore:(struct _NSRange )arg1 withLanguage:(id)arg2 ;
-(id)allAccumulatorNames;
-(id)allEfficacyAccumulatorNames;
-(id)getDynamicAccumulatorWithName:(id)arg0 ;
-(id)init;
-(id)q_copyAccumulatorWithName:(id)arg0 ;
-(void)_didDeleteBackwardAction:(id)arg0 ;
-(void)_didDeleteBackwardCount:(NSUInteger)arg0 shouldOverrideInputActionCountToZero:(BOOL)arg1 withLanguage:(id)arg2 ;
-(void)_didDeleteBackwardText:(id)arg0 shouldOverrideInputActionCountToZero:(BOOL)arg1 withLanguage:(id)arg2 ;
-(void)_didInsertTextAction:(id)arg0 numCharsDeleted:(NSUInteger)arg1 withLanguage:(id)arg2 ;
-(void)addAccumulator:(id)arg0 ;
-(void)addDynamicAccumulator:(id)arg0 ;
-(void)addEfficacyAccumulator:(id)arg0 ;
-(void)beginTrackingSessionDurationIfNecessary;
-(void)decrementAllowCursorMovementCount;
-(void)didAutocorrectReplacementForText:(id)arg0 withText:(id)arg1 ;
-(void)didBegin;
-(void)didCalloutBarReplacementForText:(id)arg0 withText:(id)arg1 ;
-(void)didCandidateBarReplacementForText:(id)arg0 withText:(id)arg1 ;
-(void)didChangeToSelection:(struct _NSRange )arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
-(void)didCopy;
-(void)didCut;
-(void)didDeleteBackwardCount:(NSUInteger)arg0 ;
-(void)didDeleteBackwardText:(id)arg0 ;
-(void)didDeleteKeyPressWithInputSource:(NSInteger)arg0 ;
-(void)didDictationBegin:(BOOL)arg0 usesMultiModalDictation:(BOOL)arg1 ;
-(void)didDictationEnd;
-(void)didDictationItemButtonPress:(NSUInteger)arg0 ;
-(void)didInsertKeyPressWithInputSource:(NSInteger)arg0 ;
-(void)didInsertText:(id)arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
-(void)didInsertText:(id)arg0 relativeRangeBefore:(struct _NSRange )arg1 selectedTextBefore:(id)arg2 withLanguage:(id)arg3 ;
-(void)didInsertText:(id)arg0 relativeRangeBefore:(struct _NSRange )arg1 withLanguage:(id)arg2 ;
-(void)didInsertText:(id)arg0 relativeRangeBefore:(struct _NSRange )arg1 withNumAlternatives:(NSInteger)arg2 ;
-(void)didKeyPress:(id)arg0 ;
-(void)didOther;
-(void)didPaste;
-(void)didRedo;
-(void)didReplaceWithCandidate:(NSInteger)arg0 ;
-(void)didReplacementForText:(id)arg0 withText:(id)arg1 withSource:(NSInteger)arg2 withType:(NSInteger)arg3 ;
-(void)didSessionEnd;
-(void)didUndo;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)enumerateEfficacyAnalytics:(id)arg0 ;
-(void)enumerateSeparateCycleAnalytics:(id)arg0 ;
-(void)enumerateTextInputActionAnalytics:(id)arg0 ;
-(void)incrementAllowCursorMovementCount;
-(void)q_addAccumulator:(id)arg0 ;
-(void)q_addActionAndUpdate:(id)arg0 ;
-(void)q_addDynamicAccumulator:(id)arg0 ;
-(void)q_addEfficacyAccumulator:(id)arg0 ;
-(void)q_flushRecentActions;
-(void)q_setSeparateCycleAccumulatorNames:(id)arg0 ;
-(void)q_setupDefaultAnalytics;
-(void)q_updateAnalyticsFromAccumulators;
-(void)writeAnalytics;


@end


#endif