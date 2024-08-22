// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWSERVICEVIEWCONTROLLEROPERATOR_H
#define _UIVIEWSERVICEVIEWCONTROLLEROPERATOR_H

@class NSMutableArray, NSString, NSArray, NSUndoManager, NSDate, BLSFrameSpecifierModel;
@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, UIAdaptivePresentationControllerDelegate, _UIFocusMovementActionForwarding, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource, _UIViewServiceViewControllerOperatorDelegate;


#import "UIViewController.h"
#import "_UIQueueingProxy.h"
#import "_UIHostedWindow.h"
#import "_UIHostedTextServiceSession.h"
#import "_UIAsyncInvocation.h"
#import "UIPopoverController.h"
#import "_UIViewServiceDummyPopoverController.h"
#import "_UIViewControllerOneToOneTransitionContext.h"

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, UIAdaptivePresentationControllerDelegate, _UIFocusMovementActionForwarding, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource>

 {
    NSMutableArray *_deferredToViewDidAppear;
    int _hostPID;
    int _mediaPID;
    NSString *_hostBundleID;
    ? _hostAuditToken;
    BOOL _hostCanDynamicallySpecifySupportedInterfaceOrientations;
    id *_remoteViewControllerProxyToOperator;
    _UIQueueingProxy *_remoteViewControllerProxyToViewController;
    NSArray *_pluginDisplayConfigurations;
    UIViewController *_localViewController;
    NSString *_presentationControllerClassName;
    _UIHostedWindow *_hostedWindow;
    BOOL _disableAutomaticKeyboardBehavior;
    BOOL _serviceInPopover;
    NSInteger _hostStatusBarOrientation;
    CGFloat _hostStatusBarHeight;
    NSMutableArray *_deputyRotationDelegates;
    unsigned int _hostAccessibilityServerPort;
    _UIHostedTextServiceSession *_textServiceSession;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    NSUInteger _supportedOrientations;
    NSInteger _availableTextServices;
    UIEdgeInsets _localViewControllerRequestedInsets;
    CGFloat _localViewControllerRequestedLeftMargin;
    CGFloat _localViewControllerRequestedRightMargin;
    _UIViewControllerOneToOneTransitionContext *_viewControllerTransitioningContext;
    NSInteger _editAlertToken;
    NSUndoManager *_editAlertUndoManager;
    BOOL _sheetPresentationControllerContainsFirstResponder;
    BOOL _sheetPresentationControllerFirstResponderRequiresKeyboard;
    CGRect _sheetPresentationControllerKeyboardFrame;
    BOOL _hasRequestedKeyboardEventEnvironmentDeferring;
    NSDate *_previousPresentationDate;
    BLSFrameSpecifierModel *_blsFrameSpecifierModel;
}


@property (copy, nonatomic, setter=_setTraitsDidChangeHandler:) id *_traitsDidChangeHandler; // ivar: __traitsDidChangeHandler
@property (copy, nonatomic, setter=_setTraitsWillChangeHandler:) id *_traitsWillChangeHandler; // ivar: __traitsWillChangeHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIViewServiceViewControllerOperatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *localViewController;
@property (readonly) Class superclass;


+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg0 hostPID:(int)arg1 hostBundleID:(id)arg2 hostAuditToken:(struct ? )arg3 ;
+(void)initialize;
-(BOOL)__knownPresentationWithoutPresentationControllerInstance;
-(BOOL)_canShowWhileLocked;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_forwardPresses:(id)arg0 withEvent:(id)arg1 canceled:(BOOL)arg2 ;
-(BOOL)_isHostedRootViewController;
-(BOOL)_providesCustomBasePresentationInsets;
-(BOOL)_shouldForwardLegacyRotationOnly;
-(BOOL)_validateSessionIdentifier:(id)arg0 restorationAnchor:(id)arg1 functionName:(char *)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)isModalInPresentation;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_canvasSystemMinimumMargin;
-(NSInteger)_availableTextServices;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_appearanceSource;
-(id)_childViewControllerForMultitaskingDragExclusionRects;
-(id)_dataFromPressesEvent:(id)arg0 ;
-(id)_inputViewsKey;
-(id)_presentationControllerClassName;
-(id)_queue;
-(id)_sessionForStateRestoration:(id)arg0 ;
-(id)_showServiceForText:(id)arg0 selectedTextRange:(struct _NSRange )arg1 type:(NSInteger)arg2 fromRect:(struct CGRect )arg3 inView:(id)arg4 ;
-(id)_showServiceForText:(id)arg0 type:(NSInteger)arg1 fromRect:(struct CGRect )arg2 inView:(id)arg3 ;
-(id)_showServiceForType:(NSInteger)arg0 withContext:(id)arg1 ;
-(id)_supportedInterfaceOrientationsForViewController:(id)arg0 ;
-(id)_viewControllersForRotationCallbacks;
-(id)_window;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForPointerLock;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)invalidate;
-(id)preferredFocusEnvironments;
-(struct CGSize )contentSizeForViewInPopover;
-(struct UIEdgeInsets )_customBasePresentationInsetsForView:(id)arg0 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_viewSafeAreaInsetsFromScene;
-(void)__cancelAlertActionWithToken:(NSInteger)arg0 ;
-(void)__createViewControllerWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)__dimmingViewWasTapped;
-(void)__exchangeAccessibilityPortInformation:(id)arg0 replyHandler:(id)arg1 ;
-(void)__hostDidAttachDisplay:(id)arg0 ;
-(void)__hostDidBecomeActive;
-(void)__hostDidChangeStatusBarHeight:(CGFloat)arg0 ;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(NSInteger)arg0 ;
-(void)__hostDidDetachDisplay:(id)arg0 ;
-(void)__hostDidEnterBackground;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostDidRotateFromInterfaceOrientation:(NSInteger)arg0 skipSelf:(BOOL)arg1 ;
-(void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets )arg0 andLeftMargin:(CGFloat)arg1 rightMargin:(CGFloat)arg2 ;
-(void)__hostDidSetPresentationControllerClassName:(id)arg0 ;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg0 originalSource:(id)arg1 ;
-(void)__hostDidUpdateDisplay:(id)arg0 ;
-(void)__hostDidUpdateSceneContext:(id)arg0 ;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg0 ;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__hostSceneDidEnterBackground;
-(void)__hostSceneWillEnterForeground;
-(void)__hostViewDidAppear:(BOOL)arg0 ;
-(void)__hostViewDidDisappear:(BOOL)arg0 ;
-(void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg0 newHostingHandleReplyHandler:(id)arg1 ;
-(void)__hostViewWillAppear:(BOOL)arg0 inInterfaceOrientation:(NSInteger)arg1 traitCollection:(id)arg2 statusBarHeight:(CGFloat)arg3 underlapsStatusBar:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)__hostViewWillDisappear:(BOOL)arg0 ;
-(void)__hostViewWillMoveToWindowInInterfaceOrientation:(NSInteger)arg0 withStatusBarHeight:(CGFloat)arg1 underlapsStatusBar:(BOOL)arg2 ;
-(void)__hostViewWillTransitionToSize:(struct CGSize )arg0 withContextDescription:(id)arg1 boundingPath:(id)arg2 statusBarHeight:(CGFloat)arg3 underlapsStatusBar:(BOOL)arg4 fence:(id)arg5 timing:(struct _UIUpdateTiming )arg6 whenDone:(id)arg7 ;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 skipSelf:(BOOL)arg2 ;
-(void)__hostWillEnterForeground;
-(void)__hostWillResignActive;
-(void)__hostWillRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 skipSelf:(BOOL)arg2 ;
-(void)__hostWillTransitionToTraitCollection:(id)arg0 withContextDescription:(id)arg1 deferIfAnimated:(BOOL)arg2 inRemoteViewHierarchy:(BOOL)arg3 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(id)arg0 ;
-(void)__redoActionWithToken:(NSInteger)arg0 ;
-(void)__restoreStateForSession:(id)arg0 restorationAnchor:(id)arg1 ;
-(void)__saveStateForSession:(id)arg0 restorationAnchor:(id)arg1 completionHandler:(id)arg2 ;
-(void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint )arg0 resultHandler:(id)arg1 ;
-(void)__setBoundingPath:(id)arg0 ;
-(void)__setContentSize:(struct CGSize )arg0 boundingPath:(id)arg1 ;
-(void)__setContentSize:(struct CGSize )arg0 boundingPath:(id)arg1 withFence:(id)arg2 ;
-(void)__setHostCanDynamicallySpecifySupportedInterfaceOrientations:(BOOL)arg0 ;
-(void)__setHostTintColor:(id)arg0 tintAdjustmentMode:(NSInteger)arg1 ;
-(void)__setHostTraitCollection:(id)arg0 deferIfAnimated:(BOOL)arg1 ;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg0 ;
-(void)__setMediaOverridePID:(int)arg0 ;
-(void)__setServiceInPopover:(BOOL)arg0 ;
-(void)__setSheetConfiguration:(id)arg0 ;
-(void)__showEditAlertView;
-(void)__textServiceDidDismiss;
-(void)__timelinesForDateInterval:(id)arg0 completion:(id)arg1 ;
-(void)__undoActionWithToken:(NSInteger)arg0 ;
-(void)__updateWithFrameSpecifierDate:(id)arg0 completion:(id)arg1 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg0 ;
-(void)_firstResponderDidChange:(id)arg0 ;
-(void)_forwardFocusMovementAction:(id)arg0 ;
-(void)_invalidateUnconditionallyThen:(id)arg0 ;
-(void)_marginInfoForChild:(id)arg0 leftMargin:(*CGFloat)arg1 rightMargin:(*CGFloat)arg2 ;
-(void)_objc_initiateDealloc;
-(void)_popoverDidDismiss:(id)arg0 ;
-(void)_popoverWillPresent:(id)arg0 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(id)arg0 ;
-(void)_setNeedsUpdateOfMultitaskingDragExclusionRects;
-(void)_setNeedsUpdateOfSupportedInterfaceOrientations;
-(void)_setNeedsUserInterfaceAppearanceUpdate;
-(void)_sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(CGFloat)arg0 dismissible:(BOOL)arg1 interruptedOffset:(struct CGPoint )arg2 ;
-(void)_sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 animateChange:(BOOL)arg2 dismissible:(BOOL)arg3 ;
-(void)_sheetInteractionDraggingDidEnd;
-(void)_sheetPresentationControllerDidChangeContainsFirstResponder:(BOOL)arg0 firstResponderRequiresKeyboard:(BOOL)arg1 keyboardFrame:(struct CGRect )arg2 ;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(void)_viewServiceIsDisplayingPopoverController:(id)arg0 ;
-(void)_wantsKeyboardEventsWithoutFirstResponder:(id)arg0 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)_willResignContentViewControllerOfPopover:(id)arg0 ;
-(void)_windowDidBecomeApplicationKey:(id)arg0 ;
-(void)_windowDidRegisterOrUnregisterScrollToTopView;
-(void)addDeputyRotationDelegate:(id)arg0 ;
-(void)dealloc;
-(void)dismissHostedTextServiceSession:(id)arg0 animated:(BOOL)arg1 ;
-(void)dummyPopoverController:(id)arg0 didChangeContentSize:(struct CGSize )arg1 animated:(BOOL)arg2 ;
-(void)dummyPopoverController:(id)arg0 popoverViewDidSetUseToolbarShine:(BOOL)arg1 ;
-(void)establishViewControllerDeputyWithProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadView;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)setNeedsUpdateOfPrefersPointerLocked;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg0 ;
-(void)viewDidLoad;
-(void)window:(id)arg0 statusBarWillChangeFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 ;


@end


#endif