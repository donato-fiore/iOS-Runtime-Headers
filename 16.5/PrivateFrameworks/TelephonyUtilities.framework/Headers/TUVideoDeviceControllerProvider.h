// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUVIDEODEVICECONTROLLERPROVIDER_H
#define TUVIDEODEVICECONTROLLERPROVIDER_H

@class NSArray, NSString, VideoAttributes, AVConferencePreview;
@protocol AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider, TUVideoDeviceControllerProviderDelegate;

#import <Foundation/Foundation.h>

#import "TUVideoEffect.h"

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider>

 {
    BOOL _isAVCaptureDeviceReady;
}


@property (readonly, nonatomic) NSArray *availableVideoEffects;
@property (nonatomic, getter=isCameraBlurEnabled) BOOL cameraBlurEnabled;
@property (nonatomic, getter=isCinematicFramingEnabled) BOOL cinematicFramingEnabled;
@property (nonatomic) NSInteger currentBackgroundBlurControlMode;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect; // ivar: _currentVideoEffect
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUVideoDeviceControllerProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAvailableDeskViewCameras;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (readonly, copy, nonatomic) NSString *localCameraUID;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (readonly, nonatomic) AVConferencePreview *preview; // ivar: _preview
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly) Class superclass;


+(void)prewarm;
-(BOOL)supportsCameraBlurForDevice:(id)arg0 ;
-(id)init;
-(id)localScreenAttributesForVideoAttributes:(id)arg0 ;
-(id)localVideoLayer:(BOOL)arg0 ;
-(id)thumbnailImageForVideoEffectName:(id)arg0 ;
-(void)beginPIPToPreviewAnimation;
-(void)beginPreviewToPIPAnimation;
-(void)cameraCinematicFramingAvailabilityDidChange:(BOOL)arg0 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg0 ;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg0 ;
-(void)captureDevicesChanged:(id)arg0 ;
-(void)dealloc;
-(void)didChangeLocalCameraUID:(id)arg0 ;
-(void)didChangeLocalVideoAttributes:(id)arg0 ;
-(void)didGetSnapshot:(id)arg0 ;
-(void)didPausePreview;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg0 error:(id)arg1 ;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg0 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)endPIPToPreviewAnimation;
-(void)endPreviewToPIPAnimation;
-(void)getSnapshot;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pausePreview;
-(void)queryAVCaptureDeviceIfNeeded;
-(void)rampCameraZoomFactor:(CGFloat)arg0 withRate:(CGFloat)arg1 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 ;
-(void)setLocalCameraWithUID:(id)arg0 ;
-(void)setLocalScreenAttributes:(id)arg0 ;
-(void)setLocalVideoLayer:(id)arg0 front:(BOOL)arg1 ;
-(void)startPreview;
-(void)stopPreview;


@end


#endif