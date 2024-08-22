// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VLLOCALIZER_H
#define VLLOCALIZER_H

@class NSMutableArray, NSString;
@protocol VLLocalizationDataProviderDelegate, VLLocalizationDataProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_VLLocalizerAltitudeQuery.h"

@interface VLLocalizer : NSObject <VLLocalizationDataProviderDelegate>

 {
    GEOOnce_s _vlOnce;
    ? _vl;
    id<VLLocalizationDataProvider> *_dataProvider;
    id<VLLocalizationDataProvider> *_backupDataProvider;
    NSUInteger _signpostID;
    int _algorithmVersion;
    NSObject<OS_dispatch_queue> *_recorderQueue;
    NSObject<OS_dispatch_queue> *_altitudeCalculationQueue;
    NSMutableArray *_pendingAltitudeQueries;
    _VLLocalizerAltitudeQuery *_currentAltitudeQuery;
}


@property (nonatomic, getter=_algorithmVersion, setter=_setAlgorithmVersion:) int algorithmVersion; // ivar: _debug_algorithmVersion
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_debugInfoShouldPreserveImageData, setter=_setDebugInfoShouldPreserveImageData:) BOOL debugInfoShouldPreserveImageData; // ivar: _debugInfoShouldPreserveImageData
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldCacheMetadata;
@property (readonly) Class superclass;


+(BOOL)isVisualLocalizationSupported;
+(CGFloat)maximumHorizontalAccuracyThreshold;
+(CGFloat)minimumTiltAngle;
+(id)_debugInfoRecorder:(SEL)arg0 ;
+(void)_setDebugInfoRecorder:(id)arg0 ;
-(id)_altitudesAtLocation:(struct ? )arg0 error:(*id)arg1 ;
-(id)_fileURLForTile:(struct ? *)arg0 error:(*id)arg1 ;
// -(id)_locateWithPixelBuffer:(struct __CVBuffer *)arg0 deviceLocation:(id)arg1 heading:(struct ? )arg2 gravity:(struct ? )arg3 transform:(struct ? )arg4 cameraIntrinsics:(CGFloat)arg5 radialDistortion:(CGFloat)arg6 exposureTargetOffset:(id)arg7 timestamp:(unk)arg8 calculationBlock:(*id)arg9 error ;
-(id)init;
-(id)initWithAuditToken:(id)arg0 ;
-(id)initWithDataProvider:(id)arg0 ;
-(id)locateWithPixelBuffer:(struct __CVBuffer *)arg0 deviceLocation:(id)arg1 heading:(struct ? )arg2 gravity:(struct ? )arg3 transform:(struct ? )arg4 cameraIntrinsics:(CGFloat)arg5 radialDistortion:(CGFloat)arg6 ambientLightIntensity:(*id)arg7 timestamperror;
-(id)locateWithPixelBuffer:(struct __CVBuffer *)arg0 deviceLocation:(id)arg1 heading:(struct ? )arg2 gravity:(struct ? )arg3 transform:(struct ? )arg4 cameraIntrinsics:(CGFloat)arg5 radialDistortion:(CGFloat)arg6 exposureTargetOffset:(*id)arg7 timestamperror;
-(id)locateWithPixelBuffer:(struct __CVBuffer *)arg0 location:(struct ? )arg1 heading:(struct ? )arg2 gravity:(struct ? )arg3 transform:(struct ? )arg4 cameraIntrinsics:(CGFloat)arg5 radialDistortion:(*id)arg6 timestamperror;
-(id)locateWithPixelBuffer:(struct __CVBuffer *)arg0 timestamp:(NSUInteger)arg1 location:(struct ? )arg2 gravity:(struct ? )arg3 transform:(struct ? )arg4 cameraIntrinsics:(*id)arg5 radialDistortionerror;
-(id)locateWithPixelBuffer:(struct __CVBuffer *)arg0 timestamp:(NSUInteger)arg1 location:(struct ? )arg2 heading:(struct ? )arg3 gravity:(struct ? )arg4 transform:(struct ? )arg5 cameraIntrinsics:(*id)arg6 radialDistortionerror;
-(struct vl_t *)_vlHandle;
-(void)_commonInit;
// -(void)_deterministicLocateWithPixelBuffer:(struct __CVBuffer *)arg0 deviceLocation:(id)arg1 heading:(struct ? )arg2 gravity:(struct ? )arg3 transform:(struct ? )arg4 cameraIntrinsics:(CGFloat)arg5 radialDistortion:(CGFloat)arg6 exposureTargetOffset:(id)arg7 timestamp:(unk)arg8 completionHandler ;
-(void)_resolveCurrentAltitudeQuery;
-(void)dataProvider:(id)arg0 didChangeFormatVersion:(unsigned int)arg1 ;
-(void)dealloc;
-(void)determineAltitudesAtLocation:(id)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;
-(void)determineAvailabilityAtLocation:(struct ? )arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;
-(void)determineAvailabilityAtLocation:(struct ? )arg0 purpose:(NSInteger)arg1 callbackQueue:(id)arg2 callback:(id)arg3 ;
-(void)prepareWithDeviceLocation:(id)arg0 ;
-(void)prepareWithLocation:(struct ? )arg0 ;


@end


#endif