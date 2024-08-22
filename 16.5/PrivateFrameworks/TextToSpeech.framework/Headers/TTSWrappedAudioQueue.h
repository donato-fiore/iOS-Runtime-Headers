// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSWRAPPEDAUDIOQUEUE_H
#define TTSWRAPPEDAUDIOQUEUE_H

@class AVAudioSession, NSMutableDictionary, NSCondition, AVAudioConverter, NSArray, AVAudioFormat;
@protocol TTSSynthesisProviderAudioOutput, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TTSWrappedAudioQueue : NSObject <TTSSynthesisProviderAudioOutput>

 {
    os_unfair_lock_s _bufferLock;
    os_unfair_lock_s _audioQueueLock;
}


@property (nonatomic) *OpaqueAudioQueue aqRef; // ivar: _aqRef
@property BOOL audioQueueActive; // ivar: _audioQueueActive
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueueDispatchQueue; // ivar: _audioQueueDispatchQueue
@property (nonatomic) unsigned int audioQueueFlags; // ivar: _audioQueueFlags
@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (retain, nonatomic) NSMutableDictionary *availableBuffers; // ivar: _availableBuffers
@property (retain, nonatomic) NSCondition *buffersAvailable; // ivar: _buffersAvailable
@property (retain, nonatomic) AVAudioConverter *cachedAudioConverter; // ivar: _cachedAudioConverter
@property (retain, nonatomic) NSArray *channels; // ivar: _channels
@property (nonatomic) CGFloat currentlyQueuedAudioDuration; // ivar: _currentlyQueuedAudioDuration
@property (retain, nonatomic) AVAudioFormat *format; // ivar: _format
@property (retain, nonatomic) NSMutableDictionary *inflightBuffers; // ivar: _inflightBuffers
@property (nonatomic) CGFloat lastActiveTime; // ivar: _lastActiveTime
@property (retain, nonatomic) AVAudioFormat *queueFormat; // ivar: _queueFormat
@property (retain, nonatomic) NSObject<OS_dispatch_source> *queueStallTimer; // ivar: _queueStallTimer
@property (nonatomic) BOOL shouldRebuildAudioQueue; // ivar: _shouldRebuildAudioQueue
@property (nonatomic) NSUInteger state; // ivar: _state


-(BOOL)_play;
-(BOOL)isRunning;
-(BOOL)play;
-(NSUInteger)_minimumBufferByteSize;
-(id)convertBufferIfNecessary:(id)arg0 ;
-(id)init;
-(void)_rebuildAudioQueue;
-(void)_reconfigureQueueFormatForMultiChannelOutputIfNecessary;
-(void)_selectChannels:(struct OpaqueAudioQueue *)arg0 ;
-(void)_tearDownAudioQueue;
-(void)bufferCallback:(struct AudioQueueBuffer *)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)scheduleBuffer:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleStallTimer;
-(void)setOutputFormat:(id)arg0 ;
-(void)stop;


@end


#endif