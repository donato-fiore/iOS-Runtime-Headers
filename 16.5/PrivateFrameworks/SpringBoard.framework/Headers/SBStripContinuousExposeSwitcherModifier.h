// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTRIPCONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBSTRIPCONTINUOUSEXPOSESWITCHERMODIFIER_H

@class NSString, NSMutableSet;
@protocol SBSwitcherLayoutCalculationsCacheDelegate;


#import "SBSwitcherModifier.h"
#import "SBSwitcherLayoutCalculationsCache.h"

@interface SBStripContinuousExposeSwitcherModifier : SBSwitcherModifier <SBSwitcherLayoutCalculationsCacheDelegate>

 {
    BOOL _requireStripContentsInViewHierarchy;
    SBSwitcherLayoutCalculationsCache *_stripLayoutCache;
    NSUInteger _modifierEventGenCount;
    CGFloat _cached_appStripOriginX;
    CGFloat _cached_appStripUnocclusionProgress;
}


@property (nonatomic, getter=isContinuousExposeConfigurationChangeTransition) BOOL continuousExposeConfigurationChangeTransition; // ivar: _continuousExposeConfigurationChangeTransition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *highlightedByHoverAppLayouts; // ivar: _highlightedByHoverAppLayouts
@property (retain, nonatomic) NSMutableSet *highlightedByTouchAppLayouts; // ivar: _highlightedByTouchAppLayouts
@property (readonly) Class superclass;


-(BOOL)_isAppLayoutEffectivelyOnStage:(id)arg0 ;
-(BOOL)_isGroupForAppLayoutHighlightedFromHover:(id)arg0 ;
-(BOOL)_isGroupForAppLayoutHighlightedFromTouch:(id)arg0 ;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(CGFloat)_appStripOriginX;
-(CGFloat)_highlightScaleForAppLayout:(id)arg0 ;
-(CGFloat)_wallpaperDimmingForIndex:(NSUInteger)arg0 ;
-(CGFloat)adjustedSpaceAccessoryViewScale:(CGFloat)arg0 forAppLayout:(id)arg1 ;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)_indexInContinuousExposeIdentifierPileForAppLayout:(id)arg0 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(id)_currentLayoutCalculationsValidityToken;
-(id)_orderedVisibleAppLayoutsIgnoringProgress:(BOOL)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(id)buildLayoutCalculationsForCache:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)handleHighlightEvent:(id)arg0 ;
-(id)inactiveAppLayoutsReachableByKeyboardShortcut;
-(id)init;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(struct CGPoint )_positionForPositionIn3DContainerSpace:(struct CGPoint )arg0 layerPosition:(struct CGPoint )arg1 layerSize:(struct CGSize )arg2 layerAnchorPoint:(struct CGPoint )arg3 layerTransform:(struct CATransform3D )arg4 containerPerspective:(CGFloat)arg5 ;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )_stripFrame;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_invalidateAppStripOriginX;


@end


#endif