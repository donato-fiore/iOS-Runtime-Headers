// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SERVERSPEECHDATAPROVIDERCONTEXT_H
#define SERVERSPEECHDATAPROVIDERCONTEXT_H


#import <Foundation/Foundation.h>

#import "ServerSpeechContext.h"

@interface ServerSpeechDataProviderContext : NSObject

@property (nonatomic) int audioByteCount; // ivar: _audioByteCount
@property (nonatomic) *AudioQueueBuffer currentBuffer; // ivar: _currentBuffer
@property (nonatomic) *__TTSPlayback playback; // ivar: _playback
@property (retain, nonatomic) ServerSpeechContext *speechContext; // ivar: _speechContext




@end


#endif