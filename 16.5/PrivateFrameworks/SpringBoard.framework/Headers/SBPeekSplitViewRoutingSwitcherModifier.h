// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPEEKSPLITVIEWROUTINGSWITCHERMODIFIER_H
#define SBPEEKSPLITVIEWROUTINGSWITCHERMODIFIER_H

@class NSString;
@protocol SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate;


#import "SBSwitcherModifier.h"
#import "SBAppSwitcherSettings.h"
#import "SBRoutingSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBTransitionSwitcherModifier.h"

@interface SBPeekSplitViewRoutingSwitcherModifier : SBSwitcherModifier <SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate>

 {
    SBAppSwitcherSettings *_switcherSettings;
    SBSwitcherModifier *_peekingModifier;
    SBSwitcherModifier *_nonPeekingModifier;
    SBRoutingSwitcherModifier *_routingModifier;
    NSInteger _peekConfiguration;
    NSInteger _spaceConfiguration;
    SBAppLayout *_peekingAppLayout;
    NSInteger _peekState;
    SBTransitionSwitcherModifier *_exitingTransitionTrackingModifier;
    SBAppLayout *_splitViewAppLayout;
    SBAppLayout *_toAppLayout;
    BOOL _uncondtionallyAllowAppLayoutContainment;
    BOOL _isRotating;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)modifierForEvent:(id)arg0 ;
-(BOOL)_isAppLayoutBeingResized:(id)arg0 ;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isResizeGrabberVisibleForAppLayout:(id)arg0 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)hiddenContainerStatusBarParts;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(NSUInteger)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(id)arg0 ;
-(NSUInteger)transactionCompletionOptions;
-(id)_combinedResultingAppLayoutWithAppLayout:(id)arg0 ;
-(id)_handleEvent:(id)arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutContainingAppLayout:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugPotentialChildModifiers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)fallbackModifierForRoutingModifier:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)homeScreenModifierForRoutingModifier:(id)arg0 ;
-(id)initWithPeekConfiguration:(NSInteger)arg0 spaceConfiguration:(NSInteger)arg1 peekingAppLayout:(id)arg2 ;
-(id)keyboardSuppressionMode;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(id)routingModifier:(id)arg0 animationAttributesModifierForLayoutElement:(id)arg1 ;
-(id)routingModifier:(id)arg0 event:(id)arg1 forModifier:(id)arg2 ;
-(id)routingModifier:(id)arg0 filteredAppLayouts:(id)arg1 forModifier:(id)arg2 ;
-(id)routingModifier:(id)arg0 filteredContinuousExposeIdentifiers:(id)arg1 forModifier:(id)arg2 ;
-(id)routingModifier:(id)arg0 modifierForAppLayout:(id)arg1 ;
-(id)scrollModifierForRoutingModifier:(id)arg0 ;
-(id)topMostLayoutElements;
-(id)transactionCompletionOptionsModifierForRoutingModifier:(id)arg0 ;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct CGRect )routingModifier:(id)arg0 containerViewBoundsForModifier:(id)arg1 ;
-(struct CGRect )routingModifier:(id)arg0 switcherViewBoundsForModifier:(id)arg1 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withCornerRadii:(struct UIRectCornerRadii )arg2 ;
-(void)_temporarilyAllowUnconditionaryAppLayoutContainmentWithBlock:(id)arg0 ;


@end


#endif