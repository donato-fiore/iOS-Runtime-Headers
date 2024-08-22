// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAUDIOPLAYBACKSERVICEAT_H
#define VSAUDIOPLAYBACKSERVICEAT_H

@class NSDate, NSString, NSCondition, NSMutableArray, NSError, VSMappedData;
@protocol VSAudioPlaybackServiceProtocol, AFAudioPowerProviding;

#import <Foundation/Foundation.h>


@interface VSAudioPlaybackServiceAT : NSObject <VSAudioPlaybackServiceProtocol, AFAudioPowerProviding>



@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (nonatomic) *OpaqueAudioQueue audioQueue; // ivar: _audioQueue
@property (retain, nonatomic) NSDate *audioQueueFutureEndDate; // ivar: _audioQueueFutureEndDate
@property (retain, nonatomic) NSDate *audioQueueStartDate; // ivar: _audioQueueStartDate
@property (nonatomic) AudioTimeStamp audioStartTimeStamp; // ivar: _audioStartTimeStamp
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSCondition *dequeueCondition; // ivar: _dequeueCondition
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback; // ivar: _discontinuedDuringPlayback
@property (retain, nonatomic) NSMutableArray *enqueuedMappedAudioInfo; // ivar: _enqueuedMappedAudioInfo
@property (nonatomic) CGFloat enqueuedSampleCount; // ivar: _enqueuedSampleCount
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSMappedData *mappedData; // ivar: _mappedData
@property (nonatomic) NSUInteger playingBufferCount; // ivar: _playingBufferCount
@property (nonatomic) unsigned int sessionID; // ivar: _sessionID
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) _opaque_pthread_cond_t stateChangeCondition; // ivar: _stateChangeCondition
@property (readonly) Class superclass;
@property (nonatomic) *OpaqueCMTimebase timebase; // ivar: _timebase
@property (nonatomic) _opaque_pthread_mutex_t waitForStateChangeMutex; // ivar: _waitForStateChangeMutex


-(BOOL)getAveragePower:(*float)arg0 andPeakPower:(*float)arg1 ;
-(BOOL)isAudioQueueRunning;
-(BOOL)isAudioQueueStalled;
-(id)_enqueueAudioBytesLength:(unsigned int)arg0 audioBytes:(*void)arg1 packetCount:(NSInteger)arg2 packetDescriptions:(*void)arg3 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg0 usingBlock:(id)arg1 ;
-(id)audioPowerProvider;
-(id)initWithAudioSessionID:(unsigned int)arg0 asbd:(struct AudioStreamBasicDescription )arg1 ;
-(id)start;
-(void)dealloc;
-(void)dequeueAvailableMappedAudio;
-(void)didEndAccessPower;
-(void)enqueue:(id)arg0 packetCount:(NSInteger)arg1 packetDescriptions:(id)arg2 ;
-(void)flushAndStop;
-(void)handleMediaServerReset;
-(void)pause;
-(void)removeTimeObserver:(id)arg0 ;
-(void)signalQueueRunningStateChange;
-(void)stop;
-(void)waitForAudioQueueStop;
-(void)willBeginAccessPower;


@end


#endif