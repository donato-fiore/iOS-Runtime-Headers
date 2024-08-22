// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCVIDEOENCODERFACTORYH264_H
#define WK_RTCVIDEOENCODERFACTORYH264_H

@class NSString;
@protocol RTCVideoEncoderFactory;

#import <Foundation/Foundation.h>


@interface WK_RTCVideoEncoderFactoryH264 : NSObject <RTCVideoEncoderFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createEncoder:(id)arg0 ;
-(id)supportedCodecs;


@end


#endif