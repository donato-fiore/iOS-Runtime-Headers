// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPCONTROLLER_H
#define SBPIPCONTROLLER_H

@class NSMapTable, NSHashTable, NSMutableSet, NSMutableDictionary, NSString, UIView, FBSDisplayLayoutMonitor, NSArray;
@protocol SBAlertItemsControllerObserver, SBAssistantObserver, SBLayoutStateTransitionObserver, SBPIPContainerViewControllerInteractionObserver, SBPIPContainerViewControllerObserver, SBPIPControllerAdapterContextProviding, SBSensorActivityObserver, SBWorkspaceKeyboardFocusControllerObserver, SBExternalDisplayServiceObserver, SBIdleTimerProviding, SBPIPMorphAnimatorControllerDelegate, BSInvalidatable, SBIdleTimerCoordinating, SBPIPControllerAdapter;

#import <Foundation/Foundation.h>

#import "SBPIPInteractionSettings.h"
#import "SBIdleTimerCoordinatorHelper.h"
#import "SBPIPStashAssertion.h"
#import "SBPIPInterruptionDebouncingTimer.h"
#import "SBWindowSceneManager.h"

@interface SBPIPController : NSObject <SBAlertItemsControllerObserver, SBAssistantObserver, SBLayoutStateTransitionObserver, SBPIPContainerViewControllerInteractionObserver, SBPIPContainerViewControllerObserver, SBPIPControllerAdapterContextProviding, SBSensorActivityObserver, SBWorkspaceKeyboardFocusControllerObserver, SBExternalDisplayServiceObserver, SBIdleTimerProviding, SBPIPMorphAnimatorControllerDelegate>

 {
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    NSMapTable *_containerViewControllerToContextMap;
    SBPIPInteractionSettings *_interactionSettings;
    CGFloat _windowLevel;
    BOOL _hasIdleTimerBehaviors;
    id<SBIdleTimerCoordinating> *_idleTimerCoordinator;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    NSHashTable *_connectedWindowScenes;
    NSMutableSet *_pictureInPictureWindowHiddenReasons;
    NSMapTable *_windowSceneToWindowMarginsMap;
    NSMapTable *_windowSceneToInsetAssertionMap;
    NSMapTable *_windowSceneToStashAssertionsMap;
    NSHashTable *_interruptionAssertions;
    NSMutableDictionary *_cameraInterruptionAssertions;
    id<BSInvalidatable> *_fullscreenModalElementInsetOverrideAssertion;
    SBPIPStashAssertion *_stashForInterruptionAssertion;
    SBPIPStashAssertion *_transitionStashAssertion;
    SBPIPInterruptionDebouncingTimer *_interruptionEndDebouncingTimer;
    BOOL _defaultToStashed;
    NSString *_bundleIDForAppAnimatingPIPStartInBackground;
    NSString *_bundleIDForAppRecentlyStoppingPIP;
    NSMutableSet *_pictureInPictureMorphAnimatorControllers;
    UIView *_keyboardInsetsVisualizerView;
    NSInteger _unlockedEnvironmentModeWhenKeyboardFocusChanged;
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    BOOL _isReducingResourcesUsage;
    id<BSInvalidatable> *_keyboardFocusObserver;
    id<SBPIPControllerAdapter> *_adapter;
    BOOL _adapterWants_didAddContainerViewController;
    BOOL _adapterWants_willRemoveContainerViewController;
    BOOL _adapterWants_willBeginPIPInterruptionForAssertion;
    BOOL _adapterWants_willEndPIPInterruptionForAssertion;
    BOOL _adapterWants_didStartPictureInPictureCallback;
    BOOL _adapterWants_didCancelPictureInPictureCallback;
    BOOL _adapterWants_morphAnimatorDataSourceForMorphAnimatorController;
    BOOL _adapterWants_willStartPictureInPictureTestActionForApplication;
    BOOL _adapterWants_willRestorePictureInPictureForTestForApplication;
    BOOL _adapterWants_windowLevelChanged;
    BOOL _adapterWants_windowVisibilityChanged;
    BOOL _adapterWants_preventStashAssertions;
    BOOL _adapterWants_enhancedWindowingEnabled;
    NSUInteger _inFlightWindowSceneUpdates;
}


@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isHandlingContextWindowSceneUpdate) BOOL handlingContextWindowSceneUpdate;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *hostedAppSceneHandles;
@property (readonly, nonatomic, getter=isPresentingPictureInPictureRequiringMedusaKeyboard) BOOL presentingPictureInPictureRequiringMedusaKeyboard;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowSceneManager *windowSceneManager; // ivar: _windowSceneManager


