// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREVIEWINTERACTIONVIEWCONTROLLERPRESENTATION_H
#define _UIPREVIEWINTERACTIONVIEWCONTROLLERPRESENTATION_H

@protocol _UIPreviewInteractionViewControllerTransition;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIPreviewPresentationController.h"
#import "UIViewController.h"

@interface _UIPreviewInteractionViewControllerPresentation : NSObject

@property (retain, nonatomic) NSObject<_UIPreviewInteractionViewControllerTransition> *appearanceTransition; // ivar: _appearanceTransition
@property (retain, nonatomic) UIView *customContainerView; // ivar: _customContainerView
@property (weak, nonatomic) UIView *customViewForTouchContinuation; // ivar: _customViewForTouchContinuation
@property (retain, nonatomic) NSObject<_UIPreviewInteractionViewControllerTransition> *disappearanceTransition; // ivar: _disappearanceTransition
@property (retain, nonatomic) UIPreviewPresentationController *presentationController; // ivar: _presentationController
@property (copy, nonatomic) id *privatePresentationBlock; // ivar: _privatePresentationBlock
@property (copy, nonatomic) id *privatePresentationCompletionBlock; // ivar: _privatePresentationCompletionBlock
@property (nonatomic) BOOL shouldFlipFromAndToViewsForDisappearanceTransition; // ivar: _shouldFlipFromAndToViewsForDisappearanceTransition
@property (nonatomic) BOOL shouldPresentAutomatically; // ivar: _shouldPresentAutomatically
@property (nonatomic) BOOL shouldUpdateFromViewBeforePresentation; // ivar: _shouldUpdateFromViewBeforePresentation
@property (nonatomic) BOOL shouldUseCATransitions; // ivar: _shouldUseCATransitions
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 ;
-(void)_completeViewControllerPresentationImmediately;
-(void)presentViewController;


@end


#endif