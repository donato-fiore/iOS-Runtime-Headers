// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONSHORTLOOKVIEWCONTROLLER_H
#define NCNOTIFICATIONSHORTLOOKVIEWCONTROLLER_H

@class UITapGestureRecognizer, UIPointerInteraction, NSDate, UIView, PLExpandedPlatterInteractionManager, NSString, NSMutableArray, PLClickPresentationInteractionManager, UIBezierPath;
@protocol NCExpandedPlatterObserving, PLExpandedPlatterInteractionHosting, PLExpandedPlatterInteractionManagerDelegate, NCExpandedPlatterViewControllerDelegate, UIDragInteractionDelegate, UIPointerInteractionDelegate, UIGestureRecognizerDelegate, PLClickPresentationInteractionManagerDelegate, PLExpandedPlatterPresentationControllerDelegate, PLClickPresentationInteractionPresenting, NCNotificationViewControllerObserving, PLExpandedPlatterInteractionAnimating;


#import "NCNotificationViewController.h"
#import "NCNotificationLongLookViewController.h"
#import "NCExpandedPlatterViewController.h"

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCExpandedPlatterObserving, PLExpandedPlatterInteractionHosting, PLExpandedPlatterInteractionManagerDelegate, NCExpandedPlatterViewControllerDelegate, UIDragInteractionDelegate, UIPointerInteractionDelegate, UIGestureRecognizerDelegate, PLClickPresentationInteractionManagerDelegate, PLExpandedPlatterPresentationControllerDelegate, PLClickPresentationInteractionPresenting, NCNotificationViewControllerObserving>

 {
    NCNotificationLongLookViewController *_longLookNotificationViewController;
    NCExpandedPlatterViewController *_expandedPlatterViewController;
    UITapGestureRecognizer *_tapGesture;
    UIPointerInteraction *_pointerInteraction;
    NSDate *_tapBeginTime;
    CGRect _finalPresentedFrameOfViewForPreview;
    UIView *_lookViewWrapper;
    NSInteger _trigger;
    PLExpandedPlatterInteractionManager *_interactionManager;
    NSString *_expandedPlatterDismissalReason;
    UIView *_containerViewForExpandedContent;
    NSMutableArray *_containerViewProviders;
    int _expandedPlatterPresentationState;
}


@property (retain, nonatomic, getter=_activeExpandedPlatterInteractionAnimator, setter=_setActiveExpandedPlatterInteractionAnimator:) NSObject<PLExpandedPlatterInteractionAnimating> *activeExpandedPlatterInteractionAnimator; // ivar: _activeExpandedPlatterInteractionAnimator
@property (readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // ivar: _clickPresentationInteractionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_didScrollPresentLongLookViewController, setter=_setDidScrollPresentLongLookViewController:) BOOL didScrollPresentLongLookViewController; // ivar: _didScrollPresentLongLookViewController
@property (readonly, nonatomic) CGRect finalDismissedFrameOfViewForPreview;
@property (readonly, nonatomic) CGRect finalPresentedFrameOfViewForPreview;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) CGRect initialPresentedFrameOfViewForPreview;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *viewForPreview;
@property (readonly, copy, nonatomic) UIBezierPath *visiblePath;


+(id)_sharedNotificationFeedbackGenerator;
+(void)_playNegativeInteractionHaptic;
+(void)_prepareSharedNotificationFeedbackGenerator;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isPresentingCustomContentProvidingViewController;
-(BOOL)_setNotificationRequest:(id)arg0 ;
-(BOOL)_shouldPerformHoverHighlighting;
-(BOOL)_shouldSupportExpandedPlatterInteraction;
-(BOOL)_shouldUseHapticTouch;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)clickPresentationInteractionManager:(id)arg0 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint )arg1 ;
-(BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg0 ;
-(BOOL)didForwardNotificationRequestToCustomContent:(id)arg0 ;
-(BOOL)dismissPresentedViewControllerAnimated:(BOOL)arg0 ;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(BOOL)expandedPlatterInteractionManager:(id)arg0 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint )arg1 ;
-(BOOL)expandedPlatterInteractionManagerShouldAllowInitialSwipeToDismiss:(id)arg0 ;
-(BOOL)expandedPlatterInteractionManagerShouldAllowLongPressGesture:(id)arg0 ;
-(BOOL)expandedPlatterPresentationControllerShouldProvideBackground:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
-(BOOL)isContentExtensionVisible:(id)arg0 ;
-(BOOL)isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
-(BOOL)isNotificationContentViewHidden;
-(BOOL)isShortLook;
-(BOOL)resignFirstResponder;
-(BOOL)shouldCommitToExpandedPlatterPresentationWithFeedback;
-(BOOL)shouldRestorePresentingShortLookOnDismiss;
-(NSInteger)expandedPlatterViewController:(id)arg0 dateFormatStyleForNotificationRequest:(id)arg1 ;
-(NSUInteger)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
-(NSUInteger)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
-(NSUInteger)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(NSUInteger)arg0 isPrimary:(BOOL)arg1 isLarge:(BOOL)arg2 ;
-(id)_expandedPlatterViewController;
-(id)_initWithNotificationRequest:(id)arg0 revealingAdditionalContentOnPresentation:(BOOL)arg1 ;
-(id)_interactionManagerCreatingIfNecessary;
-(id)_longLookNotificationViewController;
-(id)_newClickPresentationInteractionManager;
-(id)_notificationShortLookViewIfLoaded;
-(id)_presentedLongLookViewController;
-(id)_presentedViewController;
-(id)_requiredContextIDsForDragSessionInView:(id)arg0 ;
-(id)backgroundMaterialView;
-(id)containerViewForClickPresentationInteractionManager:(id)arg0 ;
-(id)containerViewForExpandedContent;
-(id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)arg0 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)expandedPlatterInteractionManager:(id)arg0 menuWithSuggestedActions:(id)arg1 ;
-(id)expandedPlatterInteractionManagerContainerView:(id)arg0 ;
-(id)expandedPlatterInteractionManagerContentViewController:(id)arg0 ;
-(id)expandedPlatterInteractionManagerIdentifier:(id)arg0 ;
-(id)expandedPlatterViewController:(id)arg0 staticContentProviderForNotificationRequest:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)presentedExpandedPlatterViewController;
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg0 ;
-(id)transitioningDelegateForClickPresentationInteractionManager:(id)arg0 ;
-(void)_askDelegateToExecuteAction:(id)arg0 withParameters:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissPresentedViewControllerAnimated:(BOOL)arg0 ;
-(void)_expandedPlatterInteractionManager:(id)arg0 didDismissWithReason:(id)arg1 ;
-(void)_expandedPlatterInteractionManager:(id)arg0 willDismissWithReason:(id)arg1 ;
-(void)_handlePresentedContentDismissalForClickPresentationInteractionManagerWithTrigger:(NSInteger)arg0 ;
-(void)_handleTapOnView:(id)arg0 ;
-(void)_loadLookView;
-(void)_notificationViewControllerViewDidLoad;
-(void)_presentLongLookForScrollAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_presentLongLookViaClickPresentationInteraction:(id)arg0 ;
-(void)_presentLongLookViaInteractionManager:(id)arg0 ;
-(void)_updateLookView:(id)arg0 withTitleFromProvidedStaticContent:(id)arg1 ;
-(void)_updateShortLookShadow;
-(void)_updateThumbnailForRichContentForShortLookView:(id)arg0 withContentProvider:(id)arg1 ;
-(void)_updateWithProvidedAuxiliaryOptionsContent;
-(void)_updateWithProvidedStaticContent;
-(void)clickPresentationInteractionManager:(id)arg0 declinedDismissingPresentedContentWithTrigger:(NSInteger)arg1 ;
-(void)clickPresentationInteractionManager:(id)arg0 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg1 withCompletionBlock:(id)arg2 ;
-(void)clickPresentationInteractionManager:(id)arg0 willDismissPresentedContentWithTrigger:(NSInteger)arg1 ;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg0 ;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg0 ;
-(void)contentProvider:(id)arg0 performAction:(id)arg1 animated:(BOOL)arg2 ;
-(void)customContent:(id)arg0 didUpdateUserNotificationActions:(id)arg1 ;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)expandAndPlayMedia;
-(void)expandedPlatter:(id)arg0 didDismissWithReason:(id)arg1 ;
-(void)expandedPlatter:(id)arg0 willDismissWithReason:(id)arg1 ;
-(void)expandedPlatterDidPresent:(id)arg0 ;
-(void)expandedPlatterInteractionManager:(id)arg0 shouldCommitInteraction:(id)arg1 ;
-(void)expandedPlatterInteractionManager:(id)arg0 willDismissContentWithAnimator:(id)arg1 ;
-(void)expandedPlatterInteractionManager:(id)arg0 willPresentContentWithAnimator:(id)arg1 ;
-(void)expandedPlatterViewController:(id)arg0 requestsDismissalWithReason:(id)arg1 userInfo:(id)arg2 ;
-(void)expandedPlatterWillPresent:(id)arg0 ;
-(void)notificationViewControllerDidDismiss:(id)arg0 ;
-(void)notificationViewControllerDidPresent:(id)arg0 ;
-(void)notificationViewControllerWillDismiss:(id)arg0 ;
-(void)notificationViewControllerWillPresent:(id)arg0 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)presentLongLookAnimated:(BOOL)arg0 trigger:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setContentReplacedWithSnapshot:(BOOL)arg0 ;
-(void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg0 ;
-(void)setCustomContentHomeAffordanceVisible:(BOOL)arg0 ;
-(void)setHasShadow:(BOOL)arg0 ;
-(void)setInteractionEnabled:(BOOL)arg0 ;
-(void)setMaterialGroupNameBase:(id)arg0 ;
-(void)setNotificationContentViewHidden:(BOOL)arg0 ;
-(void)setPlatterHighlighted:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif