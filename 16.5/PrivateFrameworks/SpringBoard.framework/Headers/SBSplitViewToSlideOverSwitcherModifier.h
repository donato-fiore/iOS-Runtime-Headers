// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPLITVIEWTOSLIDEOVERSWITCHERMODIFIER_H
#define SBSPLITVIEWTOSLIDEOVERSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSplitViewToSlideOverSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _transitioningLayoutRole;
    SBAppLayout *_splitViewAppLayout;
    SBAppLayout *_slideOverAppLayout;
    NSUInteger _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBAppLayout *_fromMainAppLayoutGoingIntoSlideOver;
}




-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 transitioningLayoutRole:(NSInteger)arg1 splitViewAppLayout:(id)arg2 slideOverAppLayout:(id)arg3 direction:(NSUInteger)arg4 ;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif