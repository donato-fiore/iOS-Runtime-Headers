// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERCHAMOISSETTINGS_H
#define SBSWITCHERCHAMOISSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;
@protocol BSDefaultObserver;


#import "SBDisplayItemLayoutGrid.h"
#import "SBSwitcherChamoisLayoutAttributes.h"

@interface SBSwitcherChamoisSettings : PTSettings {
    SBDisplayItemLayoutGrid *_cachedDisplayItemLayoutGrid;
    SBSwitcherChamoisLayoutAttributes *_cachedChamoisLayoutAttributes;
    CGRect _cachedChamoisLayoutAttributes_containerBounds;
    CGRect _cachedChamoisLayoutAttributes_nativeContainerReferencePixelBounds;
    NSInteger _cachedChamoisLayoutAttributes_interfaceOrientation;
    CGFloat _cachedChamoisLayoutAttributes_floatingDockHeight;
    CGFloat _cachedChamoisLayoutAttributes_statusBarHeight;
    BOOL _cachedChamoisLayoutAttributes_requiresFullScreen;
    BOOL _cachedChamoisLayoutAttributes_prefersStripHidden;
    BOOL _cachedChamoisLayoutAttributes_prefersDockHidden;
    BOOL _cachedChamoisLayoutAttributes_isEmbeddedDisplay;
    id<BSDefaultObserver> *_appSwitcherDefaultsObserver;
    BOOL _cachedChamoisHideStrips;
    BOOL _cachedChamoisHideStripsExternal;
    BOOL _cachedChamoisHideDock;
    BOOL _cachedChamoisHideDockExternal;
}


@property BOOL allowTrueMaximizeForAllApps; // ivar: _allowTrueMaximizeForAllApps
@property (retain) SBFFluidBehaviorSettings *appToAppLayoutSettings; // ivar: _appToAppLayoutSettings
@property (retain) SBFFluidBehaviorSettings *appToAppOpacitySettings; // ivar: _appToAppOpacitySettings
@property CGSize diffuseShadowOffset; // ivar: _diffuseShadowOffset
@property CGFloat diffuseShadowOpacity; // ivar: _diffuseShadowOpacity
@property CGFloat diffuseShadowRadius; // ivar: _diffuseShadowRadius
@property NSUInteger externalDisplayHighResVerticalResolution; // ivar: _externalDisplayHighResVerticalResolution
@property (retain) SBFFluidBehaviorSettings *liveResizeAfterReleaseLayoutAnimationSettings; // ivar: _liveResizeAfterReleaseLayoutAnimationSettings
@property (retain) SBFFluidBehaviorSettings *liveResizeDuringDragLayoutAnimationSettings; // ivar: _liveResizeDuringDragLayoutAnimationSettings
@property NSUInteger maximumNumberOfAppsOnStage; // ivar: _maximumNumberOfAppsOnStage
@property NSUInteger numberOfRowsWhileInAppOnEmbeddedDisplay; // ivar: _numberOfRowsWhileInAppOnEmbeddedDisplay
@property NSUInteger numberOfRowsWhileInAppOnExternalDisplay; // ivar: _numberOfRowsWhileInAppOnExternalDisplay
@property NSUInteger numberOfRowsWhileInAppOnExternalDisplayHighRes; // ivar: _numberOfRowsWhileInAppOnExternalDisplayHighRes
@property NSUInteger numberOfVisibleItemsPerGroup; // ivar: _numberOfVisibleItemsPerGroup
@property CGFloat pinWindowEdgeForResizeMargin; // ivar: _pinWindowEdgeForResizeMargin
@property BOOL rasterizeScaledApps; // ivar: _rasterizeScaledApps
@property BOOL rejectDropsWhenStageIsFull; // ivar: _rejectDropsWhenStageIsFull
@property CGFloat rimShadowOpacity; // ivar: _rimShadowOpacity
@property CGFloat rimShadowRadius; // ivar: _rimShadowRadius
@property CGFloat stripsHoverRevealZoneWidthFixed; // ivar: _stripsHoverRevealZoneWidthFixed
@property CGFloat stripsHoverRevealZoneWidthScale; // ivar: _stripsHoverRevealZoneWidthScale
@property NSUInteger stripsHoverRevealZoneWidthType; // ivar: _stripsHoverRevealZoneWidthType
@property CGFloat switcherHeightForIconAndLabelsUnderEachPile; // ivar: _switcherHeightForIconAndLabelsUnderEachPile
@property CGFloat switcherPileCardMinimumPeekAmount; // ivar: _switcherPileCardMinimumPeekAmount
@property CGFloat switcherPileCompactingFactor; // ivar: _switcherPileCompactingFactor


+(id)settingsControllerModule;
-(BOOL)_shouldPreferDockHiddenForWindowScene:(id)arg0 ;
-(BOOL)_shouldPreferStripHiddenForWindowScene:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(CGFloat)_statusBarHeight;
-(CGFloat)_stripCardScaleForContainerBounds:(struct CGRect )arg0 screenEdgePadding:(CGFloat)arg1 stripVerticalEdgeSpacing:(CGFloat)arg2 stripInterItemSpacing:(CGFloat)arg3 floatingDockHeight:(CGFloat)arg4 numberOfRows:(NSUInteger)arg5 ;
-(CGFloat)_stripWidthForContainerBounds:(struct CGRect )arg0 screenEdgePadding:(CGFloat)arg1 stripStackDistance:(CGFloat)arg2 stripCardScale:(CGFloat)arg3 stripTiltAngle:(CGFloat)arg4 containerPerspective:(CGFloat)arg5 ;
-(id)_displayItemLayoutGrid;
-(id)_gridHeightsForSafeHeight:(CGFloat)arg0 minimumHeight:(CGFloat)arg1 stageInterItemSpacing:(CGFloat)arg2 ;
-(id)_gridWidthsForSafeWidth:(CGFloat)arg0 minimumWidth:(CGFloat)arg1 stageInterItemSpacing:(CGFloat)arg2 ;
-(id)initWithDefaultValues;
-(id)layoutAttributesForContainerBounds:(struct CGRect )arg0 nativeContainerReferencePixelBounds:(struct CGRect )arg1 interfaceOrientation:(NSInteger)arg2 floatingDockHeight:(CGFloat)arg3 statusBarHeight:(CGFloat)arg4 requiresFullScreen:(BOOL)arg5 prefersStripHidden:(BOOL)arg6 prefersDockHidden:(BOOL)arg7 isEmbeddedDisplay:(BOOL)arg8 ;
-(id)layoutAttributesForWindowScene:(id)arg0 interfaceOrientation:(NSInteger)arg1 requiresFullScreen:(BOOL)arg2 floatingDockHeight:(CGFloat)arg3 ;
-(struct CGSize )_minimumDefaultWindowSizeForContainerBounds:(struct CGRect )arg0 stripWidth:(CGFloat)arg1 ;
-(struct CGSize )_nearestGridSizeForSize:(struct CGSize )arg0 gridWidths:(id)arg1 gridHeights:(id)arg2 bounds:(struct CGRect )arg3 ;
-(void)_observeAppSwitcherDefaults;
-(void)_updateCachedAppSwitcherDefaults;
-(void)dealloc;
-(void)setDefaultValues;


@end


#endif