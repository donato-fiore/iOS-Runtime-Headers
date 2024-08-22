// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIANIMATIONCONTROLLERSTEPPEDANIMATOR_H
#define SBUIANIMATIONCONTROLLERSTEPPEDANIMATOR_H

@class NSString;
@protocol SBViewControllerInteractiveAnimatedTransitioning;


#import "SBUIAnimationControllerAnimator.h"
#import "SBAnimationStepper.h"

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBAnimationStepper *stepper; // ivar: _stepper
@property (readonly) Class superclass;


-(CGFloat)percentComplete;
-(id)initWithAnimationController:(id)arg0 ;
-(id)initWithAnimationController:(id)arg0 stepper:(id)arg1 ;
-(void)cancelTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)finishInteractiveTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)updateTransition:(id)arg0 withPercentComplete:(CGFloat)arg1 ;


@end


#endif