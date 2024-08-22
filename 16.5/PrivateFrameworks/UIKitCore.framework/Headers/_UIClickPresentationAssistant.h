// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICLICKPRESENTATIONASSISTANT_H
#define _UICLICKPRESENTATIONASSISTANT_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "_UIClickPresentation.h"
#import "UIViewPropertyAnimator.h"
#import "_UIPortalView.h"
#import "UITargetedPreview.h"
#import "UIViewController.h"
#import "UIView.h"

@interface _UIClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting>

 {
    id<UIViewControllerContextTransitioning> *_currentContext;
    NSUInteger _currentState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *lifecycleCompletion; // ivar: lifecycleCompletion
@property (retain, nonatomic) _UIClickPresentation *presentation; // ivar: presentation
@property (readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator; // ivar: _presentationAnimator
@property (retain, nonatomic) _UIPortalView *presentationSourcePortalView; // ivar: _presentationSourcePortalView
@property (retain, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview
@property (retain, nonatomic) UIViewController *stashedParentViewController; // ivar: _stashedParentViewController
@property (retain, nonatomic) UIView *stashedSuperView; // ivar: _stashedSuperView
@property (readonly) Class superclass;
@property (copy, nonatomic) id *transitionCompletion; // ivar: _transitionCompletion


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithClickPresentation:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_animateDismissalIsInterruption:(BOOL)arg0 ;
-(void)_animatePresentation;
-(void)_applyStashedParentViewControllerIfNecessary;
-(void)_createPropertyAnimatorIfNecessaryForTransition:(id)arg0 isAppearing:(BOOL)arg1 ;
-(void)_didTransitionToDismissingFromState:(NSUInteger)arg0 ;
-(void)_didTransitionToPossibleEndingTransition:(BOOL)arg0 ;
-(void)_didTransitionToPresented;
-(void)_didTransitionToPresenting;
-(void)_postInteractionCleanup;
-(void)_stashParentViewControllerIfNecessary;
-(void)animateTransition:(id)arg0 ;
// -(void)dismissWithReason:(NSUInteger)arg0 alongsideActions:(id)arg1 completion:(unk)arg2  ;
-(void)presentFromSourcePreview:(id)arg0 lifecycleCompletion:(id)arg1 ;


@end


#endif