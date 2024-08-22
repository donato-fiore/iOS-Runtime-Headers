// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCWRAPPEDENCODEDIMAGEBUFFER_H
#define WK_RTCWRAPPEDENCODEDIMAGEBUFFER_H


#import <Foundation/Foundation.h>


@interface WK_RTCWrappedEncodedImageBuffer : NSObject

@property (nonatomic) scoped_refptr<webrtc::EncodedImageBufferInterface> buffer; // ivar: _buffer


-(id)initWithEncodedImageBuffer:(struct scoped_refptr<webrtc::EncodedImageBufferInterface> )arg0 ;


@end


#endif