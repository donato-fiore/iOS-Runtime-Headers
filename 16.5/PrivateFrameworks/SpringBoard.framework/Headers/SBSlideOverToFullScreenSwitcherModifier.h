// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSLIDEOVERTOFULLSCREENSWITCHERMODIFIER_H
#define SBSLIDEOVERTOFULLSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBHomeScreenZoomSwitcherModifier.h"

@interface SBSlideOverToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromSlideOverAppLayout;
    SBAppLayout *_toFullScreenAppLayout;
    SBAppLayout *_removedMainAppLayout;
    SBHomeScreenZoomSwitcherModifier *_homeScreenZoomModifier;
}




-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)wantsSlideOverTongue;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(NSInteger)wallpaperStyle;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 slideOverAppLayout:(id)arg1 fullScreenAppLayout:(id)arg2 replacingMainAppLayout:(id)arg3 ;
-(id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg0 fromAppLayouts:(id)arg1 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif