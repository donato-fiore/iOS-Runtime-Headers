// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WORKOUTCORE30MULTISPORTWORKOUTCONFIGURATION_H
#define _TTC11WORKOUTCORE30MULTISPORTWORKOUTCONFIGURATION_H

@class TtC11WorkoutCore20WorkoutConfiguration, NSString;



@interface _TtC11WorkoutCore30MultiSportWorkoutConfiguration : TtC11WorkoutCore20WorkoutConfiguration {
    ? _subConfigs;
    ? _title;
    ? _shouldTrackTransitions;
    ? _automaticallySwitchLegs;
    ? overrideDeviceCapability;
}


@property (nonatomic, readonly) NSString *analyticsSubActivities;
@property (nonatomic, readonly) NSInteger hash;




@end


#endif