// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKAVCAPTUREFRAMEPROVIDER_H
#define VKAVCAPTUREFRAMEPROVIDER_H

@class NSString;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, VKAVCapturePreviewViewDelegate, AVCapturePhotoCaptureDelegate, VKAVCaptureDelegate, VKZoomable, OS_dispatch_queue;


#import "VKFrameProvider.h"
#import "VKAVCapturePreviewView.h"
#import "VKAVCapture.h"

@interface VKAVCaptureFrameProvider : VKFrameProvider <AVCaptureVideoDataOutputSampleBufferDelegate, VKAVCapturePreviewViewDelegate, AVCapturePhotoCaptureDelegate, VKAVCaptureDelegate, VKZoomable>

 {
    VKAVCapturePreviewView *_avCapturePreviewView;
    VKAVCapture *_avCapture;
    NSObject<OS_dispatch_queue> *_sampleBufferQueue;
    BOOL _startWhenReady;
    CGRect _visionRegionOfInterest;
    CGAffineTransform _visionToCroppedImageTransform;
    CGAffineTransform _visionToLayerTransform;
    BOOL _respondsToDidCapturePhoto;
    BOOL _respondsToDidZoom;
    BOOL _respondsToIsRunning;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasTorch;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint interestPoint;
@property (readonly, nonatomic) CGFloat maxZoomFactor; // ivar: _maxZoomFactor
@property (readonly, nonatomic) CGFloat minZoomFactor; // ivar: _minZoomFactor
@property (readonly) Class superclass;
@property (nonatomic, getter=isTorchOn) BOOL torchOn; // ivar: _torchOn
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor


-(BOOL)isRunning;
-(id)initWithConfiguration:(id)arg0 ;
-(id)previewView;
-(void)avCapture:(id)arg0 cameraAccessGranted:(BOOL)arg1 ;
-(void)captureOutput:(id)arg0 didFinishProcessingPhoto:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)capturePhoto;
-(void)dealloc;
-(void)didChangeBoundsForPreviewView:(id)arg0 ;
-(void)didChangeInterfaceOrientationForPreviewView:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepare;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setRegionOfInterest:(struct CGRect )arg0 ;
-(void)startRunning;
-(void)stopRunning;


@end


#endif