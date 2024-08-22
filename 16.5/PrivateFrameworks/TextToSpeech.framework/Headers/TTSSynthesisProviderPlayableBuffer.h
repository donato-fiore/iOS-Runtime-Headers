// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSYNTHESISPROVIDERPLAYABLEBUFFER_H
#define TTSSYNTHESISPROVIDERPLAYABLEBUFFER_H

@class AVAudioPCMBuffer;

#import <Foundation/Foundation.h>


@interface TTSSynthesisProviderPlayableBuffer : NSObject

@property (retain, nonatomic) AVAudioPCMBuffer *buffer; // ivar: _buffer
@property (readonly, nonatomic) unsigned int endFrameOffset;
@property (nonatomic) unsigned int startFrameOffset; // ivar: _startFrameOffset




@end


#endif