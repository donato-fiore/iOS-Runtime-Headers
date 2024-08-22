// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREMOVALSWITCHERMODIFIER_H
#define SBREMOVALSWITCHERMODIFIER_H

@class NSSet;


#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBRemovalSwitcherModifier : SBSwitcherModifier {
    NSInteger _layoutRole;
    SBAppLayout *_appLayout;
    NSInteger _reason;
    SBSwitcherModifier *_multitaskingModifier;
    BOOL _hasResizedEnoughToUnblur;
    NSUInteger _indexToScrollToAfterRemoval;
    NSUInteger _indexOfAppLayoutPriorToRemoval;
    NSSet *_visibleAppLayoutsPriorToRemoval;
    SBAppLayout *_resultingAppLayoutIfAny;
    NSUInteger _phase;
}




-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(BOOL)shouldScaleContentToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)blurViewIconScaleForIndex:(NSUInteger)arg0 ;
-(id)_remainingAppLayoutForRemovingLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleResizeProgressEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 reason:(NSInteger)arg2 ;
-(id)resizeProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id)arg0 ;


@end


#endif