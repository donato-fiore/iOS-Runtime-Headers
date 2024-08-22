// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCWRAPPEDNATIVEVIDEODECODER_H
#define WK_RTCWRAPPEDNATIVEVIDEODECODER_H

@class NSString;
@protocol RTCVideoDecoder;

#import <Foundation/Foundation.h>


@interface WK_RTCWrappedNativeVideoDecoder : NSObject <RTCVideoDecoder>

 {
    unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> _wrappedDecoder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)decode:(id)arg0 missingFrames:(BOOL)arg1 codecSpecificInfo:(id)arg2 renderTimeMs:(NSInteger)arg3 ;
-(NSInteger)releaseDecoder;
-(NSInteger)startDecodeWithNumberOfCores:(int)arg0 ;
-(id)implementationName;
-(id)initWithNativeDecoder:(struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> )arg0 ;
-(struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> )releaseWrappedDecoder;
-(void)setCallback:(id)arg0 ;


@end


#endif