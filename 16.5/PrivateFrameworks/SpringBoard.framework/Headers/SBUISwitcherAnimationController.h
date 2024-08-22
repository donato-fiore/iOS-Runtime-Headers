// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISWITCHERANIMATIONCONTROLLER_H
#define SBUISWITCHERANIMATIONCONTROLLER_H

@class NSString;
@protocol SBUIAnimationControllerObserver, NSObject, SBSwitcherContentViewControlling;


#import "SBUIWorkspaceAnimationController.h"

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>



@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) BOOL _interruptible; // ivar: _interruptible
@property (retain, nonatomic) NSObject<NSObject> *activityToken; // ivar: _activityToken
@property (copy, nonatomic) id *animationBlock; // ivar: _animationBlock
@property (weak, nonatomic) NSObject<SBSwitcherContentViewControlling> *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isInterruptible;
-(BOOL)isReasonableMomentToInterrupt;
-(BOOL)shouldResignActiveForAnimation;
-(id)_layoutState;
-(id)_previousLayoutState;
-(id)animationSettings;
-(id)initWithWorkspaceTransitionRequest:(id)arg0 contentViewController:(id)arg1 childAnimationControllers:(id)arg2 animationBlock:(id)arg3 ;
-(void)_addSignpostsAndBeginAnimationTrackingForAnimationStart;
-(void)_addSignpostsAndEndAnimationTrackingForAnimationEnd;
-(void)_didComplete;
-(void)_startAnimation;
-(void)_updatePPTsForAnimationEnd;
-(void)_updatePPTsForAnimationStart;
-(void)animationControllerDidFinishAnimation:(id)arg0 ;


@end


#endif