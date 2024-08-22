// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDTYPINGSTYLEESTIMATOR_H
#define UIKEYBOARDTYPINGSTYLEESTIMATOR_H

@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

#import <Foundation/Foundation.h>


@interface UIKeyboardTypingStyleEstimator : NSObject {
    NSTimer *_tapTypingFlipTimer;
    CGFloat _lastContinuousPathEvent;
    NSUInteger _currentTypingStyle;
}


@property (weak, nonatomic) NSObject<UIKeyboardTypingStyleEstimatorDelegate> *delegate; // ivar: _delegate


-(NSUInteger)currentTypingStyleEstimation;
-(void)_setTypingStyleEstimation:(NSUInteger)arg0 ;
-(void)beganContinuousPath;
-(void)cancelContinuousPath;
-(void)endedContinuousPath;
-(void)tapTypedKey;


@end


#endif