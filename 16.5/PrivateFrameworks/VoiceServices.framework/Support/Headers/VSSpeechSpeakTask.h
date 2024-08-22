// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSPEECHSPEAKTASK_H
#define VSSPEECHSPEAKTASK_H

@class NSOperation, VSAudioData, NSString, VSSpeechEngine, NSError, VSInstrumentMetrics, NSArray, VSSpeechRequest, VSVoiceResourceAsset, VSVoiceAssetSelection;
@protocol VSSpeechSpeakableProtocol, VSSpeechServiceDelegate, OS_dispatch_semaphore, VSSpeechCacheItem, OS_dispatch_queue;


#import "VSCachingService.h"
#import "VSAudioPlaybackService.h"
#import "VSPrewarmService.h"
#import "VSSiriInstrumentation.h"
#import "VSStreamAudioData.h"
#import "VSVoiceBooster.h"

@interface VSSpeechSpeakTask : NSOperation <VSSpeechSpeakableProtocol>



@property (retain, nonatomic) VSCachingService *cachingService; // ivar: _cachingService
@property (retain, nonatomic) VSAudioData *compressedAudio; // ivar: _compressedAudio
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSSpeechServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSSpeechEngine *engine; // ivar: _engine
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *neuralPlaybackSemaphore; // ivar: _neuralPlaybackSemaphore
@property (retain, nonatomic) NSArray *phonemes; // ivar: _phonemes
@property (retain, nonatomic) VSAudioPlaybackService *playbackService; // ivar: _playbackService
@property (retain, nonatomic) VSPrewarmService *prewarmService; // ivar: _prewarmService
@property (retain, nonatomic) VSSpeechRequest *request; // ivar: _request
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation; // ivar: _siriInstrumentation
@property (retain, nonatomic) NSObject<VSSpeechCacheItem> *speechCache; // ivar: _speechCache
@property (retain, nonatomic) VSStreamAudioData *streamAudio; // ivar: _streamAudio
@property (readonly) Class superclass;
@property (nonatomic) BOOL synthesisHasIssue; // ivar: _synthesisHasIssue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskAuxiliaryQueue; // ivar: _taskAuxiliaryQueue
@property (retain, nonatomic) NSArray *timingInfos; // ivar: _timingInfos
@property (retain, nonatomic) VSVoiceBooster *voiceBooster; // ivar: _voiceBooster
@property (retain, nonatomic) VSVoiceResourceAsset *voiceResource; // ivar: _voiceResource
@property (retain, nonatomic) VSVoiceAssetSelection *voiceSelection; // ivar: _voiceSelection


-(BOOL)isSpeaking;
-(id)_fetchVoiceAsset_NoRetry;
-(id)audioPowerProvider;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)taskHash;
-(void)cancel;
-(void)enqueueCache;
-(void)fetchVoiceAsset;
-(void)fetchVoiceResource;
-(void)logFinish;
-(void)main;
-(void)pausePlayback;
-(void)prepareForSynthesis;
-(void)reportFinish;
-(void)reportInstrumentMetrics;
-(void)reportSpeechStart;
-(void)reportTimingInfo;
-(void)resume;
-(void)resumePlayback;
-(void)setObserverForWordTimings:(id)arg0 ;
-(void)speakCachedAudio;
-(void)startPlaybackServiceWithAudioSessionID:(unsigned int)arg0 ;
-(void)suspend;
-(void)synthesizeAndSpeak;
-(void)waitUntilAudioFinished;


@end


#endif