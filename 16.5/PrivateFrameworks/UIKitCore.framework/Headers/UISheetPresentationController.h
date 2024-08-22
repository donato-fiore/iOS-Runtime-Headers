// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISHEETPRESENTATIONCONTROLLER_H
#define UISHEETPRESENTATIONCONTROLLER_H

@class NSArray, NSString, _UIPresentationControllerVisualStyle<_UISheetPresentationControllerVisualStyling>, NSUserActivity;
@protocol UIDropShadowViewDelegate, UIDimmingViewDelegate, _UISheetLayoutInfoDelegate, _UISheetInteractionDelegate, UIDragInteractionDelegate, UISheetPresentationControllerDelegate;


#import "UIPresentationController.h"
#import "_UISheetAnimationController.h"
#import "UISheetPresentationController.h"
#import "_UISheetPresentationControllerConfiguration.h"
#import "UIDimmingView.h"
#import "_UIRemoteViewController.h"
#import "_UISheetPresentationControllerAppearance.h"
#import "UIPercentDrivenInteractiveTransition.h"
#import "_UISheetLayoutInfo.h"
#import "_UISheetInteraction.h"
#import "UIDragInteraction.h"
#import "UIDropShadowView.h"
#import "UIView.h"

@interface UISheetPresentationController : UIPresentationController <UIDropShadowViewDelegate, UIDimmingViewDelegate, _UISheetLayoutInfoDelegate, _UISheetInteractionDelegate, UIDragInteractionDelegate>



@property (nonatomic, setter=_setAdditionalMinimumTopInset:) CGFloat _additionalMinimumTopInset;
@property (nonatomic, setter=_setAllowsAsymmetricVerticalMargins:) BOOL _allowsAsymmetricVerticalMargins;
@property (nonatomic, setter=_setAllowsInteractiveDismissWhenFullScreen:) BOOL _allowsInteractiveDismissWhenFullScreen;
@property (nonatomic, setter=_setAllowsTearOff:) BOOL _allowsTearOff; // ivar: __allowsTearOff
@property (retain, nonatomic, setter=_setAnimatedTransition:) _UISheetAnimationController *_animationController; // ivar: __animationController
@property (readonly, nonatomic) UISheetPresentationController *_childSheetPresentationController;
@property (retain, nonatomic, setter=_setConfiguration:) _UISheetPresentationControllerConfiguration *_configuration;
@property (readonly, nonatomic) UIDimmingView *_confinedDimmingView; // ivar: __confinedDimmingView
@property (readonly, nonatomic) _UIRemoteViewController *_connectedRemoteViewController; // ivar: __connectedRemoteViewController
@property (nonatomic, setter=_setCornerRadiusForPresentationAndDismissal:) CGFloat _cornerRadiusForPresentationAndDismissal;
@property (readonly, nonatomic) CGRect _currentPresentedViewFrame;
@property (nonatomic, setter=_setDetentDirectionWhenFloating:) NSInteger _detentDirectionWhenFloating;
@property (readonly, nonatomic) NSArray *_detentValues;
@property (nonatomic, setter=_setDidAttemptToStartDismiss:) BOOL _didAttemptToStartDismiss; // ivar: __didAttemptToStartDismiss
@property (nonatomic, setter=_setDidTearOff:) BOOL _didTearOff; // ivar: __didTearOff
@property (readonly, nonatomic, getter=_isDimmingAlwaysVisible) BOOL _dimmingAlwaysVisible;
@property (nonatomic, getter=_isDimmingViewTapDismissing, setter=_setDimmingViewTapDismissing:) BOOL _dimmingViewTapDismissing; // ivar: __dimmingViewTapDismissing
@property (readonly, nonatomic, getter=_isDragging) BOOL _dragging;
@property (nonatomic, getter=_isDraggingAndTransitioning, setter=_setDraggingAndTransitioning:) BOOL _draggingAndTransitioning; // ivar: __draggingAndTransitioning
@property (retain, nonatomic, setter=_setEdgeAttachedCompactHeightAppearance:) _UISheetPresentationControllerAppearance *_edgeAttachedCompactHeightAppearance;
@property (readonly, nonatomic) _UIRemoteViewController *_expectedRemoteViewController;
@property (retain, nonatomic, setter=_setFloatingAppearance:) _UISheetPresentationControllerAppearance *_floatingAppearance;
@property (nonatomic) BOOL _forceSheetSemanticContext; // ivar: __forceSheetSemanticContext
@property (readonly, nonatomic, getter=_isGeneratingAnimations) BOOL _generatingAnimations;
@property (nonatomic, setter=_setGrabberTopSpacing:) CGFloat _grabberTopSpacing;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL _hidden;
@property (copy, nonatomic, setter=_setHiddenAncestorSheetID:) NSString *_hiddenAncestorSheetID;
@property (nonatomic, setter=_setHorizontalAlignment:) NSInteger _horizontalAlignment;
@property (readonly, nonatomic, getter=_isHosting) BOOL _hosting;
@property (nonatomic, setter=_setIndexOfCurrentDetent:) NSInteger _indexOfCurrentDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetent:) NSInteger _indexOfLastUndimmedDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetentWhenEdgeAttachedInCompactHeight:) NSInteger _indexOfLastUndimmedDetentWhenEdgeAttachedInCompactHeight;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetentWhenFloating:) NSInteger _indexOfLastUndimmedDetentWhenFloating;
@property (nonatomic, setter=_setInitialTearOffPoint:) CGPoint _initialTearOffPoint; // ivar: __initialTearOffPoint
@property (retain, nonatomic, setter=_setInteractiveTransition:) UIPercentDrivenInteractiveTransition *_interactionController; // ivar: __interactionController
@property (nonatomic, setter=_setIsRemote:) BOOL _isRemote; // ivar: __isRemote
@property (readonly, nonatomic) BOOL _isRootPresentation;
@property (nonatomic, getter=_isKeyboardShown, setter=_setKeyboardShown:) BOOL _keyboardShown; // ivar: __keyboardShown
@property (copy, nonatomic, setter=_setLargestUndimmedDetentIdentifierWhenEdgeAttachedInCompactHeight:) NSString *_largestUndimmedDetentIdentifierWhenEdgeAttachedInCompactHeight;
@property (copy, nonatomic, setter=_setLargestUndimmedDetentIdentifierWhenFloating:) NSString *_largestUndimmedDetentIdentifierWhenFloating;
@property (readonly, nonatomic) _UISheetLayoutInfo *_layoutInfo; // ivar: __layoutInfo
@property (nonatomic, setter=_setMarginInCompactHeight:) CGFloat _marginInCompactHeight;
@property (nonatomic, setter=_setMarginInRegularWidthRegularHeight:) CGFloat _marginInRegularWidthRegularHeight;
@property (nonatomic, setter=_setMode:) NSInteger _mode;
@property (readonly, nonatomic) UISheetPresentationController *_parentSheetPresentationController;
@property (nonatomic, setter=_setPeeksWhenFloating:) BOOL _peeksWhenFloating;
@property (nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) BOOL _prefersScrollingResizesWhenDetentDirectionIsDown;
@property (copy, nonatomic) id *_presentationTransitionWillBegin; // ivar: __presentationTransitionWillBegin
@property (nonatomic, setter=_setRemoteContainsFirstResponder:) BOOL _remoteContainsFirstResponder;
@property (nonatomic, getter=_isRemoteDismissing, setter=_setRemoteDismissing:) BOOL _remoteDismissing; // ivar: __remoteDismissing
@property (nonatomic, setter=_setRemoteFirstResponderRequiresKeyboard:) BOOL _remoteFirstResponderRequiresKeyboard;
@property (nonatomic, getter=_remoteInterruptedOffset, setter=_setRemoteInterruptedOffset:) CGPoint _remoteInterruptedOffset; // ivar: __remoteInterruptedOffset
@property (nonatomic, setter=_setRemoteKeyboardFrame:) CGRect _remoteKeyboardFrame;
@property (copy, nonatomic, setter=_setSheetID:) NSString *_sheetID;
@property (readonly, nonatomic) _UISheetInteraction *_sheetInteraction; // ivar: __sheetInteraction
@property (readonly, nonatomic) _UISheetInteraction *_sheetInteractionIfLoaded;
@property (readonly, nonatomic) _UIPresentationControllerVisualStyle<_UISheetPresentationControllerVisualStyling> *_sheetVisualStyle; // ivar: __sheetVisualStyle
@property (nonatomic, setter=_setShouldPresentedViewControllerControlStatusBarAppearance:) BOOL _shouldPresentedViewControllerControlStatusBarAppearance; // ivar: __shouldPresentedViewControllerControlStatusBarAppearance
@property (nonatomic, setter=_setShouldScaleDownBehindDescendantSheets:) BOOL _shouldScaleDownBehindDescendantSheets;
@property (copy, nonatomic, setter=_setSmallestUndimmedDetentIdentifierWhenEdgeAttachedInCompactHeight:) NSString *_smallestUndimmedDetentIdentifierWhenEdgeAttachedInCompactHeight;
@property (copy, nonatomic, setter=_setSmallestUndimmedDetentIdentifierWhenFloating:) NSString *_smallestUndimmedDetentIdentifierWhenFloating;
@property (retain, nonatomic, setter=_setStandardAppearance:) _UISheetPresentationControllerAppearance *_standardAppearance;
@property (retain, nonatomic, setter=_setTearOffActivity:) NSUserActivity *_tearOffActivity; // ivar: __tearOffActivity
@property (readonly, nonatomic) UIDragInteraction *_tearOffInteraction; // ivar: __tearOffInteraction
@property (nonatomic, setter=_setTucksIntoUnsafeAreaInCompactHeight:) BOOL _tucksIntoUnsafeAreaInCompactHeight;
@property (nonatomic, setter=_setWantsBottomAttached:) BOOL _wantsBottomAttached;
@property (nonatomic, setter=_setWantsFloatingInRegularWidthCompactHeight:) BOOL _wantsFloatingInRegularWidthCompactHeight;
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UISheetPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *detents;
@property (readonly, nonatomic) UIDimmingView *dimmingView; // ivar: _dimmingView
@property (readonly, nonatomic) UIDropShadowView *dropShadowView; // ivar: _dropShadowView
@property (nonatomic) CGRect frameOfPresentedViewInContainerView; // ivar: _frameOfPresentedViewInContainerView
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *largestUndimmedDetentIdentifier;
@property (nonatomic) CGFloat preferredCornerRadius;
@property (nonatomic) BOOL prefersEdgeAttachedInCompactHeight;
@property (nonatomic) BOOL prefersGrabberVisible;
@property (nonatomic) BOOL prefersScrollingExpandsWhenScrolledToEdge;
@property (copy, nonatomic) NSString *selectedDetentIdentifier;
@property (nonatomic, getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:) BOOL shouldDismissWhenTappedOutside;
@property (copy, nonatomic) NSString *smallestUndimmedDetentIdentifier;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL widthFollowsPreferredContentSizeWhenEdgeAttached;


+(NSInteger)_initialMode;
-(BOOL)_allowsFocusBehindDimmingView;
-(BOOL)_allowsFocusInPresentingViewController;
-(BOOL)_ignoresLeftAndRightSafeAreaInsets;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(BOOL)_shouldDismissByDragging;
-(BOOL)_shouldOccludeDuringPresentation;
-(BOOL)_shouldPreserveFirstResponder;
-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)sheetInteraction:(id)arg0 shouldAllowVerticalRubberBandingWithEvent:(id)arg1 ;
-(BOOL)sheetInteraction:(id)arg0 shouldBeginHorizontalRubberBandingWithGestureRecognizer:(id)arg1 ;
-(NSInteger)presentationStyle;
-(id)_createVisualStyleForProvider:(id)arg0 ;
-(id)_preferredAnimationControllerForDismissal;
-(id)_preferredAnimationControllerForPresentation;
-(id)_preferredAnimationControllerForTransition:(BOOL)arg0 ;
-(id)_preferredInteractionControllerForDismissal:(id)arg0 ;
-(id)_preferredInteractionControllerForPresentation:(id)arg0 ;
-(id)_preferredInteractionControllerForTransition:(BOOL)arg0 animator:(id)arg1 ;
-(id)_sheetMetrics;
-(id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)presentedView;
-(struct CGPoint )offsetForInterruptedAnimationInSheetInteraction:(id)arg0 ;
-(struct CGRect )_frameOfPresentedViewControllerViewInSuperview;
-(void)_accessibilityReduceMotionStatusDidChange;
// -(void)_animateChanges:(id)arg0 completion:(unk)arg1  ;
-(void)_completeInteractiveTransition:(BOOL)arg0 duration:(CGFloat)arg1 timingCurve:(id)arg2 ;
-(void)_containerViewBoundsDidChange;
-(void)_containerViewLayoutSubviews;
-(void)_containerViewSafeAreaInsetsDidChange;
-(void)_containerViewScreenDidChangeToScreen:(id)arg0 ;
-(void)_containerViewTraitCollectionDidChange;
-(void)_dismissFromGrabberOrDimmingViewIfPossible;
-(void)_dropShadowViewGrabberDidTriggerPrimaryAction:(id)arg0 ;
-(void)_firstResponderDidChange:(id)arg0 ;
-(void)_handleKeyboardNotification:(id)arg0 aboutToHide:(BOOL)arg1 ;
-(void)_invalidateDetents;
-(void)_keyboardAboutToChangeFrame:(id)arg0 ;
-(void)_keyboardAboutToHide:(id)arg0 ;
-(void)_keyboardAboutToShow:(id)arg0 ;
-(void)_realSourceViewGeometryDidChange;
-(void)_remoteSheetInteractionDraggingDidBeginWithRubberBandCoefficient:(CGFloat)arg0 dismissible:(BOOL)arg1 interruptedOffset:(struct CGPoint )arg2 ;
-(void)_remoteSheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 animateChange:(BOOL)arg2 dismissible:(BOOL)arg3 ;
-(void)_remoteSheetInteractionDraggingDidEnd;
-(void)_resetRemoteDismissing;
-(void)_sendDidChangeSelectedDetentIdentifier;
-(void)_sheetInteractionDraggingBegan:(id)arg0 withRubberBandCoefficient:(CGFloat)arg1 ;
-(void)_sheetInteractionDraggingChanged:(id)arg0 withTranslation:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 animateChange:(BOOL)arg3 ;
-(void)_sheetInteractionDraggingEnded:(id)arg0 ;
-(void)_sheetLayoutInfoDidInvalidateDetentValues:(id)arg0 ;
-(void)_sheetLayoutInfoDidInvalidateOutput:(id)arg0 ;
-(void)_sheetLayoutInfoDidInvalidateUntransformedFrame:(id)arg0 ;
-(void)_sheetLayoutInfoLayout:(id)arg0 ;
-(void)_sheetLayoutInfoPrelayout:(id)arg0 ;
-(void)_startInteractiveTransitionWithProgress:(CGFloat)arg0 ;
-(void)_startInteractiveTransitionWithProgress:(CGFloat)arg0 fromViewController:(id)arg1 completion:(id)arg2 ;
-(void)_transitionDidEnd:(BOOL)arg0 ;
-(void)_transitionWillBegin:(BOOL)arg0 ;
-(void)_tryToConnectToRemoteViewController:(id)arg0 ;
-(void)_updateAnimationController;
-(void)_updateInteractiveTransitionWithProgress:(CGFloat)arg0 ;
-(void)_updateLayoutInfoContainerSafeAreaInsets;
-(void)_updateLayoutInfoContainerTraitCollection;
-(void)_updatePresentedViewFrame;
-(void)_updateShouldPresentedViewControllerControlStatusBarAppearance;
-(void)animateChanges:(id)arg0 ;
-(void)containerViewDidLayoutSubviews;
-(void)containerViewWillLayoutSubviews;
-(void)dimmingViewWasTapped:(id)arg0 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)invalidateDetents;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)sheetInteraction:(id)arg0 didChangeOffset:(struct CGPoint )arg1 ;


@end


#endif