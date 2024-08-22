// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPANSYSTEMGESTURERECOGNIZER_H
#define SBPANSYSTEMGESTURERECOGNIZER_H

@class UIPanGestureRecognizer, NSTimer;
@protocol SBPanSystemGestureRecognizerDelegate;



@interface SBPanSystemGestureRecognizer : UIPanGestureRecognizer {
    BOOL _initialTouchReceived;
    CGFloat _initialTouchReceivedTime;
}


@property (weak, nonatomic) NSObject<SBPanSystemGestureRecognizerDelegate> *delegate;
@property (nonatomic) BOOL failsPastMaximumPressDurationWithoutHysteresis; // ivar: _failsPastMaximumPressDurationWithoutHysteresis
@property (nonatomic) CGFloat maximumPressDuration; // ivar: _maximumPressDuration
@property (retain, nonatomic) NSTimer *noHysterisisCancellationTimer; // ivar: _noHysterisisCancellationTimer


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)invalidateNoHysterisisCancellationTimer;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;
-(void)setupNoHysterisisCancellationTimerIfNeeded;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif