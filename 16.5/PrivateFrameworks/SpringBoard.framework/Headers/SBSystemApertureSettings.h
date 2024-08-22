// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURESETTINGS_H
#define SBSYSTEMAPERTURESETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings, SBFCAColorMatrixSettings;



@interface SBSystemApertureSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *acceptanceBounceLayout; // ivar: _acceptanceBounceLayout
@property (retain, nonatomic) SBFFluidBehaviorSettings *acceptanceBounceRebound; // ivar: _acceptanceBounceRebound
@property (retain, nonatomic) SBFFluidBehaviorSettings *acceptanceBounceSideLayout; // ivar: _acceptanceBounceSideLayout
@property (retain, nonatomic) SBFFluidBehaviorSettings *acceptanceBounceSideRebound; // ivar: _acceptanceBounceSideRebound
@property (retain, nonatomic) SBFFluidBehaviorSettings *acceptanceBounceSideStretch; // ivar: _acceptanceBounceSideStretch
@property (retain, nonatomic) SBFFluidBehaviorSettings *acceptanceBounceStretch; // ivar: _acceptanceBounceStretch
@property (nonatomic) CGFloat acceptanceSideBounceFixedOvershootScaling; // ivar: _acceptanceSideBounceFixedOvershootScaling
@property (nonatomic) CGFloat acceptanceSideBounceItemAppearanceDelayOffset; // ivar: _acceptanceSideBounceItemAppearanceDelayOffset
@property (nonatomic) CGFloat acceptanceSideBounceReboundDelay; // ivar: _acceptanceSideBounceReboundDelay
@property (nonatomic) CGFloat acceptanceSideBounceXSensorExpansion; // ivar: _acceptanceSideBounceXSensorExpansion
@property (nonatomic) CGFloat acceptanceSideBounceXSensorOffset; // ivar: _acceptanceSideBounceXSensorOffset
@property (nonatomic) CGFloat acceptanceSideBounceXStretch; // ivar: _acceptanceSideBounceXStretch
@property (nonatomic) CGFloat acceptanceSideBounceXVelocityThreshold; // ivar: _acceptanceSideBounceXVelocityThreshold
@property (nonatomic) CGFloat acceptanceSideBounceYPadding; // ivar: _acceptanceSideBounceYPadding
@property (nonatomic) CGFloat acceptanceUpBounceFixedOvershootScaling; // ivar: _acceptanceUpBounceFixedOvershootScaling
@property (nonatomic) CGFloat acceptanceUpBounceItemAppearanceDelayOffset; // ivar: _acceptanceUpBounceItemAppearanceDelayOffset
@property (nonatomic) CGFloat acceptanceUpBounceReboundDelay; // ivar: _acceptanceUpBounceReboundDelay
@property (nonatomic) CGFloat acceptanceUpBounceXPadding; // ivar: _acceptanceUpBounceXPadding
@property (nonatomic) CGFloat acceptanceUpBounceYDownStretch; // ivar: _acceptanceUpBounceYDownStretch
@property (nonatomic) CGFloat acceptanceUpBounceYStretch; // ivar: _acceptanceUpBounceYStretch
@property (nonatomic) BOOL activityKeyLineColorEnabled; // ivar: _activityKeyLineColorEnabled
@property (nonatomic) BOOL activityKeyLinePulsingEnabled; // ivar: _activityKeyLinePulsingEnabled
@property (retain, nonatomic) SBFCAColorMatrixSettings *adaptiveKeyLineColorMatrix; // ivar: _adaptiveKeyLineColorMatrix
@property (nonatomic) CGFloat adaptiveKeyLineThickness; // ivar: _adaptiveKeyLineThickness
@property (nonatomic) CGFloat alphaTransitionDurationOnClonedDisplay; // ivar: _alphaTransitionDurationOnClonedDisplay
@property (nonatomic) CGFloat containerHitRectHorizontalLimit; // ivar: _containerHitRectHorizontalLimit
@property (nonatomic) CGFloat containerHitRectHorizontalMargin; // ivar: _containerHitRectHorizontalMargin
@property (nonatomic) CGFloat containerHitRectHorizontalMarginLimit; // ivar: _containerHitRectHorizontalMarginLimit
@property (nonatomic) CGFloat containerHitRectTopMarginDefault; // ivar: _containerHitRectTopMarginDefault
@property (nonatomic) CGFloat containerHitRectTopMarginWide; // ivar: _containerHitRectTopMarginWide
@property (nonatomic, getter=isContainerHitRectVisible) BOOL containerHitRectVisible; // ivar: _containerHitRectVisible
@property (nonatomic) CGFloat delayBetweenKickAndSettle; // ivar: _delayBetweenKickAndSettle
@property (nonatomic) CGFloat delayBetweenKickAndStretchSettle; // ivar: _delayBetweenKickAndStretchSettle
@property (nonatomic) BOOL hideRemotePrototypingFallbackPill; // ivar: _hideRemotePrototypingFallbackPill
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoAuthErrorShakeInitialKick; // ivar: _jindoAuthErrorShakeInitialKick
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoAuthErrorShakeSettle; // ivar: _jindoAuthErrorShakeSettle
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoAuthErrorStretchOut; // ivar: _jindoAuthErrorStretchOut
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoAuthErrorStretchSettle; // ivar: _jindoAuthErrorStretchSettle
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoBoundsDefault; // ivar: _jindoBoundsDefault
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoBoundsExpanding; // ivar: _jindoBoundsExpanding
@property (nonatomic) CGFloat jindoBoundsInertLayoutProgress; // ivar: _jindoBoundsInertLayoutProgress
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoBoundsOval; // ivar: _jindoBoundsOval
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoBoundsSettling; // ivar: _jindoBoundsSettling
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoContentInteractionBegin; // ivar: _jindoContentInteractionBegin
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoContentInteractionEnd; // ivar: _jindoContentInteractionEnd
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoContentInteractionExpand; // ivar: _jindoContentInteractionExpand
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoContentTransition; // ivar: _jindoContentTransition
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoLockScreenMaximizeMesh; // ivar: _jindoLockScreenMaximizeMesh
@property (nonatomic) CGFloat jindoLockScreenMaximizePercentFromBottom; // ivar: _jindoLockScreenMaximizePercentFromBottom
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoLockScreenMaximizePosition; // ivar: _jindoLockScreenMaximizePosition
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoLockScreenMinimizeMesh; // ivar: _jindoLockScreenMinimizeMesh
@property (nonatomic) CGFloat jindoLockScreenMinimizePercentFromBottom; // ivar: _jindoLockScreenMinimizePercentFromBottom
@property (retain, nonatomic) SBFFluidBehaviorSettings *jindoLockScreenMinimizePosition; // ivar: _jindoLockScreenMinimizePosition
@property (nonatomic) CGFloat keyLineAlpha; // ivar: _keyLineAlpha
@property (nonatomic) CGFloat keyLineColorFixedLstar; // ivar: _keyLineColorFixedLstar
@property (nonatomic) CGFloat keyLineDarkToMixedMinLuma; // ivar: _keyLineDarkToMixedMinLuma
@property (retain, nonatomic) SBFFluidBehaviorSettings *keyLineDisappearToInertTransition; // ivar: _keyLineDisappearToInertTransition
@property (nonatomic) BOOL keyLineEnabled; // ivar: _keyLineEnabled
@property (nonatomic) CGFloat keyLineMixedToDarkMaxLuma; // ivar: _keyLineMixedToDarkMaxLuma
@property (retain, nonatomic) SBFFluidBehaviorSettings *keyLineStyleTransition; // ivar: _keyLineStyleTransition
@property (nonatomic) CGFloat keyLineThickness; // ivar: _keyLineThickness
@property (nonatomic) CGFloat maximizeMeshInflectionPoint1; // ivar: _maximizeMeshInflectionPoint1
@property (nonatomic) CGFloat maximizeMeshInflectionPoint2; // ivar: _maximizeMeshInflectionPoint2
@property (nonatomic) CGFloat maximizeMeshInflectionPoint3; // ivar: _maximizeMeshInflectionPoint3
@property (nonatomic) CGFloat minimizeMeshInflectionPoint1; // ivar: _minimizeMeshInflectionPoint1
@property (nonatomic) CGFloat minimizeMeshInflectionPoint2; // ivar: _minimizeMeshInflectionPoint2
@property (nonatomic) CGFloat minimizeMeshInflectionPoint3; // ivar: _minimizeMeshInflectionPoint3
@property (nonatomic) CGFloat minimumRequiredSymmetryInCompactLayoutMode; // ivar: _minimumRequiredSymmetryInCompactLayoutMode
@property (nonatomic) CGFloat paddingFromScreenEdgeRequiringSymmetricLayout; // ivar: _paddingFromScreenEdgeRequiringSymmetricLayout
@property (nonatomic) CGFloat recombineGestureTranslateFactorCompress; // ivar: _recombineGestureTranslateFactorCompress
@property (nonatomic) CGFloat recombineGestureTranslateFactorStretch; // ivar: _recombineGestureTranslateFactorStretch
@property (nonatomic) CGFloat recombineGestureXRubberbandingCompress; // ivar: _recombineGestureXRubberbandingCompress
@property (nonatomic) CGFloat recombineGestureXRubberbandingStretch; // ivar: _recombineGestureXRubberbandingStretch
@property (nonatomic) CGFloat recombineGestureXScaleFactorCompress; // ivar: _recombineGestureXScaleFactorCompress
@property (nonatomic) CGFloat recombineGestureXScaleFactorStretch; // ivar: _recombineGestureXScaleFactorStretch
@property (nonatomic) CGFloat resizeGestureMinEdgePadding; // ivar: _resizeGestureMinEdgePadding
@property (nonatomic) CGFloat resizeGestureSensorXSafetyMargin; // ivar: _resizeGestureSensorXSafetyMargin
@property (nonatomic) CGFloat resizeGestureUpOffsetFactor; // ivar: _resizeGestureUpOffsetFactor
@property (nonatomic) CGFloat resizeGestureXRubberbanding; // ivar: _resizeGestureXRubberbanding
@property (nonatomic) CGFloat resizeGestureYRangeBeginTracking; // ivar: _resizeGestureYRangeBeginTracking
@property (nonatomic) CGFloat resizeGestureYRangeEndTracking; // ivar: _resizeGestureYRangeEndTracking
@property (nonatomic) CGFloat resizeGestureYRubberbandingCompress; // ivar: _resizeGestureYRubberbandingCompress
@property (nonatomic) CGFloat resizeGestureYRubberbandingStretch; // ivar: _resizeGestureYRubberbandingStretch
@property (nonatomic) CGFloat sensorShadowOpacityFactor; // ivar: _sensorShadowOpacityFactor
@property (nonatomic, getter=isSensorShadowVisible) BOOL sensorShadowVisible; // ivar: _sensorShadowVisible
@property (nonatomic) CGFloat shakeDisplacement; // ivar: _shakeDisplacement
@property (nonatomic) BOOL shakeRingerBell; // ivar: _shakeRingerBell
@property (nonatomic) CGFloat shakeSensorExpansion; // ivar: _shakeSensorExpansion
@property (nonatomic) CGFloat shakeSensorOffset; // ivar: _shakeSensorOffset
@property (nonatomic) BOOL suppressHidingInSnapshotsWhileEmpty; // ivar: _suppressHidingInSnapshotsWhileEmpty
@property (nonatomic) BOOL suppressHidingOnClonedDisplayWhileEmpty; // ivar: _suppressHidingOnClonedDisplayWhileEmpty


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif