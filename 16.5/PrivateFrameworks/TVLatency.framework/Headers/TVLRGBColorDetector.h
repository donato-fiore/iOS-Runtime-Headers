// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVLRGBCOLORDETECTOR_H
#define TVLRGBCOLORDETECTOR_H

@class NSOperationQueue, NSMutableArray, NSString, CMMotionManager, AVCaptureSession;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, TVLRGBColorDetectorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TVLRGBColorDetector : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>



@property (retain, nonatomic) NSOperationQueue *accelerometerQueue; // ivar: _accelerometerQueue
@property (nonatomic) int backlightNotificationToken; // ivar: _backlightNotificationToken
@property (nonatomic) BOOL backlightState; // ivar: _backlightState
@property (retain, nonatomic) NSMutableArray *brightnessComponents; // ivar: _brightnessComponents
@property (nonatomic) CGFloat brightnessErrorMarginPercent; // ivar: _brightnessErrorMarginPercent
@property (nonatomic) CGFloat brightnessThreshhold; // ivar: _brightnessThreshhold
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVLRGBColorDetectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *hueComponents; // ivar: _hueComponents
@property (nonatomic) CGFloat hueErrorMarginPercent; // ivar: _hueErrorMarginPercent
@property (nonatomic) CGFloat hueThreshhold; // ivar: _hueThreshhold
@property (nonatomic) BOOL ignoreBacklightProximityState; // ivar: _ignoreBacklightProximityState
@property (nonatomic) CGFloat maximumMotion; // ivar: _maximumMotion
@property (retain, nonatomic) CMMotionManager *motionManager; // ivar: _motionManager
@property (nonatomic) NSUInteger noMotionDuration; // ivar: _noMotionDuration
@property (nonatomic) CGFloat pitchMargin; // ivar: _pitchMargin
@property (nonatomic) int proximityNotificationToken; // ivar: _proximityNotificationToken
@property (nonatomic) BOOL proximityState; // ivar: _proximityState
@property (nonatomic) NSUInteger rollingAverageForFrames; // ivar: _rollingAverageForFrames
@property (retain, nonatomic) NSMutableArray *saturationComponents; // ivar: _saturationComponents
@property (nonatomic) CGFloat saturationErrorMarginPercent; // ivar: _saturationErrorMarginPercent
@property (nonatomic) CGFloat saturationThreshhold; // ivar: _saturationThreshhold
@property (retain, nonatomic) AVCaptureSession *session; // ivar: _session
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionBufferQueue; // ivar: _sessionBufferQueue
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMotionDetection; // ivar: _useMotionDetection
@property (nonatomic) CGFloat yawMargin; // ivar: _yawMargin


-(CGFloat)_pctChange:(CGFloat)arg0 new:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(id)_averageColorForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithThresholdsForHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 ;
-(void)_prepareForDetection;
-(void)_resetRollingAverage;
-(void)_setupCaptureSession;
-(void)_startDetection;
-(void)_stopDetection;
-(void)beginDetection;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureSessionRuntimeErrorDidOccur:(id)arg0 ;
-(void)dealloc;
-(void)endDetection;


@end


#endif