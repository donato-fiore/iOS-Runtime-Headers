// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICONTEXTACTIONSVIEWCONTROLLER_H
#define SKUICONTEXTACTIONSVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, NSMutableArray, UIInterfaceActionGroupView, NSString, UIStackView, UIGestureRecognizer;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPopoverPresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIAdaptivePresentationControllerDelegate;


#import "SKUIContextActionsConfiguration.h"
#import "SKUIContextActionsPresentationController.h"

@interface SKUIContextActionsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPopoverPresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIAdaptivePresentationControllerDelegate>



@property (nonatomic, getter=hasAppliedSystemRecognizer) BOOL appliedSystemRecognizer; // ivar: _appliedSystemRecognizer
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) SKUIContextActionsConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIInterfaceActionGroupView *contextActionView; // ivar: _contextActionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint gestureRecognizerInitialLocation; // ivar: _gestureRecognizerInitialLocation
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isOrbPresentation) BOOL orbPresentation; // ivar: _orbPresentation
@property (retain, nonatomic) UIInterfaceActionGroupView *scrollableActionGroupView; // ivar: _scrollableActionGroupView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognzier; // ivar: _systemProvidedGestureRecognzier
@property (retain, nonatomic) SKUIContextActionsPresentationController *transitionPresentationController; // ivar: _transitionPresentationController


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_transitionPresentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_applySystemRecognizer;
-(void)_reloadViewsConfiguration;
-(void)animateTransition:(id)arg0 ;
// -(void)interfaceAction:(id)arg0 invokeActionHandler:(id)arg1 completion:(unk)arg2  ;
-(void)systemProvidedGestureRecognzierTriggered:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewTapped:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif