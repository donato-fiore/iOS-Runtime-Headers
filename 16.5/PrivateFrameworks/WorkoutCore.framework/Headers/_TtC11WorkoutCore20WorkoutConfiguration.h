// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WORKOUTCORE20WORKOUTCONFIGURATION_H
#define _TTC11WORKOUTCORE20WORKOUTCONFIGURATION_H

@class NSString;
@protocol WOPersistableObject;

#import <Foundation/Foundation.h>


@interface _TtC11WorkoutCore20WorkoutConfiguration : NSObject <WOPersistableObject>

 {
    ? uuid;
    ? type;
    ? activityType;
    ? occurrence;
}


@property (nonatomic, readonly) NSString *analyticsKey;
@property (nonatomic, readonly) NSString *analyticsSubActivities;
@property (nonatomic, readonly) NSInteger hash;


+(id)deserializeFromPersistence:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)serialize;


@end


#endif