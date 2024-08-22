// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKDAVINCIANNOTATIONTRACKINGCAMERACONTROLLER_H
#define VKDAVINCIANNOTATIONTRACKINGCAMERACONTROLLER_H



#import "VKAnnotationTrackingCameraController.h"

@interface VKDaVinciAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    float _currentAnimationCompletedFraction;
    BOOL _zooming;
    ? _currentAnimationPresentationStartCoordinate;
    ? _currentAnimationPresentationEndCoordinate;
}




-(CGFloat)_minTrackingCameraDistance:(BOOL)arg0 ;
-(CGFloat)_zoomLevelForDistance:(struct Unit<geo::MeterUnitDescription, double> )arg0 ;
-(struct Coordinate3D<geo::Radians, double> )_centerCoordinate:(struct Coordinate3D<geo::Radians, double> )arg0 forEdgeInsets:(struct VKEdgeInsets )arg1 ;
-(struct VKEdgeInsets )_effectiveEdgeInsets;
-(struct VKEdgeInsets )_scaledEdgeInsets:(struct VKEdgeInsets )arg0 withCanvasSize:(struct CGSize )arg1 ;
// -(void)_goToAnnotationAnimated:(BOOL)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 isInitial:(unk)arg3  ;
-(void)_rotateToHeadingAnimated:(BOOL)arg0 duration:(CGFloat)arg1 ;
-(void)setEdgeInsets:(struct VKEdgeInsets )arg0 ;
-(void)updateFramerate;


@end


#endif