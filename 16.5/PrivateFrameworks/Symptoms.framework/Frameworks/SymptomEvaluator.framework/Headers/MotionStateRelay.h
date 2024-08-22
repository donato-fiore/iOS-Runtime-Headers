// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOTIONSTATERELAY_H
#define MOTIONSTATERELAY_H

@class CMMotionActivityManager, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MotionStateRelay : NSObject {
    int deviceOrientationStateToken;
    NSObject<OS_dispatch_queue> *_alarmQueue;
    BOOL _isMoving;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_alarmOperationQueue;
}


@property (readonly, nonatomic) unsigned int currentMotion; // ivar: _currentMotion
@property (nonatomic) int deviceOrientation; // ivar: _deviceOrientation
@property (readonly, nonatomic) BOOL isStationary; // ivar: _isStationary


+(BOOL)automaticallyNotifiesObserversOfCurrentMotion;
+(BOOL)automaticallyNotifiesObserversOfIsStationary;
+(id)sharedInstance;
-(BOOL)isMoving;
-(id)deviceOrientationString:(int)arg0 ;
-(id)init;
-(id)motionStateString:(unsigned int)arg0 ;
-(void)dealloc;
-(void)destroyEngine;
-(void)initializeEngine;
-(void)setdeviceOrientation:(int)arg0 ;
-(void)startActivityUpdates;
-(void)startMotionMonitoring;
-(void)stopActivityUpdates;
-(void)stopMotionMonitoring;
-(void)subscribe;
-(void)transitionToState:(unsigned int)arg0 ;
-(void)unsubscribe;


@end


#endif