// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAUDIOPLAYBACKSERVICEAVSBAR_H
#define VSAUDIOPLAYBACKSERVICEAVSBAR_H

@class NSString, NSMutableArray, NSError, VSMappedData, AVSampleBufferAudioRenderer, AVSampleBufferRenderSynchronizer;
@protocol VSAudioPlaybackServiceProtocol, AFAudioPowerProviding, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface VSAudioPlaybackServiceAVSBAR : NSObject <VSAudioPlaybackServiceProtocol, AFAudioPowerProviding>



@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (nonatomic) _opaque_pthread_mutex_t audioQueueBufferLock; // ivar: _audioQueueBufferLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // ivar: _dataQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback; // ivar: _discontinuedDuringPlayback
@property (retain, nonatomic) NSMutableArray *enqueuedMappedAudioInfo; // ivar: _enqueuedMappedAudioInfo
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) ? mappedAudioQueuedTimeStamp; // ivar: _mappedAudioQueuedTimeStamp
@property (retain, nonatomic) VSMappedData *mappedData; // ivar: _mappedData
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *noRemainTasks; // ivar: _noRemainTasks
@property (retain, nonatomic) NSString *outputRoute; // ivar: _outputRoute
@property (retain, nonatomic) AVSampleBufferAudioRenderer *renderer; // ivar: _renderer
@property (nonatomic) CGFloat rendererEnqueuedAudioDuration; // ivar: _rendererEnqueuedAudioDuration
@property (nonatomic) unsigned int sessionID; // ivar: _sessionID
@property (nonatomic) BOOL startedProvidingData; // ivar: _startedProvidingData
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) _opaque_pthread_mutex_t stateLock; // ivar: _stateLock
@property (readonly) Class superclass;
@property (retain, nonatomic) AVSampleBufferRenderSynchronizer *synchronizer; // ivar: _synchronizer


-(BOOL)getAveragePower:(*float)arg0 andPeakPower:(*float)arg1 ;
-(CGFloat)duration:(id)arg0 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg0 usingBlock:(id)arg1 ;
-(id)audioPowerProvider;
-(id)initWithAudioSessionID:(unsigned int)arg0 asbd:(struct AudioStreamBasicDescription )arg1 ;
-(id)start;
-(struct opaqueCMSampleBuffer *)createSampleBuffer:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)createSilenceEndBuffer;
-(void)_play;
-(void)_startProvidingData;
-(void)addEndOfDataAttachment;
-(void)createSampleBufferIdNeeded:(id)arg0 ;
-(void)dealloc;
-(void)didEndAccessPower;
-(void)enqueue:(id)arg0 packetCount:(NSInteger)arg1 packetDescriptions:(id)arg2 ;
-(void)flushAndStop;
-(void)freeAudioQueue;
-(void)handleMediaServerReset;
-(void)pause;
-(void)provideMoreData;
-(void)removeTimeObserver:(id)arg0 ;
-(void)stop;
-(void)stopWaiting;
-(void)willBeginAccessPower;


@end


#endif