// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFRAMEWISEINTERACTIVETRANSITIONANIMATOR_H
#define SBFRAMEWISEINTERACTIVETRANSITIONANIMATOR_H

@class NSString;
@protocol SBViewControllerInteractiveAnimatedTransitioning, SBFramewiseInteractiveTransitionAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning>

 {
    CGFloat _percentComplete;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFramewiseInteractiveTransitionAnimatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat percentVisible;
@property (nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (readonly) Class superclass;


-(BOOL)supportsRestarting;
-(CGFloat)percentComplete;
-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)cancelTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)finishInteractiveTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)updateTransition:(id)arg0 withPercentComplete:(CGFloat)arg1 ;


@end


#endif