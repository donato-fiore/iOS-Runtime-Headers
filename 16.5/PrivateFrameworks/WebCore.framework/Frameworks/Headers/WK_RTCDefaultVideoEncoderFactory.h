// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WK_RTCDEFAULTVIDEOENCODERFACTORY_H
#define WK_RTCDEFAULTVIDEOENCODERFACTORY_H

@class NSString;
@protocol RTCVideoEncoderFactory;

#import <Foundation/Foundation.h>


@interface WK_RTCDefaultVideoEncoderFactory : NSObject <RTCVideoEncoderFactory>

 {
    BOOL _supportsH265;
    BOOL _supportsVP9Profile0;
    BOOL _supportsVP9Profile2;
    BOOL _useLowLatencyH264;
    BOOL _supportsAv1;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedCodecs;
+(id)supportedCodecsWithH265:(BOOL)arg0 vp9Profile0:(BOOL)arg1 vp9Profile2:(BOOL)arg2 av1:(BOOL)arg3 ;
-(id)createEncoder:(id)arg0 ;
-(id)initWithH265:(BOOL)arg0 vp9Profile0:(BOOL)arg1 vp9Profile2:(BOOL)arg2 lowLatencyH264:(BOOL)arg3 av1:(BOOL)arg4 ;
-(id)supportedCodecs;


@end


#endif