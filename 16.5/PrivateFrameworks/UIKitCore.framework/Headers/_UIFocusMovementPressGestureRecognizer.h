// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSMOVEMENTPRESSGESTURERECOGNIZER_H
#define _UIFOCUSMOVEMENTPRESSGESTURERECOGNIZER_H

@class NSString, NSMutableSet;
@protocol _UIRepeatingGestureClockDelegate;


#import "UIGestureRecognizer.h"
#import "_UIRepeatingGestureClock.h"

@interface _UIFocusMovementPressGestureRecognizer : UIGestureRecognizer <_UIRepeatingGestureClockDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger focusHeading; // ivar: _focusHeading
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_isRecognizing) BOOL isRecognizing;
@property (nonatomic) BOOL isRepeat; // ivar: _isRepeat
@property (nonatomic) NSInteger repeatCount; // ivar: _repeatCount
@property (retain, nonatomic) _UIRepeatingGestureClock *repeatingClock; // ivar: _repeatingClock
@property (nonatomic) BOOL shouldRepeat; // ivar: _shouldRepeat
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_trackedPresses, setter=_setTrackedPresses:) NSMutableSet *trackedPresses; // ivar: _trackedPresses


-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(NSUInteger)focusHeadingForPresses:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_startTrackingPresses:(id)arg0 ;
-(void)_stopTrackingPresses:(id)arg0 ;
-(void)_updateForPresses:(id)arg0 action:(NSUInteger)arg1 ;
-(void)_verifyTrackingPresses:(id)arg0 ;
-(void)configureDefaults;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)repeatingGestureClockDidTick:(id)arg0 ;
-(void)reset;
-(void)setAllowedTouchTypes:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)setState:(NSInteger)arg0 isRepeat:(BOOL)arg1 ;


@end


#endif