-(BOOL)_acquirePIPStashAssertionIfNecessaryForTransitionContext:(id)arg0 onWindowScene:(id)arg1 ;
-(BOOL)_connectedWindowScenesIncludesExternalDisplay;
-(BOOL)_hasStashAssertionForWindowScene:(id)arg0 ;
-(BOOL)_isContentViewAlignedLeftWithPosition:(NSUInteger)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_isContentViewAlignedTopWithPosition:(NSUInteger)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_isPointInsidePictureInPictureContent:(struct CGPoint )arg0 onWindowScene:(id)arg1 ;
-(BOOL)_shouldStashForTransitionContext:(id)arg0 onWindowScene:(id)arg1 ;
-(BOOL)isPictureInPictureWindowVisibleOnWindowScene:(id)arg0 ;
-(BOOL)isStoppingOrCancellingPictureInPictureForApplicationWithBundleIdentifier:(id)arg0 scenePersistenceIdentifier:(id)arg1 ;
-(BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg0 scenePersistenceIdentifier:(id)arg1 ;
-(CGFloat)windowLevelForWindowScene:(id)arg0 ;
-(NSInteger)tetheringModeForScenePersistenceIdentifier:(id)arg0 ;
-(id)_acquireStashAssertionForWindowScene:(id)arg0 withReason:(NSInteger)arg1 identifier:(id)arg2 customAllowedEnvironmentModes:(id)arg3 ;
-(id)_allContainerViewControllers;
-(id)_contextForContainerViewController:(id)arg0 ;
-(id)_contextForContainerViewController:(id)arg0 creatingWithWindowSceneIfNeeded:(id)arg1 ;
-(id)_createNewWindowForContainerViewController:(id)arg0 onWindowScene:(id)arg1 ;
-(id)_leadingWindowForWindowScene:(id)arg0 ;
-(id)_overrideInsetsOnWindowScene:(id)arg0 forReason:(id)arg1 identifier:(id)arg2 ;
-(id)_windowScenesDisplayingPIPContent;
-(id)acquireInterruptionAssertionForReason:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)acquireInterruptionAssertionForReason:(NSInteger)arg0 identifier:(id)arg1 cameraSensorBundleIdentifier:(id)arg2 ;
-(id)acquireStashAssertionForWindowScene:(id)arg0 withReason:(NSInteger)arg1 identifier:(id)arg2 ;
-(id)anyContentViewPresentedOnWindowScene:(id)arg0 ;
-(id)connectedWindowScenes;
-(id)containerViewControllerForContentViewController:(id)arg0 ;
-(id)containerViewControllersOnWindowScene:(id)arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)createAndRegisterPictureInPictureMorphAnimatorControllerWithTargetProcessIdentifier:(int)arg0 uuid:(id)arg1 scenePersistenceIdentifier:(id)arg2 appLayout:(id)arg3 layoutRole:(NSInteger)arg4 appLayoutBoundingBox:(struct CGRect )arg5 gestureInitiated:(BOOL)arg6 direction:(NSInteger)arg7 ;
-(id)dataSourceForMorphAnimatorController:(id)arg0 ;
-(id)initWithIdleTimerCoordinator:(id)arg0 windowLevel:(CGFloat)arg1 interactionSettings:(id)arg2 adapter:(id)arg3 ;
-(id)pictureInPictureMorphAnimatorControllerForProcessIdentifier:(int)arg0 scenePersistenceIdentifier:(id)arg1 ;
-(struct CGRect )homeScreenInitialPIPFrameForWindowScene:(id)arg0 withContentViewSize:(struct CGSize )arg1 position:(NSUInteger)arg2 padding:(CGFloat)arg3 fromOrientation:(NSInteger)arg4 toOrientation:(NSInteger)arg5 shouldUpdate:(BOOL)arg6 gestureInitiated:(BOOL)arg7 ;
-(struct UIEdgeInsets )_edgeInsetsForSource:(NSInteger)arg0 onWindowScene:(id)arg1 exists:(*BOOL)arg2 ;
-(struct UIEdgeInsets )_pictureInPictureWindowMarginsOnWindowScene:(id)arg0 ;
-(struct UIEdgeInsets )_updatePictureInPictureOverlayInsetsOnWindowScene:(id)arg0 withCurrentLayoutState:(BOOL)arg1 shouldUpdate:(BOOL)arg2 ;
-(struct UIEdgeInsets )pictureInPictureWindowMarginsOnWindowScene:(id)arg0 ;
-(void)_addPictureInPictureMorphAnimatorController:(id)arg0 ;
-(void)_cancelInterruptionDebouncingTimer;
-(void)_edgeInsetsDidChangeOnWindowScene:(id)arg0 ;
-(void)_enumerateContextsForWindowScene:(id)arg0 usingBlock:(id)arg1 ;
-(void)_lockStateDidChange:(id)arg0 ;
-(void)_managePictureInPictureWindowVisibilityForWindowScene:(id)arg0 animated:(BOOL)arg1 ;
-(void)_minimumStashedPaddingDidChangeOnWindowScene:(id)arg0 ;
-(void)_moveContext:(id)arg0 toWindowScene:(id)arg1 ;
-(void)_performWithoutAnimation:(id)arg0 ;
-(void)_relinquishPIPStashAssertionIfNecessaryForTransitionContext:(id)arg0 ;
-(void)_removePictureInPictureMorphAnimatorController:(id)arg0 ;
-(void)_restorePictureInPictureForTestForApplicationWithBundleIdentifier:(id)arg0 ;
-(void)_setAdapter:(id)arg0 ;
-(void)_setAlpha:(CGFloat)arg0 forWindowsOnWindowScene:(id)arg1 ;
-(void)_setContainersStashed:(BOOL)arg0 forWindowScene:(id)arg1 ;
-(void)_setHidden:(BOOL)arg0 forWindowsOnWindowScene:(id)arg1 ;
-(void)_setWindowsLevel:(CGFloat)arg0 forWindowsOnWindowScene:(id)arg1 ;
-(void)_startPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg0 ;
-(void)_updateContainerViewControllersContentPaddingOnWindowScene:(id)arg0 ;
-(void)_updateHyperregionComposers;
-(void)_updateZStackIfNeededForDisappearingContainerViewController:(id)arg0 ;
-(void)_visualizeKeyboardFrameIfNeeded;
-(void)_windowSceneDidConnect:(id)arg0 ;
-(void)_windowSceneDidDisconnect:(id)arg0 ;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg0 ;
-(void)addContainerViewController:(id)arg0 dataSource:(id)arg1 ;
-(void)alertItemsController:(id)arg0 didActivateAlertItem:(id)arg1 ;
-(void)alertItemsController:(id)arg0 didDeactivateAlertItem:(id)arg1 forReason:(int)arg2 ;
-(void)alertItemsController:(id)arg0 willActivateAlertItem:(id)arg1 ;
-(void)assistantDidDisappear:(id)arg0 windowScene:(id)arg1 ;
-(void)assistantWillAppear:(id)arg0 windowScene:(id)arg1 ;
-(void)bringTetheredContentToFrontOnWindowScene:(id)arg0 ;
-(void)cancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg0 scenePersistenceIdentifier:(id)arg1 ;
-(void)containerViewController:(id)arg0 didFinishStartAnimationWithInitialInterfaceOrientation:(NSInteger)arg1 ;
-(void)containerViewController:(id)arg0 userDidUpdateStashState:(BOOL)arg1 ;
-(void)containerViewControllerDidBeginInteraction:(id)arg0 ;
-(void)containerViewControllerDidEndInteraction:(id)arg0 targetWindowScene:(id)arg1 ;
-(void)containerViewControllerUserMayUpdateStashState:(id)arg0 ;
-(void)dealloc;
-(void)displayLayoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)endPIPInterruptionForAssertion:(id)arg0 ;
-(void)externalDisplayServiceDidUpdatePreferredDisplayArrangement:(id)arg0 ;
-(void)handleDestructionRequestForSceneHandles:(id)arg0 ;
-(void)hideContainersExcludingContainerForContentViewControllerAndTetheredOnes:(id)arg0 animated:(BOOL)arg1 ;
-(void)invalidateIdleTimerBehaviors;
-(void)keyboardFocusController:(id)arg0 externalSceneDidAcquireFocus:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)morphAnimatorControllerDidTerminate:(id)arg0 ;
-(void)prepareContainerViewControllerForHidingContentViewController:(id)arg0 ;
-(void)removeContainerViewController:(id)arg0 ;
// -(void)restoreContentViewController:(id)arg0 appSceneEntity:(id)arg1 morphAnimatorConfigurationBlock:(id)arg2 completion:(unk)arg3  ;
-(void)setEnhancedWindowingModeEnabled:(BOOL)arg0 windowScene:(id)arg1 ;
-(void)setPictureInPictureWindowsHidden:(BOOL)arg0 forReason:(id)arg1 ;
-(void)showAllContentOnWindowScene:(id)arg0 animated:(BOOL)arg1 ;
-(void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg0 scenePersistenceIdentifier:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)updatePictureInPictureWindowLevelForWindowScene:(id)arg0 ;
-(void)updateZStackParticipantPreferencesIfNeeded:(id)arg0 windowScene:(id)arg1 ;


@end


#endif