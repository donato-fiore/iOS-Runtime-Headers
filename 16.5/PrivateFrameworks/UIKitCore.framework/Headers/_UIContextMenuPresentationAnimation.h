// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUPRESENTATIONANIMATION_H
#define _UICONTEXTMENUPRESENTATIONANIMATION_H

@class NSString, NSArray;
@protocol _UIClickPresentationTransition, _UIContextMenuPresentationAnimationDelegate;

#import <Foundation/Foundation.h>

#import "_UIContextMenuAnimator.h"
#import "UIViewFloatAnimatableProperty.h"
#import "UIViewPropertyAnimator.h"
#import "_UIContextMenuLayoutArbiterOutput.h"
#import "_UIGroupCompletion.h"
#import "_UIContextMenuPresentationController.h"
#import "_UIContextMenuReparentingContainerView.h"
#import "_UIPortalView.h"
#import "UITargetedPreview.h"

@interface _UIContextMenuPresentationAnimation : NSObject <_UIClickPresentationTransition>



@property (copy, nonatomic) id *accessoryAnimationBlock; // ivar: _accessoryAnimationBlock
@property (retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator; // ivar: _alongsideAnimator
@property (retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress; // ivar: _animationProgress
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIContextMenuPresentationAnimationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger dismissalStyle; // ivar: _dismissalStyle
@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout; // ivar: _expandedLayout
@property (retain, nonatomic) _UIGroupCompletion *groupCompletion; // ivar: _groupCompletion
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDismissTransition; // ivar: _isDismissTransition
@property (nonatomic) BOOL isSingleItemMenu; // ivar: _isSingleItemMenu
@property (retain, nonatomic) NSArray *preferredBackgroundEffects; // ivar: _preferredBackgroundEffects
@property (nonatomic) UIEdgeInsets preferredBackgroundInsets; // ivar: _preferredBackgroundInsets
@property (weak, nonatomic) _UIContextMenuPresentationController *presentationController; // ivar: _presentationController
@property (nonatomic) BOOL previewOverlapsMenu; // ivar: _previewOverlapsMenu
@property (copy, nonatomic) id *reparentingAnimationBlock; // ivar: _reparentingAnimationBlock
@property (retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView; // ivar: _reparentingContainerView
@property (retain, nonatomic) _UIPortalView *reparentingPortalView; // ivar: _reparentingPortalView
@property (copy, nonatomic) NSArray *secondarySourcePreviews; // ivar: _secondarySourcePreviews
@property (copy, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview
@property (retain, nonatomic) UITargetedPreview *stashedDismissalPreview; // ivar: _stashedDismissalPreview
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger totalItemCount; // ivar: _totalItemCount
@property (retain, nonatomic) UITargetedPreview *trackedPreviewForReparenting; // ivar: _trackedPreviewForReparenting


-(BOOL)_isDismissingToDrag;
-(BOOL)_shouldAnimateBackgroundEffects;
-(id)_accessoryViews;
-(id)_backgroundView;
-(id)_containerView;
-(id)_dismissalPreviewForSecondaryItemPreview:(id)arg0 ;
-(id)_menuView;
-(id)_platterTransitionView;
-(id)_platterView;
-(id)_targetedPreviewForDismissalAnimation;
-(id)initWithPresentationController:(id)arg0 asDismissal:(BOOL)arg1 ;
-(void)_actuallyPerformTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)_anchorTransitionViewToTargetedPreview:(id)arg0 ;
-(void)_installAccessories;
-(void)_performAlongsideAnimations;
-(void)_performReduceMotionAppearanceTransition;
-(void)_performReduceMotionDisappearanceTransition;
-(void)_prepareAnimatablePropertyBasedAnimations;
-(void)_prepareOverallAnimationCompletion;
-(void)_prepareReparentingAnimationWithDismissalTarget:(id)arg0 ;
-(void)_presentation_applyBackgroundEffectWithProgress:(CGFloat)arg0 ;
-(void)_setBackgroundVisible:(BOOL)arg0 ;
-(void)_updateAccessoryAttachment:(id)arg0 ;
-(void)animateForDragSetDown;
-(void)performTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)prepareTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)transitionDidEnd:(BOOL)arg0 ;


@end


#endif