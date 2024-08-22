// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPSCENECONTENTCONTAINERADAPTER_H
#define SBPIPSCENECONTENTCONTAINERADAPTER_H

@class SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding>, UIApplicationSceneDeactivationAssertion, __UIKeyboardArbiterManager, NSString, NSNumber, UIViewController<SBPIPSceneContentProviding>;
@protocol SBPIPStashableWrapperViewControllerDelegate, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver, SBWorkspaceKeyboardFocusControllerObserver, SBKeyboardDismissalParticipant, SBPIPContainerViewControllerAdapter, SBPIPSceneContentContainerAdapterDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBPIPStashableWrapperViewController.h"
#import "SBWorkspaceKeyboardFocusController.h"
#import "SBKeyboardDismissalManager.h"
#import "SBKeyboardSuppressionManager.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBPIPInteractionSettings.h"
#import "SBPIPContainerViewController.h"

@interface SBPIPSceneContentContainerAdapter : NSObject <SBPIPStashableWrapperViewControllerDelegate, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver, SBWorkspaceKeyboardFocusControllerObserver, SBKeyboardDismissalParticipant, SBPIPContainerViewControllerAdapter>

 {
    SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding> *_containerViewController;
    SBPIPStashableWrapperViewController *_stashableWrappingViewController;
    BOOL _invalidated;
    CGSize _minimumStashTabSize;
    id<SBPIPSceneContentContainerAdapterDelegate> *_delegate;
    UIApplicationSceneDeactivationAssertion *_sceneDeactivationAssertion;
    id<BSInvalidatable> *_keyboardSuppressionAssertion;
    __UIKeyboardArbiterManager *_keyboardArbiterManager;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id<BSInvalidatable> *_keyboardFocusObserver;
    SBKeyboardDismissalManager *_keyboardDismissalManager;
    id<BSInvalidatable> *_keyboardDismissalParticipantHandle;
    SBKeyboardSuppressionManager *_keyboardSuppressionManager;
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
    SBPIPInteractionSettings *_interactionSettings;
}


@property (readonly, weak, nonatomic) SBPIPContainerViewController *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *overrideResourcesUsageReductionTimeout;
@property (readonly, nonatomic) UIViewController<SBPIPSceneContentProviding> *sceneContentViewController; // ivar: _sceneContentViewController
@property (readonly, nonatomic) BOOL shouldSuppressAssociatedElementsInSystemAperture;
@property (readonly) Class superclass;


-(BOOL)_hitTestTouch:(id)arg0 inWindow:(id)arg1 ;
-(BOOL)_hostedSceneIsPresentingKeyboard;
-(BOOL)_tapInEnvironmentCanDismiss:(NSInteger)arg0 ;
-(BOOL)containerViewController:(id)arg0 shouldHandleStashingForTransitionContext:(id)arg1 ;
-(BOOL)containerViewControllerShouldRequireMedusaKeyboard:(id)arg0 ;
-(BOOL)isStashTabHiddenForContainerViewController:(id)arg0 ;
-(BOOL)keyboardDismissalManager:(id)arg0 shouldPreventDismissalForTouch:(id)arg1 inWindow:(id)arg2 ;
-(BOOL)stashableWrapper:(id)arg0 didReceivedTapGesture:(id)arg1 ;
-(NSInteger)_effectiveEnvironmentModeForTransitionContext:(id)arg0 ;
-(id)_hostedAppSceneHandle;
-(id)bundleIdentifierForContainerViewController:(id)arg0 ;
-(id)contentViewControllerForContainerViewController:(id)arg0 ;
-(id)hostedAppSceneHandleForContainerViewController:(id)arg0 ;
-(id)initWithSceneContentViewController:(id)arg0 contentViewLayoutSettings:(id)arg1 stashSettings:(id)arg2 shadowSettings:(id)arg3 interactionSettings:(id)arg4 keyboardArbiterManager:(id)arg5 keyboardFocusController:(id)arg6 keyboardSuppressionManager:(id)arg7 keyboardDismissalManager:(id)arg8 deactivationManager:(id)arg9 transitionCoordinator:(id)arg10 delegate:(id)arg11 ;
-(id)scenePersistenceIdentifierForContainerViewController:(id)arg0 ;
-(int)processIdentifierForContainerViewController:(id)arg0 ;
-(void)_dismissKeyboardIfNecessaryForTransitionContext:(id)arg0 ;
-(void)_updateDisplayLayoutElementKeyboardFocus:(BOOL)arg0 ;
-(void)containerViewController:(id)arg0 didSettleOnStashState:(BOOL)arg1 ;
-(void)containerViewController:(id)arg0 didUpdateStashProgress:(CGFloat)arg1 ;
-(void)containerViewController:(id)arg0 didUpdateStashState:(BOOL)arg1 springSettings:(id)arg2 ;
-(void)containerViewController:(id)arg0 handleDestructionRequestForSceneHandle:(id)arg1 ;
-(void)containerViewController:(id)arg0 wantsStashTabHidden:(BOOL)arg1 left:(BOOL)arg2 springSettings:(id)arg3 completion:(id)arg4 ;
-(void)containerViewController:(id)arg0 willBeginInteractionWithGestureRecognizer:(id)arg1 ;
-(void)containerViewController:(id)arg0 willUpdateStashState:(BOOL)arg1 ;
-(void)containerViewControllerDidEndInteraction:(id)arg0 targetWindowScene:(id)arg1 ;
-(void)containerViewControllerDidEndSizeChange:(id)arg0 ;
-(void)containerViewControllerPanGestureDidEnd:(id)arg0 ;
-(void)containerViewControllerWillBeginSizeChange:(id)arg0 behavior:(int)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)keyboardFocusController:(id)arg0 externalSceneDidAcquireFocus:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)loadSubviewsForContainerViewController:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg1 ;
-(void)stashableWrapper:(id)arg0 didTransitionToStashed:(BOOL)arg1 ;


@end


#endif