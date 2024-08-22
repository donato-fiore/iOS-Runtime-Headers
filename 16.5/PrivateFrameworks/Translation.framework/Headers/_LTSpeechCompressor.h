// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTSPEECHCOMPRESSOR_H
#define _LTSPEECHCOMPRESSOR_H

@class NSMutableData;
@protocol _LTSpeechCompressorDelegate;

#import <Foundation/Foundation.h>


@interface _LTSpeechCompressor : NSObject {
    id<_LTSpeechCompressorDelegate> *_delegate;
    *OpaqueAudioConverter _audioConverter;
    NSMutableData *_bufferedAudio;
    NSUInteger _packetIndex;
    NSUInteger _bytesConsumed;
}




-(id)initWithDelegate:(id)arg0 ;
-(void)addAudioSampleData:(id)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)startCompressionNarrowband:(BOOL)arg0 ;


@end


#endif