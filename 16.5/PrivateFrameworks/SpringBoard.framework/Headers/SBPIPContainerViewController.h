// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPCONTAINERVIEWCONTROLLER_H
#define SBPIPCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSHashTable, UIView, SBFFluidBehaviorSettings, BSAbsoluteMachTimer, NSMutableArray, UIViewFloatAnimatableProperty, CADisplayLink, SBSDisplayLayoutElement, NSString, NSArray, NSNumber;
@protocol SBPIPInteractionControllerDelegate, SBPIPContainerViewControllerAdapterContextProviding, BSInvalidatable, SBSDisplayLayoutElementProviding, SBPIPContainerViewControllerAdapter, SBPIPContainerViewControllerInteractionObserver;


#import "SBMicroPIPTetheringMirrorView.h"
#import "SBPIPContentViewLayoutSettings.h"
#import "SBPIPInteractionSettings.h"
#import "SBPIPController.h"
#import "SBPIPInteractionController.h"
#import "SBPIPContainerViewController.h"

@interface SBPIPContainerViewController : UIViewController <SBPIPInteractionControllerDelegate, SBPIPContainerViewControllerAdapterContextProviding, BSInvalidatable, SBSDisplayLayoutElementProviding>

 {
    NSHashTable *_observerHashTable;
    UIView *_contentView;
    SBMicroPIPTetheringMirrorView *_microPIPTetheringViewMirror;
    UIEdgeInsets _contentViewPadding;
    BOOL _updateContentViewLayoutSettingsAndLayoutIfNeeded;
    SBPIPContentViewLayoutSettings *_preTetheringLayoutSettings;
    CGFloat _preTetheringNormalizedContentScale;
    SBFFluidBehaviorSettings *_interactiveAnimationSettings;
    SBFFluidBehaviorSettings *_stashTabAnimationSettings;
    SBFFluidBehaviorSettings *_regionUpdateAnimationSettings;
    BSAbsoluteMachTimer *_stashedStateReduceResourcesUsageTimer;
    NSUInteger _inFlightAnimationCounter;
    NSMutableArray *_waitInteractionAnimationsCompletionBlocks;
    SBFFluidBehaviorSettings *_metricsAnimationSettings;
    UIViewFloatAnimatableProperty *_metricsAnimatableProperty;
    NSUInteger _metricsUpdateGenCount;
    CADisplayLink *_microPiPRotationDisplayLink;
    SBSDisplayLayoutElement *_displayLayoutElement;
    id<BSInvalidatable> *_displayLayoutElementAssertion;
    SBPIPContentViewLayoutSettings *_microPIPLayoutSettings;
    SBPIPInteractionSettings *_interactionSettings;
    SBPIPController *_pipController;
    BOOL _interfaceOrientationLockAcquired;
    BOOL _invalidated;
    BOOL _tetheredInMicroPIPMode;
    BOOL _wasInteractionEnabledPreRotationAnimation;
    id<SBPIPContainerViewControllerAdapter> *_adapter;
    BOOL _adapterWants_loadSubviews;
    BOOL _adapterWants_layoutSubviews;
    BOOL _adapterWants_shouldDisableIdleTimer;
    BOOL _adapterWants_transitionAnimationWillBegin;
    BOOL _adapterWants_transitionAnimationDidEnd;
    BOOL _adapterWants_handleSceneHandleDestruction;
    BOOL _adapterWants_hostedAppSceneHandle;
    BOOL _adapterWants_morphAnimatorTargetView;
    BOOL _adapterWants_morphAnimatorTargetContainerView;
    BOOL _adapterWants_didUpdateContentViewFrame;
    BOOL _adapterWants_willUpdateStashState;
    BOOL _adapterWants_didUpdateStashState;
    BOOL _adapterWants_didSettleStashState;
    BOOL _adapterWants_willBeginInteraction;
    BOOL _adapterWants_didEndInteraction;
    BOOL _adapterWants_didPanGestureDidEnd;
    BOOL _adapterWants_wantsStashTabHidden;
    BOOL _adapterWants_willBeginSizeChange;
    BOOL _adapterWants_didEndSizeChange;
    BOOL _adapterWants_didUpdateStashProgress;
    BOOL _adapterWants_isStashTabHidden;
    BOOL _adapterWants_startReducingResources;
    BOOL _adapterWants_stopReducingResources;
    BOOL _adapterWants_shouldRequireMedusaKeyboard;
    BOOL _adapterWants_handleTransition;
    BOOL _adapterWants_shouldSuppressAssociatedElementsInSystemAperture;
    BOOL _adapterWants_didBeginEdgeResize;
    BOOL _adapterWants_didEndEdgeResize;
}


@property (readonly, nonatomic, getter=isActivelyTethered) BOOL activelyTethered; // ivar: _activelyTethered
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSArray *connectedWindowScenes; // ivar: _connectedWindowScenes
@property (nonatomic) CGFloat contentScale;
@property (readonly, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (nonatomic) NSInteger contentZOrderPriority; // ivar: _contentZOrderPriority
@property (readonly, nonatomic) NSUInteger currentCanonicalPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (nonatomic) UIEdgeInsets effectiveEdgeInsets; // ivar: _effectiveEdgeInsets
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBPIPInteractionController *interactionController; // ivar: _interactionController
@property (weak, nonatomic) NSObject<SBPIPContainerViewControllerInteractionObserver> *interactionObserver; // ivar: _interactionObserver
@property (readonly, nonatomic) UIView *morphAnimatorTargetContainerView;
@property (readonly, nonatomic) UIView *morphAnimatorTargetView;
@property (readonly, nonatomic) NSNumber *overrideResourcesUsageReductionTimeout;
@property (nonatomic) BOOL prefersHiddenFromClonedDisplay; // ivar: _prefersHiddenFromClonedDisplay
@property (readonly, nonatomic) BOOL prefersIdleTimerDisabled;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSInteger requiredInterfaceOrientation; // ivar: _requiredInterfaceOrientation
@property (readonly, nonatomic) BOOL requiresMedusaKeyboard;
@property (readonly, copy, nonatomic) NSString *scenePersistenceIdentifier;
@property (readonly, nonatomic) BOOL shouldSuppressAssociatedElementsInSystemAperture;
@property (nonatomic, getter=isStashed) BOOL stashed;
@property (nonatomic) UIEdgeInsets stashedPadding; // ivar: _stashedPadding
@property (readonly) Class superclass;
@property (weak, nonatomic) SBPIPContainerViewController *tetheredContainerViewController; // ivar: _tetheredContainerViewController
@property (weak, nonatomic) SBPIPContainerViewController *tetheringContainerViewController; // ivar: _tetheringContainerViewController
@property (readonly, nonatomic) NSInteger windowInterfaceOrientation;


-(BOOL)handleStashingForTransitionContext:(id)arg0 ;
-(BOOL)toggleUserPreferredScale;
-(CGFloat)SB_accessibilityContentViewScale;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_blackCurtainViewForStopAnimation;
-(id)_blurSpringAnimationWithParameters:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 ;
-(id)hostedAppSceneHandle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPIPController:(id)arg0 interactionSettings:(id)arg1 adapter:(id)arg2 ;
-(id)maximumAvailableVerticalPadding;
-(struct CGRect )_contentViewFrameInDisplayReferenceSpace;
-(struct CGRect )_frameInFixedCoordinateSpace:(struct CGRect )arg0 transformedToInterfaceOrientation:(NSInteger)arg1 ;
-(struct UIEdgeInsets )_resolvedSafeAreaInsetsForWindowScene:(id)arg0 ;
-(struct UIEdgeInsets )_safeAreaInsetsForScene:(id)arg0 ;
-(struct UIEdgeInsets )effectiveEdgeInsetsForWindowScene:(id)arg0 ;
-(void)SB_accessibilitySetContentViewScale:(CGFloat)arg0 ;
-(void)SB_accessibilityToggleStashed;
-(void)_addBlurFilterToView:(id)arg0 ;
-(void)_handleMicroPiPRotationDisplayLink:(id)arg0 ;
-(void)_layoutWithNonOperationFrame;
-(void)_notifyStashStateChanged:(BOOL)arg0 ;
-(void)_removeBlurFilterFromView:(id)arg0 ;
-(void)_removeMicroPIPMirrorView;
-(void)_requireInterfaceOrientation:(NSInteger)arg0 ;
-(void)_setAdapter:(id)arg0 ;
-(void)_setStashTabHidden:(BOOL)arg0 left:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateContentPadding;
-(void)_updateContentViewFrame:(struct CGRect )arg0 reason:(id)arg1 usingDisplayArrangementSpace:(BOOL)arg2 ;
-(void)_updateDisplayLayoutElementReferenceFrame;
-(void)acquireInterfaceOrientationLock;
-(void)addObserver:(id)arg0 ;
-(void)animateOutLeftStashTabWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)forcePictureInPictureToFrame:(struct CGRect )arg0 ;
-(void)getRotationContentSettings:(struct ? *)arg0 forWindow:(id)arg1 ;
-(void)handleDestructionRequestForSceneHandle:(id)arg0 ;
-(void)interactionController:(id)arg0 didSettleOnStashState:(BOOL)arg1 ;
-(void)interactionController:(id)arg0 didUpdateStashProgress:(CGFloat)arg1 ;
-(void)interactionController:(id)arg0 wantsStashTabHidden:(BOOL)arg1 left:(BOOL)arg2 ;
-(void)interactionControllerDidBeginEdgeResizing:(id)arg0 ;
-(void)interactionControllerDidBeginInteraction:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(void)interactionControllerDidBeginSizeChange:(id)arg0 behavior:(int)arg1 ;
-(void)interactionControllerDidEndAllInteractions:(id)arg0 targetWindowScene:(id)arg1 ;
-(void)interactionControllerDidEndEdgeResizing:(id)arg0 ;
-(void)interactionControllerDidEndSizeChange:(id)arg0 ;
-(void)interactionControllerDidUpdateEdgeInsets:(id)arg0 ;
-(void)interactionControllerPanGestureDidEnd:(id)arg0 ;
-(void)invalidate;
-(void)layoutForTetheringInteractionController:(id)arg0 behavior:(int)arg1 ;
-(void)loadView;
-(void)noteWindowSceneDidChange;
-(void)performAfterInFlightAnimationsComplete:(id)arg0 ;
-(void)relinquishInterfaceOrientationLock;
-(void)removeObserver:(id)arg0 ;
-(void)rotationAnimationDidBeginToRotation:(NSInteger)arg0 contentViewFrame:(struct CGRect )arg1 ;
-(void)rotationAnimationDidCompleteToRotation:(NSInteger)arg0 contentViewFrame:(struct CGRect )arg1 ;
-(void)rotationAnimationWillBeginToRotation:(NSInteger)arg0 contentViewFrame:(struct CGRect )arg1 ;
-(void)rotationAnimationWillCompleteToRotation:(NSInteger)arg0 contentViewFrame:(struct CGRect )arg1 ;
-(void)setContentViewPadding:(struct UIEdgeInsets )arg0 ;
-(void)setInteractionsEnabled:(BOOL)arg0 ;
-(void)setIsActivelyTethered:(BOOL)arg0 mode:(NSInteger)arg1 ;
-(void)setNeedsLayoutForInteractionController:(id)arg0 traits:(NSUInteger)arg1 withReason:(NSUInteger)arg2 behavior:(int)arg3 completion:(id)arg4 ;
-(void)startAnimationDidBeginWithInitialInterfaceOrientation:(NSInteger)arg0 ;
-(void)startAnimationDidCompleteWithInitialInterfaceOrientation:(NSInteger)arg0 ;
-(void)startAnimationWillBeginWithInitialInterfaceOrientation:(NSInteger)arg0 initialFrame:(struct CGRect )arg1 ;
-(void)startDisplayLink;
-(void)startResourcesUsageReductionAfterTimeout:(CGFloat)arg0 ;
-(void)startShowingContentWithAnimationSettings:(id)arg0 parameters:(struct ? )arg1 completion:(id)arg2 ;
-(void)stopAnimationDidBeginWithFinalInterfaceOrientation:(NSInteger)arg0 finalFrame:(struct CGRect )arg1 ;
-(void)stopAnimationDidCompleteWithFinalInterfaceOrientation:(NSInteger)arg0 ;
-(void)stopAnimationWillBeginWithFinalInterfaceOrientation:(NSInteger)arg0 finalFrame:(struct CGRect )arg1 ;
-(void)stopDisplayLink;
-(void)stopResourcesUsageReduction;
-(void)stopShowingContentWithAnimationSettings:(id)arg0 parameters:(struct ? )arg1 completion:(id)arg2 ;
-(void)transitionAnimationDidEnd;
-(void)transitionAnimationWillBegin;
-(void)updateDisplayLayoutElementWithBuilder:(id)arg0 ;
-(void)updatePreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif