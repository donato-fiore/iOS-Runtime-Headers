// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFEEDBACKPATTERN_H
#define _UIFEEDBACKPATTERN_H

@class UIFeedback, NSString, NSMutableArray, NSTimer;
@protocol _UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable;



@interface _UIFeedbackPattern : UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable>

 {
    BOOL _canReuseCoreHapticsPlayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSMutableArray *feedbacks; // ivar: _feedbacks
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority; // ivar: _highPriority
@property (readonly, nonatomic) BOOL isRepeating; // ivar: _isRepeating
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) NSTimer *repeatTimer; // ivar: _repeatTimer
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)_parametersClass;
+(id)feedbackPattern;
+(id)type;
-(BOOL)canReuseCoreHapticsPlayer;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_effectivePlayableFeedbackTypes;
-(id)_allEventTypes;
-(id)_allSystemSoundIDs;
-(id)_debugDictionary;
-(id)_individualFeedbacks;
-(id)_playableProtocol;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)_playPattern;
-(void)addFeedback:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)play;
-(void)setCanReuseCoreHapticsPlayer:(BOOL)arg0 ;
-(void)setPosition:(float)arg0 ;
-(void)stop;


@end


#endif