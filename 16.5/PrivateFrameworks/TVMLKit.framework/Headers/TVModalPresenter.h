// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVMODALPRESENTER_H
#define TVMODALPRESENTER_H

@class NSHashTable, _UIProgressiveBlurPresentationAnimator, NSString, NSArray;
@protocol UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>

#import "_TVPlaybackFadeAnimator.h"

@interface TVModalPresenter : NSObject <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate>

 {
    NSHashTable *__presentationControllers;
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    _TVPlaybackFadeAnimator *_playbackAnimator;
}


@property (readonly, nonatomic) NSHashTable *_presentationControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *presentedViewControllers;
@property (readonly) Class superclass;


+(id)_viewControllerForResponder:(id)arg0 ;
+(id)sharedInstance;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)dismissAllViewControllersWithAnimation:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)dismissViewControllerWithResponder:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentViewController:(id)arg0 forResponder:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)presentViewController:(id)arg0 fromViewController:(id)arg1 options:(id)arg2 completion:(id)arg3 ;


@end


#endif