// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDRAGFEEDBACKGENERATORCONFIGURATION_H
#define _UIDRAGFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorUserInteractionDrivenConfiguration, _UIFeedback<_UIFeedbackContinuousPlayable>, _UIFeedback<_UIFeedbackDiscretePlayable>;



@interface _UIDragFeedbackGeneratorConfiguration : UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *interactionProgressingFeedback; // ivar: _interactionProgressingFeedback
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionUpdatedFeedback; // ivar: _interactionUpdatedFeedback
@property (nonatomic) CGFloat progressingFeedbackDelay; // ivar: _progressingFeedbackDelay
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *targetUpdatedFeedback; // ivar: _targetUpdatedFeedback


+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)requiredSupportLevel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)feedbackKeyPaths;


@end


#endif