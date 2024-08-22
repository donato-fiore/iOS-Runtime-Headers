// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPREVIEWINTERACTIONCONTROLLER_H
#define VUIPREVIEWINTERACTIONCONTROLLER_H

@class UIPreviewInteraction, UICollectionView, UIViewPropertyAnimator, UICollectionViewCell, NSIndexPath, NSString, UIViewController;
@protocol UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, VUIPreviewInteractionControllerDelegate;

#import <Foundation/Foundation.h>

#import "VUIPresentationContainerViewController.h"
#import "VUIDialogPresentationController.h"

@interface VUIPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

 {
    UIPreviewInteraction *_previewInteraction;
    UICollectionView *_collectionView;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
    UIViewPropertyAnimator *_previewPropertyAnimator;
    UIViewPropertyAnimator *_commitPropertyAnimator;
    UICollectionViewCell *_stashedCell;
    BOOL _previewTransitionEnded;
}


@property (readonly, nonatomic) NSIndexPath *currentIndexPath; // ivar: _currentIndexPath
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIPreviewInteractionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(BOOL)previewInteractionShouldBegin:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)initWithPresentingViewController:(id)arg0 collectionView:(id)arg1 controllerToPresent:(id)arg2 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_cleanupPreviewInteraction;
-(void)animateTransition:(id)arg0 ;
-(void)dealloc;
-(void)dismissConfirmation;
-(void)previewInteraction:(id)arg0 didUpdatePreviewTransition:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)previewInteractionDidCancel:(id)arg0 ;


@end


#endif