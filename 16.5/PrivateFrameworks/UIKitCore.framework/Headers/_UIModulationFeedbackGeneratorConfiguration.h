// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMODULATIONFEEDBACKGENERATORCONFIGURATION_H
#define _UIMODULATIONFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorConfiguration, _UIFeedback<_UIFeedbackContinuousPlayable>;



@interface _UIModulationFeedbackGeneratorConfiguration : UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *feedback; // ivar: _feedback
@property (copy, nonatomic) id *feedbackUpdateBlock; // ivar: _feedbackUpdateBlock


+(id)defaultConfiguration;
+(id)sliderConfiguration;
-(NSInteger)requiredSupportLevel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif