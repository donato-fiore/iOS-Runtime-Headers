// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPRESTORETOFULLSCREENSWITCHERMODIFIER_H
#define SBPIPRESTORETOFULLSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBFullScreenToHomeIconZoomSwitcherModifier.h"

@interface SBPIPRestoreToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _toLayoutRole;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    CGRect _toAppLayoutBoundingBox;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
}


@property (nonatomic) BOOL shouldClippingTakeShadowIntoAccount; // ivar: _shouldClippingTakeShadowIntoAccount
@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition; // ivar: _shouldForceDefaultAnchorPointForTransition


-(BOOL)_isFromAppLayoutIndex:(NSUInteger)arg0 ;
-(BOOL)_isToAppLayout:(id)arg0 ;
-(BOOL)_isToAppLayoutIndex:(NSUInteger)arg0 ;
-(BOOL)_isToOrFromAppLayout:(id)arg0 ;
-(BOOL)_isToOrFromAppLayoutIndex:(NSUInteger)arg0 ;
-(BOOL)clipsToBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)completesWhenChildrenComplete;
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 zoomModifier:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 toLayoutRole:(NSInteger)arg4 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )_insetFrameForDiffuseShadowRadius:(struct CGRect )arg0 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )clippingFrameForIndex:(NSUInteger)arg0 withBounds:(struct CGRect )arg1 ;
-(struct CGRect )clippingFrameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 withBounds:(struct CGRect )arg3 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif