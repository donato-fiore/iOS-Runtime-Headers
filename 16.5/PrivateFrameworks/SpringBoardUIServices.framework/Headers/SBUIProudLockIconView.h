// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPROUDLOCKICONVIEW_H
#define SBUIPROUDLOCKICONVIEW_H

@class UIView, BSUICAPackageView, NSSet, LAUIPearlGlyphView, UIColor, _UILegibilitySettings;


#import "SBUIFaceIDCoachingView.h"
#import "SBUIFaceIDCameraGlyphView.h"

@interface SBUIProudLockIconView : UIView {
    UIView *_iconContainerView;
    BSUICAPackageView *_lockView;
    NSSet *_imageLayers;
    NSSet *_shadowImageLayers;
    NSSet *_shadowFilterLayers;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
    id *_pearlGlyphViewSharedResources;
    SBUIFaceIDCoachingView *_lazy_faceIDCoachingView;
    BOOL _performingIncomingLayout;
    BOOL _changingAllowsAlongsideCoaching;
    BOOL _allowsAlongsideCoaching;
    BOOL _overridesSizing;
    CGSize _overrideSize;
    CGPoint _overrideOffset;
    CGFloat _overrideExtent;
}


@property (readonly, nonatomic) SBUIFaceIDCameraGlyphView *cameraCoveredView; // ivar: _cameraCoveredView
@property (retain, nonatomic) UIColor *contentColor; // ivar: _contentColor
@property (nonatomic) CGFloat durationOnCameraCoveredGlyphBeforeCoaching; // ivar: _durationOnCameraCoveredGlyphBeforeCoaching
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)allowsAlongsideCoaching;
-(CGFloat)_alphaForActiveViewForState:(NSInteger)arg0 ;
-(CGFloat)_lockToCoachingSpacing;
-(CGFloat)_scaleAmountForZoom;
-(id)_activeViewsForState:(NSInteger)arg0 ;
-(id)_alphaAnimationSettingsForTransitionFromViews:(id)arg0 andState:(NSInteger)arg1 toViews:(id)arg2 andState:(NSInteger)arg3 forIncomingViews:(BOOL)arg4 ;
-(id)_defaultAnimationSettingsForTransitionFromViews:(id)arg0 andState:(NSInteger)arg1 toViews:(id)arg2 andState:(NSInteger)arg3 ;
-(id)_faceIDCoachingView;
-(id)_layoutAnimationSettingsForTransitionFromViews:(id)arg0 andState:(NSInteger)arg1 toViews:(id)arg2 andState:(NSInteger)arg3 ;
-(id)_pearlGlyphView;
-(id)_transformAnimationSettingsForTransitionFromViews:(id)arg0 andState:(NSInteger)arg1 toViews:(id)arg2 andState:(NSInteger)arg3 forIncomingViews:(BOOL)arg4 ;
-(id)fileNameForCurrentDevice;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_incomingTransformForActiveView:(id)arg0 forState:(NSInteger)arg1 ;
-(struct CGAffineTransform )_outgoingTransformForView:(id)arg0 fromState:(NSInteger)arg1 ;
-(struct CGAffineTransform )_transformForActiveView:(id)arg0 forState:(NSInteger)arg1 ;
-(struct CGAffineTransform )_zoomedTransform;
-(struct CGSize )_practicalProudLockSize;
-(struct CGSize )_smallLockSize;
-(struct CGSize )_smallLockSizeForTextSize:(id)arg0 ;
-(void)_configureShadowFromLegibilitySettings:(id)arg0 ;
-(void)_forEachLayerInHierarchy:(id)arg0 perform:(id)arg1 ;
-(void)_resetCameraGlyphView;
-(void)_resetPearlGlyphView;
-(void)_resetfaceIDCoachingView;
-(void)_transitionToState:(NSInteger)arg0 animated:(BOOL)arg1 options:(NSInteger)arg2 completion:(id)arg3 ;
-(void)layoutSubviews;
-(void)setAllowsAlongsideCoaching:(BOOL)arg0 ;
-(void)setOverrideSize:(struct CGSize )arg0 offset:(struct CGPoint )arg1 extent:(CGFloat)arg2 ;


@end


#endif