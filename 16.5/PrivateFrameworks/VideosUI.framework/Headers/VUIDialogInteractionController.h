// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDIALOGINTERACTIONCONTROLLER_H
#define VUIDIALOGINTERACTIONCONTROLLER_H

@class UICollectionView, UILongPressGestureRecognizer, NSIndexPath, NSString, UIViewController;
@protocol VUIPreviewInteractionControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, VUIDialogInteractionControllerDelegate;

#import <Foundation/Foundation.h>

#import "VUIPresentationContainerViewController.h"
#import "VUIDialogPresentationController.h"
#import "VUIPreviewInteractionController.h"

@interface VUIDialogInteractionController : NSObject <VUIPreviewInteractionControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

 {
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
}


@property (retain, nonatomic) NSIndexPath *currentIndexPath; // ivar: _currentIndexPath
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIDialogInteractionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIPreviewInteractionController *interactionController; // ivar: _interactionController
@property (nonatomic) BOOL isPresenting; // ivar: _isPresenting
@property (readonly, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(BOOL)interactionController:(id)arg0 shouldInteractionControllerBeginForIndexPath:(id)arg1 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)initWithPresentingViewController:(id)arg0 collectionView:(id)arg1 controllerToPresent:(id)arg2 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_cleanup;
-(void)animateTransition:(id)arg0 ;
-(void)dismissConfirmation;
-(void)interactionController:(id)arg0 didBeginForIndexPath:(id)arg1 ;
-(void)interactionController:(id)arg0 didEndForIndexPath:(id)arg1 ;
-(void)longPressGestureRecognizerPressed:(id)arg0 ;
-(void)presentViewController:(id)arg0 ;


@end


#endif