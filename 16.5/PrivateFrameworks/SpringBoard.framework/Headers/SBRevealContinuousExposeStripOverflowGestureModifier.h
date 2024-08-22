// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREVEALCONTINUOUSEXPOSESTRIPOVERFLOWGESTUREMODIFIER_H
#define SBREVEALCONTINUOUSEXPOSESTRIPOVERFLOWGESTUREMODIFIER_H

@class NSString, SBAppSwitcherDefaults;


#import "SBGestureSwitcherModifier.h"
#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBRevealContinuousExposeStripOverflowGestureModifier : SBGestureSwitcherModifier {
    BOOL _isRevealingSwitcher;
    NSString *_appExposeBundleIdentifier;
    SBSwitcherModifier *_continuousExposeAppSwitcherModifier;
    BOOL _showingAppSwitcherLayout;
    BOOL _beginAnimatingAppSwitcherLayoutProperty;
    CGFloat _translation;
    CGFloat _stripWidth;
    SBAppSwitcherDefaults *_appSwitcherDefaults;
}


@property (readonly, nonatomic) SBAppLayout *initialAppLayout; // ivar: _initialAppLayout


-(BOOL)_hideDock;
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldUpdateAnimatableProperty:(id)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)_finalScaleForFullScreenAppLayout;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)modelValueForAnimatableProperty:(id)arg0 currentValue:(CGFloat)arg1 creating:(BOOL)arg2 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)updateModeForAnimatableProperty:(id)arg0 ;
-(id)_appSwitcherDefaults;
-(id)_layoutSettingsForAppLayout:(id)arg0 ;
-(id)animatablePropertyIdentifiers;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 initialAppLayout:(id)arg1 ;
-(id)visibleAppLayouts;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif