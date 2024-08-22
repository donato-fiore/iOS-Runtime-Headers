// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPINTERACTIONCONTROLLER_H
#define SBPIPINTERACTIONCONTROLLER_H

@class UIView, NSString, UIViewFloatAnimatableProperty, UIPanGestureRecognizer, NSDictionary, NSMutableArray, _UIHyperregionUnion, _UIHyperInteractor, NSMutableDictionary;
@protocol UIGestureRecognizerDelegate, SBPIPSystemGestureRecognizerDelegate, PTSettingsKeyPathObserver, SBSystemPointerInteractionDelegate, SBPIPPositionHyperregionComposerDelegate, SBPIPInteractionControllerDelegate, BSInvalidatable, SBPIPInteractionControllerDataSource;

#import <Foundation/Foundation.h>

#import "SBSystemGestureManager.h"
#import "SBSystemPointerInteractionManager.h"
#import "SBPIPPinchGestureRecognizer.h"
#import "SBPIPRotationGestureRecognizer.h"
#import "SBPIPInteractionSettings.h"
#import "SBPIPContentViewLayoutSettings.h"
#import "SBPIPInteractionControllerVisualizationView.h"
#import "SBWindowScene.h"
#import "_SBPIPInteractionControllerTransitionInfo.h"

@interface SBPIPInteractionController : NSObject <UIGestureRecognizerDelegate, SBPIPSystemGestureRecognizerDelegate, PTSettingsKeyPathObserver, SBSystemPointerInteractionDelegate, SBPIPPositionHyperregionComposerDelegate>

 {
    id<SBPIPInteractionControllerDelegate> *_delegate;
    UIView *_interactionTargetView;
    NSString *_shortDescription;
    NSInteger _shouldStash;
    BOOL _didLastSettleInStashedState;
    BOOL _didHandleGestureEndState;
    BOOL _gesturesWereCancelled;
    BOOL _isChangingSize;
    BOOL _threeTouchesPanDetected;
    SBSystemGestureManager *_systemGestureManagerForResizing;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
    NSUInteger _hoveringOverEdge;
    NSUInteger _pointerIsHoveringOverEdge;
    CGRect _pointerRegion;
    CGSize _toBeAppliedPreferredContentSize;
    UIViewFloatAnimatableProperty *_layoutProgressProperty;
    NSUInteger _allLayoutSessionUpdateReasons;
    NSUInteger _gesturesEndedLayoutReason;
    SBPIPPinchGestureRecognizer *_pinchGestureRecognizer;
    SBPIPRotationGestureRecognizer *_rotationGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPanGestureRecognizer *_edgeResizeGestureRecognizer;
    UIPanGestureRecognizer *_externalPanDrivingGestureRecognizer;
    UIPanGestureRecognizer *_panWhileResizingGestureRecognizer;
    SBPIPPositionGeometryContext _geometryContext;
    NSDictionary *_resolvedPositionRegionsMap;
    NSMutableArray *_positionRegionComposers;
    _UIHyperregionUnion *_stashedLeftRegion;
    _UIHyperregionUnion *_stashedRightRegion;
    _UIHyperInteractor *_positionInteractor;
    _UIHyperInteractor *_rotationInteractor;
    _UIHyperInteractor *_scaleInteractor;
    CGFloat _pinchGestureBaselineScale;
    CGFloat _edgeResizeGestureBaselineWidthScale;
    CGFloat _edgeResizeGestureBaselineHeightScale;
    CGFloat _edgeResizeGestureBaselineWidth;
    CGFloat _edgeResizeGestureBaselineHeight;
    CGFloat _pinchGestureScaleFactor;
    CGFloat _lastStashedProgress;
    CGPoint _panGestureLocationOffset;
    CGPoint _anchorPoint;
    CGAffineTransform _stashTabCompensationTransform;
    CGAffineTransform _rotationTransform;
    NSUInteger _inFlightAnimatedLayouts;
    id *_pendingInteractionCompletion;
    SBPIPInteractionSettings *_interactionSettings;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    SBPIPContentViewLayoutSettings *_layoutSettings;
    UIView *_pointerHitTestBlocker;
    SBPIPInteractionControllerVisualizationView *_positionRegionVisualizationView;
    SBWindowScene *_targetWindowScene;
    NSMutableDictionary *_scenePersistentIdentifierToEdgeInsets;
    NSMutableDictionary *_scenePersistentIdentifierToStashedPadding;
    _SBPIPInteractionControllerTransitionInfo *_pendingTransition;
}


@property (readonly, nonatomic) NSUInteger canonicalPosition;
@property (readonly, nonatomic) CGFloat currentNormalizedScale;
@property (readonly, weak, nonatomic) NSObject<SBPIPInteractionControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugName; // ivar: _debugName
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect initialFrame;
@property (readonly, nonatomic) SBPIPContentViewLayoutSettings *layoutSettings;
@property (readonly, nonatomic) CGRect nonoperationalFrame; // ivar: _nonoperationalFrame
@property (readonly, nonatomic) CGPoint position;
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (nonatomic) CGFloat preferredNormalizedScale;
@property (readonly, nonatomic) CGFloat preferredScale; // ivar: _preferredScale
@property (readonly, nonatomic) CGFloat stashProgress;
@property (nonatomic, getter=isStashed) BOOL stashed;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *targetOverlayView; // ivar: _targetOverlayView
@property (readonly, weak, nonatomic) UIView *targetView;


-(BOOL)_hasInFlightLayoutAnimations;
-(BOOL)_hasValidInteractionTargetView;
-(BOOL)_isGestureRecognizerRecognizing:(id)arg0 ;
-(BOOL)_isGesturing;
-(BOOL)_isInteractive;
-(BOOL)_isPanning;
-(BOOL)_isPinching;
-(BOOL)_isPositionCloserToStashedLeftRegion:(struct CGPoint )arg0 closestPointOut:(struct CGPoint *)arg1 ;
-(BOOL)_isPreferredContentSizeDirty;
-(BOOL)_isRotating;
-(BOOL)_isSizeAffectedByLayoutReasons:(NSUInteger)arg0 ;
-(BOOL)_isSystemGestureRecognizer:(id)arg0 ;
-(BOOL)_regionIsStashedOne:(id)arg0 ;
-(BOOL)_setEdgeInsets:(struct UIEdgeInsets )arg0 forScene:(id)arg1 ;
-(BOOL)_updateGeometryContextUsingTargetViewBounds:(struct CGRect )arg0 orientation:(NSInteger)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)gestureRecognizerShouldFailForMovementPastHysteresis:(id)arg0 ;
-(BOOL)isPinching;
-(BOOL)isRotating;
-(BOOL)shouldBeginPointerInteractionRequest:(id)arg0 atLocation:(struct CGPoint )arg1 forView:(id)arg2 ;
-(CGFloat)_currentRotation;
-(CGFloat)_currentScale;
-(CGFloat)_proratedScaleForNormalizedScale:(CGFloat)arg0 ;
-(CGFloat)_stashProgressForPosition:(struct CGPoint )arg0 ;
-(NSUInteger)__traitsForGesturesReasons:(NSUInteger)arg0 ;
-(NSUInteger)_canonicalPositionForPoint:(struct CGPoint )arg0 ;
-(id)_rotationHyperregion;
-(id)_scaleHyperregion;
-(id)initWithInteractionTargetView:(id)arg0 preferredContentSize:(struct CGSize )arg1 interactionSettings:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4 ;
-(id)regionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(id)styleForRegion:(id)arg0 forView:(id)arg1 ;
-(id)targetWindowSceneForRegionComposer:(id)arg0 ;
-(struct CGAffineTransform )_stashTabCompensationTransformForStashProgress:(CGFloat)arg0 reason:(NSUInteger)arg1 ;
-(struct CGAffineTransform )_transformFromDisplayArrangeSpaceToWindowScene:(id)arg0 ;
-(struct CGAffineTransform )_transformToDisplayArrangementSpaceFromWindowScene:(id)arg0 ;
-(struct CGPoint )_closestToDefaultCornersPosition;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromWindowForView:(id)arg1 toWindowScene:(id)arg2 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 toReferenceSpaceFromView:(id)arg1 ;
-(struct CGPoint )_convertPointToInteractionTargetView:(struct CGPoint )arg0 fromSystemGestureRecognizer:(id)arg1 ;
-(struct CGPoint )_currentPosition;
-(struct CGPoint )_currentPositionForLayoutReason:(NSUInteger)arg0 ;
-(struct CGPoint )_interactionTargetViewPresentationPosition;
-(struct CGPoint )_roundPosition:(struct CGPoint )arg0 forSize:(struct CGSize )arg1 ;
-(struct CGPoint )edgeResizeAnchorPoint;
-(struct CGSize )_currentSizeForLayoutReason:(NSUInteger)arg0 ;
-(struct CGSize )_lastSteadySize;
-(struct SBPIPPositionGeometryContext )regionComposer:(id)arg0 transformGeometryContext:(struct SBPIPPositionGeometryContext )arg1 toWindowScene:(id)arg2 ;
-(struct SBPIPPositionInteractionStateContext )_currentPositionInteractionStateContext;
-(struct UIEdgeInsets )_cachedEdgeInsetsForScene:(id)arg0 ;
-(struct UIEdgeInsets )_cachedStashedPaddingForScene:(id)arg0 ;
-(struct UIEdgeInsets )_inFlightHitTestPadding;
-(struct UIEdgeInsets )_minimumStashedPadding:(struct UIEdgeInsets )arg0 ;
-(struct UIEdgeInsets )pointerInteractionHitTestInsetsForView:(id)arg0 ;
-(void)__handleGesturesEndedState:(id)arg0 ;
-(void)__moveToAnchorPoint:(struct CGPoint )arg0 reason:(id)arg1 ;
-(void)_adjustContentViewAnchorPointForGestureRecognizer:(id)arg0 ;
-(void)_applyPreferredScale;
-(void)_cancelAllGestures;
-(void)_enumerateComposers:(id)arg0 usingBlock:(id)arg1 ;
-(void)_enumeratePositionRegionComposersUsingBlock:(id)arg0 ;
-(void)_handleGestureBeganState:(id)arg0 ;
-(void)_handleGestureEndedState:(id)arg0 ;
-(void)_noteStashProgress:(CGFloat)arg0 withReason:(NSUInteger)arg1 ;
-(void)_performInitialLayoutIfNeeded;
-(void)_removeGestureRecognizers;
-(void)_removePointerInteraction;
-(void)_resetAnchorPoint;
-(void)_setDefaults;
-(void)_setNeedsLayoutForTraits:(NSUInteger)arg0 withReason:(NSUInteger)arg1 behavior:(int)arg2 ;
// -(void)_setNeedsLayoutForTraits:(NSUInteger)arg0 withReason:(NSUInteger)arg1 behavior:(int)arg2 layoutCompletion:(id)arg3 interactionCompletion:(unk)arg4  ;
-(void)_setupDefaultInteractorsAndHyperRegions;
-(void)_setupForInitialFrame;
-(void)_setupGestureRecognizers;
-(void)_setupPointerInteraction;
-(void)_setupStateCapture;
-(void)_sizeChangeBeganWithBehavior:(int)arg0 ;
-(void)_sizeChangeEnded;
-(void)_updateGeometryContextBoundsUsingMainDisplayWindowScene;
-(void)_updateHyperregionVisualizationIfNecessary;
-(void)_updateInteractorsAndCommit:(BOOL)arg0 ;
-(void)_updatePIPSizeGeometryContext;
-(void)_updatePositionRegionComposers;
-(void)_updatePreferredContentSize;
-(void)_updateResolvedPositionHyperRegionsMapWithGeometry:(struct SBPIPPositionGeometryContext )arg0 interactionState:(struct SBPIPPositionInteractionStateContext )arg1 ;
-(void)_updateSettingsDrivenParameters;
-(void)_updateTargetWindowSceneIfNeeded;
-(void)_updateTargetWindowSceneIfNeededUpdatingInteractors:(BOOL)arg0 ;
-(void)addPositionRegionComposer:(id)arg0 ;
-(void)dealloc;
-(void)finishTransitionToWindowScene:(id)arg0 ;
-(void)handleEdgeResizeGesture:(id)arg0 ;
-(void)handleExternalPanGesture:(id)arg0 ;
-(void)handlePanGesture:(id)arg0 ;
-(void)handlePinchGesture:(id)arg0 ;
-(void)handleRotationGesture:(id)arg0 ;
-(void)layoutInteractedTraits:(NSUInteger)arg0 withReason:(NSUInteger)arg1 source:(id)arg2 ;
-(void)layoutWithFrame:(struct CGRect )arg0 reason:(id)arg1 source:(id)arg2 usingDisplayArrangementSpace:(BOOL)arg3 ;
-(void)pointerWillExitRegion;
-(void)positionRegionComposerDidInvalidate:(id)arg0 ;
-(void)positionRegionComposerNeedsUpdate:(id)arg0 behavior:(int)arg1 ;
-(void)prepareForTransitionToWindowScene:(id)arg0 ;
-(void)recalculateScale:(*CGFloat)arg0 baselineScale:(*CGFloat)arg1 forTranslationInView:(struct CGPoint )arg2 ;
-(void)reloadHyperregionComposerData;
-(void)reloadInsets;
-(void)setContainerSize:(struct CGSize )arg0 withOrientation:(NSInteger)arg1 scene:(id)arg2 ;
-(void)setContentLayoutSettings:(id)arg0 animationBehavior:(int)arg1 ;
-(void)setPlatformMetrics:(id)arg0 contentSize:(struct CGSize )arg1 animationBehavior:(int)arg2 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)toggleUserPreferredScale;


@end


#endif