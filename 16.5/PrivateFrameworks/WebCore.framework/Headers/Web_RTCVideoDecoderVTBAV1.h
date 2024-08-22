// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEB_RTCVIDEODECODERVTBAV1_H
#define WEB_RTCVIDEODECODERVTBAV1_H


#import <Foundation/Foundation.h>


@interface Web_RTCVideoDecoderVTBAV1 : NSObject {
    RetainPtr<const opaqueCMFormatDescription *> _videoFormat;
    RetainPtr<OpaqueVTDecompressionSession *> _decompressionSession;
    BlockPtr<void (__CVBuffer *, long long, long long)> _callback;
    int _error;
    int _width;
    int _height;
    BOOL _shouldCheckFormat;
}




-(NSInteger)decodeData:(char *)arg0 size:(NSUInteger)arg1 timeStamp:(NSInteger)arg2 ;
-(NSInteger)releaseDecoder;
-(id)init;
-(int)resetDecompressionSession;
-(void)configureDecompressionSession;
-(void)dealloc;
-(void)destroyDecompressionSession;
-(void)flush;
-(void)setCallback:(id)arg0 ;
-(void)setError:(int)arg0 ;
-(void)setWidth:(unsigned short)arg0 height:(unsigned short)arg1 ;


@end


#endif