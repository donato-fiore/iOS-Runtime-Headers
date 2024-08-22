// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCELEROMETER_H
#define UIACCELEROMETER_H

@class CMMotionManager;
@protocol UIAccelerometerDelegate;

#import <Foundation/Foundation.h>


@interface UIAccelerometer : NSObject {
    ? _accelerometerFlags;
    CMMotionManager *_motionManager;
}


@property (weak, nonatomic) NSObject<UIAccelerometerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval


+(id)sharedAccelerometer;
-(id)_motionManager;
-(id)init;
-(void)_acceleratedInX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 timestamp:(CGFloat)arg3 ;
-(void)_didSuspend:(id)arg0 ;
-(void)_startAccelerometerIfNecessary;
-(void)_stopAccelerometer;
-(void)_willResume:(id)arg0 ;
-(void)dealloc;


@end


#endif