// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIREPEATINGPRESSGESTURERECOGNIZER_H
#define _UIREPEATINGPRESSGESTURERECOGNIZER_H

@class NSString;
@protocol _UIRepeatingGestureClockDelegate;


#import "UIGestureRecognizer.h"
#import "_UIRepeatingGestureClock.h"

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer <_UIRepeatingGestureClockDelegate>



@property (nonatomic, setter=_setButtonType:) NSInteger _buttonType;
@property (readonly, nonatomic) CGFloat _force; // ivar: _force
@property (nonatomic) NSUInteger changeCount; // ivar: _changeCount
@property (retain, nonatomic) _UIRepeatingGestureClock *clock; // ivar: _clock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired
@property (readonly) Class superclass;


-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_shouldReceivePress:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_resetGestureRecognizer;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)repeatingGestureClockDidTick:(id)arg0 ;
-(void)setView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif