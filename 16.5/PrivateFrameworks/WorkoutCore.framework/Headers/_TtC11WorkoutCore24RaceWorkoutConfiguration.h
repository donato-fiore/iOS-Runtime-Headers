// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WORKOUTCORE24RACEWORKOUTCONFIGURATION_H
#define _TTC11WORKOUTCORE24RACEWORKOUTCONFIGURATION_H

@class TtC11WorkoutCore20WorkoutConfiguration;



@interface _TtC11WorkoutCore24RaceWorkoutConfiguration : TtC11WorkoutCore20WorkoutConfiguration {
    ? routeTitle;
    ? clusterUUID;
    ? lastWorkoutUUID;
    ? lastWorkoutDistance;
    ? lastWorkoutDuration;
    ? lastWorkoutDate;
    ? bestWorkoutUUID;
    ? bestWorkoutDistance;
    ? bestWorkoutDuration;
    ? bestWorkoutDate;
    ? lastWorkoutStartingPointLatitude;
    ? lastWorkoutStartingPointLongitude;
    ? routeSnapshotData;
    ? clusterSize;
    ? relevanceValue;
    ? _raceFilter;
}


@property (nonatomic, readonly) NSInteger hash;




@end


#endif