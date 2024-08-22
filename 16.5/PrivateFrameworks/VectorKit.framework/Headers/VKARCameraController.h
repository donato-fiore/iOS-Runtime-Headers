// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKARCAMERACONTROLLER_H
#define VKARCAMERACONTROLLER_H

@class NSString;
@protocol VKGesturingCameraController;


#import "VKScreenCameraController.h"
#import "VKTimedAnimation.h"

@interface VKARCameraController : VKScreenCameraController <VKGesturingCameraController>

 {
    shared_ptr<md::TaskContext> _taskContext;
    CGFloat _currentZoomLevel;
    CGFloat _maxZoomLevel;
    CGFloat _height;
    CGFloat _altitudeOffset;
    Unit<geo::RadianUnitDescription, double> _fovy;
    RigidTransform<double, double> _offsetTransform;
    CameraFrame<geo::Radians, double> _cameraFrame;
    RigidTransform<double, double> _baseTransform;
    RigidTransform<double, double> _arTransform;
    RigidTransform<double, double> _currentARTransform;
    RigidTransform<double, double> _lastARTransform;
    Quaternion<double> _arOrientation;
    VKTimedAnimation *_transitionAnimation;
    NSInteger _interfaceOrientation;
    Quaternion<double> _interfaceOrientationRotation;
    Coordinate2D<geo::Radians, double> _currentCoordinate;
    Unit<geo::DegreeUnitDescription, double> _fieldOfView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property ? fieldOfView;
@property (nonatomic) *void globeView; // ivar: _globeView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float heightScale;
@property (nonatomic) *void mapEngine; // ivar: _mapEngine
@property ? offsetTransform;
@property (nonatomic) BOOL overrideARFieldOfView; // ivar: _overrideARFieldOfView
@property (readonly) Class superclass;


-(?)initWithTaskContext:(?)arg0 mapDataAccess:(?)arg1 animationRunner:(?)arg2 runLoopControllercameraDelegate;
-(struct Matrix<double, 3, 1> )_intersectAndResolveWorldCollision:(*void)arg0 ;
-(struct RigidTransform<double, double> )_transformFromARCamera:(id)arg0 ;
-(void)arSessionWasInterrupted:(NSUInteger)arg0 ;
-(void)trasitionToARModeAtCoordinate:(struct ? )arg0 withDuration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)trasitionToARModeFromCameraFrame:(*void)arg0 withDuration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)updateWithARSession:(id)arg0 ;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif