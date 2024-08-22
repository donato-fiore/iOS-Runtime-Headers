// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBICONPROGRESSPAUSEDTRANSITION_H
#define _SBICONPROGRESSPAUSEDTRANSITION_H

@class SBIconProgressTransition, CAMediaTimingFunction;



@interface _SBIconProgressPausedTransition : SBIconProgressTransition {
    CGFloat _totalElapsedTime;
    CGFloat _duration;
    CAMediaTimingFunction *_timingFunction;
    BOOL _toPaused;
    CGFloat _fraction;
}




+(id)newTransitionToPaused:(BOOL)arg0 ;
-(BOOL)isCompleteWithView:(id)arg0 ;
-(id)_initToPaused:(BOOL)arg0 ;
-(void)_updateElapsedTimeFromFraction;
-(void)_updateTimingFunction;
-(void)_updateView:(id)arg0 ;
-(void)completeTransitionAndUpdateView:(id)arg0 ;
-(void)updateToPaused:(BOOL)arg0 ;
-(void)updateView:(id)arg0 withElapsedTime:(CGFloat)arg1 ;


@end


#endif