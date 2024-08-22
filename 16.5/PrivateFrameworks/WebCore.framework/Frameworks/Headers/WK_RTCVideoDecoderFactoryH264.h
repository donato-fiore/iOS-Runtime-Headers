// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCVIDEODECODERFACTORYH264_H
#define WK_RTCVIDEODECODERFACTORYH264_H

@class NSString;
@protocol RTCVideoDecoderFactory;

#import <Foundation/Foundation.h>


@interface WK_RTCVideoDecoderFactoryH264 : NSObject <RTCVideoDecoderFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createDecoder:(id)arg0 ;
-(id)supportedCodecs;


@end


#endif