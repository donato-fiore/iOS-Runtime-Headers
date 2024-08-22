// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCAPTUREVIDEOPREVIEWVIEWCONTROLLER_H
#define VKCAPTUREVIDEOPREVIEWVIEWCONTROLLER_H

@class UIViewController, BKSAccelerometer, AVCaptureDevice, AVCaptureSession, AVCaptureConnection, NSString, NSDictionary;
@protocol BKSAccelerometerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;


#import "VKCaptureVideoPreviewView.h"

@interface VKCaptureVideoPreviewViewController : UIViewController <BKSAccelerometerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>



@property (retain, nonatomic) BKSAccelerometer *accelerometer; // ivar: _accelerometer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *avCaptureQueue; // ivar: _avCaptureQueue
@property (retain, nonatomic) AVCaptureDevice *captureDevice; // ivar: _captureDevice
@property (retain, nonatomic) AVCaptureSession *captureSession; // ivar: _captureSession
@property (retain, nonatomic) AVCaptureConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize dimensions; // ivar: _dimensions
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) VKCaptureVideoPreviewView *previewView;
@property (readonly, nonatomic) CGRect regionOfInterest;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferQueue; // ivar: _sampleBufferQueue
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform; // ivar: _transform
@property (readonly, nonatomic) NSInteger videoOrientation;
@property (retain, nonatomic) NSDictionary *videoSettings; // ivar: _videoSettings
@property (nonatomic) BOOL viewDidAppear; // ivar: _viewDidAppear
@property (nonatomic) CGRect visionRegionOfInterest; // ivar: _visionRegionOfInterest
@property (readonly, nonatomic) BOOL wantsRegionOfInterest; // ivar: _wantsRegionOfInterest


-(BOOL)_canShowWhileLocked;
-(id)desiredDeviceTypes;
-(id)init;
-(struct CGPoint )layerPointFromVisionPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )visionPointFromLayerPoint:(struct CGPoint )arg0 ;
-(void)accelerometer:(id)arg0 didAccelerateWithTimeStamp:(CGFloat)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5 ;
-(void)accelerometer:(id)arg0 didChangeDeviceOrientation:(NSInteger)arg1 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)changeToZoomFactor:(CGFloat)arg0 ;
-(void)configureCamera;
-(void)dealloc;
-(void)didChangeRegionOfInterest:(struct CGRect )arg0 ;
-(void)loadView;
-(void)needsRegionOfInterestUpdate;
-(void)sessionRuntimeError:(id)arg0 ;
-(void)startSessionIfReady;
-(void)updateDimensionsAndTransform;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif