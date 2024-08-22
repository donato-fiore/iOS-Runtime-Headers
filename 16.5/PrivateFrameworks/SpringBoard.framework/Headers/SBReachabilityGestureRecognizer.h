// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREACHABILITYGESTURERECOGNIZER_H
#define SBREACHABILITYGESTURERECOGNIZER_H

@class UIGestureRecognizer, UITouch;


#import "SBReachabilitySettings.h"
#import "SBTouchHistory.h"

@interface SBReachabilityGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UITouch *activeTouch; // ivar: _activeTouch
@property (nonatomic) BOOL everTranslatedUpwards; // ivar: _everTranslatedUpwards
@property (nonatomic) CGPoint initialTouchLocation; // ivar: _initialTouchLocation
@property (nonatomic) BOOL movedPastHysteresis; // ivar: _movedPastHysteresis
@property (retain, nonatomic) SBReachabilitySettings *settings; // ivar: _settings
@property (retain, nonatomic) SBTouchHistory *touchHistory; // ivar: _touchHistory


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif