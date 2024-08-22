// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTEADYTOUCHFORCEGESTURERECOGNIZER_H
#define _UISTEADYTOUCHFORCEGESTURERECOGNIZER_H

@class CADisplayLink, NSDate;


#import "UIGestureRecognizer.h"
#import "_UIVelocityIntegrator.h"

@interface _UISteadyTouchForceGestureRecognizer : UIGestureRecognizer {
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIVelocityIntegrator *_velocityIntegrator;
    CGFloat _currentTouchForce;
    NSDate *_steadyTimestamp;
    BOOL _useOverridingMinimumDuration;
    CGFloat _overrideMinimumSteadyTouchForceDuration;
}


@property (nonatomic) CGFloat minimumSteadyTouchForceDuration; // ivar: _minimumSteadyTouchForceDuration


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_adjustSteadyForceDurationIfNeeded:(id)arg0 event:(id)arg1 ;
-(void)_beginForContinuousEvaluationForTouches:(id)arg0 ;
-(void)_endContinuousEvaluation;
-(void)_evaluateTouches:(id)arg0 ;
-(void)_evaluateWithTouchForce:(CGFloat)arg0 ;
-(void)_updateForContinuousEvaluation:(id)arg0 ;
-(void)cancel;
-(void)recognize;
-(void)reset;
-(void)setView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif