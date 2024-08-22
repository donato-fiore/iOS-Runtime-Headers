// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCAMERA_H
#define VKCAMERA_H


#import <Foundation/Foundation.h>

#import "VKViewVolume.h"
#import "VKFootprint.h"
#import "VKCameraRegionRestriction.h"

@interface VKCamera : NSObject {
    *RunLoopController _runLoopController;
    ? _frustum;
    CGFloat _maxFarClipDistance;
    BOOL _needsUpdate;
    BOOL _updating;
    VKViewVolume *_viewVolume;
    VKFootprint *_footprint;
    CGFloat _tanHalfHorizFOV;
    CGFloat _tanHalfVerticalFOV;
    Matrix<double, 3, 1> _forward;
    Matrix<double, 3, 1> _right;
    Matrix<double, 3, 1> _up;
    Unit<geo::RadianUnitDescription, double> _verticalFieldOfView;
    CGFloat _near;
    CGFloat _far;
    CGFloat _width;
    CGFloat _height;
    RigidTransform<double, double> _transform;
    Matrix<double, 4, 4> _scaledViewMatrix;
    Matrix<double, 4, 4> _scaledProjectionMatrix;
    Matrix<double, 4, 4> _scaledViewProjectionMatrix;
    Matrix<double, 4, 4> _unscaledViewMatrix;
    Matrix<double, 4, 4> _unscaledProjectionMatrix;
    Matrix<double, 4, 4> _worldMatrix;
}


@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property ? cameraState;
@property (nonatomic) CGFloat canonicalPitch; // ivar: _canonicalPitch
@property (readonly, nonatomic) CGFloat distanceToGroundAndFarClipPlaneIntersection; // ivar: _distanceToGroundAndFarClipPlaneIntersection
@property (readonly, nonatomic) CGFloat farClipDistance;
@property (readonly, nonatomic) VKFootprint *footprint;
@property ? forwardVector;
@property (nonatomic) CGFloat fractionOfScreenAboveFarClipPlaneAtCanonicalPitch; // ivar: _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch
@property (readonly, nonatomic) ? frustum;
@property ? groundPoint;
@property ? horizontalFieldOfView;
@property (nonatomic) CGFloat horizontalOffset; // ivar: _horizontalOffset
@property (nonatomic) optional<double> maxDistanceToGroundRestriction; // ivar: _maxDistanceToGroundRestriction
@property (nonatomic) CGFloat maxHeight; // ivar: _maxHeight
@property (nonatomic) CGFloat maxHeightNoPitch; // ivar: _maxHeightNoPitch
@property (nonatomic) CGFloat maxPitch; // ivar: _maxPitch
@property (nonatomic) optional<double> minDistanceToGroundRestriction; // ivar: _minDistanceToGroundRestriction
@property (nonatomic) CGFloat minHeight; // ivar: _minHeight
@property (nonatomic) CGFloat ndcZNear; // ivar: _ndcZNear
@property (readonly, nonatomic) CGFloat nearClipDistance;
@property (nonatomic) *void orientation;
@property (readonly, nonatomic) CGFloat pitch;
@property (nonatomic) *void position;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // ivar: _regionRestriction
@property ? rightVector;
@property (readonly, nonatomic) *void scaledProjectionMatrix;
@property (readonly, nonatomic) *void scaledViewMatrix;
@property (readonly, nonatomic) *void scaledViewProjectionMatrix;
@property (readonly, nonatomic) CGFloat screenHeightOfGroundAndFarClipPlaneIntersection; // ivar: _screenHeightOfGroundAndFarClipPlaneIntersection
@property (readonly, nonatomic) CGFloat tanHalfHorizFOV;
@property (readonly, nonatomic) CGFloat tanHalfVerticalFOV;
@property (nonatomic) CGFloat terrainHeight; // ivar: _terrainHeight
@property (readonly, nonatomic) *void unscaledProjectionMatrix;
@property (readonly, nonatomic) *void unscaledViewMatrix;
@property ? upVector;
@property ? verticalFieldOfView;
@property (readonly, nonatomic) VKViewVolume *viewVolume;
@property (readonly, nonatomic) CGFloat yaw;


-(CGFloat)depthForViewWidth:(CGFloat)arg0 ;
-(CGFloat)widthOfViewAtDepth:(CGFloat)arg0 ;
-(float)zoomAtPoint:(struct CGPoint )arg0 ;
-(id)initWithRunLoopController:(struct RunLoopController *)arg0 ;
-(struct CGPoint )screenPointFromGroundPoint:(*void)arg0 ;
-(struct View<double> )view:(struct ViewSize )arg0 ;
-(struct optional<gm::Matrix<double, 3, 1>> )groundPointFromScreenPoint:(struct CGPoint )arg0 ;
-(struct optional<gm::Matrix<double, 3, 1>> )groundPointFromScreenPoint:(struct CGPoint )arg0 atGroundLevel:(CGFloat)arg1 ;
-(void)updateCamera:(struct shared_ptr<gdc::Camera> )arg0 ;


@end


#endif