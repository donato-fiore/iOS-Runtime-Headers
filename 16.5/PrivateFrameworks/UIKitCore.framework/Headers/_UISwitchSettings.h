// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISWITCHSETTINGS_H
#define _UISWITCHSETTINGS_H


#import <Foundation/Foundation.h>


@interface _UISwitchSettings : NSObject

@property (readonly, nonatomic) BOOL feedbackEnabled;
@property (readonly, nonatomic) CGFloat hapticDelay;
@property (readonly, nonatomic) CGFloat impactIntensity;
@property (readonly, nonatomic) CGFloat knobSpringAnimationDamping;
@property (readonly, nonatomic) CGFloat knobSpringAnimationDuration;
@property (readonly, nonatomic) CGFloat knobSpringAnimationMass;
@property (readonly, nonatomic) CGFloat knobSpringAnimationStiffness;
@property (readonly, nonatomic) CGFloat knobSpringDampingAnimationTouchDown;
@property (readonly, nonatomic) CGFloat knobSpringDampingAnimationTouchUp;
@property (readonly, nonatomic) CGFloat knobSpringDurationAnimationTouchDown;
@property (readonly, nonatomic) CGFloat knobSpringDurationAnimationTouchUp;
@property (readonly, nonatomic) CGFloat knobSpringMassAnimationTouchDown;
@property (readonly, nonatomic) CGFloat knobSpringMassAnimationTouchUp;
@property (readonly, nonatomic) CGFloat knobSpringStiffnessAnimationTouchDown;
@property (readonly, nonatomic) CGFloat knobSpringStiffnessAnimationTouchUp;
@property (readonly, nonatomic) CGFloat knobTouchDownSpringAnimationDamping;
@property (readonly, nonatomic) CGFloat knobTouchDownSpringAnimationDuration;
@property (readonly, nonatomic) CGFloat knobTouchDownSpringAnimationMass;
@property (readonly, nonatomic) CGFloat knobTouchDownSpringAnimationStiffness;
@property (readonly, nonatomic) CGFloat trackBorderGoingOffAnimationBeginTimeOffset;
@property (readonly, nonatomic) CGFloat trackBorderGoingOffAnimationDuration;
@property (readonly, nonatomic) CGFloat trackBorderGoingOnAnimationDuration;
@property (readonly, nonatomic) CGFloat trackColorAnimationDuration;
@property (readonly, nonatomic) CGFloat trackGoingOffSpringAnimationDamping;
@property (readonly, nonatomic) CGFloat trackGoingOffSpringAnimationDuration;
@property (readonly, nonatomic) CGFloat trackGoingOffSpringAnimationMass;
@property (readonly, nonatomic) CGFloat trackGoingOffSpringAnimationStiffness;
@property (readonly, nonatomic) CGFloat trackGoingOnSpringAnimationDamping;
@property (readonly, nonatomic) CGFloat trackGoingOnSpringAnimationDuration;
@property (readonly, nonatomic) CGFloat trackGoingOnSpringAnimationMass;
@property (readonly, nonatomic) CGFloat trackGoingOnSpringAnimationStiffness;


+(id)sharedSettings;


@end


#endif