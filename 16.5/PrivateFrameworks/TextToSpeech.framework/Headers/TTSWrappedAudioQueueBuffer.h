// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSWRAPPEDAUDIOQUEUEBUFFER_H
#define TTSWRAPPEDAUDIOQUEUEBUFFER_H


#import <Foundation/Foundation.h>


@interface TTSWrappedAudioQueueBuffer : NSObject

@property (nonatomic) *AudioQueueBuffer aqBuffer; // ivar: _aqBuffer
@property (nonatomic) CGFloat bufferDuration; // ivar: _bufferDuration
@property (readonly, nonatomic) NSUInteger byteSize;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler




@end


#endif