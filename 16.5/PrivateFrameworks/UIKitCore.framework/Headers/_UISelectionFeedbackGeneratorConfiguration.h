// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISELECTIONFEEDBACKGENERATORCONFIGURATION_H
#define _UISELECTIONFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorUserInteractionDrivenConfiguration, _UIFeedback<_UIFeedbackDiscretePlayable>;



@interface _UISelectionFeedbackGeneratorConfiguration : UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (nonatomic) CGFloat fastAudioVolume; // ivar: _fastAudioVolume
@property (nonatomic) CGFloat fastHapticVolume; // ivar: _fastHapticVolume
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback; // ivar: _feedback
@property (nonatomic) CGFloat maxSpeed; // ivar: _maxSpeed
@property (nonatomic) CGFloat minimumInterval; // ivar: _minimumInterval
@property (nonatomic) CGFloat slowAudioVolume; // ivar: _slowAudioVolume
@property (nonatomic) CGFloat slowHapticVolume; // ivar: _slowHapticVolume


+(id)defaultConfiguration;
+(id)lightConfiguration;
+(id)pickerConfiguration;
+(id)strongConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif