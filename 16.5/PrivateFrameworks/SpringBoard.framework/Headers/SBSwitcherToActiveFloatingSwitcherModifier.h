// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERTOACTIVEFLOATINGSWITCHERMODIFIER_H
#define SBSWITCHERTOACTIVEFLOATINGSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_floatingDeckModifier;
}




-(BOOL)wantsSwitcherBackdropBlur;
-(BOOL)wantsSwitcherDimmingView;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(NSInteger)switcherBackdropBlurType;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)appLayoutsToCacheSnapshots;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 fullScreenAppLayout:(id)arg2 floatingDeckModifier:(id)arg3 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif