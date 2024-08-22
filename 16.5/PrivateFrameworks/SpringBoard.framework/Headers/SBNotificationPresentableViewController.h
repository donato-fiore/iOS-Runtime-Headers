// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNOTIFICATIONPRESENTABLEVIEWCONTROLLER_H
#define SBNOTIFICATIONPRESENTABLEVIEWCONTROLLER_H

@class NCNotificationPresentableViewController, NSString, UIViewController;
@protocol SBBannerManagerPresentable, SBButtonEventsHandler, SBBarSwipeAffordanceObserver, SBUIPresentableLocalHomeGestureParticipant, SBUIPresentableHomeGestureContext, BNPresentableContext;



@interface SBNotificationPresentableViewController : NCNotificationPresentableViewController <SBBannerManagerPresentable, SBButtonEventsHandler, SBBarSwipeAffordanceObserver, SBUIPresentableLocalHomeGestureParticipant>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBUIPresentableHomeGestureContext> *homeGestureContext; // ivar: _homeGestureContext
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)shouldAcquireWindowLevelAssertion;
-(BOOL)shouldDismissForReason:(id)arg0 outReason:(*id)arg1 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg0 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg0 ;
-(void)longLookWillDismissForNotificationViewController:(id)arg0 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg0 ;


@end


#endif