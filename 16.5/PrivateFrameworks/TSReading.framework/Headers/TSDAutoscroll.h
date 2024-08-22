// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDAUTOSCROLL_H
#define TSDAUTOSCROLL_H

@class NSTimer;
@protocol TSDAutoscrollDelegate;

#import <Foundation/Foundation.h>


@interface TSDAutoscroll : NSObject {
    NSTimer *mTimer;
    CGFloat mLastFired;
}


@property (nonatomic) BOOL active; // ivar: mActive
@property (nonatomic) NSUInteger count; // ivar: mCount
@property (nonatomic) int directions; // ivar: mDirections
@property (readonly, nonatomic) CGPoint lastAutoscrollDelta; // ivar: mLastAutoscrollDelta
@property (nonatomic) CGPoint point; // ivar: mPoint
@property (nonatomic) CGFloat repeatInterval; // ivar: mRepeatInterval
@property (retain, nonatomic) NSObject<TSDAutoscrollDelegate> *target; // ivar: mTarget
@property (nonatomic) BOOL targetIsAutoscrolling; // ivar: mTargetIsAutoscrolling


+(void)startAutoscroll:(id)arg0 unscaledPoint:(struct CGPoint )arg1 ;
-(BOOL)startAutoscroll:(id)arg0 unscaledPoint:(struct CGPoint )arg1 directions:(int)arg2 repeatInterval:(CGFloat)arg3 ;
-(NSUInteger)p_deltaForCount:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)p_cleanup;
-(void)timerFired:(id)arg0 ;


@end


#endif