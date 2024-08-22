// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSENGINEJOYSTICKGESTURERECOGNIZER_H
#define _UIFOCUSENGINEJOYSTICKGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"

@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) CGPoint previousStickPosition; // ivar: _previousStickPosition
@property (readonly, nonatomic) CGPoint stickPosition; // ivar: _stickPosition


-(BOOL)_shouldReceivePress:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_calculateStickPositionFromPresses:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;


@end


#endif