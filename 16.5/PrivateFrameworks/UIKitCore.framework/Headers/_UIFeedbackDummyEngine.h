// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFEEDBACKDUMMYENGINE_H
#define _UIFEEDBACKDUMMYENGINE_H

@class UIFeedbackEngine;
@protocol _UIFeedbackPlayer_Internal;



@interface _UIFeedbackDummyEngine : UIFeedbackEngine <_UIFeedbackPlayer_Internal>



@property (copy, nonatomic) id *invalidationBlock; // ivar: _invalidationBlock


+(BOOL)_supportsPlayingIndividualFeedback:(id)arg0 ;
+(id)sharedEngine;
-(BOOL)_internal_playFeedbackData:(id)arg0 forFeedback:(id)arg1 atTime:(CGFloat)arg2 ;
-(id)_stats_key;
-(void)_internal_activateUnderlyingPlayerWithCompletion:(id)arg0 ;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id)arg0 ;
-(void)_internal_stopFeedbackData:(id)arg0 forFeedback:(id)arg1 ;
-(void)_playFeedback:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)_stopFeedback:(id)arg0 ;
-(void)_updateValueForParameters:(id)arg0 withKey:(id)arg1 ;


@end


#endif