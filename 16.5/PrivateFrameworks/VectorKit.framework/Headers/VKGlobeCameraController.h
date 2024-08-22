// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKGLOBECAMERACONTROLLER_H
#define VKGLOBECAMERACONTROLLER_H

@class NSString;
@protocol VKGesturingCameraController;


#import "VKScreenCameraController.h"

@interface VKGlobeCameraController : VKScreenCameraController <VKGesturingCameraController>

 {
    CameraManager _cameraManager;
    CGFloat _currentDoublePanPitch;
    BOOL _isPitching;
    BOOL _isRotating;
    BOOL _wasPitched;
    BOOL _couldEnter3DMode;
    CGFloat _currentZoomLevel;
    CGFloat _maxZoomLevel;
    CGFloat _minZoomLevel;
    CGFloat _lastRotation;
    CGPoint _panStartScreenPoint;
    CGPoint _panLastScreenPoint;
    CGFloat _beganDoublePanPitch;
    shared_ptr<md::TaskContext> _taskContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *void globeView; // ivar: _globeView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tourShouldResumeWhenDoneGesturing; // ivar: _tourShouldResumeWhenDoneGesturing


-(?)initWithTaskContext:(?)arg0 mapDataAccess:(?)arg1 animationRunner:(?)arg2 runLoopControllercameraDelegate;
-(BOOL)canEnter3DMode;
-(BOOL)isFlyoverTourStarted;
-(BOOL)isFullyPitched;
-(BOOL)isPitched;
-(BOOL)snapMapIfNecessary:(BOOL)arg0 ;
-(CGFloat)_fovAdjustment;
-(CGFloat)altitude;
-(CGFloat)currentZoomLevel;
-(CGFloat)distanceFromCenterCoordinate;
-(CGFloat)durationToAnimateToMapRegion:(id)arg0 ;
-(CGFloat)earthRadiusAt:(CGFloat)arg0 ;
-(CGFloat)geocAngleBetween:(struct ? )arg0 andCoordinate:(struct ? )arg1 ;
-(CGFloat)greatCircleMidPointLatitude:(CGFloat)arg0 fromLongitude:(CGFloat)arg1 toLongitude:(CGFloat)arg2 ;
-(CGFloat)heading;
-(CGFloat)maxPitch;
-(CGFloat)maximumZoomLevel;
-(CGFloat)minPitch;
-(CGFloat)minimumZoomLevel;
-(CGFloat)pitch;
-(CGFloat)presentationYaw;
-(CGFloat)topDownMinimumZoomLevel;
-(CGFloat)widestLatitudeForMapRegion:(id)arg0 ;
-(CGFloat)zoomForMapRegion:(id)arg0 ;
-(NSInteger)tileSize;
-(float)slowDownFactorFromLoadProgress;
-(id)createMoveToZoomOutZoomInFrameFunction:(SEL)arg0 toLatLon:(struct CameraFrame<geo::Radians, double> )arg1 ;
-(id)mapRegion;
-(id)mapRegionIgnoringEdgeInsets;
-(struct ? )_centerCoordinateForMapRegion:(id)arg0 ;
-(struct ? )centerCoordinate;
-(struct Geocentric<double> )cameraPosition;
-(void)_updateCanEnter3DMode;
-(void)_updateIsPitched;
-(void)adjustLoadingForAnimation:(float)arg0 progressFactor:(float)arg1 ;
// -(void)animateRegionWithDuration:(CGFloat)arg0 timingFunction:(id)arg1 cursor:(unk)arg2 stepHandler:(struct Matrix<int, 2, 1> )arg3 completionHandler:(id)arg4  ;
-(void)animateToRestriction:(id)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)enter3DMode;
-(void)exit3DMode;
// -(void)flyoverTourAnimation:(id)arg0 animateToStart:(BOOL)arg1 labelChanged:(id)arg2 stateChange:(unk)arg3  ;
-(void)interruptFlyoverTourAnimation;
// -(void)moveTo:(struct ? )arg0 height:(CGFloat)arg1 useHeight:(BOOL)arg2 zoom:(CGFloat)arg3 rotation:(CGFloat)arg4 tilt:(CGFloat)arg5 duration:(CGFloat)arg6 timingCurve:(id)arg7 completion:(unk)arg8  ;
// -(void)moveTo:(struct ? )arg0 zoom:(CGFloat)arg1 rotation:(CGFloat)arg2 tilt:(CGFloat)arg3 duration:(CGFloat)arg4 timingCurve:(id)arg5 completion:(unk)arg6  ;
// -(void)moveToZoomOutZoomInTransition:(struct ? )arg0 height:(CGFloat)arg1 useHeight:(BOOL)arg2 zoom:(CGFloat)arg3 rotation:(CGFloat)arg4 tilt:(CGFloat)arg5 duration:(CGFloat)arg6 timingCurve:(id)arg7 completion:(unk)arg8  ;
-(void)panWithOffset:(struct CGPoint )arg0 relativeToScreenPoint:(struct CGPoint )arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)pauseFlyoverTourAnimation;
-(void)pitch:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)resumeFlyoverTourAnimation;
-(void)rotate:(CGFloat)arg0 atScreenPoint:(struct CGPoint )arg1 ;
-(void)rotateTo:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setCamera:(struct shared_ptr<gdc::Camera> )arg0 ;
// -(void)setCenterCoordinate3D:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
// -(void)setCenterCoordinate:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
-(void)setCenterCoordinateDistanceRange:(struct ? )arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)setCurrentZoomLevel:(CGFloat)arg0 ;
-(void)setGesturing:(BOOL)arg0 ;
// -(void)setMapRegion:(id)arg0 pitch:(CGFloat)arg1 yaw:(CGFloat)arg2 duration:(CGFloat)arg3 timingCurve:(id)arg4 completion:(unk)arg5  ;
-(void)setMaxZoomLevel:(CGFloat)arg0 ;
-(void)setMinZoomLevel:(CGFloat)arg0 ;
-(void)setRegionRestriction:(id)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)setYaw:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)startPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startTrackingAnnotation:(id)arg0 trackHeading:(BOOL)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timingFunction:(id)arg4 ;
-(void)stopFlyoverTourAnimation;
-(void)stopGlobeAnimations;
-(void)stopPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)tapZoom:(struct CGPoint )arg0 levels:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)tiltTo:(CGFloat)arg0 animated:(BOOL)arg1 exaggerate:(BOOL)arg2 ;
-(void)updateCameraManager;
-(void)updatePinchWithFocusPoint:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;
-(void)updateState;
-(void)zoom:(CGFloat)arg0 withFocusPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;
-(void)zoomToDistance:(struct CGPoint )arg0 distance:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)zoomToDistance:(struct CGPoint )arg0 distance:(CGFloat)arg1 time:(CGFloat)arg2 completionHandler:(id)arg3 ;


@end


#endif