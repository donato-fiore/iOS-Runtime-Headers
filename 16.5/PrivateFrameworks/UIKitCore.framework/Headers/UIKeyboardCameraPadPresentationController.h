// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDCAMERAPADPRESENTATIONCONTROLLER_H
#define UIKEYBOARDCAMERAPADPRESENTATIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, _UIAssertion, UIDimmingViewDelegate;


#import "UIKeyboardCameraBasePresentationController.h"
#import "UIView.h"
#import "UIDimmingView.h"

@interface UIKeyboardCameraPadPresentationController : UIKeyboardCameraBasePresentationController <UIViewControllerAnimatedTransitioning>

 {
    id<_UIAssertion> *_keyboardSuppressionAssertion;
    UIView *_shadowView;
    UIDimmingView *_dimmingView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<UIDimmingViewDelegate> *dimmingViewDelegate; // ivar: _dimmingViewDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)updatesGuideDuringRotation;
-(CGFloat)transitionDuration:(id)arg0 ;
-(int)overrideTextEffectsVisibilityLevelForTransitionView:(id)arg0 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_animateDismissTransition:(id)arg0 ;
-(void)_animatePresentTransition:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif