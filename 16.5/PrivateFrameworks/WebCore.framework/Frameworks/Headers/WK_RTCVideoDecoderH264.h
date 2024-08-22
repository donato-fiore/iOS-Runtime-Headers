// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCVIDEODECODERH264_H
#define WK_RTCVIDEODECODERH264_H

@class NSString;
@protocol RTCVideoDecoder;

#import <Foundation/Foundation.h>


@interface WK_RTCVideoDecoderH264 : NSObject <RTCVideoDecoder>

 {
    *opaqueCMFormatDescription _videoFormat;
    *OpaqueCMMemoryPool _memoryPool;
    *OpaqueVTDecompressionSession _decompressionSession;
    id *_callback;
    int _error;
    BOOL _useAVC;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)decode:(id)arg0 missingFrames:(BOOL)arg1 codecSpecificInfo:(id)arg2 renderTimeMs:(NSInteger)arg3 ;
-(NSInteger)decodeData:(char *)arg0 size:(NSUInteger)arg1 timeStamp:(NSInteger)arg2 ;
-(NSInteger)releaseDecoder;
-(NSInteger)setAVCFormat:(char *)arg0 size:(NSUInteger)arg1 width:(unsigned short)arg2 height:(unsigned short)arg3 ;
-(NSInteger)startDecodeWithNumberOfCores:(int)arg0 ;
-(id)implementationName;
-(id)init;
-(int)resetDecompressionSession;
-(void)configureDecompressionSession;
-(void)dealloc;
-(void)destroyDecompressionSession;
-(void)flush;
-(void)setCallback:(id)arg0 ;
-(void)setError:(int)arg0 ;
-(void)setVideoFormat:(struct opaqueCMFormatDescription *)arg0 ;


@end


#endif