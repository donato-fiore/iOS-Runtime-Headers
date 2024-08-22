// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKMAPCAMERACONTROLLER_H
#define VKMAPCAMERACONTROLLER_H

@class NSString;
@protocol VKGesturingCameraController;


#import "VKScreenCameraController.h"
#import "VKTimedAnimation.h"

@interface VKMapCameraController : VKScreenCameraController <VKGesturingCameraController>

 {
    VKTimedAnimation *_horizontalOffsetAnimation;
    CGFloat _minDistanceToGroundAlongForwardVector;
    CGFloat _maxDistanceToGroundAlongForwardVector;
    CGFloat _finalYaw;
    CGFloat _finalPitch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *void mapEngine; // ivar: _mapEngine
@property (readonly) Class superclass;


-(?)initWithMapDataAccess:(?)arg0 animationRunner:(?)arg1 runLoopControllercameraDelegate;
-(BOOL)canEnter3DMode;
-(BOOL)canRotate;
-(BOOL)isFullyPitched;
-(BOOL)isPitched;
-(BOOL)snapMapIfNecessary:(BOOL)arg0 ;
-(CGFloat)altitude;
-(CGFloat)currentZoomLevel;
-(CGFloat)distanceFromCenterCoordinate;
-(CGFloat)durationToAnimateToMapRegion:(id)arg0 ;
-(CGFloat)heading;
-(CGFloat)maxPitch;
-(CGFloat)maximumZoomLevel;
-(CGFloat)minPitch;
-(CGFloat)minimumZoomLevel;
-(CGFloat)pitch;
-(CGFloat)presentationYaw;
-(CGFloat)topDownMinimumZoomLevel;
-(CGFloat)yaw;
-(CGFloat)zoomLevelAdjustmentForTileSize:(NSInteger)arg0 ;
-(NSInteger)tileSize;
-(float)currentDisplayZoomLevel;
-(float)currentMaximumNormalizedZoomLevel;
-(float)currentMinimumNormalizedZoomLevel;
-(float)currentNormalizedZoomLevel;
-(float)currentStyleZoomLevel;
-(float)currentTopDownMinimumNormalizedZoomLevel;
-(float)idealPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)maxPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)maximumNormalizedZoomLevel;
-(float)minimumNormalizedZoomLevel;
-(float)minimumPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)normalizedZoomLevelAdjustmentForTileSize:(NSInteger)arg0 ;
-(struct ? )_mercatorCenterCoordinateForMapRegion:(id)arg0 ;
-(struct ? )centerCoordinate;
-(struct Matrix<double, 3, 1> )positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> )arg0 ;
// -(void)_animateToPosition:(struct Matrix<double, 3, 1> )arg0 pitch:(CGFloat)arg1 yaw:(CGFloat)arg2 duration:(CGFloat)arg3 timingCurve:(id)arg4 completion:(unk)arg5  ;
// -(void)_animateToPosition:(struct Matrix<double, 3, 1> )arg0 pitch:(CGFloat)arg1 yaw:(CGFloat)arg2 duration:(CGFloat)arg3 timingCurve:(id)arg4 forceDestination:(unk)arg5 completion:(BOOL)arg6  ;
-(void)_jumpToCenterPoint:(struct Matrix<double, 3, 1> )arg0 pitchRadians:(CGFloat)arg1 yawRadians:(CGFloat)arg2 ;
// -(void)animateRegionWithDuration:(CGFloat)arg0 timingFunction:(id)arg1 stepHandler:(unk)arg2 completionHandler:(id)arg3  ;
-(void)canvasDidLayout;
-(void)clampPitch:(*CGFloat)arg0 yaw:(*CGFloat)arg1 atTargetPositionZ:(CGFloat)arg2 ;
-(void)clampZoomLevelIfNecessary;
-(void)dealloc;
-(void)enter3DMode;
-(void)exit3DMode;
-(void)panWithOffset:(struct CGPoint )arg0 relativeToScreenPoint:(struct CGPoint )arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)rotateToPitch:(CGFloat)arg0 withPoint:(*void)arg1 preserveAltitude:(BOOL)arg2 animated:(BOOL)arg3 exaggerate:(BOOL)arg4 ;
-(void)rotateToYaw:(CGFloat)arg0 withPoint:(*void)arg1 animated:(BOOL)arg2 ;
-(void)setCamera:(struct shared_ptr<gdc::Camera> )arg0 ;
// -(void)setCenterCoordinate3D:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
// -(void)setCenterCoordinate:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
// -(void)setCenterCoordinate:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 forceDestination:(unk)arg7 completion:(BOOL)arg8  ;
-(void)setCenterCoordinateDistanceRange:(struct ? )arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)setGesturing:(BOOL)arg0 ;
// -(void)setMapRegion:(id)arg0 pitch:(CGFloat)arg1 yaw:(CGFloat)arg2 duration:(CGFloat)arg3 timingCurve:(id)arg4 completion:(unk)arg5  ;
-(void)setRegionRestriction:(id)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)setYaw:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)startTrackingAnnotation:(id)arg0 trackHeading:(BOOL)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timingFunction:(id)arg4 ;
-(void)tapZoom:(struct CGPoint )arg0 levels:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)updateCameraToPositionOrientationLimits;
-(void)updateCameraZBounds;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)zoom:(CGFloat)arg0 withFocusPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;
-(void)zoom:(CGFloat)arg0 withPoint:(struct Matrix<double, 3, 1> )arg1 completionHandler:(id)arg2 ;
-(void)zoomToLevel:(CGFloat)arg0 withFocusPoint:(struct CGPoint )arg1 ;
-(void)zoomToLevel:(CGFloat)arg0 withPoint:(struct Matrix<double, 3, 1> )arg1 ;


@end


#endif