// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUVIDEODEVICECONTROLLER_H
#define TUVIDEODEVICECONTROLLER_H

@class NSArray, AVCaptureDevice, CALayer;
@protocol TUVideoDeviceControllerProviderDelegate, TUFeatureFlags, TUVideoDeviceControllerProvider><TUVideoEffectsProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUVideoEffect.h"

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate>



@property (readonly, copy, nonatomic) NSArray *availableVideoEffects;
@property (nonatomic) BOOL cameraBlurEnabled;
@property (readonly, nonatomic, getter=isCinematicFramingEnabled) BOOL cinematicFramingEnabled;
@property (nonatomic) int currentBackgroundBlurControlMode;
@property (retain, nonatomic) AVCaptureDevice *currentInputDevice;
@property (readonly, nonatomic) BOOL currentInputSupportsCinematicFraming;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (nonatomic) int currentVideoOrientation;
@property (readonly, nonatomic) NSObject<TUFeatureFlags> *featureFlags; // ivar: _featureFlags
@property (nonatomic, getter=isFollowSystemCameraEnabled) BOOL followSystemCameraEnabled;
@property (readonly, nonatomic) BOOL hasAvailableDeskViewCameras;
@property (nonatomic) BOOL hasRefreshedPreviewAfterError; // ivar: _hasRefreshedPreviewAfterError
@property (nonatomic, getter=shouldIgnoreStartPreview) BOOL ignoreStartPreview; // ivar: _ignoreStartPreview
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (retain, nonatomic) CALayer *localBackLayer;
@property (retain, nonatomic) CALayer *localFrontLayer;
@property (readonly, nonatomic) CGRect localScreenContentsRect;
@property (readonly, nonatomic) CGSize localScreenLandscapeAspectRatio;
@property (readonly, nonatomic) CGSize localScreenPortraitAspectRatio;
@property (readonly, nonatomic) CGSize localVideoLandscapeAspectRatio;
@property (readonly, nonatomic) CGSize localVideoPortraitAspectRatio;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly, nonatomic) NSObject<TUVideoDeviceControllerProvider><TUVideoEffectsProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) BOOL supportsCameraBlur;
@property (nonatomic) BOOL wantsPreview; // ivar: _wantsPreview


+(int)_tuOrientationForVideoOrientation:(int)arg0 ;
+(int)_videoOrientationForTUOrientation:(int)arg0 ;
+(void)prewarm;
-(id)debugDescription;
-(id)init;
-(id)initWithProvider:(id)arg0 serialQueue:(id)arg1 featureFlags:(id)arg2 ;
-(id)initWithSerialQueue:(id)arg0 ;
-(id)landscapeScreenAttributes;
-(id)portraitScreenAttributes;
-(void)captureDevicesChangedForProvider:(id)arg0 ;
-(void)didPausePreviewForProvider:(id)arg0 ;
-(void)didStartPreviewForProvider:(id)arg0 ;
-(void)didStopPreviewForProvider:(id)arg0 ;
-(void)flipCamera;
-(void)getSnapshot;
-(void)noteBeginAnimationToPIP;
-(void)noteBeginAnimationToPreview;
-(void)noteEndAnimationToPIP;
-(void)noteEndAnimationToPreview;
-(void)pausePreview;
-(void)provider:(id)arg0 cameraBlurEnabledDidChange:(BOOL)arg1 ;
-(void)provider:(id)arg0 cameraCinematicFramingAvailabilityDidChange:(BOOL)arg1 ;
-(void)provider:(id)arg0 cameraCinematicFramingEnabledDidChange:(BOOL)arg1 ;
-(void)provider:(id)arg0 cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)provider:(id)arg0 cameraZoomAvailabilityDidChange:(BOOL)arg1 ;
-(void)provider:(id)arg0 didChangeLocalCameraUID:(id)arg1 ;
-(void)provider:(id)arg0 didChangeLocalVideoAttributes:(id)arg1 ;
-(void)provider:(id)arg0 didGetSnapshot:(id)arg1 ;
-(void)provider:(id)arg0 didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)provider:(id)arg0 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)provider:(id)arg0 userPreferredCameraUIDDidChange:(id)arg1 ;
-(void)rampCameraZoomFactor:(CGFloat)arg0 withRate:(CGFloat)arg1 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 ;
-(void)setLocalPortraitAspectRatio:(struct CGSize )arg0 localLandscapeAspectRatio:(struct CGSize )arg1 ;
-(void)startPreview;
-(void)stopPreview;


@end


#endif