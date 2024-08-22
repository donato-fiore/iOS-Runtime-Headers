// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONPRESENTABLEVIEWCONTROLLER_H
#define NCNOTIFICATIONPRESENTABLEVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol BNPresentable, NCNotificationViewControllerObserving, NCNotificationPresentableViewControllerDelegate, BNPanGestureProxy, BNPresentableContext;


#import "NCNotificationViewController.h"

@interface NCNotificationPresentableViewController : UIViewController <BNPresentable, NCNotificationViewControllerObserving>



@property (readonly, nonatomic) int bannerAppearState; // ivar: _bannerAppearState
@property (nonatomic, getter=_canPan, setter=_setCanPan:) BOOL canPan; // ivar: _canPan
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationPresentableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_initialBannerFrame, setter=_setInitialBannerFrame:) CGRect initialBannerFrame; // ivar: _initialBannerFrame
@property (readonly, nonatomic) NCNotificationViewController *notificationViewController; // ivar: _notificationViewController
@property (weak, nonatomic, getter=_panGestureProxy, setter=_setPanGestureProxy:) NSObject<BNPanGestureProxy> *panGestureProxy; // ivar: _panGestureProxy
@property (nonatomic, getter=_isPanPresentation, setter=_setPanPresentation:) BOOL panPresentation; // ivar: _panPresentation
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (nonatomic, getter=_presentationState, setter=_setPresentationState:) NSInteger presentationState; // ivar: _presentationState
@property (nonatomic, getter=_isReadyForPanGestureProxy, setter=_setReadyForPanGestureProxy:) BOOL readyForPanGestureProxy; // ivar: _readyForPanGestureProxy
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)_canShowWhileLocked;
-(BOOL)_isAppearingOrAppeared;
-(BOOL)becomeFirstResponder;
-(BOOL)bn_shouldAnimateViewTransitionToSize:(struct CGSize )arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)arg0 ;
-(id)initWithNotificationViewController:(id)arg0 ;
-(id)presentableDescription;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(void)draggingDidBeginWithGestureProxy:(id)arg0 ;
-(void)longLookDidDismissForNotificationViewController:(id)arg0 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg0 ;
-(void)longLookWillDismissForNotificationViewController:(id)arg0 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillNotAppearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif