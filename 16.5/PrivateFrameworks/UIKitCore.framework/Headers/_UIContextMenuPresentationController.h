// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUPRESENTATIONCONTROLLER_H
#define _UICONTEXTMENUPRESENTATIONCONTROLLER_H

@class NSString, NSArray;
@protocol _UIContextMenuViewDelegate, UIGestureRecognizerDelegate, _UIContextMenuPanControllerDelegate, _UIContextMenuPresentationControllerDelegate;


#import "UIPresentationController.h"
#import "UIView.h"
#import "_UIContextMenuActionScrubbingHandoffGestureRecognizer.h"
#import "UIVisualEffectView.h"
#import "UIViewFloatAnimatableProperty.h"
#import "_UIMorphingPlatterView.h"
#import "_UIContextMenuLayoutArbiterOutput.h"
#import "_UIContextMenuStyle.h"
#import "UITapGestureRecognizer.h"
#import "_UIFulfilledContextMenuConfiguration.h"
#import "_UIFlocker.h"
#import "_UIContextMenuLayoutArbiter.h"
#import "_UIContextMenuView.h"
#import "_UIContextMenuPanController.h"
#import "UITargetedPreview.h"

@interface _UIContextMenuPresentationController : UIPresentationController <_UIContextMenuViewDelegate, UIGestureRecognizerDelegate, _UIContextMenuPanControllerDelegate>

 {
    UIView *_viewForRemoteTextEffectsWindowMatchAnimation;
}


@property (retain, nonatomic) _UIContextMenuActionScrubbingHandoffGestureRecognizer *actionScrubbingHandoffGestureRecognizer; // ivar: _actionScrubbingHandoffGestureRecognizer
@property (readonly, nonatomic) UIVisualEffectView *backgroundEffectView; // ivar: _backgroundEffectView
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *backgroundViewAnimationProgress; // ivar: _backgroundViewAnimationProgress
@property (readonly, nonatomic) _UIMorphingPlatterView *contentPlatterView; // ivar: _contentPlatterView
@property (readonly, nonatomic) _UIContextMenuLayoutArbiterOutput *currentLayout; // ivar: _currentLayout
@property (copy, nonatomic) _UIContextMenuStyle *currentStyle; // ivar: _currentStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIContextMenuPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *dismissalTapGestureRecognizer; // ivar: _dismissalTapGestureRecognizer
@property (retain, nonatomic) _UIFulfilledContextMenuConfiguration *displayedConfiguration; // ivar: _displayedConfiguration
@property (readonly, nonatomic) _UIFlocker *flocker; // ivar: _flocker
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimatingPresentation; // ivar: _isAnimatingPresentation
@property (readonly, nonatomic) BOOL isOccludingControls; // ivar: _isOccludingControls
@property (retain, nonatomic) _UIContextMenuLayoutArbiter *layoutArbiter; // ivar: _layoutArbiter
@property (readonly, nonatomic) _UIContextMenuView *menuView; // ivar: _menuView
@property (nonatomic) BOOL passthroughInteractionTouchEatingDisabledForSearchSuggestions;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (retain, nonatomic) UITapGestureRecognizer *platterActionTapGestureRecognizer; // ivar: _platterActionTapGestureRecognizer
@property (readonly, nonatomic) UIView *platterContainerView; // ivar: _platterContainerView
@property (nonatomic) CGSize platterContentSize; // ivar: _platterContentSize
@property (nonatomic) BOOL platterContentSizeDidChange; // ivar: _platterContentSizeDidChange
@property (retain, nonatomic) _UIContextMenuPanController *platterPanController; // ivar: _platterPanController
@property (readonly, nonatomic) UIView *platterTransitionView; // ivar: _platterTransitionView
@property (retain, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview
@property (readonly) Class superclass;


+(id)_actionsOnlyViewControllerForSourcePreview:(id)arg0 ;
-(BOOL)_needsToAvoidKeyboard;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldOccludeDuringPresentation;
-(BOOL)_shouldPreserveFirstResponder;
-(BOOL)_shouldRestoreFirstResponder;
-(BOOL)_wantsAutomaticFirstResponderWhenPresentingRemoteViewController;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSInteger)presentationStyle;
-(NSUInteger)_preferredSubmenuHierarchyStyle;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_viewForRemoteTextEffectsWindowMatchAnimation;
-(id)contextMenuView:(id)arg0 willDisplayMenu:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg0 configuration:(id)arg1 sourcePreview:(id)arg2 style:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(struct UIEdgeInsets )_baseContentInsetsWithLeftMargin:(*CGFloat)arg0 rightMargin:(*CGFloat)arg1 ;
-(void)_adjustViewForKeyboardVisibility:(BOOL)arg0 keyboardInfo:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_collapseMenu;
-(void)_collapseMenuView:(id)arg0 withInitialFrame:(struct CGRect )arg1 offset:(struct CGPoint )arg2 attachment:(NSUInteger)arg3 ;
-(void)_createMenuViewIfNecessaryForMenu:(id)arg0 ;
-(void)_enableOcclusion:(BOOL)arg0 ;
-(void)_handleActionHandoffGesture:(id)arg0 ;
-(void)_handleDismissalTapGesture:(id)arg0 ;
-(void)_handlePlatterActionTapGesture:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_preDismissalTasks;
-(void)_testing_dismissByTappingOutside;
-(void)_testing_tapAnAction;
-(void)_updateActionsViewReversesOrderForAttachment:(NSUInteger)arg0 ;
-(void)_updateLayoutAndAttachment:(BOOL)arg0 ;
-(void)_updatePlatterAndActionViewLayoutForce:(BOOL)arg0 updateAttachment:(BOOL)arg1 ;
-(void)_updatePlatterAndActionViewLayoutForce:(BOOL)arg0 updateAttachment:(BOOL)arg1 adjustDetent:(BOOL)arg2 ;
-(void)_updatePlatterContainerViewTraitCollection;
-(void)_updatePlatterContentSizeWithPreferredContentSize:(struct CGSize )arg0 ;
-(void)_updatePresentedViewFrame;
-(void)contextMenuView:(id)arg0 didSelectElement:(id)arg1 ;
-(void)dealloc;
-(void)didSelectCancelActionInContextMenuView:(id)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)displayMenu:(id)arg0 updateType:(NSUInteger)arg1 ;
-(void)enumeratePlatterViewsWithBlock:(id)arg0 ;
-(void)platterPanControllerDidSwipeDown:(id)arg0 ;
-(void)platterPanControllerDidTearOff:(id)arg0 ;
-(void)platterPanInteractionBegan:(id)arg0 allowSwipeToDismiss:(*BOOL)arg1 ;
-(void)platterPanInteractionEnded:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)replaceVisibleMenu:(id)arg0 withMenu:(id)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)tearOffForDraggingWithDragContainerView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewTraitCollectionDidChange;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif