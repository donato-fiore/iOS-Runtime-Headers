// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARCONTENTVIEW_H
#define _UINAVIGATIONBARCONTENTVIEW_H

@class UIBarContentView, NSLayoutConstraint, NSArray, NSMutableArray, NSString, NSDictionary;
@protocol _UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant, _UIButtonBarButtonChangeObserver, _UINavigationBarContentViewDelegate, _UINavigationBarContentViewVisualProvider;


#import "_UINavigationBarTransitionContext.h"
#import "UIImage.h"
#import "UIBarButtonItem.h"
#import "_UIButtonBarButton.h"
#import "UILayoutGuide.h"
#import "UIView.h"
#import "UIDeferredMenuElement.h"
#import "_UIPointerInteractionAssistant.h"
#import "UIAction.h"
#import "_UIBarButtonItemData.h"
#import "_UINavigationItemRenameHandler.h"
#import "UIDocumentProperties.h"
#import "UIBarButtonItemGroup.h"
#import "_UIBarButtonItemSearchBarGroup.h"
#import "_UINavigationBarContentViewLayout.h"

@interface _UINavigationBarContentView : UIBarContentView <_UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant, _UIButtonBarButtonChangeObserver>

 {
    _UINavigationBarTransitionContext *_transitionContext;
    UIImage *_backIndicatorImage;
    UIBarButtonItem *_backActionItem;
    _UIButtonBarButton *_staticNavBarButton;
    UILayoutGuide *_navItemContentLayoutGuide;
    NSLayoutConstraint *_staticNavBarButtonXPositionConstraint;
    NSArray *_staticNavBarButtonVerticalAlignmentConstraints;
    NSArray *_navItemContentLayoutGuideHorizEdgeConstraints;
    NSLayoutConstraint *_navItemContentLayoutGuideStaticButtonVisibilityAnimationConstraint;
    CGFloat _backButtonMaximumWidth;
    NSMutableArray *_currentAnimations;
    NSMutableArray *_currentCompletions;
    ? _navigationBarContentViewFlags;
}


@property (readonly, nonatomic) UIView *accessibilityBackButtonView;
@property (readonly, nonatomic) UIView *accessibilityTitleView;
@property (retain, nonatomic) UIDeferredMenuElement *additionalItems; // ivar: _additionalItems
@property (nonatomic) BOOL allowLeadingAlignedLargeTitle; // ivar: _allowLeadingAlignedLargeTitle
@property (readonly, nonatomic, getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange) BOOL animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant; // ivar: _assistant
@property (retain, nonatomic) UIAction *backAction; // ivar: _backAction
@property (copy, nonatomic) _UIBarButtonItemData *backButtonAppearance;
@property (nonatomic) BOOL backButtonHidden; // ivar: _backButtonHidden
@property (retain, nonatomic) UIBarButtonItem *backButtonItem; // ivar: _backButtonItem
@property (nonatomic) CGFloat backButtonMargin; // ivar: _backButtonMargin
@property (nonatomic, setter=_setBackButtonMaximumWidth:) CGFloat backButtonMaximumWidth;
@property (nonatomic) NSInteger barMetrics; // ivar: _barMetrics
@property (readonly, nonatomic) CGFloat buttonBarMinimumInterItemSpace;
@property (copy, nonatomic) NSArray *centerBarGroups; // ivar: _centerBarGroups
@property (readonly, nonatomic) NSInteger currentContentSize;
@property (readonly, nonatomic) CGFloat currentHeight;
@property (copy, nonatomic) NSString *customizationIdentifier; // ivar: _customizationIdentifier
@property (retain, nonatomic, setter=dci_setRenameHandler:) _UINavigationItemRenameHandler *dci_renameHandler; // ivar: _dci_renameHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UINavigationBarContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDocumentProperties *documentProperties; // ivar: _documentProperties
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance;
@property (readonly, nonatomic) NSDictionary *effectiveTitleAttributes; // ivar: _effectiveTitleAttributes
@property (nonatomic) BOOL enableAlternatePopItem; // ivar: _enableAlternatePopItem
@property (retain, nonatomic) UIBarButtonItemGroup *fixedTrailingGroup; // ivar: _fixedTrailingGroup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIBarButtonItemSearchBarGroup *inlineSearchBarGroup; // ivar: _inlineSearchBarGroup
@property (nonatomic) CGFloat inlineTitleViewAlpha; // ivar: _inlineTitleViewAlpha
@property (readonly, nonatomic) BOOL isNavItemContentLayoutGuideFlushLeading;
@property (readonly, nonatomic) BOOL isNavItemContentLayoutGuideFlushTrailing;
@property (readonly, nonatomic) _UINavigationBarContentViewLayout *layout; // ivar: _layout
@property (copy, nonatomic) NSArray *leadingBarButtonItems; // ivar: _leadingBarButtonItems
@property (copy, nonatomic) NSArray *leadingBarGroups; // ivar: _leadingBarGroups
@property (nonatomic) BOOL leadingItemsSupplementBackItem; // ivar: _leadingItemsSupplementBackItem
@property (readonly, nonatomic) UILayoutGuide *navItemContentLayoutGuide;
@property (readonly, nonatomic) CGFloat navItemContentLayoutGuideAnimationDistance;
@property (nonatomic) CGFloat overrideSize; // ivar: _overrideSize
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (nonatomic) NSInteger requestedContentSize; // ivar: _requestedContentSize
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;
@property (retain, nonatomic) UIBarButtonItem *staticNavBarButtonItem; // ivar: _staticNavBarButtonItem
@property (nonatomic) BOOL staticNavBarButtonLingers;
@property (nonatomic, getter=isStaticNavBarButtonTrailing) BOOL staticNavBarButtonTrailing; // ivar: _staticNavBarButtonTrailing
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSDictionary *titleAttributes; // ivar: _titleAttributes
@property (copy, nonatomic) id *titleMenuProvider; // ivar: _titleMenuProvider
@property (nonatomic) UIOffset titlePositionAdjustment; // ivar: _titlePositionAdjustment
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (nonatomic) NSInteger toolbarStyle; // ivar: _toolbarStyle
@property (copy, nonatomic) NSArray *trailingBarButtonItems; // ivar: _trailingBarButtonItems
@property (copy, nonatomic) NSArray *trailingBarGroups; // ivar: _trailingBarGroups
@property (readonly, nonatomic) NSObject<_UINavigationBarContentViewVisualProvider> *visualProvider; // ivar: _visualProvider


-(BOOL)_backButtonLayoutGuideIncludesFullyHiddenConstant;
-(BOOL)_effectiveStaticNavBarButtonLingers;
-(BOOL)_isStaticNavBarButtonOnRight;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)compactMetrics;
-(BOOL)isRTL;
-(BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(CGFloat)arg0 ;
-(CGFloat)_contentLayoutGuideAnimationConstraintConstantForFullyHiddenButton;
-(CGFloat)_contentLayoutGuideAnimationConstraintConstantForFullyVisibleButton;
-(CGFloat)_intrinsicHeight;
-(CGFloat)defaultEdgeSpacing;
-(CGFloat)titleViewContentBaseHeight:(id)arg0 ;
-(CGFloat)titleViewContentBaselineOffsetFromTop:(id)arg0 ;
-(CGFloat)titleViewLargeTitleHeight:(id)arg0 ;
-(NSInteger)_effectiveToolbarStyle;
-(NSInteger)barType;
-(NSInteger)effectiveStyleForStyle:(NSInteger)arg0 ;
-(NSUInteger)edgesPaddingBarButtonItem:(id)arg0 ;
-(id)_accessibility_HUDItemForPoint:(struct CGPoint )arg0 ;
-(id)_accessibility_barButtonItemAtPoint:(struct CGPoint )arg0 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint )arg0 ;
-(id)_layoutForAugmentedTitleView:(id)arg0 ;
-(id)_newLayout;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)backIndicatorImage;
-(id)initWithFrame:(struct CGRect )arg0 visualProvider:(id)arg1 ;
-(id)titleViewBackButtonMenu:(id)arg0 ;
-(struct ? )titleViewLargeTitleHeightRange:(id)arg0 ;
-(struct CGRect )_overlayRectForView:(id)arg0 inTargetView:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)__backButtonAction:(id)arg0 ;
// -(void)_addCoordinatedAnimation:(id)arg0 completion:(unk)arg1  ;
-(void)_appearanceChanged;
-(void)_clearAllAnimations;
-(void)_clearAssistants;
-(void)_configureBackButton:(id)arg0 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_itemCustomViewDidChange:(id)arg0 fromView:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg0 ;
-(void)_itemDidChangeHiddenState:(id)arg0 ;
-(void)_itemDidChangeSelectionState:(id)arg0 ;
-(void)_itemDidChangeWidth:(id)arg0 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg0 ;
-(void)_runAllScheduledAnimations:(BOOL)arg0 ;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)_setupBackButton;
-(void)_setupCenterButtonBar;
-(void)_setupLeadingButtonBarAnimated:(BOOL)arg0 ;
-(void)_setupStaticNavBarButtonAnimated:(BOOL)arg0 ;
-(void)_setupTitleView;
-(void)_setupTrailingButtonBarAnimated:(BOOL)arg0 ;
-(void)_updateLayoutMarginsForLayout:(id)arg0 ;
-(void)_updateNavItemContentLayoutGuideEdgeConstraints;
-(void)_updateStaticNavBarButtonVerticalAlignmentConstraints;
-(void)adoptLayout:(id)arg0 ;
-(void)adoptNewLayout;
-(void)backButtonTitleDidChange;
-(void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)clearTransitionContext;
-(void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg0 ;
-(void)finalizeStateFromTransition:(id)arg0 ;
-(void)prepareToRecordToState:(id)arg0 ;
-(void)recordFromStateForTransition:(id)arg0 ;
-(void)recordToStateForTransition:(id)arg0 ;
-(void)relinquishLayout;
-(void)resolvedHeightDidChange;
-(void)setBackIndicatorImage:(id)arg0 ;
-(void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)setNeedsStaticNavBarButtonUpdate;
-(void)tintColorDidChange;
-(void)titleView:(id)arg0 needsUpdatedContentOverlayRects:(id)arg1 ;
-(void)titleViewChangedDisplayItemAlpha:(id)arg0 ;
-(void)titleViewChangedHeight:(id)arg0 ;
-(void)titleViewChangedLayout:(id)arg0 ;
-(void)titleViewChangedMaximumBackButtonWidth:(id)arg0 ;
-(void)titleViewChangedPreferredDisplaySize:(id)arg0 ;
-(void)titleViewChangedStandardDisplayItems:(id)arg0 ;
-(void)titleViewChangedUnderlayContent:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAugmentedTitleViewNavigationBarTraitsTo:(id)arg0 from:(id)arg1 ;
-(void)updateContentAnimated:(BOOL)arg0 ;


@end


#endif