// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISYSTEMGESTUREGATEGESTURERECOGNIZER_H
#define _UISYSTEMGESTUREGATEGESTURERECOGNIZER_H

@protocol OS_dispatch_source;


#import "UIGestureRecognizer.h"

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {
    unsigned char _systemGestureGateType;
    BOOL _systemGesturesRecognitionPossible;
    BOOL _waitingForSystemGestureStateNotification;
    CGFloat _lastTouchTime;
    NSObject<OS_dispatch_source> *_delayTimeoutTimer;
}




+(BOOL)_shouldDefaultToTouches;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(id)_gateGestureTypeString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)initWithWindow:(id)arg0 type:(unsigned char)arg1 ;
-(void)_cancelTimeoutTimerIfNeeded;
-(void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg0 ;
-(void)_resetGestureRecognizer;
-(void)_systemGestureStateChanged:(id)arg0 ;
-(void)_timeOut;
-(void)dealloc;
-(void)setDelaysTouchesBegan:(BOOL)arg0 ;
-(void)setDelaysTouchesEnded:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif