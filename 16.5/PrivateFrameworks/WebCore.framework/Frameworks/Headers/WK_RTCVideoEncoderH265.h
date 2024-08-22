// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCVIDEOENCODERH265_H
#define WK_RTCVIDEOENCODERH265_H

@class NSString;
@protocol RTCVideoEncoder;

#import <Foundation/Foundation.h>

#import "WK_RTCVideoCodecInfo.h"

@interface WK_RTCVideoEncoderH265 : NSObject <RTCVideoEncoder>

 {
    WK_RTCVideoCodecInfo *_codecInfo;
    unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    *__CFString _profile;
    id *_callback;
    int _width;
    int _height;
    *OpaqueVTCompressionSession _compressionSession;
    NSUInteger _mode;
    int framesLeft;
    vector<unsigned char, std::allocator<unsigned char>> _nv12ScaleBuffer;
    BOOL _useAnnexB;
    BOOL _needsToSendDescription;
    id *_descriptionCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)encode:(id)arg0 codecSpecificInfo:(id)arg1 frameTypes:(id)arg2 ;
-(NSInteger)releaseEncoder;
-(NSInteger)startEncodeWithSettings:(id)arg0 numberOfCores:(int)arg1 ;
-(id)implementationName;
-(id)initWithCodecInfo:(id)arg0 ;
-(id)scalingSettings;
-(int)resetCompressionSession;
-(int)setBitrate:(unsigned int)arg0 framerate:(unsigned int)arg1 ;
-(void)configureCompressionSession;
-(void)dealloc;
-(void)destroyCompressionSession;
-(void)flush;
-(void)frameWasEncoded:(int)arg0 flags:(unsigned int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 width:(int)arg3 height:(int)arg4 renderTimeMs:(NSInteger)arg5 timestamp:(unsigned int)arg6 rotation:(NSInteger)arg7 ;
-(void)setBitrateBps:(unsigned int)arg0 ;
-(void)setCallback:(id)arg0 ;
-(void)setEncoderBitrateBps:(unsigned int)arg0 ;
-(void)setUseAnnexB:(BOOL)arg0 ;


@end


#endif