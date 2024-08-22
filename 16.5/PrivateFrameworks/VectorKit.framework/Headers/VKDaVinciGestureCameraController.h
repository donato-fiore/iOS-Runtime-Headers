// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKDAVINCIGESTURECAMERACONTROLLER_H
#define VKDAVINCIGESTURECAMERACONTROLLER_H



#import "VKGestureCameraBehavior.h"

@interface VKDaVinciGestureCameraController : VKGestureCameraBehavior {
    *void _cameraManager;
    CGFloat _beganDoublePanPitch;
    CGFloat _currentDoublePanPitch;
    BOOL _isPitchIncreasing;
}




-(BOOL)isPitchIncreasing;
-(id)initWithCameraController:(id)arg0 cameraManager:(*void)arg1 ;
-(void)beginPan:(struct CGPoint )arg0 ;
-(void)beginPitch:(struct CGPoint )arg0 ;
-(void)beginRotate:(struct CGPoint )arg0 ;
-(void)beginZoom:(struct CGPoint )arg0 ;
-(void)endPan:(struct CGPoint )arg0 ;
-(void)endPitch:(struct CGPoint )arg0 ;
-(void)endRotate:(struct CGPoint )arg0 ;
-(void)endZoom:(struct CGPoint )arg0 ;
-(void)updatePan:(struct CGPoint )arg0 lastScreenPoint:(struct CGPoint )arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitch:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updateRotate:(CGFloat)arg0 atScreenPoint:(struct CGPoint )arg1 ;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)updateZoom:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;


@end


#endif