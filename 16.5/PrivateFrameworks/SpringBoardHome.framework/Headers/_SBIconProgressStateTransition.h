// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBICONPROGRESSSTATETRANSITION_H
#define _SBICONPROGRESSSTATETRANSITION_H

@class SBIconProgressTransition, CAMediaTimingFunction;



@interface _SBIconProgressStateTransition : SBIconProgressTransition {
    CGFloat _totalElapsedTime;
    CGFloat _duration;
    CAMediaTimingFunction *_timingFunction;
    NSInteger _fromState;
    NSInteger _toState;
    CGFloat _fraction;
}




+(Class)_classForTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
+(id)newTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(BOOL)isCompleteWithView:(id)arg0 ;
-(id)_initWithFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)_updateView:(id)arg0 ;
-(void)completeTransitionAndUpdateView:(id)arg0 ;
-(void)updateView:(id)arg0 withElapsedTime:(CGFloat)arg1 ;


@end


#endif