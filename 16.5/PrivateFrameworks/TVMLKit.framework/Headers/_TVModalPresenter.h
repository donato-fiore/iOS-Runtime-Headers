// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVMODALPRESENTER_H
#define _TVMODALPRESENTER_H

@class _UIProgressiveBlurPresentationAnimator, NSString, UINavigationController, UIViewController;
@protocol UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>

#import "_TVPlaybackFadeAnimator.h"

@interface _TVModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate>

 {
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    BOOL _dismissing;
    _TVPlaybackFadeAnimator *_playbackAnimator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *modalRootViewController; // ivar: _modalRootViewController
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (readonly) Class superclass;


+(id)presenter;
-(BOOL)_isDismissing;
-(id)_hidden;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_configureModalController:(id)arg0 withFromController:(id)arg1 andConfiguration:(id)arg2 ;
-(void)_dismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_forceOrientationBackToSupportedOrientation;
-(void)_willRotateNotification:(id)arg0 ;
-(void)dealloc;
-(void)hideAllAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)hideController:(id)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)showController:(id)arg0 fromController:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)showController:(id)arg0 fromController:(id)arg1 withConfiguration:(id)arg2 andCompletionBlock:(id)arg3 ;
-(void)showController:(id)arg0 fromController:(id)arg1 withConfiguration:(id)arg2 animated:(BOOL)arg3 andCompletionBlock:(id)arg4 ;


@end


#endif