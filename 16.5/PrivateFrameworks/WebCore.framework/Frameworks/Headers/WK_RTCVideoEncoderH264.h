// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCVIDEOENCODERH264_H
#define WK_RTCVIDEOENCODERH264_H

@class NSString;
@protocol RTCVideoEncoder;

#import <Foundation/Foundation.h>

#import "WK_RTCVideoCodecInfo.h"

@interface WK_RTCVideoEncoderH264 : NSObject <RTCVideoEncoder>

 {
    WK_RTCVideoCodecInfo *_codecInfo;
    unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    unsigned int _encoderFrameRate;
    unsigned int _maxAllowedFrameRate;
    NSUInteger _packetizationMode;
    optional<webrtc::H264ProfileLevelId> _profile_level_id;
    id *_callback;
    int _width;
    int _height;
    BOOL _useVCP;
    BOOL _useBaseline;
    *OpaqueVTCompressionSession _vtCompressionSession;
    *void _vcpCompressionSession;
    NSUInteger _mode;
    H264BitstreamParser _h264BitstreamParser;
    vector<unsigned char, std::allocator<unsigned char>> _frameScaleBuffer;
    BOOL _disableEncoding;
    BOOL _isKeyFrameRequired;
    BOOL _isH264LowLatencyEncoderEnabled;
    BOOL _isUsingSoftwareEncoder;
    BOOL _isBelowExpectedFrameRate;
    unsigned int _frameCount;
    NSInteger _lastFrameRateEstimationTime;
    BOOL _useAnnexB;
    BOOL _needsToSendDescription;
    id *_descriptionCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasCompressionSession;
-(BOOL)resetCompressionSessionIfNeededWithFrame:(id)arg0 ;
-(NSInteger)encode:(id)arg0 codecSpecificInfo:(id)arg1 frameTypes:(id)arg2 ;
-(NSInteger)releaseEncoder;
-(NSInteger)startEncodeWithSettings:(id)arg0 numberOfCores:(int)arg1 ;
-(id)implementationName;
-(id)initWithCodecInfo:(id)arg0 ;
-(id)scalingSettings;
-(int)resetCompressionSessionWithPixelFormat:(unsigned int)arg0 ;
-(int)setBitrate:(unsigned int)arg0 framerate:(unsigned int)arg1 ;
-(unsigned int)pixelFormatOfFrame:(id)arg0 ;
-(void)configureCompressionSession;
-(void)dealloc;
-(void)destroyCompressionSession;
-(void)flush;
-(void)frameWasEncoded:(int)arg0 flags:(unsigned int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 codecSpecificInfo:(id)arg3 width:(int)arg4 height:(int)arg5 renderTimeMs:(NSInteger)arg6 timestamp:(unsigned int)arg7 rotation:(NSInteger)arg8 isKeyFrameRequired:(BOOL)arg9 ;
-(void)setBitrateBps:(unsigned int)arg0 frameRate:(unsigned int)arg1 ;
-(void)setCallback:(id)arg0 ;
-(void)setEncoderBitrateBps:(unsigned int)arg0 frameRate:(unsigned int)arg1 ;
-(void)setH264LowLatencyEncoderEnabled:(BOOL)arg0 ;
-(void)setUseAnnexB:(BOOL)arg0 ;
-(void)updateBitRateAccordingActualFrameRate;


@end


#endif